/*
 * M-Audio Transit USB Firmware Loader - Final Version
 * Based on Ghidra decompilation and successful DFU download tests.
 */

#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOCFPlugIn.h>
#include <IOKit/IOKitLib.h>
#include <IOKit/usb/IOUSBLib.h>
#include <IOKit/usb/USB.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define VENDOR_ID 0x0763
#define PRODUCT_ID_LOADER 0x2806
#define PRODUCT_ID_LOADER_SWAPPED 0x0628
#define PRODUCT_ID_AUDIO 0x2006

#define DEFAULT_FIRMWARE_FILE "extracted_FIRM_301.bin"
#define MAUDIO_HEADER_SIZE 2
#define DFU_SUFFIX_LEN 0x12

#ifndef kIOUSBHostDeviceClassName
#define kIOUSBHostDeviceClassName "IOUSBHostDevice"
#endif

// DFU Protocol
#define DFU_DETACH 0x00
#define DFU_DNLOAD 0x01
#define DFU_UPLOAD 0x02
#define DFU_GETSTATUS 0x03
#define DFU_CLRSTATUS 0x04
#define DFU_GETSTATE 0x05
#define DFU_ABORT 0x06

// DFU States
#define appIDLE 0
#define appDETACH 1
#define dfuIDLE 2
#define dfuDNLOAD_SYNC 3
#define dfuDNBUSY 4
#define dfuDNLOAD_IDLE 5
#define dfuMANIFEST_SYNC 6
#define dfuMANIFEST 7
#define dfuMANIFEST_WAIT_RESET 8
#define dfuUPLOAD_IDLE 9
#define dfuERROR 10

typedef struct {
  UInt8 bLength;
  UInt8 bDescriptorType;
  UInt8 bmAttributes;
  UInt16 wDetachTimeOut;
  UInt16 wTransferSize;
  UInt16 bcdDFUVersion;
} __attribute__((packed)) DFUFunctionalDescriptor;

// Globals
IOUSBDeviceInterface **dev = NULL;
kern_return_t kr;
UInt8 interfaceNum = 0;

// Helpers
static UInt16 swap16(UInt16 v) { return (UInt16)((v << 8) | (v >> 8)); }

static int get_uint16_property(io_service_t service, CFStringRef key,
                               UInt16 *out) {
  if (!out)
    return -1;
  CFTypeRef ref =
      IORegistryEntryCreateCFProperty(service, key, kCFAllocatorDefault, 0);
  if (!ref)
    return -1;
  int value = 0;
  if (CFGetTypeID(ref) == CFNumberGetTypeID()) {
    if (!CFNumberGetValue((CFNumberRef)ref, kCFNumberSInt32Type, &value)) {
      CFRelease(ref);
      return -1;
    }
  } else if (CFGetTypeID(ref) == CFDataGetTypeID()) {
    CFDataRef data = (CFDataRef)ref;
    if (CFDataGetLength(data) >= 2) {
      const UInt8 *bytes = CFDataGetBytePtr(data);
      value = (int)(bytes[0] | (bytes[1] << 8));
    } else {
      CFRelease(ref);
      return -1;
    }
  } else {
    CFRelease(ref);
    return -1;
  }
  CFRelease(ref);
  *out = (UInt16)value;
  return 0;
}

static int set_first_configuration(IOUSBDeviceInterface **device) {
  IOUSBConfigurationDescriptorPtr configDesc = NULL;
  kr = (*device)->GetConfigurationDescriptorPtr(device, 0, &configDesc);
  if (kr != kIOReturnSuccess || !configDesc)
    return -1;
  kr = (*device)->SetConfiguration(device, configDesc->bConfigurationValue);
  return (kr == kIOReturnSuccess) ? 0 : -1;
}

static int find_dfu_interface_number(IOUSBDeviceInterface **device,
                                     UInt8 *out_interface) {
  IOUSBFindInterfaceRequest request;
  request.bInterfaceClass = 0xFE;
  request.bInterfaceSubClass = 0x01;
  request.bInterfaceProtocol = kIOUSBFindInterfaceDontCare;
  request.bAlternateSetting = kIOUSBFindInterfaceDontCare;

  io_iterator_t iterator = IO_OBJECT_NULL;
  kr = (*device)->CreateInterfaceIterator(device, &request, &iterator);
  if (kr != kIOReturnSuccess)
    return -1;

  io_service_t usbInterface = IOIteratorNext(iterator);
  IOObjectRelease(iterator);
  if (!usbInterface)
    return -1;

  IOCFPlugInInterface **plugInInterface = NULL;
  SInt32 score = 0;
  kr = IOCreatePlugInInterfaceForService(
      usbInterface, kIOUSBInterfaceUserClientTypeID, kIOCFPlugInInterfaceID,
      &plugInInterface, &score);
  IOObjectRelease(usbInterface);
  if (kr != kIOReturnSuccess || !plugInInterface)
    return -1;

  IOUSBInterfaceInterface **intf = NULL;
  kr = (*plugInInterface)
           ->QueryInterface(plugInInterface,
                            CFUUIDGetUUIDBytes(kIOUSBInterfaceInterfaceID),
                            (LPVOID *)&intf);
  (*plugInInterface)->Release(plugInInterface);
  if (kr != kIOReturnSuccess || !intf)
    return -1;

  UInt8 num = 0;
  kr = (*intf)->GetInterfaceNumber(intf, &num);
  (*intf)->Release(intf);
  if (kr != kIOReturnSuccess)
    return -1;

  *out_interface = num;
  return 0;
}

static int get_dfu_functional_descriptor(IOUSBDeviceInterface **device,
                                         DFUFunctionalDescriptor *out_desc) {
  if (!out_desc)
    return -1;
  memset(out_desc, 0, sizeof(*out_desc));
  IOUSBConfigurationDescriptorPtr configDesc = NULL;
  kr = (*device)->GetConfigurationDescriptorPtr(device, 0, &configDesc);
  if (kr != kIOReturnSuccess || !configDesc)
    return -1;

  const UInt8 *start = (const UInt8 *)configDesc;
  const UInt8 *end = start + configDesc->wTotalLength;
  const UInt8 *p = start;
  while (p + 1 < end) {
    UInt8 len = p[0];
    if (len == 0)
      break;
    if (p[1] == kUSBInterfaceDesc) {
      if (p[5] == 0xFE && p[6] == 0x01) {
        const UInt8 *q = p + len;
        while (q + 1 < end) {
          UInt8 qlen = q[0];
          if (qlen == 0)
            break;
          if (q[1] == kUSBInterfaceDesc)
            break;
          if (q[1] == 0x21 && qlen >= 7) {
            memcpy(out_desc, q,
                   (qlen > sizeof(DFUFunctionalDescriptor))
                       ? sizeof(DFUFunctionalDescriptor)
                       : qlen);
            if (qlen == 7)
              out_desc->bcdDFUVersion = 0;
            return 0;
          }
          q += qlen;
        }
      }
    }
    p += len;
  }
  return -1;
}

static const UInt8 *find_dfu_suffix(const UInt8 *data, size_t size) {
  if (!data || size < DFU_SUFFIX_LEN)
    return NULL;
  const UInt8 *suffix = data + (size - DFU_SUFFIX_LEN);
  if (suffix[10] != 'U' || suffix[11] != 'F' || suffix[12] != 'D')
    return NULL;
  return suffix;
}

static int file_exists(const char *path) {
  return (path && access(path, R_OK) == 0);
}

static int choose_firmware_file(UInt16 product, UInt16 bcdDevice,
                                const char *stream, char *out, size_t out_len) {
  UInt16 products[2] = {product, swap16(product)};
  UInt16 bcds[2] = {bcdDevice, swap16(bcdDevice)};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      snprintf(out, out_len, "firmware_%x-%x.%s.bin", bcds[j], products[i],
               stream);
      if (file_exists(out))
        return 0;
    }
    snprintf(out, out_len, "firmware_%x.%s.bin", products[i], stream);
    if (file_exists(out))
      return 0;
  }
  snprintf(out, out_len, "%s", DEFAULT_FIRMWARE_FILE);
  if (file_exists(out))
    return 0;
  return -1;
}

static io_iterator_t create_matching_iterator(const char *className) {
  CFMutableDictionaryRef matchingDict = IOServiceMatching(className);
  if (!matchingDict)
    return IO_OBJECT_NULL;
  io_iterator_t iterator = IO_OBJECT_NULL;
  kern_return_t kret =
      IOServiceGetMatchingServices(kIOMainPortDefault, matchingDict, &iterator);
  if (kret != KERN_SUCCESS)
    return IO_OBJECT_NULL;
  return iterator;
}

static io_service_t find_first_device(io_iterator_t iterator, UInt16 *product,
                                      UInt16 *bcdDevice, UInt16 vendor) {
  io_service_t usbDevice = IO_OBJECT_NULL;
  while ((usbDevice = IOIteratorNext(iterator))) {
    UInt16 idVendor = 0;
    if (get_uint16_property(usbDevice, CFSTR("idVendor"), &idVendor) == 0 &&
        idVendor == vendor) {
      get_uint16_property(usbDevice, CFSTR("idProduct"), product);
      get_uint16_property(usbDevice, CFSTR("bcdDevice"), bcdDevice);
      return usbDevice;
    }
    IOObjectRelease(usbDevice);
  }
  return IO_OBJECT_NULL;
}

// DFU Protocol Implementation

static int dfu_get_status(unsigned char *status, int swap_timeout,
                          int allow_not_responding, uint32_t *poll_timeout_ms) {
  IOUSBDevRequest req;
  req.bmRequestType = 0xA1;
  req.bRequest = DFU_GETSTATUS;
  req.wValue = 0;
  req.wIndex = interfaceNum;
  req.wLength = 6;
  req.pData = status;

  kr = (*dev)->DeviceRequest(dev, &req);
  if (allow_not_responding &&
      (kr == kIOReturnNotResponding || kr == kIOReturnNoDevice)) {
    status[0] = 0;
    status[4] = dfuIDLE;
    if (poll_timeout_ms)
      *poll_timeout_ms = 2;
    return 0;
  }
  if (kr != kIOReturnSuccess)
    return -1;

  uint32_t poll = (uint32_t)status[1] | ((uint32_t)status[2] << 8) |
                  ((uint32_t)status[3] << 16);
  if (swap_timeout)
    poll = ((poll & 0xFF) << 16) | (poll & 0xFF00) | ((poll & 0xFF0000) >> 16);

  uint32_t wait_ms = 2;
  if (poll != 0) {
    double d = (double)poll * 1.2 + 0.5;
    if (d > 4294967295.0)
      d = 4294967295.0;
    wait_ms = (uint32_t)d;
  }
  if (poll_timeout_ms)
    *poll_timeout_ms = wait_ms;
  return 0;
}

static int dfu_clear_status(void) {
  IOUSBDevRequest req;
  req.bmRequestType = 0x21;
  req.bRequest = DFU_CLRSTATUS;
  req.wValue = 0;
  req.wIndex = interfaceNum;
  req.wLength = 0;
  req.pData = NULL;
  kr = (*dev)->DeviceRequest(dev, &req);
  return (kr == kIOReturnSuccess) ? 0 : -1;
}

static int dfu_dnload(int block, unsigned char *data, int len) {
  IOUSBDevRequest req;
  req.bmRequestType = 0x21;
  req.bRequest = DFU_DNLOAD;
  req.wValue = block;
  req.wIndex = interfaceNum;
  req.wLength = len;
  req.pData = data;
  kr = (*dev)->DeviceRequest(dev, &req);
  return (kr == kIOReturnSuccess) ? 0 : -1;
}

static int dfu_detach(unsigned short timeout_ms) {
  IOUSBDevRequest req;
  req.bmRequestType = 0x21;
  req.bRequest = DFU_DETACH;
  req.wValue = timeout_ms;
  req.wIndex = interfaceNum;
  req.wLength = 0;
  req.pData = NULL;
  kr = (*dev)->DeviceRequest(dev, &req);
  return (kr == kIOReturnSuccess) ? 0 : -1;
}

static int wait_for_download_ready(unsigned char *status, int swap_timeout,
                                   uint32_t *poll_timeout_ms) {
  while (status[4] == dfuDNBUSY) {
    uint32_t wait_ms = poll_timeout_ms ? *poll_timeout_ms : 2;
    if (wait_ms == 0)
      wait_ms = 2;
    usleep(wait_ms * 1000);
    if (dfu_get_status(status, swap_timeout, 0, poll_timeout_ms) != 0)
      return -1;
    if (status[0] != 0)
      return -1;
  }
  return 0;
}

static int dfu_load_block(unsigned short block, unsigned char *data,
                          unsigned short len, int swap_timeout,
                          unsigned char *status, uint32_t *poll_timeout_ms) {
  if (dfu_dnload(block, data, len) != 0)
    return -1;
  int sync_tries = 0;
  while (1) {
    if (dfu_get_status(status, swap_timeout, 0, poll_timeout_ms) != 0)
      return -1;
    if (status[0] == 0x0B)
      return 0;
    if (status[0] != 0)
      return -1;
    if (status[4] != dfuDNLOAD_SYNC)
      break;
    sync_tries++;
    if (sync_tries == 5)
      return -1;
  }
  return 0;
}

static int dfu_complete_load(int swap_timeout, UInt16 product,
                             uint32_t initial_poll_timeout_ms) {
  unsigned char status[6];
  uint32_t poll_timeout_ms = initial_poll_timeout_ms;
  if (dfu_get_status(status, swap_timeout, 1, &poll_timeout_ms) != 0)
    return -1;
  if (status[0] != 0)
    return -1;

  if (status[4] == dfuIDLE) {
    if (product == 0x2803 || product == 0x2815)
      return 0;
  } else {
    if (status[4] != dfuMANIFEST_WAIT_RESET) {
      printf("  Manifest state unexpected: bStatus=%d bState=%d\n", status[0],
             status[4]);
      return -1;
    }
    usleep(10000);
  }

  // Re-enumerate (matches ghidra: IOUSBDeviceReEnumerate at vtable +0x94)
  kr = (*dev)->USBDeviceReEnumerate(dev, 0);
  if (kr == kIOReturnNotResponding || kr == kIOReturnNoDevice)
    return 0;
  if (kr == kIOReturnSuccess)
    return 0;

  // Fallback: plain reset if re-enumerate isn't supported
  kr = (*dev)->ResetDevice(dev);
  if (kr == kIOReturnNotResponding || kr == kIOReturnNoDevice)
    return 0;
  return (kr == kIOReturnSuccess) ? 0 : -1;
}

static int try_dfu_protocol(unsigned char *firmware, int size,
                            unsigned short transfer_size, int swap_timeout,
                            UInt16 product) {
  unsigned char status[6];
  uint32_t poll_timeout_ms = 0;

  printf("\n=== Trying DFU Protocol ===\n");
  printf("Getting DFU status...\n");
  if (dfu_get_status(status, swap_timeout, 0, &poll_timeout_ms) == 0) {
    printf("  Status: bStatus=%d bState=%d\n", status[0], status[4]);
  } else {
    printf("  DFU_GETSTATUS failed: %08x\n", kr);
    return -1;
  }

  if (status[0] != 0 || status[4] == dfuERROR) {
    printf("Clearing error state...\n");
    dfu_clear_status();
    usleep(50000);
    if (dfu_get_status(status, swap_timeout, 0, &poll_timeout_ms) == 0) {
      printf("  After clear: bStatus=%d bState=%d\n", status[0], status[4]);
    }
  }

  if (status[4] < dfuIDLE) {
    printf("Device in app mode (state=%d). DFU detach required.\n", status[4]);
    return -2;
  }

  if (status[4] != dfuIDLE) {
    printf("Device not in dfuIDLE (state=%d), resetting...\n", status[4]);
    kr = (*dev)->ResetDevice(dev);
    usleep(100000);
    if (dfu_get_status(status, swap_timeout, 0, &poll_timeout_ms) == 0) {
      printf("  After reset: bStatus=%d bState=%d\n", status[0], status[4]);
    }
    if (status[4] != dfuIDLE) {
      printf("  ERROR: Still not in idle state!\n");
      return -1;
    }
  }

  if (transfer_size == 0)
    transfer_size = 64;
  int numBlocks = (size + transfer_size - 1) / transfer_size;
  printf("Downloading firmware (%d bytes in %d blocks, %u bytes/block)...\n",
         size, numBlocks, transfer_size);

  int block = 0;
  int offset = 0;
  while (offset + transfer_size <= size) {
    if (dfu_load_block((unsigned short)block, firmware + offset, transfer_size,
                       swap_timeout, status, &poll_timeout_ms) != 0) {
      printf("  DNLOAD failed at block %d: %08x\n", block, kr);
      return -1;
    }
    if (wait_for_download_ready(status, swap_timeout, &poll_timeout_ms) != 0) {
      printf("  Error after block %d: bStatus=%d bState=%d\n", block, status[0],
             status[4]);
      return -1;
    }
    if (status[4] != dfuDNLOAD_IDLE) {
      printf("  Unexpected state after block %d: %d\n", block, status[4]);
      return -1;
    }
    block++;
    offset += transfer_size;
    if (block % 20 == 0)
      printf("  Block %d/%d\n", block, numBlocks);
  }

  int remaining = size - offset;
  if (remaining > 0) {
    if (dfu_load_block((unsigned short)block, firmware + offset,
                       (unsigned short)remaining, swap_timeout, status,
                       &poll_timeout_ms) != 0) {
      printf("  DNLOAD failed at block %d: %08x\n", block, kr);
      return -1;
    }
    if (wait_for_download_ready(status, swap_timeout, &poll_timeout_ms) != 0) {
      printf("  Error after block %d: bStatus=%d bState=%d\n", block, status[0],
             status[4]);
      return -1;
    }
    if (status[4] != dfuDNLOAD_IDLE) {
      printf("  Unexpected state after block %d: %d\n", block, status[4]);
      return -1;
    }
    block++;
  }

  printf("  Download complete (%d blocks)\n", block);
  printf("Finalizing...\n");
  if (dfu_load_block((unsigned short)block, NULL, 0, swap_timeout, status,
                     &poll_timeout_ms) != 0) {
    printf("  Final DNLOAD failed: %08x\n", kr);
    return -1;
  }

  if (wait_for_download_ready(status, swap_timeout, &poll_timeout_ms) != 0) {
    printf("  Error during manifest: bStatus=%d bState=%d\n", status[0],
           status[4]);
    return -1;
  }

  if (status[0] == 0x0B) {
    printf("Device signaled completion (0x0B); waiting 15 seconds\n");
    usleep(15000000);
    return 0;
  }

  if (status[4] == dfuMANIFEST || status[4] == dfuMANIFEST_WAIT_RESET ||
      status[4] == dfuMANIFEST_SYNC) {
    if (status[4] == dfuMANIFEST || status[4] == dfuMANIFEST_SYNC) {
      uint32_t wait_ms = poll_timeout_ms ? poll_timeout_ms : 10;
      if (wait_ms)
        usleep(wait_ms * 1000);
    }
    if (dfu_complete_load(swap_timeout, product, poll_timeout_ms) != 0) {
      printf("  Manifest completion failed\n");
      return -1;
    }
    return 0;
  }

  if (status[4] == dfuIDLE)
    return 0;
  printf("  Unexpected final state: %d\n", status[4]);
  return -1;
}

int main(int argc, char *argv[]) {
  printf("M-Audio Transit Firmware Loader (v2 - Cleaned)\n");
  printf("====================================================\n");

  io_service_t usbDevice = IO_OBJECT_NULL;
  UInt16 product = 0;
  UInt16 bcdDevice = 0;
  int result = 1;
  FILE *fp = NULL;
  unsigned char *fileData = NULL;

  io_iterator_t iterator = create_matching_iterator(kIOUSBDeviceClassName);
  if (iterator != IO_OBJECT_NULL) {
    usbDevice = find_first_device(iterator, &product, &bcdDevice, VENDOR_ID);
    IOObjectRelease(iterator);
  }
  if (!usbDevice) {
    iterator = create_matching_iterator(kIOUSBHostDeviceClassName);
    if (iterator != IO_OBJECT_NULL) {
      usbDevice = find_first_device(iterator, &product, &bcdDevice, VENDOR_ID);
      IOObjectRelease(iterator);
    }
  }
  if (!usbDevice) {
    fprintf(stderr, "Device not found. Is it connected and powered on?\n");
    return 1;
  }
  printf("Device found! idProduct=0x%04x bcdDevice=0x%04x\n", product,
         bcdDevice);

  IOCFPlugInInterface **plugInInterface = NULL;
  SInt32 score;
  kr = IOCreatePlugInInterfaceForService(
      usbDevice, kIOUSBDeviceUserClientTypeID, kIOCFPlugInInterfaceID,
      &plugInInterface, &score);
  IOObjectRelease(usbDevice);
  if (kr != kIOReturnSuccess || !plugInInterface) {
    fprintf(stderr, "Creating plugin failed: %08x\n", kr);
    goto cleanup;
  }

  kr = (*plugInInterface)
           ->QueryInterface(plugInInterface,
                            CFUUIDGetUUIDBytes(kIOUSBDeviceInterfaceID),
                            (LPVOID *)&dev);
  (*plugInInterface)->Release(plugInInterface);
  if (kr != kIOReturnSuccess || !dev) {
    fprintf(stderr, "Interface failed: %08x\n", kr);
    goto cleanup;
  }

  kr = (*dev)->USBDeviceOpen(dev);
  if (kr != kIOReturnSuccess) {
    fprintf(stderr, "Open failed: %08x\n", kr);
    (*dev)->Release(dev);
    dev = NULL;
    goto cleanup;
  }
  printf("Device opened.\n");

  if (set_first_configuration(dev) != 0)
    printf("SetConfiguration failed (may be OK): %08x\n", kr);
  if (find_dfu_interface_number(dev, &interfaceNum) != 0) {
    fprintf(stderr, "DFU interface not found.\n");
    goto cleanup;
  }
  printf("DFU interface number: %u\n", interfaceNum);

  DFUFunctionalDescriptor dfuDesc;
  unsigned short transfer_size = 64;
  unsigned short detach_timeout = 100;
  if (get_dfu_functional_descriptor(dev, &dfuDesc) == 0) {
    transfer_size = dfuDesc.wTransferSize;
    if (transfer_size == 0)
      transfer_size = 64;
    detach_timeout = dfuDesc.wDetachTimeOut;
    if (detach_timeout == 0)
      detach_timeout = 100;
    printf("DFU transfer size: %u bytes\n", transfer_size);
  } else {
    printf("DFU functional descriptor not found, using 64-byte blocks.\n");
  }

  char firmware_path[256];
  if (argc > 1) {
    snprintf(firmware_path, sizeof(firmware_path), "%s", argv[1]);
  } else if (choose_firmware_file(product, bcdDevice, "dfu", firmware_path,
                                  sizeof(firmware_path)) != 0) {
    fprintf(stderr, "Firmware file not found.\n");
    goto cleanup;
  }
  printf("Using firmware file: %s\n", firmware_path);

  fp = fopen(firmware_path, "rb");
  if (!fp) {
    fprintf(stderr, "Failed to open firmware file.\n");
    goto cleanup;
  }
  fseek(fp, 0, SEEK_END);
  long fileSize = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  fileData = malloc(fileSize);
  if (!fileData) {
    fprintf(stderr, "Failed to allocate firmware buffer.\n");
    goto cleanup;
  }
  if (fread(fileData, 1, fileSize, fp) != (size_t)fileSize) {
    fprintf(stderr, "Failed to read firmware file.\n");
    goto cleanup;
  }
  fclose(fp);
  fp = NULL;

  if (fileSize <= MAUDIO_HEADER_SIZE) {
    fprintf(stderr, "Firmware file too small.\n");
    goto cleanup;
  }

  UInt16 fw_version =
      (UInt16)(((UInt16)fileData[0] << 8) | (UInt16)fileData[1]);
  printf("Firmware header version: 0x%04x\n", fw_version);
  if (bcdDevice >= fw_version) {
    printf("Device firmware version 0x%04x is up to date.\n", bcdDevice);
    result = 0;
    goto cleanup;
  }

  unsigned char *firmware = fileData + MAUDIO_HEADER_SIZE;
  int firmwareSize = (int)fileSize - MAUDIO_HEADER_SIZE;

  // Check suffix
  const UInt8 *suffix = find_dfu_suffix(firmware, firmwareSize);
  int swap_timeout = (suffix == NULL); // This logic came from user's code,
                                       // assuming no suffix means old device?
  if (suffix && firmwareSize > DFU_SUFFIX_LEN) {
    firmwareSize -= DFU_SUFFIX_LEN;
  }

  printf("Firmware: %ld bytes total, %d bytes payload\n", fileSize,
         firmwareSize);
  result = try_dfu_protocol(firmware, firmwareSize, transfer_size, swap_timeout,
                            product);

  if (result == -2) {
    printf("Sending DFU_DETACH...\n");
    if (dfu_detach(detach_timeout) == 0) {
      unsigned short sleep_ms = (detach_timeout < 101) ? detach_timeout : 100;
      if (sleep_ms)
        usleep(sleep_ms * 1000);
      kr = (*dev)->ResetDevice(dev);
      if (kr != kIOReturnSuccess && kr != kIOReturnNotResponding &&
          kr != kIOReturnNoDevice) {
        printf("  ResetDevice: %08x\n", kr);
      }
    } else {
      printf("  DFU_DETACH failed: %08x\n", kr);
    }
    result = 1;
  }

  if (result == 0) {
    printf("\n=== SUCCESS ===\n");
    printf("Device should re-enumerate to PID 0x2006.\n");
  } else {
    printf("\n=== FAILED ===\n");
  }

cleanup:
  if (fp)
    fclose(fp);
  if (fileData)
    free(fileData);
  if (dev) {
    (*dev)->USBDeviceClose(dev);
    (*dev)->Release(dev);
  }
  return result;
}
