#!/usr/bin/env python3
"""
M-Audio Transit USB Firmware Loader - DFU Version
Ported from working C implementation (maudio_iokit_loader.c)
Deprecated: PyUSB/libusb cannot trigger the macOS IOKit re-enumeration step.
Use maudio_iokit_loader.c instead.
"""
import usb.core
import usb.util
import time
import sys
import os
import struct

# Constants
VENDOR_ID = 0x0763
PRODUCT_ID_LOADER = 0x2806
DEFAULT_FIRMWARE_FILE = "extracted_FIRM_301.bin"
MAUDIO_HEADER_SIZE = 2
DFU_SUFFIX_LEN = 0x12

# DFU Constants
DFU_DETACH    = 0x00
DFU_DNLOAD    = 0x01
DFU_UPLOAD    = 0x02
DFU_GETSTATUS = 0x03
DFU_CLRSTATUS = 0x04
DFU_GETSTATE  = 0x05
DFU_ABORT     = 0x06

# DFU States
appIDLE                = 0
appDETACH              = 1
dfuIDLE                = 2
dfuDNLOAD_SYNC         = 3
dfuDNBUSY              = 4
dfuDNLOAD_IDLE         = 5
dfuMANIFEST_SYNC       = 6
dfuMANIFEST            = 7
dfuMANIFEST_WAIT_RESET = 8
dfuUPLOAD_IDLE         = 9
dfuERROR               = 10

def log(msg):
    print(f"[{time.strftime('%H:%M:%S')}] {msg}", flush=True)

class DFULoader:
    def __init__(self, dev):
        self.dev = dev
        self.interface = 0
        self.transfer_size = 64
        self.detach_timeout = 100

    def find_dfu_interface(self):
        # Look for interface with Class=0xFE (App Specific), Subclass=0x01 (DFU)
        cfg = self.dev.get_active_configuration()
        for intf in cfg:
            if intf.bInterfaceClass == 0xFE and intf.bInterfaceSubClass == 0x01:
                self.interface = intf.bInterfaceNumber
                
                # Parse DFU Functional Descriptor if available
                # It's usually a descriptor of type 0x21 inside the interface or after it
                # pyusb doesn't make parsing extra descriptors super easy, but we can try to find it
                # For now, defaults (64 bytes) are usually fine as fallback
                # Accessing extra descriptors:
                if intf.extra_descriptors:
                   # Try to parse DFU descriptor manually if needed
                   pass
                
                log(f"Found DFU Interface: {self.interface}")
                return True
        return False

    def detach(self, timeout_ms=1000):
        # bmRequestType: 0x21 (HostToDevice | Class | Interface)
        try:
            self.dev.ctrl_transfer(0x21, DFU_DETACH, timeout_ms, self.interface, None)
            return True
        except usb.core.USBError as e:
            log(f"DFU_DETACH failed: {e}")
            return False

    def download(self, block, data):
        # bmRequestType: 0x21
        try:
            self.dev.ctrl_transfer(0x21, DFU_DNLOAD, block, self.interface, data)
            return True
        except usb.core.USBError as e:
            log(f"DFU_DNLOAD block {block} failed: {e}")
            return False

    def get_status(self):
        # bmRequestType: 0xA1 (DeviceToHost | Class | Interface)
        # Returns: bStatus(1), bwPollTimeout(3), bState(1), iString(1)
        try:
            ret = self.dev.ctrl_transfer(0xA1, DFU_GETSTATUS, 0, self.interface, 6)
            if len(ret) < 6:
                return None
            
            bStatus = ret[0]
            poll_timeout = ret[1] | (ret[2] << 8) | (ret[3] << 16)
            bState = ret[4]
            return (bStatus, poll_timeout, bState)
        except usb.core.USBError as e:
            log(f"DFU_GETSTATUS failed: {e}")
            return None

    def clear_status(self):
        try:
            self.dev.ctrl_transfer(0x21, DFU_CLRSTATUS, 0, self.interface, None)
            return True
        except usb.core.USBError as e:
            log(f"DFU_CLRSTATUS failed: {e}")
            return False

    def wait_for_idle(self):
        status = self.get_status()
        if not status:
            return False
        bStatus, timeout, bState = status
        
        if bState == dfuERROR:
            log("State is dfuERROR, clearing status...")
            self.clear_status()
            status = self.get_status()
            if status:
                bStatus, timeout, bState = status
        
        return bState == dfuIDLE

    def wait_for_dnload_idle(self, initial_timeout=0):
        # Poll until state is dfuDNLOAD_IDLE or error
        # Logic from C: wait_for_download_ready
        while True:
            # We should respect poll timeout from previous get_status, but for simplicity:
            time.sleep(max(initial_timeout / 1000.0, 0.01)) 
            
            status = self.get_status()
            if not status:
                return False, 0, 0
                
            bStatus, timeout, bState = status
            if bState == dfuDNBUSY:
                initial_timeout = timeout
                continue
            
            return bStatus, timeout, bState

def main():
    log("M-Audio Transit DFU Loader (Python)")
    
    # 1. Find Device
    dev = usb.core.find(idVendor=VENDOR_ID, idProduct=PRODUCT_ID_LOADER)
    if dev is None:
        log("Device not found.")
        sys.exit(1)
    
    log(f"Device found: {dev.idVendor:04x}:{dev.idProduct:04x}")
    
    # 2. Set Configuration
    try:
        dev.set_configuration()
        log("Configuration set.")
    except usb.core.USBError as e:
        log(f"Set configuration warning: {e}")

    loader = DFULoader(dev)
    if not loader.find_dfu_interface():
        log("DFU Interface not found.")
        sys.exit(1)

    # 3. Load Firmware File
    script_dir = os.path.dirname(os.path.abspath(__file__))
    fw_path = os.path.join(script_dir, DEFAULT_FIRMWARE_FILE)
    
    if len(sys.argv) > 1:
        fw_path = sys.argv[1]
        
    try:
        with open(fw_path, "rb") as f:
            raw_data = f.read()
    except IOError:
        log(f"Could not open firmware file: {fw_path}")
        sys.exit(1)
        
    if len(raw_data) <= MAUDIO_HEADER_SIZE:
        log("Firmware file too small.")
        sys.exit(1)
        
    # Check firmware version (bytes 0,1)
    fw_ver = struct.unpack(">H", raw_data[0:2])[0]
    log(f"Firmware version in file: 0x{fw_ver:04x}")
    # Ideally logic check against bcdDevice here, but skipping for brevity
    
    # Strip custom header
    firmware = raw_data[MAUDIO_HEADER_SIZE:]
    
    # Check/Strip DFU Suffix if present
    # C code: suffix at end-18. Check if 'UFD' (DFU backwards) at offset 10 of suffix
    if len(firmware) > DFU_SUFFIX_LEN:
        suffix = firmware[-DFU_SUFFIX_LEN:]
        # 'DFU' signature is at +10 in suffix struct, which is 16 total. Wait.
        # DFU Spec: Suffix is 16 bytes? Or 18? C says 0x12 (18). 
        # Standard DFU suffix is 16 bytes usually.
        # C code: suffix[10]=='U' suffix[11]=='F' suffix[12]=='D'. 
        if suffix[10] == 0x55 and suffix[11] == 0x46 and suffix[12] == 0x44: # 'UFD'
             log("DFU Suffix detected and stripped.")
             firmware = firmware[:-DFU_SUFFIX_LEN]

    log(f"Firmware payload size: {len(firmware)} bytes")

    # 4. Prepare DFU
    log("Checking DFU State...")
    if not loader.wait_for_idle():
        log("Device not in IDLE state, attempting to reset/clear...")
        loader.clear_status()
        time.sleep(0.1)
        if not loader.wait_for_idle():
            log("Could not get device to idle.")
            sys.exit(1)
            
    # 5. Download Loop
    transfer_size = loader.transfer_size
    total_bytes = len(firmware)
    num_blocks = (total_bytes + transfer_size - 1) // transfer_size
    
    log(f"Starting download: {num_blocks} blocks, {transfer_size} bytes/block")
    
    for i in range(num_blocks):
        offset = i * transfer_size
        chunk = firmware[offset : offset + transfer_size]
        block_num = i 
        
        # C code sends block numbers starting at 0 usually.
        # DFU spec says wValue = Block Number. 
        # C code: int block = 0; ... dfu_load_block(block, ...) ... block++;
        
        if not loader.download(block_num, chunk):
            log(f"Download failed at block {block_num}")
            sys.exit(1)
            
        bStatus, timeout, bState = loader.wait_for_dnload_idle()
        if bStatus != 0:
            log(f"Error status after block {block_num}: {bStatus}")
            sys.exit(1)
            
        if (i % 20) == 0:
            print(f"  Block {i}/{num_blocks}\r", end="")
            
    print("")
    log("Download complete. Sending zero-length block to finalize...")
    
    # 6. Finalize (Zero length block)
    if not loader.download(num_blocks, b""):
         log("Final download block failed.")
         sys.exit(1)
         
    # Wait for completion (MANIFEST)
    bStatus, timeout, bState = loader.wait_for_dnload_idle()
    
    if bState in [dfuMANIFEST, dfuMANIFEST_WAIT_RESET, dfuMANIFEST_SYNC]:
        log("Device in MANIFEST state. Resetting device to apply firmware...")
        
        # C Code does explicit ReEnumerate or Reset.
        # pyusb reset is the best fallback.
        try:
            dev.reset()
            log("Device reset command sent.")
        except usb.core.USBError as e:
            # Reset often causes an error because device disappears, which is good
            log(f"Device reset (expected error): {e}")
            
    elif bState == dfuIDLE:
        log("Device returned to IDLE? Firmware may not have triggered manifest.")
    else:
        log(f"Unexpected final state: {bState}")

    log("Done. Device should re-enumerate with new PID.")

if __name__ == "__main__":
    main()
