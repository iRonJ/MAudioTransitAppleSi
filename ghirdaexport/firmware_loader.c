#include "maudio_defs.h"
// WARNING: Unknown calling convention -- yet parameter storage is locked
// ConsoleUserIsLoggedIn()

bool ConsoleUserIsLoggedIn(void)

{
  int iVar1;
  undefined1 local_14 [4];
  undefined1 local_10 [12];
  
  iVar1 = _SCDynamicStoreCopyConsoleUser(0,local_10,local_14);
  if (iVar1 != 0) {
    _CFRelease(iVar1);
  }
  return iVar1 != 0;
}



// FirmwareLoaderLocalMessagePort::Listen(long, __CFData const*)

int FirmwareLoaderLocalMessagePort::Listen(long param_1,__CFData *param_2)

{
  long lVar1;
  int iVar2;
  
  if (param_2 == (__CFData *)0x1) {
    _CFRunLoopStop(*(undefined4 *)(param_1 + 0x10));
  }
  else if (param_2 != (__CFData *)0x2) {
    if (param_2 == (__CFData *)0x0) {
      iVar2 = _CFDataCreate(*(undefined4 *)PTR_00015030,param_1 + 10,4);
      if (iVar2 != 0) {
        _CFDataGetLength(iVar2);
        return iVar2;
      }
      lVar1 = -0x1360;
    }
    else {
      lVar1 = -0x32;
    }
    MM::ThrowErrorFunc(lVar1);
  }
  return 0;
}



// FirmwareLoaderLocalMessagePort::FirmwareLoaderLocalMessagePort(NumVersion const&, __CFRunLoop*)

void __thiscall
FirmwareLoaderLocalMessagePort::FirmwareLoaderLocalMessagePort
          (FirmwareLoaderLocalMessagePort *this,NumVersion *param_1,__CFRunLoop *param_2)

{
  MM::CoreFoundationLocalMessagePort::CoreFoundationLocalMessagePort
            ((CoreFoundationLocalMessagePort *)this,
             (__CFString *)&cf_com_midiman_driver_usb_firmware_loader,
             *(__CFAllocator **)PTR_00015030);
  *(undefined ***)this = &PTR__FirmwareLoaderLocalMessagePort_00012308;
  *(undefined4 *)(this + 10) = *(undefined4 *)param_1;
  if (param_2 == (__CFRunLoop *)0x0) {
    param_2 = (__CFRunLoop *)_CFRunLoopGetCurrent();
  }
  *(__CFRunLoop **)(this + 0x10) = param_2;
  return;
}



// PowerCycleDynamicStore::CallBack(__CFArray const*)

void PowerCycleDynamicStore::CallBack(__CFArray *param_1)

{
  char cVar1;
  
  if (_gFirmwareHasBeenUpdated != '\0') {
    cVar1 = ConsoleUserIsLoggedIn();
    if (cVar1 != '\0') {
      _CFUserNotificationDisplayNotice
                (0,0,3,0,0,0,&cf_Firmwareupdatedsuccessfully_,
                 &
                 cf_YourM_AudioUSBdevice_sfirmwarehasbeenupdated_Turnoffthedevice_waitfiveseconds_andturnthedeviceontousethenewfirmware_
                 ,0);
      _gFirmwareHasBeenUpdated = '\0';
    }
  }
  return;
}



// KillLoader(__CFMessagePort*)

void __regparm3 KillLoader(__CFMessagePort *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  
  iVar1 = _CFMessagePortSendRequest(param_1,1,0,0x3ff0000000000000,0x3ff0000000000000,0,0);
  if (iVar1 != 0) {
    MM::ThrowErrorFunc(0x400);
  }
  do {
    uVar2 = _sleep(1);
  } while (uVar2 != 0);
  cVar4 = '\0';
  iVar1 = _CFMessagePortSendRequest(param_1,2,0,0x3ff0000000000000,0x3ff0000000000000,0,0);
  do {
    if (iVar1 != 0) {
      if (iVar1 == -4) {
        return;
      }
      lVar3 = 0x400;
LAB_0000717d:
      MM::ThrowErrorFunc(lVar3);
      return;
    }
    if (cVar4 == '\x06') {
      lVar3 = 0x3f5;
      goto LAB_0000717d;
    }
    cVar4 = cVar4 + '\x01';
    _sleep(1);
    iVar1 = _CFMessagePortSendRequest(param_1,2,0,0,0x3ff00000,0,0x3ff00000,0,0);
  } while( true );
}



// FirstMatchingNotification::Notify(unsigned int, bool)

void FirstMatchingNotification::Notify(uint param_1,bool param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  MessageCenter *pMVar4;
  __CFUUID *p_Var5;
  undefined3 in_stack_00000009;
  ServicePlugInInterface local_54 [16];
  IOCFPlugInInterfaceStruct **local_44;
  RegistryEntryProperty local_3c [4];
  undefined4 local_38;
  IOService local_30 [4];
  uint local_2c;
  int local_24;
  IOUSBDeviceStruct187 **local_20 [4];
  
  while( true ) {
    uVar3 = _IOIteratorNext(_param_2);
    if (uVar3 == 0) break;
    pMVar4 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
    MM::IOService::IOService(local_30,uVar3,pMVar4);
    MM::RegistryEntryProperty::RegistryEntryProperty(local_3c,local_2c,(__CFString *)&cf_idVendor);
    _CFNumberGetValue(local_38,3,&local_24);
    if (local_24 == 0x763) {
      pMVar4 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
      p_Var5 = (__CFUUID *)
               _CFUUIDGetConstantUUIDWithBytes
                         (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,0x61);
      MM::ServicePlugInInterface::ServicePlugInInterface(local_54,local_2c,p_Var5,pMVar4);
      MM::USB::DeviceInterface::DeviceInterface((DeviceInterface *)local_20,local_44);
      uVar2 = MM::FirmwareLoader::LoadFirmwareForDevice(local_2c,local_20[0]);
      MM::ServiceInterface<>::~ServiceInterface((ServiceInterface<> *)local_20);
      cVar1 = MM::FirmwareLoader::ProductRequiresPowerCycleAfterUpdate(uVar2);
      if (cVar1 != '\0') {
        cVar1 = ConsoleUserIsLoggedIn();
        if (cVar1 == '\0') {
          _gFirmwareHasBeenUpdated = 1;
        }
        else {
          _CFUserNotificationDisplayNotice
                    (0,0,3,0,0,0,&cf_Firmwareupdatedsuccessfully_,
                     &
                     cf_YourM_AudioUSBdevice_sfirmwarehasbeenupdated_Turnoffthedevice_waitfiveseconds_andturnthedeviceontousethenewfirmware_
                     ,0);
        }
      }
      MM::ServicePlugInInterface::~ServicePlugInInterface(local_54);
    }
    MM::RegistryEntryProperty::~RegistryEntryProperty(local_3c);
    MM::IOService::~IOService(local_30);
  }
  return;
}



// FirmwareLoaderApp::FirmwareLoaderApp(NumVersion const&, __CFString const*, __CFRunLoop*)

void __thiscall
FirmwareLoaderApp::FirmwareLoaderApp
          (FirmwareLoaderApp *this,NumVersion *param_1,__CFString *param_2,__CFRunLoop *param_3)

{
  DynamicStoreKeyConsoleUser *this_00;
  undefined4 uVar1;
  __CFRunLoopSource *p_Var2;
  void **ppvVar3;
  long lVar4;
  
  MM::MasterPort::MasterPort((MasterPort *)this);
  FirmwareLoaderLocalMessagePort::FirmwareLoaderLocalMessagePort
            ((FirmwareLoaderLocalMessagePort *)(this + 8),param_1,param_3);
  uVar1 = *(undefined4 *)PTR_00015030;
  p_Var2 = (__CFRunLoopSource *)
           _CFMessagePortCreateRunLoopSource(uVar1,*(undefined4 *)(this + 0xc),0);
  MM::RunLoopSource::RunLoopSource((RunLoopSource *)(this + 0x1c),p_Var2,false);
  MM::RunLoopAndSource::RunLoopAndSource
            ((RunLoopAndSource *)(this + 0x3c),*(__CFRunLoopSource **)(this + 0x20),
             *(__CFString **)PTR_000150c0,(__CFRunLoop *)0x0);
  MM::NotificationPort::NotificationPort((NotificationPort *)(this + 0x78),*(uint *)(this + 4));
  p_Var2 = (__CFRunLoopSource *)_IONotificationPortGetRunLoopSource(*(undefined4 *)(this + 0x78));
  MM::RunLoopSource::RunLoopSource((RunLoopSource *)(this + 0x7c),p_Var2,false);
  MM::RunLoopAndSource::RunLoopAndSource
            ((RunLoopAndSource *)(this + 0x9c),*(__CFRunLoopSource **)(this + 0x80),param_2,param_3)
  ;
  MM::MatchingServiceDictionary::MatchingServiceDictionary
            ((MatchingServiceDictionary *)(this + 0xd8),"IOUSBDevice");
  FirstMatchingNotification::FirstMatchingNotification
            ((FirstMatchingNotification *)(this + 0xe4),*(IONotificationPort **)(this + 0x78),
             *(__CFDictionary **)(this + 0xdc));
  this_00 = (DynamicStoreKeyConsoleUser *)(this + 0xf0);
  DynamicStoreKeyConsoleUser::DynamicStoreKeyConsoleUser(this_00);
  ppvVar3 = (void **)std::vector<>::operator[]((vector<> *)this_00,0);
  lVar4 = std::vector<>::size((vector<> *)this_00);
  MM::CoreFoundationMutableArray::CoreFoundationMutableArray
            ((CoreFoundationMutableArray *)(this + 0xfc),lVar4,ppvVar3);
  PowerCycleDynamicStore::PowerCycleDynamicStore
            ((PowerCycleDynamicStore *)(this + 0x108),param_1,*(__CFArray **)(this + 0x100));
  p_Var2 = (__CFRunLoopSource *)
           _SCDynamicStoreCreateRunLoopSource(uVar1,*(undefined4 *)(this + 0x10c),0);
  MM::RunLoopSource::RunLoopSource((RunLoopSource *)(this + 0x118),p_Var2,true);
  MM::RunLoopAndSource::RunLoopAndSource
            ((RunLoopAndSource *)(this + 0x138),*(__CFRunLoopSource **)(this + 0x11c),param_2,
             param_3);
  MM::MatchingNotification::Arm((MatchingNotification *)(this + 0xe4));
  return;
}



undefined4 _main(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  ushort uVar8;
  ushort uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  int local_1f4;
  undefined4 *local_1f0;
  CoreFoundationData local_1e8 [372];
  MM local_74 [20];
  String local_60 [20];
  String local_4c [20];
  CoreFoundationRemoteMessagePort local_38 [4];
  __CFMessagePort *local_34;
  ResourceMap local_2c [8];
  __CFData *local_24;
  NumVersion local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = false;
  local_1f0 = param_2 + param_1;
  for (local_1f4 = param_1; bVar14 = local_1f4 == 1, 1 < local_1f4; local_1f4 = local_1f4 + -1) {
    iVar6 = 6;
    pcVar5 = (char *)local_1f0[-1];
    pcVar10 = "start";
    pcVar12 = pcVar5;
    do {
      pcVar11 = pcVar10;
      pcVar13 = pcVar12;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar13 = pcVar12 + 1;
      pcVar11 = pcVar10 + 1;
      bVar14 = *pcVar10 == *pcVar12;
      pcVar10 = pcVar11;
      pcVar12 = pcVar13;
    } while (bVar14);
    iVar6 = 0;
    if (!bVar14) {
      iVar6 = (uint)(byte)pcVar11[-1] - (uint)(byte)pcVar13[-1];
    }
    bVar14 = iVar6 == 0;
    if (bVar14) {
      if (bVar4) {
        MM::ThrowErrorFunc(-0x32);
      }
      bVar2 = true;
    }
    else {
      iVar6 = 5;
      pcVar10 = "stop";
      pcVar12 = pcVar5;
      do {
        pcVar11 = pcVar10;
        pcVar13 = pcVar12;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar13 = pcVar12 + 1;
        pcVar11 = pcVar10 + 1;
        bVar14 = *pcVar10 == *pcVar12;
        pcVar10 = pcVar11;
        pcVar12 = pcVar13;
      } while (bVar14);
      iVar6 = 0;
      if (!bVar14) {
        iVar6 = (uint)(byte)pcVar11[-1] - (uint)(byte)pcVar13[-1];
      }
      bVar14 = iVar6 == 0;
      if (bVar14) {
        if (bVar2) {
          MM::ThrowErrorFunc(-0x32);
        }
        bVar4 = true;
      }
      else {
        iVar6 = 8;
        pcVar10 = "restart";
        pcVar12 = pcVar5;
        do {
          pcVar11 = pcVar10;
          pcVar13 = pcVar12;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar12 + 1;
          pcVar11 = pcVar10 + 1;
          bVar14 = *pcVar10 == *pcVar12;
          pcVar10 = pcVar11;
          pcVar12 = pcVar13;
        } while (bVar14);
        iVar6 = 0;
        if (!bVar14) {
          iVar6 = (uint)(byte)pcVar11[-1] - (uint)(byte)pcVar13[-1];
        }
        bVar14 = iVar6 == 0;
        if (bVar14) {
          if ((bVar4) || (bVar2)) {
            MM::ThrowErrorFunc(-0x32);
          }
          bVar2 = true;
          bVar4 = true;
        }
        else {
          iVar6 = 0xb;
          pcVar10 = "foreground";
          pcVar12 = pcVar5;
          do {
            pcVar11 = pcVar10;
            pcVar13 = pcVar12;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar13 = pcVar12 + 1;
            pcVar11 = pcVar10 + 1;
            bVar14 = *pcVar10 == *pcVar12;
            pcVar10 = pcVar11;
            pcVar12 = pcVar13;
          } while (bVar14);
          iVar6 = 0;
          if (!bVar14) {
            iVar6 = (uint)(byte)pcVar11[-1] - (uint)(byte)pcVar13[-1];
          }
          bVar14 = iVar6 == 0;
          if (!bVar14) {
            iVar6 = 8;
            pcVar10 = "version";
            pcVar12 = pcVar5;
            do {
              pcVar11 = pcVar10;
              pcVar13 = pcVar12;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar13 = pcVar12 + 1;
              pcVar11 = pcVar10 + 1;
              bVar14 = *pcVar10 == *pcVar12;
              pcVar10 = pcVar11;
              pcVar12 = pcVar13;
            } while (bVar14);
            iVar6 = 0;
            if (!bVar14) {
              iVar6 = (uint)(byte)pcVar11[-1] - (uint)(byte)pcVar13[-1];
            }
            if (iVar6 == 0) {
              bVar3 = true;
            }
            else {
              _fprintf((FILE *)(PTR_00015064 + 0xb0),"%s: invalid argument: %s\n",*param_2,pcVar5);
              MM::ThrowErrorFunc(-0x32);
            }
          }
        }
      }
    }
    local_1f0 = local_1f0 + -1;
  }
  MM::String::String(local_60,".rsrc",0x8000100);
  MM::String::String(local_4c,(char *)*param_2,0x8000100);
  MM::operator+(local_74,local_4c,local_60);
  pcVar5 = MM::String::operator_cast_to_char_((String *)local_74);
  MM::ResourceMap::ResourceMap(local_2c,pcVar5,1);
  MM::String::~String((String *)local_74);
  MM::String::~String(local_4c);
  MM::String::~String(local_60);
  if (bVar3) {
    MM::GetShortVersionString((uchar *)local_1e8);
    MM::PL::CopyPascalStringToC((uchar *)local_1e8,(char *)local_1e8);
    _puts((char *)local_1e8);
  }
  if (bVar4) {
    MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort
              (local_38,(__CFString *)&cf_com_midiman_driver_usb_firmware_loader,
               *(__CFAllocator **)PTR_00015030);
    if (local_34 != (__CFMessagePort *)0x0) {
      KillLoader(local_34);
    }
    MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort(local_38);
  }
  if (!bVar2) goto LAB_00007bd1;
  MM::GetNumVersion(&local_20);
  if (!bVar4) {
    MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort
              (local_38,(__CFString *)&cf_com_midiman_driver_usb_firmware_loader,
               *(__CFAllocator **)PTR_00015030);
    bVar2 = true;
    if (local_34 != (__CFMessagePort *)0x0) {
      local_24 = (__CFData *)0x0;
      iVar6 = _CFMessagePortSendRequest
                        (local_34,0,0,0x3ff0000000000000,0x3ff0000000000000,
                         *(undefined4 *)PTR_000150c0,&local_24);
      if (iVar6 != 0) {
        MM::ThrowErrorFunc(0x400);
      }
      MM::CoreFoundationData::CoreFoundationData(local_1e8,local_24,true);
      _CFDataGetLength(local_24);
      pbVar7 = (byte *)_CFDataGetBytePtr(local_24);
      if (local_1d < pbVar7[3]) {
LAB_00007b20:
        bVar2 = false;
      }
      else {
        if (local_1d <= pbVar7[3]) {
          bVar1 = pbVar7[2];
          if (bVar1 >= local_1e && bVar1 != local_1e) goto LAB_00007b20;
          if (bVar1 < local_1e) goto LAB_00007b24;
          bVar1 = pbVar7[1];
          if (bVar1 >= local_1f && bVar1 != local_1f) goto LAB_00007b20;
          if (bVar1 < local_1f) goto LAB_00007b24;
          uVar8 = (ushort)*pbVar7;
          uVar9 = (ushort)(byte)local_20;
          if (bVar1 == 0x80) {
            if (*pbVar7 == 0) {
              uVar8 = 0xffff;
            }
            if (local_20 != (NumVersion)0x0) goto LAB_00007b16;
            uVar9 = 0xffff;
          }
          else {
LAB_00007b16:
            if ((byte)local_20 < uVar8) goto LAB_00007b20;
          }
          if (uVar9 <= uVar8) goto LAB_00007b20;
        }
LAB_00007b24:
        KillLoader(local_34);
        bVar2 = true;
      }
      MM::CoreFoundationData::~CoreFoundationData(local_1e8);
    }
    MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort(local_38);
    if (!bVar2) goto LAB_00007bd1;
  }
  FirmwareLoaderApp::FirmwareLoaderApp
            ((FirmwareLoaderApp *)local_1e8,&local_20,*(__CFString **)PTR_000150c0,
             (__CFRunLoop *)0x0);
  _CFRunLoopRun();
  FirmwareLoaderApp::~FirmwareLoaderApp((FirmwareLoaderApp *)local_1e8);
LAB_00007bd1:
  MM::ResourceMap::~ResourceMap(local_2c);
  return 0;
}



// MM::MasterPort::CallIOMasterPort()

undefined4 MM::MasterPort::CallIOMasterPort(void)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = _IOMasterPort(0,local_10);
  ThrowIfErrorFunc(iVar1);
  return local_10[0];
}



// MM::MatchingServiceDictionary::CallIOServiceMatching(char const*)

int MM::MatchingServiceDictionary::CallIOServiceMatching(char *param_1)

{
  int iVar1;
  
  iVar1 = _IOServiceMatching(param_1);
  if (iVar1 == 0) {
    ThrowErrorFunc(-0x1ffffd40);
  }
  return iVar1;
}



// MM::MatchingNotification::NotifyCallBack(void*, unsigned int)

void MM::MatchingNotification::NotifyCallBack(void *param_1,uint param_2)

{
  (*(code *)**(undefined4 **)param_1)(param_1,param_2,0);
  return;
}



// MM::MatchingNotification::CallIOServiceAddMatchingNotification(IONotificationPort*, char const*,
// __CFDictionary const*, MM::MatchingNotification*)

undefined4
MM::MatchingNotification::CallIOServiceAddMatchingNotification
          (IONotificationPort *param_1,char *param_2,__CFDictionary *param_3,
          MatchingNotification *param_4)

{
  int iVar1;
  undefined4 local_10;
  
  _CFRetain(param_3);
  iVar1 = _IOServiceAddMatchingNotification
                    (param_1,param_2,param_3,PTR_NotifyCallBack_000150b8,param_4,&local_10);
  if (iVar1 != 0) {
    _CFRelease(param_3);
    ThrowErrorFunc(iVar1);
  }
  return local_10;
}



// MM::MatchingNotification::Arm()

void __thiscall MM::MatchingNotification::Arm(MatchingNotification *this)

{
  (*(code *)**(undefined4 **)this)(this,*(undefined4 *)(this + 8),1);
  return;
}



// MM::ServicePlugInInterface::CallIOCreatePlugInInterfaceForService(unsigned int, __CFUUID const*)

undefined4
MM::ServicePlugInInterface::CallIOCreatePlugInInterfaceForService(uint param_1,__CFUUID *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_14 [4];
  undefined4 local_10 [3];
  
  uVar1 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar2 = _IOCreatePlugInInterfaceForService(param_1,param_2,uVar1,local_10,local_14);
  ThrowIfErrorFunc(iVar2);
  return local_10[0];
}



// MM::RegistryEntryProperty::CallIORegistryEntryCreateCFProperty(unsigned int, __CFString const*)

int MM::RegistryEntryProperty::CallIORegistryEntryCreateCFProperty(uint param_1,__CFString *param_2)

{
  int iVar1;
  
  iVar1 = _IORegistryEntryCreateCFProperty(param_1,param_2,*(undefined4 *)PTR_00015030,0);
  if (iVar1 == 0) {
    ThrowErrorFunc(-0x1360);
  }
  return iVar1;
}



// SCDynamicStore::CallBack(__SCDynamicStore const*, __CFArray const*, void*)

void SCDynamicStore::CallBack(__SCDynamicStore *param_1,__CFArray *param_2,void *param_3)

{
                    // WARNING: Could not recover jumptable at 0x00007e47. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)param_3 + 8))();
  return;
}



// SCDynamicStore::CallSCDynamicStoreCreate(SCDynamicStore*, __CFString const*)

void SCDynamicStore::CallSCDynamicStoreCreate(SCDynamicStore *param_1,__CFString *param_2)

{
  undefined4 local_20;
  SCDynamicStore *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_1c = param_1;
  local_10 = 0;
  _SCDynamicStoreCreate(*(undefined4 *)PTR_00015030,param_2,PTR_CallBack_000150a4,&local_20);
  return;
}



// FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort()

void __thiscall
FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort
          (FirmwareLoaderLocalMessagePort *this)

{
  *(undefined ***)this = &PTR__FirmwareLoaderLocalMessagePort_00012308;
  MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort
            ((CoreFoundationLocalMessagePort *)this);
  operator_delete(this);
  return;
}



// FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort()

void __thiscall
FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort
          (FirmwareLoaderLocalMessagePort *this)

{
  *(undefined ***)this = &PTR__FirmwareLoaderLocalMessagePort_00012308;
  MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort
            ((CoreFoundationLocalMessagePort *)this);
  return;
}



// FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort()

void __thiscall
FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort
          (FirmwareLoaderLocalMessagePort *this)

{
  ~FirmwareLoaderLocalMessagePort(this);
  return;
}



// std::allocator<void const*>::allocator(std::allocator<void const*> const&)

void std::allocator<>::allocator(allocator *param_1)

{
  return;
}



// MM::ServiceInterface<IOUSBDeviceStruct187>::CallQueryInterface(IOCFPlugInInterfaceStruct**,
// __CFUUID const*)

undefined4
MM::ServiceInterface<>::CallQueryInterface(IOCFPlugInInterfaceStruct **param_1,__CFUUID *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  pcVar1 = *(code **)(*param_1 + 4);
  _CFUUIDGetUUIDBytes(&local_4c,param_2);
  local_24 = local_40;
  local_30 = local_4c;
  local_2c = local_48;
  local_28 = local_44;
  iVar2 = (*pcVar1)(param_1,local_4c,local_48,local_44,local_40,local_20);
  if (iVar2 != 0) {
    ThrowErrorFunc(0x3ff);
  }
  return local_20[0];
}



// __gnu_cxx::new_allocator<void const*>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<>::allocate(ulong param_1,void *param_2)

{
  if ((void *)0x3fffffff < param_2) {
    param_2 = (void *)std::__throw_bad_alloc();
  }
  operator_new((int)param_2 << 2);
  return;
}



// void const** std::__copy_backward<true, std::random_access_iterator_tag>::copy_b<void
// const*>(void const* const*, void const* const*, void const**)

void ** std::__copy_backward<>::copy_b<>(void **param_1,void **param_2,void **param_3)

{
  uint uVar1;
  void **ppvVar2;
  
  uVar1 = (int)param_2 - (int)param_1 & 0xfffffffc;
  ppvVar2 = (void **)((int)param_3 - uVar1);
  _memmove(ppvVar2,param_1,uVar1);
  return ppvVar2;
}



// MM::NotificationPort::~NotificationPort()

void __thiscall MM::NotificationPort::~NotificationPort(NotificationPort *this)

{
  _IONotificationPortDestroy(*(undefined4 *)this);
  return;
}



// MM::CoreFoundationWrapper<__CFDictionary*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_0001507c + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary()

void __thiscall
MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary
          (CoreFoundationMutableDictionary *this)

{
  *(undefined **)this = PTR_vtable_0001509c + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::MatchingServiceDictionary::~MatchingServiceDictionary()

void __thiscall
MM::MatchingServiceDictionary::~MatchingServiceDictionary(MatchingServiceDictionary *this)

{
  *(undefined **)this = PTR_vtable_00015084 + 8;
  CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary
            ((CoreFoundationMutableDictionary *)this);
  return;
}



// MM::MatchingServiceDictionary::~MatchingServiceDictionary()

void __thiscall
MM::MatchingServiceDictionary::~MatchingServiceDictionary(MatchingServiceDictionary *this)

{
  ~MatchingServiceDictionary(this);
  return;
}



// MM::MatchingServiceDictionary::~MatchingServiceDictionary()

void __thiscall
MM::MatchingServiceDictionary::~MatchingServiceDictionary(MatchingServiceDictionary *this)

{
  *(undefined **)this = PTR_vtable_00015084 + 8;
  CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary
            ((CoreFoundationMutableDictionary *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary()

void __thiscall
MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary
          (CoreFoundationMutableDictionary *this)

{
  ~CoreFoundationMutableDictionary(this);
  return;
}



// MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary()

void __thiscall
MM::CoreFoundationMutableDictionary::~CoreFoundationMutableDictionary
          (CoreFoundationMutableDictionary *this)

{
  *(undefined **)this = PTR_vtable_0001509c + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFDictionary*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper()

void __thiscall
MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper
          (CoreFoundationWrapper<__CFArray*> *this)

{
  *(undefined **)this = PTR_vtable_00015094 + 8;
  if ((this[8] != (CoreFoundationWrapper<__CFArray*>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationMutableArray::~CoreFoundationMutableArray()

void __thiscall
MM::CoreFoundationMutableArray::~CoreFoundationMutableArray(CoreFoundationMutableArray *this)

{
  *(undefined **)this = PTR_vtable_00015090 + 8;
  CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper
            ((CoreFoundationWrapper<__CFArray*> *)this);
  return;
}



// MM::CoreFoundationMutableArray::~CoreFoundationMutableArray()

void __thiscall
MM::CoreFoundationMutableArray::~CoreFoundationMutableArray(CoreFoundationMutableArray *this)

{
  ~CoreFoundationMutableArray(this);
  return;
}



// MM::CoreFoundationMutableArray::~CoreFoundationMutableArray()

void __thiscall
MM::CoreFoundationMutableArray::~CoreFoundationMutableArray(CoreFoundationMutableArray *this)

{
  *(undefined **)this = PTR_vtable_00015090 + 8;
  CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper
            ((CoreFoundationWrapper<__CFArray*> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper()

void __thiscall
MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper
          (CoreFoundationWrapper<__CFArray*> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::SystemWrapper<__CFData const*>::SystemWrapper(__CFData const* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFData **param_1)

{
  *(__CFData **)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<__CFData const*>::CoreFoundationWrapper(__CFData const*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFData *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015070 + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::CoreFoundationWrapper<__SCDynamicStore const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_000150ac + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// SCDynamicStore::~SCDynamicStore()

void __thiscall SCDynamicStore::~SCDynamicStore(SCDynamicStore *this)

{
  *(undefined **)this = PTR_vtable_00015078 + 8;
  MM::CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// PowerCycleDynamicStore::~PowerCycleDynamicStore()

void __thiscall PowerCycleDynamicStore::~PowerCycleDynamicStore(PowerCycleDynamicStore *this)

{
  *(undefined ***)this = &PTR__PowerCycleDynamicStore_000122d8;
  SCDynamicStore::~SCDynamicStore((SCDynamicStore *)this);
  operator_delete(this);
  return;
}



// SCDynamicStore::~SCDynamicStore()

void __thiscall SCDynamicStore::~SCDynamicStore(SCDynamicStore *this)

{
  ~SCDynamicStore(this);
  return;
}



// PowerCycleDynamicStore::~PowerCycleDynamicStore()

void __thiscall PowerCycleDynamicStore::~PowerCycleDynamicStore(PowerCycleDynamicStore *this)

{
  *(undefined ***)this = &PTR__PowerCycleDynamicStore_000122d8;
  SCDynamicStore::~SCDynamicStore((SCDynamicStore *)this);
  return;
}



// PowerCycleDynamicStore::~PowerCycleDynamicStore()

void __thiscall PowerCycleDynamicStore::~PowerCycleDynamicStore(PowerCycleDynamicStore *this)

{
  ~PowerCycleDynamicStore(this);
  return;
}



// SCDynamicStore::~SCDynamicStore()

void __thiscall SCDynamicStore::~SCDynamicStore(SCDynamicStore *this)

{
  *(undefined **)this = PTR_vtable_00015078 + 8;
  MM::CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__SCDynamicStore const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::IOObject::~IOObject()

void __thiscall MM::IOObject::~IOObject(IOObject *this)

{
  *(undefined **)this = PTR_vtable_00015074 + 8;
  _IOObjectRelease(*(undefined4 *)(this + 4));
  return;
}



// MM::IOIterator::~IOIterator()

void __thiscall MM::IOIterator::~IOIterator(IOIterator *this)

{
  *(undefined **)this = PTR_vtable_00015068 + 8;
  IOObject::~IOObject((IOObject *)this);
  return;
}



// MM::IOIterator::~IOIterator()

void __thiscall MM::IOIterator::~IOIterator(IOIterator *this)

{
  ~IOIterator(this);
  return;
}



// MM::IOIterator::~IOIterator()

void __thiscall MM::IOIterator::~IOIterator(IOIterator *this)

{
  *(undefined **)this = PTR_vtable_00015068 + 8;
  IOObject::~IOObject((IOObject *)this);
  operator_delete(this);
  return;
}



// MM::IOObject::~IOObject()

void __thiscall MM::IOObject::~IOObject(IOObject *this)

{
  ~IOObject(this);
  return;
}



// MM::IOPort::~IOPort()

void __thiscall MM::IOPort::~IOPort(IOPort *this)

{
  *(undefined **)this = PTR_vtable_0001506c + 8;
  IOObject::~IOObject((IOObject *)this);
  return;
}



// MM::MasterPort::~MasterPort()

void __thiscall MM::MasterPort::~MasterPort(MasterPort *this)

{
  *(undefined **)this = PTR_vtable_00015098 + 8;
  IOPort::~IOPort((IOPort *)this);
  return;
}



// MM::MasterPort::~MasterPort()

void __thiscall MM::MasterPort::~MasterPort(MasterPort *this)

{
  ~MasterPort(this);
  return;
}



// MM::MasterPort::~MasterPort()

void __thiscall MM::MasterPort::~MasterPort(MasterPort *this)

{
  *(undefined **)this = PTR_vtable_00015098 + 8;
  IOPort::~IOPort((IOPort *)this);
  operator_delete(this);
  return;
}



// MM::IOPort::~IOPort()

void __thiscall MM::IOPort::~IOPort(IOPort *this)

{
  ~IOPort(this);
  return;
}



// MM::IOPort::~IOPort()

void __thiscall MM::IOPort::~IOPort(IOPort *this)

{
  *(undefined **)this = PTR_vtable_0001506c + 8;
  IOObject::~IOObject((IOObject *)this);
  operator_delete(this);
  return;
}



// MM::IOService::~IOService()

void __thiscall MM::IOService::~IOService(IOService *this)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  
  *(undefined **)this = PTR_vtable_000150b0 + 8;
  iVar1 = _IOObjectGetKernelRetainCount(*(undefined4 *)(this + 4),&local_14);
  if ((iVar1 != 0) || (local_14 == 1)) {
    local_10 = *(undefined4 *)(this + 4);
    (**(code **)(**(int **)(this + 8) + 0x1c))(*(int **)(this + 8),&local_10,0,0);
  }
  IOObject::~IOObject((IOObject *)this);
  operator_delete(this);
  return;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<void const**,
// std::vector<void const*, std::allocator<void const*> > > const&,
// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// > const&)

bool __gnu_cxx::operator!=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  return *(int *)param_1 != *(int *)param_2;
}



// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// > std::__copy_normal<true, true>::copy_n<__gnu_cxx::__normal_iterator<void const**,
// std::vector<void const*, std::allocator<void const*> > >, __gnu_cxx::__normal_iterator<void
// const**, std::vector<void const*, std::allocator<void const*> > >
// >(__gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*>
// > >, __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void
// const*> > >, __gnu_cxx::__normal_iterator<void const**, std::vector<void const*,
// std::allocator<void const*> > >)

int std::__copy_normal<true,true>::copy_n<>(void *param_1,int param_2,void *param_3)

{
  _memmove(param_3,param_1,param_2 - (int)param_1);
  return (param_2 - (int)param_1) + (int)param_3;
}



// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// > std::uninitialized_copy<__gnu_cxx::__normal_iterator<void const**, std::vector<void const*,
// std::allocator<void const*> > >, __gnu_cxx::__normal_iterator<void const**, std::vector<void
// const*, std::allocator<void const*> > > >(__gnu_cxx::__normal_iterator<void const**,
// std::vector<void const*, std::allocator<void const*> > >, __gnu_cxx::__normal_iterator<void
// const**, std::vector<void const*, std::allocator<void const*> > >,
// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// >)

void std::uninitialized_copy<>(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  __copy_normal<true,true>::copy_n<>(param_1,param_2,param_3);
  return;
}



// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// > std::__copy_backward_normal<true, true>::copy_b_n<__gnu_cxx::__normal_iterator<void const**,
// std::vector<void const*, std::allocator<void const*> > >, __gnu_cxx::__normal_iterator<void
// const**, std::vector<void const*, std::allocator<void const*> > >
// >(__gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*>
// > >, __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void
// const*> > >, __gnu_cxx::__normal_iterator<void const**, std::vector<void const*,
// std::allocator<void const*> > >)

void std::__copy_backward_normal<true,true>::copy_b_n<>
               (void **param_1,void **param_2,void **param_3)

{
  __copy_backward<>::copy_b<>(param_1,param_2,param_3);
  return;
}



// MM::SystemWrapper<IOUSBDeviceStruct187**>::SystemWrapper(IOUSBDeviceStruct187** const&)

void __thiscall
MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,IOUSBDeviceStruct187 ***param_1)

{
  *(IOUSBDeviceStruct187 ***)this = *param_1;
  return;
}



// MM::ServiceInterface<IOUSBDeviceStruct187>::ServiceInterface(IOCFPlugInInterfaceStruct**,
// __CFUUID const*)

void __thiscall
MM::ServiceInterface<>::ServiceInterface
          (ServiceInterface<> *this,IOCFPlugInInterfaceStruct **param_1,__CFUUID *param_2)

{
  IOUSBDeviceStruct187 **local_10 [3];
  
  local_10[0] = (IOUSBDeviceStruct187 **)CallQueryInterface(param_1,param_2);
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)this,local_10);
  return;
}



// MM::SystemWrapper<IOCFPlugInInterfaceStruct**>::SystemWrapper(IOCFPlugInInterfaceStruct** const&)

void __thiscall
MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,IOCFPlugInInterfaceStruct ***param_1)

{
  *(IOCFPlugInInterfaceStruct ***)this = *param_1;
  return;
}



// MM::SystemWrapper<void const*>::SystemWrapper(void const* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,void **param_1)

{
  *(void **)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<void const*>::CoreFoundationWrapper(void const*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,void *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015080 + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::SystemWrapper<__SCDynamicStore const*>::SystemWrapper(__SCDynamicStore const* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__SCDynamicStore **param_1)

{
  *(__SCDynamicStore **)this = *param_1;
  return;
}



// MM::SystemWrapper<__CFArray*>::SystemWrapper(__CFArray* const&)

void __thiscall
MM::SystemWrapper<__CFArray*>::SystemWrapper(SystemWrapper<__CFArray*> *this,__CFArray **param_1)

{
  *(__CFArray **)this = *param_1;
  return;
}



// MM::SystemWrapper<__CFDictionary*>::SystemWrapper(__CFDictionary* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFDictionary **param_1)

{
  *(__CFDictionary **)this = *param_1;
  return;
}



// MM::SystemWrapper<IONotificationPort*>::SystemWrapper(IONotificationPort* const&)

void __thiscall
MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,IONotificationPort **param_1)

{
  *(IONotificationPort **)this = *param_1;
  return;
}



// MM::SystemWrapper<unsigned int>::SystemWrapper(unsigned int const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,uint *param_1)

{
  *(uint *)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<__CFData const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015070 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationData::CoreFoundationData(__CFData const*, bool)

void __thiscall
MM::CoreFoundationData::CoreFoundationData(CoreFoundationData *this,__CFData *param_1,bool param_2)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,false);
  *(undefined **)this = PTR_vtable_000150a8 + 8;
  return;
}



// MM::CoreFoundationData::~CoreFoundationData()

void __thiscall MM::CoreFoundationData::~CoreFoundationData(CoreFoundationData *this)

{
  *(undefined **)this = PTR_vtable_000150a8 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFData const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationData::~CoreFoundationData()

void __thiscall MM::CoreFoundationData::~CoreFoundationData(CoreFoundationData *this)

{
  *(undefined **)this = PTR_vtable_000150a8 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::CoreFoundationData::~CoreFoundationData()

void __thiscall MM::CoreFoundationData::~CoreFoundationData(CoreFoundationData *this)

{
  ~CoreFoundationData(this);
  return;
}



// MM::CoreFoundationWrapper<__CFData const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015070 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::IOObject::IOObject(unsigned int)

void __thiscall MM::IOObject::IOObject(IOObject *this,uint param_1)

{
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015074 + 8;
  if (*(int *)(this + 4) == 0) {
    ThrowErrorFunc(0x414);
  }
  return;
}



// MM::IOPort::IOPort(unsigned int)

void __thiscall MM::IOPort::IOPort(IOPort *this,uint param_1)

{
  IOObject::IOObject((IOObject *)this,param_1);
  *(undefined **)this = PTR_vtable_0001506c + 8;
  return;
}



// MM::MasterPort::MasterPort()

void __thiscall MM::MasterPort::MasterPort(MasterPort *this)

{
  uint uVar1;
  
  uVar1 = CallIOMasterPort();
  IOPort::IOPort((IOPort *)this,uVar1);
  *(undefined **)this = PTR_vtable_00015098 + 8;
  return;
}



// MM::IOIterator::IOIterator(unsigned int)

void __thiscall MM::IOIterator::IOIterator(IOIterator *this,uint param_1)

{
  IOObject::IOObject((IOObject *)this,param_1);
  *(undefined **)this = PTR_vtable_00015068 + 8;
  return;
}



// MM::IOService::IOService(unsigned int, MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall MM::IOService::IOService(IOService *this,uint param_1,MessageCenter *param_2)

{
  IOObject::IOObject((IOObject *)this,param_1);
  *(undefined **)this = PTR_vtable_000150b0 + 8;
  *(MessageCenter **)(this + 8) = param_2;
  return;
}



// MM::IOObject::~IOObject()

void __thiscall MM::IOObject::~IOObject(IOObject *this)

{
  *(undefined **)this = PTR_vtable_00015074 + 8;
  _IOObjectRelease(*(undefined4 *)(this + 4));
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFDictionary*>::CoreFoundationWrapper(__CFDictionary*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFDictionary *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_0001507c + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::CoreFoundationMutableDictionary::CoreFoundationMutableDictionary(__CFDictionary*, bool)

void __thiscall
MM::CoreFoundationMutableDictionary::CoreFoundationMutableDictionary
          (CoreFoundationMutableDictionary *this,__CFDictionary *param_1,bool param_2)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,false);
  *(undefined **)this = PTR_vtable_0001509c + 8;
  return;
}



// MM::MatchingServiceDictionary::MatchingServiceDictionary(char const*)

void __thiscall
MM::MatchingServiceDictionary::MatchingServiceDictionary
          (MatchingServiceDictionary *this,char *param_1)

{
  __CFDictionary *p_Var1;
  
  p_Var1 = (__CFDictionary *)CallIOServiceMatching(param_1);
  CoreFoundationMutableDictionary::CoreFoundationMutableDictionary
            ((CoreFoundationMutableDictionary *)this,p_Var1,true);
  *(undefined **)this = PTR_vtable_00015084 + 8;
  return;
}



// MM::CoreFoundationWrapper<__CFDictionary*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_0001507c + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__SCDynamicStore const*>::CoreFoundationWrapper(__SCDynamicStore
// const*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__SCDynamicStore *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_000150ac + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// SCDynamicStore::SCDynamicStore(__CFString const*, bool)

void __thiscall
SCDynamicStore::SCDynamicStore(SCDynamicStore *this,__CFString *param_1,bool param_2)

{
  __SCDynamicStore *p_Var1;
  
  p_Var1 = (__SCDynamicStore *)CallSCDynamicStoreCreate(this,param_1);
  MM::CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,p_Var1,param_2,false);
  *(undefined **)this = PTR_vtable_00015078 + 8;
  return;
}



// PowerCycleDynamicStore::PowerCycleDynamicStore(NumVersion const&, __CFArray const*)

void __thiscall
PowerCycleDynamicStore::PowerCycleDynamicStore
          (PowerCycleDynamicStore *this,NumVersion *param_1,__CFArray *param_2)

{
  char cVar1;
  
  SCDynamicStore::SCDynamicStore
            ((SCDynamicStore *)this,(__CFString *)&cf_firmwareloaderpowercyclenotice,true);
  *(undefined ***)this = &PTR__PowerCycleDynamicStore_000122d8;
  *(undefined4 *)(this + 10) = *(undefined4 *)param_1;
  if (param_2 != (__CFArray *)0x0) {
    cVar1 = _SCDynamicStoreSetNotificationKeys(*(undefined4 *)(this + 4),param_2,0);
    if (cVar1 == '\0') {
      MM::ThrowErrorFunc(-0x1360);
    }
  }
  return;
}



// MM::CoreFoundationWrapper<__SCDynamicStore const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_000150ac + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFArray*>::CoreFoundationWrapper(__CFArray*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<__CFArray*>::CoreFoundationWrapper
          (CoreFoundationWrapper<__CFArray*> *this,__CFArray *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<__CFArray*>::SystemWrapper((SystemWrapper<__CFArray*> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015094 + 8;
  this[8] = (CoreFoundationWrapper<__CFArray*>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::CoreFoundationMutableArray::CoreFoundationMutableArray(long, void const**)

void __thiscall
MM::CoreFoundationMutableArray::CoreFoundationMutableArray
          (CoreFoundationMutableArray *this,long param_1,void **param_2)

{
  __CFArray *p_Var1;
  int iVar2;
  
  p_Var1 = (__CFArray *)_CFArrayCreateMutable(*(undefined4 *)PTR_00015030,0,PTR_000150a0);
  CoreFoundationWrapper<__CFArray*>::CoreFoundationWrapper
            ((CoreFoundationWrapper<__CFArray*> *)this,p_Var1,true,false);
  *(undefined **)this = PTR_vtable_00015090 + 8;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    _CFArrayAppendValue(*(undefined4 *)(this + 4),param_2[iVar2]);
  }
  return;
}



// MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper()

void __thiscall
MM::CoreFoundationWrapper<__CFArray*>::~CoreFoundationWrapper
          (CoreFoundationWrapper<__CFArray*> *this)

{
  *(undefined **)this = PTR_vtable_00015094 + 8;
  if ((this[8] != (CoreFoundationWrapper<__CFArray*>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<void const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015080 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationType::CoreFoundationType(void const*, bool)

void __thiscall
MM::CoreFoundationType::CoreFoundationType(CoreFoundationType *this,void *param_1,bool param_2)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,false);
  *(undefined **)this = PTR_vtable_00015088 + 8;
  return;
}



// MM::CoreFoundationType::~CoreFoundationType()

void __thiscall MM::CoreFoundationType::~CoreFoundationType(CoreFoundationType *this)

{
  *(undefined **)this = PTR_vtable_00015088 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<void const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationType::~CoreFoundationType()

void __thiscall MM::CoreFoundationType::~CoreFoundationType(CoreFoundationType *this)

{
  *(undefined **)this = PTR_vtable_00015088 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::RegistryEntryProperty::RegistryEntryProperty(unsigned int, __CFString const*)

void __thiscall
MM::RegistryEntryProperty::RegistryEntryProperty
          (RegistryEntryProperty *this,uint param_1,__CFString *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)CallIORegistryEntryCreateCFProperty(param_1,param_2);
  CoreFoundationType::CoreFoundationType((CoreFoundationType *)this,pvVar1,true);
  *(undefined **)this = PTR_vtable_000150c4 + 8;
  return;
}



// MM::RegistryEntryProperty::~RegistryEntryProperty()

void __thiscall MM::RegistryEntryProperty::~RegistryEntryProperty(RegistryEntryProperty *this)

{
  *(undefined **)this = PTR_vtable_000150c4 + 8;
  CoreFoundationType::~CoreFoundationType((CoreFoundationType *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationType::~CoreFoundationType()

void __thiscall MM::CoreFoundationType::~CoreFoundationType(CoreFoundationType *this)

{
  ~CoreFoundationType(this);
  return;
}



// MM::RegistryEntryProperty::~RegistryEntryProperty()

void __thiscall MM::RegistryEntryProperty::~RegistryEntryProperty(RegistryEntryProperty *this)

{
  *(undefined **)this = PTR_vtable_000150c4 + 8;
  CoreFoundationType::~CoreFoundationType((CoreFoundationType *)this);
  return;
}



// MM::RegistryEntryProperty::~RegistryEntryProperty()

void __thiscall MM::RegistryEntryProperty::~RegistryEntryProperty(RegistryEntryProperty *this)

{
  ~RegistryEntryProperty(this);
  return;
}



// MM::CoreFoundationWrapper<void const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015080 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::IOService::~IOService()

void __thiscall MM::IOService::~IOService(IOService *this)

{
  int iVar1;
  int local_14;
  undefined4 local_10;
  
  *(undefined **)this = PTR_vtable_000150b0 + 8;
  iVar1 = _IOObjectGetKernelRetainCount(*(undefined4 *)(this + 4),&local_14);
  if ((iVar1 != 0) || (local_14 == 1)) {
    local_10 = *(undefined4 *)(this + 4);
    (**(code **)(**(int **)(this + 8) + 0x1c))(*(int **)(this + 8),&local_10,0,0);
  }
  IOObject::~IOObject((IOObject *)this);
  return;
}



// MM::IOService::~IOService()

void __thiscall MM::IOService::~IOService(IOService *this)

{
  ~IOService(this);
  return;
}



// __gnu_cxx::__normal_iterator<void const* const*, std::vector<void const*, std::allocator<void
// const*> > >::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<void const* const*,
// std::vector<void const*, std::allocator<void const*> > > const&,
// __gnu_cxx::__normal_iterator<void const* const*, std::vector<void const*, std::allocator<void
// const*> > > const&)

int __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  return *(int *)param_1 - *(int *)param_2 >> 2;
}



// std::vector<void const*, std::allocator<void const*> >::size() const

void __thiscall std::vector<>::size(vector<> *this)

{
  undefined4 local_14;
  undefined4 local_10 [3];
  
  local_14 = *(undefined4 *)this;
  local_10[0] = *(undefined4 *)(this + 4);
  __gnu_cxx::operator-((__normal_iterator *)local_10,(__normal_iterator *)&local_14);
  return;
}



// MM::NotificationPort::NotificationPort(unsigned int)

void __thiscall MM::NotificationPort::NotificationPort(NotificationPort *this,uint param_1)

{
  IONotificationPort *local_10 [2];
  
  local_10[0] = (IONotificationPort *)_IONotificationPortCreate(param_1);
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)this,local_10);
  if (*(int *)this == 0) {
    ThrowErrorFunc(0x3fd);
  }
  return;
}



// MM::ServiceInterface<IOUSBDeviceStruct187>::~ServiceInterface()

void __thiscall MM::ServiceInterface<>::~ServiceInterface(ServiceInterface<> *this)

{
  (**(code **)(**(int **)this + 0xc))(*(int **)this);
  return;
}



// MM::USB::DeviceInterface::DeviceInterface(IOCFPlugInInterfaceStruct**)

void __thiscall
MM::USB::DeviceInterface::DeviceInterface(DeviceInterface *this,IOCFPlugInInterfaceStruct **param_1)

{
  ServiceInterface<>::ServiceInterface
            ((ServiceInterface<> *)this,param_1,USB::kUSBDeviceInterfaceUUID);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<__gnu_cxx::__normal_iterator<void const**, std::vector<void const*,
// std::allocator<void const*> > >, std::allocator<void const*> >(__gnu_cxx::__normal_iterator<void
// const**, std::vector<void const*, std::allocator<void const*> > >,
// __gnu_cxx::__normal_iterator<void const**, std::vector<void const*, std::allocator<void const*> >
// >, std::allocator<void const*>)

void std::_Destroy<>(int param_1)

{
  bool bVar1;
  
  while( true ) {
    bVar1 = __gnu_cxx::operator!=
                      ((__normal_iterator *)&param_1,(__normal_iterator *)&stack0x00000008);
    if (!bVar1) break;
    param_1 = param_1 + 4;
  }
  return;
}



// std::vector<void const*, std::allocator<void const*> >::operator[](unsigned long)

int __thiscall std::vector<>::operator[](vector<> *this,ulong param_1)

{
  return param_1 * 4 + *(int *)this;
}



// __gnu_cxx::new_allocator<void const*>::construct(void const**, void const* const&)

void __thiscall
__gnu_cxx::new_allocator<>::construct(new_allocator<> *this,void **param_1,void **param_2)

{
  if (param_1 != (void **)0x0) {
    *param_1 = *param_2;
  }
  return;
}



// std::allocator<void const*>::allocator()

void std::allocator<>::allocator(void)

{
  return;
}



// std::allocator<void const*>::~allocator()

void __thiscall std::allocator<>::~allocator(allocator<> *this)

{
  return;
}



// std::_Vector_base<void const*, std::allocator<void const*> >::_Vector_impl::~_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<>::~allocator((allocator<> *)this);
  return;
}



// std::_Vector_base<void const*, std::allocator<void const*> >::~_Vector_base()

void __thiscall std::_Vector_base<>::~_Vector_base(_Vector_base<> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<void const*, std::allocator<void const*> >::~vector()

void __thiscall std::vector<>::~vector(vector<> *this)

{
  int iVar1;
  allocator local_d;
  
  allocator<>::allocator(&local_d);
  for (iVar1 = *(int *)this; iVar1 != *(int *)(this + 4); iVar1 = iVar1 + 4) {
  }
  allocator<>::~allocator((allocator<> *)&local_d);
  _Vector_base<>::~_Vector_base((_Vector_base<> *)this);
  return;
}



// std::_Vector_base<void const*, std::allocator<void const*>
// >::_Vector_impl::_Vector_impl(std::allocator<void const*> const&)

void __thiscall
std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this,allocator *param_1)

{
  allocator<>::allocator((allocator *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



// std::_Vector_base<void const*, std::allocator<void const*> >::_Vector_base(std::allocator<void
// const*> const&)

void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this,allocator *param_1)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_1);
  return;
}



// std::vector<void const*, std::allocator<void const*> >::vector(std::allocator<void const*>
// const&)

void __thiscall std::vector<>::vector(vector<> *this,allocator *param_1)

{
  _Vector_base<>::_Vector_base((_Vector_base<> *)this,param_1);
  return;
}



// MM::IOCFPlugInInterfaceWrapper::IOCFPlugInInterfaceWrapper(unsigned int,
// IOCFPlugInInterfaceStruct**, MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall
MM::IOCFPlugInInterfaceWrapper::IOCFPlugInInterfaceWrapper
          (IOCFPlugInInterfaceWrapper *this,uint param_1,IOCFPlugInInterfaceStruct **param_2,
          MessageCenter *param_3)

{
  undefined *puVar1;
  
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 0x10),&param_2);
  IOServiceGoneDeadMessageRecipient::IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)this,param_1,param_3);
  puVar1 = PTR_vtable_000150bc;
  *(uint *)(this + 0x14) = param_1;
  *(undefined **)this = puVar1 + 8;
  return;
}



// MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper()

void __thiscall
MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper(IOCFPlugInInterfaceWrapper *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_000150bc + 8;
  if (*(int *)(this + 0xc) != 0) {
    _IOObjectRetain(*(undefined4 *)(this + 0x14));
    iVar1 = _IODestroyPlugInInterface(*(undefined4 *)(this + 0x10));
    if (iVar1 == -0x1ffffd33 || iVar1 == -0x1ffffd40) {
      iVar1 = 0;
    }
    else if (iVar1 != 0) {
      _IOObjectRelease(*(undefined4 *)(this + 0x14));
    }
    ThrowIfErrorFunc(iVar1);
  }
  IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)this);
  operator_delete(this);
  return;
}



// MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper()

void __thiscall
MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper(IOCFPlugInInterfaceWrapper *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_000150bc + 8;
  if (*(int *)(this + 0xc) != 0) {
    _IOObjectRetain(*(undefined4 *)(this + 0x14));
    iVar1 = _IODestroyPlugInInterface(*(undefined4 *)(this + 0x10));
    if (iVar1 == -0x1ffffd33 || iVar1 == -0x1ffffd40) {
      iVar1 = 0;
    }
    else if (iVar1 != 0) {
      _IOObjectRelease(*(undefined4 *)(this + 0x14));
    }
    ThrowIfErrorFunc(iVar1);
  }
  IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)this);
  return;
}



// MM::ServicePlugInInterface::ServicePlugInInterface(unsigned int, __CFUUID const*,
// MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall
MM::ServicePlugInInterface::ServicePlugInInterface
          (ServicePlugInInterface *this,uint param_1,__CFUUID *param_2,MessageCenter *param_3)

{
  IOCFPlugInInterfaceStruct **ppIVar1;
  
  ppIVar1 = (IOCFPlugInInterfaceStruct **)CallIOCreatePlugInInterfaceForService(param_1,param_2);
  IOCFPlugInInterfaceWrapper::IOCFPlugInInterfaceWrapper
            ((IOCFPlugInInterfaceWrapper *)this,param_1,ppIVar1,param_3);
  *(undefined **)this = PTR_vtable_000150b4 + 8;
  return;
}



// MM::ServicePlugInInterface::~ServicePlugInInterface()

void __thiscall MM::ServicePlugInInterface::~ServicePlugInInterface(ServicePlugInInterface *this)

{
  *(undefined **)this = PTR_vtable_000150b4 + 8;
  IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper((IOCFPlugInInterfaceWrapper *)this);
  operator_delete(this);
  return;
}



// MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper()

void __thiscall
MM::IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper(IOCFPlugInInterfaceWrapper *this)

{
  ~IOCFPlugInInterfaceWrapper(this);
  return;
}



// MM::ServicePlugInInterface::~ServicePlugInInterface()

void __thiscall MM::ServicePlugInInterface::~ServicePlugInInterface(ServicePlugInInterface *this)

{
  *(undefined **)this = PTR_vtable_000150b4 + 8;
  IOCFPlugInInterfaceWrapper::~IOCFPlugInInterfaceWrapper((IOCFPlugInInterfaceWrapper *)this);
  return;
}



// MM::ServicePlugInInterface::~ServicePlugInInterface()

void __thiscall MM::ServicePlugInInterface::~ServicePlugInInterface(ServicePlugInInterface *this)

{
  ~ServicePlugInInterface(this);
  return;
}



// std::vector<void const*, std::allocator<void const*>
// >::_M_insert_aux(__gnu_cxx::__normal_iterator<void const**, std::vector<void const*,
// std::allocator<void const*> > >, void const* const&)

void __thiscall std::vector<>::_M_insert_aux(vector<> *this,undefined4 *param_2,void **param_3)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 uVar4;
  void *local_34;
  allocator local_1f;
  allocator local_1e;
  allocator local_1d [13];
  
  ppvVar3 = *(void ***)(this + 4);
  if (ppvVar3 == *(void ***)(this + 8)) {
    pvVar1 = (void *)size(this);
    if (pvVar1 == (void *)0x3fffffff) {
      pvVar1 = (void *)std::__throw_length_error("vector::_M_insert_aux");
    }
    local_34 = (void *)0x1;
    if (pvVar1 != (void *)0x0) {
      local_34 = (void *)0x3fffffff;
      if (pvVar1 <= (void *)((int)pvVar1 * 2)) {
        local_34 = (void *)((int)pvVar1 * 2);
      }
    }
    iVar2 = __gnu_cxx::new_allocator<>::allocate((ulong)this,local_34);
    allocator<>::allocator(&local_1f);
    ppvVar3 = (void **)uninitialized_copy<>(*(undefined4 *)this,param_2,iVar2);
    allocator<>::~allocator((allocator<> *)&local_1f);
    __gnu_cxx::new_allocator<>::construct((new_allocator<> *)this,ppvVar3,param_3);
    allocator<>::allocator(&local_1e);
    uVar4 = uninitialized_copy<>(param_2,*(undefined4 *)(this + 4),ppvVar3 + 1);
    allocator<>::~allocator((allocator<> *)&local_1e);
    allocator<>::allocator(local_1d);
    _Destroy<>(*(undefined4 *)this,*(undefined4 *)(this + 4),local_1d);
    allocator<>::~allocator((allocator<> *)local_1d);
    if (*(void **)this != (void *)0x0) {
      operator_delete(*(void **)this);
    }
    *(undefined4 *)(this + 4) = uVar4;
    *(int *)this = iVar2;
    *(int *)(this + 8) = iVar2 + (int)local_34 * 4;
  }
  else {
    __gnu_cxx::new_allocator<>::construct((new_allocator<> *)this,ppvVar3,ppvVar3 + -1);
    iVar2 = *(int *)(this + 4);
    *(int *)(this + 4) = iVar2 + 4;
    pvVar1 = *param_3;
    __copy_backward_normal<true,true>::copy_b_n<>(param_2,iVar2 + -4,iVar2);
    *param_2 = pvVar1;
  }
  return;
}



// std::vector<void const*, std::allocator<void const*> >::push_back(void const* const&)

void __thiscall std::vector<>::push_back(vector<> *this,void **param_1)

{
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(this + 4);
  if (ppvVar1 == *(void ***)(this + 8)) {
    _M_insert_aux(this,ppvVar1,param_1);
  }
  else {
    __gnu_cxx::new_allocator<>::construct((new_allocator<> *)this,ppvVar1,param_1);
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  return;
}



// DynamicStoreKeyConsoleUser::DynamicStoreKeyConsoleUser()

void __thiscall
DynamicStoreKeyConsoleUser::DynamicStoreKeyConsoleUser(DynamicStoreKeyConsoleUser *this)

{
  void *local_14;
  allocator<> local_d;
  
  std::allocator<>::allocator();
  std::vector<>::vector((vector<> *)this,(allocator *)&local_d);
  std::allocator<>::~allocator(&local_d);
  local_14 = (void *)_SCDynamicStoreKeyCreateConsoleUser(*(undefined4 *)PTR_00015030);
  std::vector<>::push_back((vector<> *)this,&local_14);
  return;
}



// MM::MatchingNotification::MatchingNotification(IONotificationPort*, char const*, __CFDictionary
// const*)

void __thiscall
MM::MatchingNotification::MatchingNotification
          (MatchingNotification *this,IONotificationPort *param_1,char *param_2,
          __CFDictionary *param_3)

{
  uint uVar1;
  
  *(undefined **)this = PTR_vtable_0001508c + 8;
  uVar1 = CallIOServiceAddMatchingNotification(param_1,param_2,param_3,this);
  IOIterator::IOIterator((IOIterator *)(this + 4),uVar1);
  return;
}



// MM::MatchingNotification::~MatchingNotification()

void __thiscall MM::MatchingNotification::~MatchingNotification(MatchingNotification *this)

{
  *(undefined **)this = PTR_vtable_0001508c + 8;
  IOIterator::~IOIterator((IOIterator *)(this + 4));
  operator_delete(this);
  return;
}



// MM::MatchingNotification::~MatchingNotification()

void __thiscall MM::MatchingNotification::~MatchingNotification(MatchingNotification *this)

{
  *(undefined **)this = PTR_vtable_0001508c + 8;
  IOIterator::~IOIterator((IOIterator *)(this + 4));
  return;
}



// FirstMatchingNotification::~FirstMatchingNotification()

void __thiscall
FirstMatchingNotification::~FirstMatchingNotification(FirstMatchingNotification *this)

{
  *(undefined ***)this = &PTR_Notify_000122f0;
  MM::MatchingNotification::~MatchingNotification((MatchingNotification *)this);
  operator_delete(this);
  return;
}



// MM::MatchingNotification::~MatchingNotification()

void __thiscall MM::MatchingNotification::~MatchingNotification(MatchingNotification *this)

{
  ~MatchingNotification(this);
  return;
}



// FirstMatchingNotification::~FirstMatchingNotification()

void __thiscall
FirstMatchingNotification::~FirstMatchingNotification(FirstMatchingNotification *this)

{
  *(undefined ***)this = &PTR_Notify_000122f0;
  MM::MatchingNotification::~MatchingNotification((MatchingNotification *)this);
  return;
}



// FirstMatchingNotification::~FirstMatchingNotification()

void __thiscall
FirstMatchingNotification::~FirstMatchingNotification(FirstMatchingNotification *this)

{
  ~FirstMatchingNotification(this);
  return;
}



// FirmwareLoaderApp::~FirmwareLoaderApp()

void __thiscall FirmwareLoaderApp::~FirmwareLoaderApp(FirmwareLoaderApp *this)

{
  MM::RunLoopAndSource::~RunLoopAndSource((RunLoopAndSource *)(this + 0x138));
  MM::RunLoopSource::~RunLoopSource((RunLoopSource *)(this + 0x118));
  PowerCycleDynamicStore::~PowerCycleDynamicStore((PowerCycleDynamicStore *)(this + 0x108));
  MM::CoreFoundationMutableArray::~CoreFoundationMutableArray
            ((CoreFoundationMutableArray *)(this + 0xfc));
  std::vector<>::~vector((vector<> *)(this + 0xf0));
  FirstMatchingNotification::~FirstMatchingNotification((FirstMatchingNotification *)(this + 0xe4));
  MM::MatchingServiceDictionary::~MatchingServiceDictionary
            ((MatchingServiceDictionary *)(this + 0xd8));
  MM::RunLoopAndSource::~RunLoopAndSource((RunLoopAndSource *)(this + 0x9c));
  MM::RunLoopSource::~RunLoopSource((RunLoopSource *)(this + 0x7c));
  MM::NotificationPort::~NotificationPort((NotificationPort *)(this + 0x78));
  MM::RunLoopAndSource::~RunLoopAndSource((RunLoopAndSource *)(this + 0x3c));
  MM::RunLoopSource::~RunLoopSource((RunLoopSource *)(this + 0x1c));
  FirmwareLoaderLocalMessagePort::~FirmwareLoaderLocalMessagePort
            ((FirmwareLoaderLocalMessagePort *)(this + 8));
  MM::MasterPort::~MasterPort((MasterPort *)this);
  return;
}



// FirstMatchingNotification::FirstMatchingNotification(IONotificationPort*, __CFDictionary const*)

void __thiscall
FirstMatchingNotification::FirstMatchingNotification
          (FirstMatchingNotification *this,IONotificationPort *param_1,__CFDictionary *param_2)

{
  MM::MatchingNotification::MatchingNotification
            ((MatchingNotification *)this,param_1,"IOServiceFirstMatch",param_2);
  *(undefined ***)this = &PTR_Notify_000122f0;
  return;
}



// MM::PL::TrimLeading(unsigned char*, unsigned char)

uchar * MM::PL::TrimLeading(uchar *param_1,uchar param_2)

{
  byte bVar1;
  
  while ((*param_1 != '\0' && (param_1[1] == param_2))) {
    bVar1 = *param_1 - 1;
    *param_1 = bVar1;
    _memcpy(param_1 + 1,param_1 + 2,(uint)bVar1);
  }
  return param_1;
}



// MM::PL::strcat(unsigned char*, unsigned char const*)

void MM::PL::strcat(uchar *param_1,uchar *param_2)

{
  _PLstrcat();
  return;
}



// MM::PL::strcpy(unsigned char*, unsigned char const*)

void MM::PL::strcpy(uchar *param_1,uchar *param_2)

{
  _PLstrcpy();
  return;
}



// MM::PL::strchr(unsigned char const*, short)

void MM::PL::strchr(uchar *param_1,short param_2)

{
  _PLstrchr();
  return;
}



// MM::PL::strncpy(unsigned char*, unsigned char const*, short)

void MM::PL::strncpy(uchar *param_1,uchar *param_2,short param_3)

{
  _PLstrncpy();
  return;
}



// MM::PL::CopyPascalStringToC(unsigned char const*, char*)

void MM::PL::CopyPascalStringToC(uchar *param_1,char *param_2)

{
  _CopyPascalStringToC();
  return;
}



// MM::ThrowIfErrorFunc(int)

void __regparm3 MM::ThrowIfErrorFunc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015040;
    *piVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(piVar2,puVar1,0);
  }
  return;
}



// MM::ThrowErrorFunc(long)

void __regparm3 MM::ThrowErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)___cxa_allocate_exception(4);
  puVar1 = PTR_00015014;
  *plVar2 = param_1;
                    // WARNING: Subroutine does not return
  ___cxa_throw(plVar2,puVar1,0);
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// millisleep(unsigned long, unsigned long*)

int millisleep(ulong param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  timespec local_1c;
  timespec local_14;
  
  local_1c.tv_sec = param_1 / 1000;
  local_1c.tv_nsec = (param_1 % 1000) * 1000000;
  iVar1 = _nanosleep(&local_1c,&local_14);
  if (param_2 != (ulong *)0x0) {
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)local_14.tv_nsec / 1000000 + local_14.tv_sec * 1000;
    }
    *param_2 = uVar2;
  }
  return iVar1;
}



// FirmwareLoaderImplementation::Try(unsigned int, unsigned short, unsigned short,
// IOUSBDeviceStruct187**)

int __thiscall
FirmwareLoaderImplementation::Try
          (FirmwareLoaderImplementation *this,uint param_1,ushort param_2,ushort param_3,
          IOUSBDeviceStruct187 **param_4)

{
  code *pcVar1;
  uchar *puVar2;
  int iVar3;
  ushort local_f0 [8];
  MM local_e0 [20];
  String local_cc [20];
  String local_b8 [20];
  MM local_a4 [20];
  String local_90 [20];
  String local_7c [20];
  MM local_68 [20];
  MM local_54 [20];
  String local_40 [20];
  uchar local_2c [28];
  
  local_f0[0] = param_2;
  MM::BinaryToHexString(local_f0,2,local_2c);
  MM::PL::TrimLeading(local_2c,'0');
  (**(code **)(*(int *)this + 0xc))(local_b8,this);
  MM::String::String(local_90,".",0x8000100);
  MM::String::String(local_7c,local_2c,0);
  MM::operator+(local_a4,local_7c,local_90);
  MM::operator+(local_e0,(String *)local_a4,local_b8);
  MM::String::~String((String *)local_a4);
  MM::String::~String(local_7c);
  MM::String::~String(local_90);
  MM::String::~String(local_b8);
  pcVar1 = *(code **)(*(int *)this + 8);
  MM::String::String(local_40,"-",0x8000100);
  MM::String::String(local_cc,param_3,true);
  MM::operator+(local_54,local_cc,local_40);
  MM::operator+(local_68,(String *)local_54,(String *)local_e0);
  puVar2 = MM::String::operator_cast_to_unsigned_char_((String *)local_68);
  iVar3 = (*pcVar1)(this,1,param_1,puVar2,param_3,param_4);
  MM::String::~String((String *)local_68);
  MM::String::~String((String *)local_54);
  MM::String::~String(local_cc);
  MM::String::~String(local_40);
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)this + 8);
    puVar2 = MM::String::operator_cast_to_unsigned_char_((String *)local_e0);
    iVar3 = (*pcVar1)(this,0,param_1,puVar2,param_3,param_4);
  }
  MM::String::~String((String *)local_e0);
  return iVar3;
}



// FirmwareLoaderImplementation::IsFirmwareResourceAvailable(char**&, unsigned char const*)

undefined4 __thiscall
FirmwareLoaderImplementation::IsFirmwareResourceAvailable
          (FirmwareLoaderImplementation *this,char ***param_1,uchar *param_2)

{
  short sVar1;
  char **ppcVar2;
  undefined4 uVar3;
  
  _SetResLoad(0);
  ppcVar2 = (char **)_Get1NamedResource(0x4649524d,param_2);
  *param_1 = ppcVar2;
  _SetResLoad(1);
  uVar3 = 1;
  if (*param_1 == (char **)0x0) {
    sVar1 = _ResError();
    uVar3 = 0;
    if (sVar1 != -0xc0) {
      MM::ThrowIfErrorFunc((int)sVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// SimpleCallBack(MM::FirmwareLoader::CallBackMessage::What, bool
// (*)(MM::FirmwareLoader::CallBackMessage const&, void*), void*)

undefined1 __regparm3 SimpleCallBack(undefined4 param_1,code *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = 0;
  if (param_2 != (code *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    uVar1 = (*param_2)(local_1c,param_3);
  }
  return uVar1;
}



// MM::FirmwareLoader::ProductRequiresPowerCycleAfterUpdate(unsigned short)

undefined4 MM::FirmwareLoader::ProductRequiresPowerCycleAfterUpdate(ushort param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x2803) || (uVar1 = 0, param_1 == 0x2815)) {
    uVar1 = 1;
  }
  return uVar1;
}



// FirmwareLoader_Cypress::SetFirmwareMode(IOUSBDeviceStruct187**, unsigned char)

void __thiscall
FirmwareLoader_Cypress::SetFirmwareMode
          (FirmwareLoader_Cypress *this,IOUSBDeviceStruct187 **param_1,uchar param_2)

{
  undefined2 uVar1;
  int iVar2;
  uchar local_20 [4];
  undefined2 local_1c;
  undefined2 uStack_1a;
  undefined4 local_18;
  uchar *local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_20[0] = param_2;
  uVar1 = 0xe600;
  if (this[8] == (FirmwareLoader_Cypress)0x0) {
    uVar1 = 0x7f92;
  }
  local_18 = 0x10000;
  _local_1c = CONCAT22(uVar1,0xa040);
  local_14 = local_20;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_1c);
  MM::ThrowIfErrorFunc(iVar2);
  return;
}



// FirmwareLoader_Cypress::EnsureLoader(unsigned int, unsigned short, IOUSBDeviceStruct187**)

void __thiscall
FirmwareLoader_Cypress::EnsureLoader
          (FirmwareLoader_Cypress *this,uint param_1,ushort param_2,IOUSBDeviceStruct187 **param_3)

{
  int iVar1;
  
  if (*(int *)(this + 4) == 0) {
    *(undefined4 *)(this + 4) = 1;
    iVar1 = (**(code **)(*(int *)this + 8))(this,0,param_1,"\x0eloader.cypress",param_2,param_3);
    if (iVar1 != 2) {
      MM::ThrowErrorFunc(0x401);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
  }
  return;
}



// FirmwareLoader_Cypress::LoadFirmwareIntoDevice(bool, unsigned int, IOUSBDeviceStruct187**,
// unsigned short, unsigned char const*, unsigned long, bool (*)(MM::FirmwareLoader::CallBackMessage
// const&, void*), void*)

undefined4
FirmwareLoader_Cypress::LoadFirmwareIntoDevice
          (bool param_1,uint param_2,IOUSBDeviceStruct187 **param_3,ushort param_4,uchar *param_5,
          ulong param_6,_func_bool_CallBackMessage_ptr_void_ptr *param_7,void *param_8)

{
  uint uVar1;
  MessageCenter *pMVar2;
  undefined3 in_stack_00000005;
  undefined2 in_stack_00000012;
  OpenDevice local_34 [36];
  
  (**(code **)(*_param_1 + 0x30))(_param_1,_param_4);
  if (((char)param_2 != '\0') || ((char)_param_1[2] != '\0')) {
    do {
      uVar1 = _sleep(1);
    } while (uVar1 != 0);
    if ((char)param_2 != '\0') goto LAB_00009dc0;
  }
  if ((char)_param_1[2] == '\0') {
    (**(code **)(*_param_1 + 0x20))(_param_1,param_3,(uint)param_5 & 0xffff,_param_4);
  }
LAB_00009dc0:
  pMVar2 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  MM::USB::OpenDevice::OpenDevice(local_34,(uint)param_3,_param_4,pMVar2);
  (**(code **)(*_param_1 + 0x24))(_param_1,_param_4,1);
  (**(code **)(*_param_1 + 0x2c))(_param_1,_param_4,param_6,param_7,0);
  (**(code **)(*_param_1 + 0x2c))(_param_1,_param_4,param_6,param_7,1);
  (**(code **)(*_param_1 + 0x24))(_param_1,_param_4,0);
  MM::USB::OpenDevice::~OpenDevice(local_34);
  return 2;
}



// FirmwareLoader_Cypress::SetIsFXDevice(IOUSBDeviceStruct187**)

void __thiscall
FirmwareLoader_Cypress::SetIsFXDevice(FirmwareLoader_Cypress *this,IOUSBDeviceStruct187 **param_1)

{
  int iVar1;
  short local_e [3];
  
  this[8] = (FirmwareLoader_Cypress)0x0;
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1,local_e);
  if ((iVar1 == 0) && (local_e[0] == 0x1050 || local_e[0] == 0x1060)) {
    this[8] = (FirmwareLoader_Cypress)0x1;
  }
  return;
}



// FirmwareLoader_Cypress::LoadFirmwareIntoDeviceIE(IOUSBDeviceStruct187**, unsigned char const*,
// unsigned long, bool)

void __thiscall
FirmwareLoader_Cypress::LoadFirmwareIntoDeviceIE
          (FirmwareLoader_Cypress *this,IOUSBDeviceStruct187 **param_1,uchar *param_2,ulong param_3,
          bool param_4)

{
  ushort uVar1;
  byte *pbVar2;
  ushort uVar3;
  
  pbVar2 = param_2 + param_3;
  for (; param_2 < pbVar2; param_2 = param_2 + *param_2 + 4) {
    uVar1 = 0x1fff;
    uVar3 = *(ushort *)(param_2 + 1) << 8 | *(ushort *)(param_2 + 1) >> 8;
    if (this[8] == (FirmwareLoader_Cypress)0x0) {
      uVar1 = 0x1b3f;
    }
    if (uVar1 < uVar3 != param_4) {
      (**(code **)(*(int *)this + 0x28))(this,param_1,*param_2,param_2 + 4,uVar3,param_4);
    }
  }
  return;
}



// MM::FirmwareLoader::GetStreamFooter(unsigned char const*, unsigned long, bool
// (*)(MM::FirmwareLoader::CallBackMessage const&, void*), void*)

uchar * MM::FirmwareLoader::GetStreamFooter
                  (uchar *param_1,ulong param_2,_func_bool_CallBackMessage_ptr_void_ptr *param_3,
                  void *param_4)

{
  char cVar1;
  int iVar2;
  uchar *puVar3;
  
  if ((((param_2 < 0x12) || (puVar3 = param_1 + (param_2 - 0x12), puVar3[0xc] != 'D')) ||
      (puVar3[0xb] != 'F')) || (puVar3[10] != 'U')) {
    puVar3 = (uchar *)0x0;
  }
  else {
    if (*(short *)(puVar3 + 6) != 0x763) {
      ThrowErrorFunc(0x478);
    }
    if (1 < (ushort)(*(short *)(puVar3 + 8) - 0x100U)) {
      cVar1 = SimpleCallBack(3,param_3,param_4);
      if (cVar1 != '\0') {
        ThrowErrorFunc(0x47b);
      }
    }
    iVar2 = _MoreCRC32(0xffffffff,param_1,param_2 - 4,0);
    if (iVar2 != *(int *)(puVar3 + 0xe)) {
      cVar1 = SimpleCallBack(2,param_3,param_4);
      if (cVar1 != '\0') {
        ThrowErrorFunc(0x477);
      }
    }
  }
  return puVar3;
}



// FirmwareLoaderImplementation::IsFirmwareFileAvailable(FSSpec&, unsigned char const*)

bool __thiscall
FirmwareLoaderImplementation::IsFirmwareFileAvailable
          (FirmwareLoaderImplementation *this,FSSpec *param_1,uchar *param_2)

{
  bool bVar1;
  short sVar2;
  uchar *puVar3;
  MM local_58 [20];
  String local_44 [20];
  String local_30 [32];
  
  MM::String::String(local_44,param_2,0);
  MM::String::String(local_30,":Firmware Streams:",0x8000100);
  MM::operator+(local_58,local_30,local_44);
  puVar3 = MM::String::operator_cast_to_unsigned_char_((String *)local_58);
  sVar2 = _FSMakeFSSpec(0,0,puVar3,param_1);
  MM::String::~String((String *)local_58);
  MM::String::~String(local_30);
  MM::String::~String(local_44);
  bVar1 = sVar2 != -0x78 && sVar2 != -0x2b;
  if (bVar1) {
    MM::ThrowIfErrorFunc((int)sVar2);
  }
  return bVar1;
}



// GetDFUStatus(IOUSBDeviceStruct187**, unsigned char, unsigned char*, bool, bool)

uint __regparm3
GetDFUStatus(IOUSBDeviceStruct187 **param_1,uchar param_2,uchar *param_3,bool param_4,bool param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  undefined4 local_2c;
  ushort local_28;
  undefined2 uStack_26;
  uchar *local_24;
  undefined4 local_20;
  
  local_20 = 0;
  local_2c = 0x3a1;
  _local_28 = CONCAT22(6,(ushort)param_2);
  local_24 = param_3;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_2c);
  if ((param_5) && (iVar2 == -0x1fffbfb1)) {
    *param_3 = '\0';
    iVar2 = 0;
    param_3[4] = '\x02';
  }
  MM::ThrowIfErrorFunc(iVar2);
  uVar4 = (uint)*(uint3 *)(param_3 + 1);
  if (param_4) {
    uVar4 = (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  uVar3 = 2;
  if (uVar4 != 0) {
    dVar5 = ((double)(int)(uVar4 + 0x80000000) + 2147483648.0) * 1.2 + 0.5;
    bVar1 = 2147483648.0 <= dVar5;
    if (4294967295.0 <= dVar5) {
      dVar5 = 4294967295.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    uVar3 = (int)(dVar5 - (double)(-(ulonglong)bVar1 & 0x41e0000000000000)) ^
            (uint)bVar1 * -0x80000000;
  }
  return uVar3;
}



// FirmwareLoader_DFU::LoadFirmwareBlockIntoDevice(IOUSBDeviceStruct187**, unsigned char, unsigned
// short, unsigned char const*, unsigned short, unsigned long, bool, unsigned char*)

undefined4 __thiscall
FirmwareLoader_DFU::LoadFirmwareBlockIntoDevice
          (FirmwareLoader_DFU *this,IOUSBDeviceStruct187 **param_1,uchar param_2,ushort param_3,
          uchar *param_4,ushort param_5,ulong param_6,bool param_7,uchar *param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined2 local_2c;
  ushort uStack_2a;
  ushort local_28;
  ushort uStack_26;
  uchar *local_24;
  undefined4 local_20;
  
  cVar4 = '\0';
  local_20 = 0;
  _local_2c = CONCAT22(param_3,0x121);
  _local_28 = CONCAT22(param_5,(ushort)param_2);
  local_24 = param_4;
  iVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_2c);
  MM::ThrowIfErrorFunc(iVar2);
  while( true ) {
    uVar3 = GetDFUStatus(param_1,param_2,param_8,param_7,false);
    bVar1 = *param_8;
    if (bVar1 == 0xb) {
      return uVar3;
    }
    if (bVar1 != 0) {
      MM::ThrowErrorFunc(bVar1 + 0x47d);
    }
    if (param_8[4] != '\x03') break;
    cVar4 = cVar4 + '\x01';
    if (cVar4 == '\x05') {
      MM::ThrowErrorFunc(0x476);
    }
  }
  return uVar3;
}



// ClearDFUStatus(IOUSBDeviceStruct187**, unsigned char)

void __regparm3 ClearDFUStatus(IOUSBDeviceStruct187 **param_1,uchar param_2)

{
  int iVar1;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0;
  local_1c = 0x421;
  local_18 = (uint)param_2;
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_1c);
  MM::ThrowIfErrorFunc(iVar1);
  return;
}



// GetDeviceDescriptor(IOUSBDeviceStruct187**, unsigned char, unsigned char, void*, unsigned short&)

int __regparm3
GetDeviceDescriptor(IOUSBDeviceStruct187 **param_1,uchar param_2,uchar param_3,void *param_4,
                   ushort *param_5)

{
  int iVar1;
  undefined2 local_1c;
  undefined2 uStack_1a;
  int local_18;
  void *local_14;
  undefined4 local_10;
  
  local_10 = 0;
  _local_1c = CONCAT22(CONCAT11(param_2,param_3),0x680);
  local_18 = (uint)*param_5 << 0x10;
  local_14 = param_4;
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_1c);
  if (iVar1 == 0) {
    *param_5 = (ushort)local_10;
  }
  return iVar1;
}



// GetDFUFunctionalDescriptor(IOUSBDeviceStruct187**,
// MM::FirmwareLoader::DFUFunctionalDescriptor1dot1&)

undefined4 __regparm3
GetDFUFunctionalDescriptor(IOUSBDeviceStruct187 **param_1,DFUFunctionalDescriptor1dot1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  vector<> local_38 [14];
  undefined1 local_2a [2];
  ushort local_28;
  ushort local_20;
  allocator<> local_1e;
  uchar local_1d [13];
  
  std::allocator<>::allocator();
  std::vector<>::vector(local_38,(allocator *)&local_1e);
  std::allocator<>::~allocator(&local_1e);
  local_20 = 10;
  iVar2 = GetDeviceDescriptor(param_1,'\x02','\0',local_2a,&local_20);
  MM::ThrowIfErrorFunc(iVar2);
  local_1d[0] = '\0';
  local_20 = local_28;
  std::vector<>::resize(local_38,(uint)local_28,local_1d);
  pvVar3 = (void *)std::vector<>::operator[](local_38,0);
  iVar2 = GetDeviceDescriptor(param_1,'\x02','\0',pvVar3,&local_20);
  MM::ThrowIfErrorFunc(iVar2);
  uVar5 = (uint)local_20;
  iVar2 = std::vector<>::operator[](local_38,0);
  pbVar1 = (byte *)(iVar2 + uVar5);
  for (pbVar4 = (byte *)std::vector<>::operator[](local_38,0); pbVar4 < pbVar1;
      pbVar4 = pbVar4 + *pbVar4) {
    if (pbVar4[1] == 4) goto LAB_0000a4f2;
  }
LAB_0000a4f0:
  pbVar4 = (byte *)0x0;
LAB_0000a4f2:
  do {
    if (pbVar4 == (byte *)0x0) {
      uVar7 = 0;
LAB_0000a50c:
      std::vector<>::~vector(local_38);
      return uVar7;
    }
    if ((pbVar4[5] == 0xfe) && (pbVar6 = pbVar4, pbVar4[6] == 1)) {
      for (; pbVar6 < pbVar1; pbVar6 = pbVar6 + *pbVar6) {
        if (pbVar6[1] == 0x21) {
          if (pbVar6 != (byte *)0x0) {
            if (*pbVar6 != 0) {
              _memmove(param_2,pbVar6,(uint)*pbVar6);
            }
            uVar7 = 1;
            if (*pbVar6 == 7) {
              *(undefined2 *)(param_2 + 7) = 0;
            }
            goto LAB_0000a50c;
          }
          break;
        }
      }
    }
    pbVar4 = pbVar4 + *pbVar4;
    while( true ) {
      if (pbVar1 <= pbVar4) goto LAB_0000a4f0;
      if (pbVar4[1] == 4) break;
      pbVar4 = pbVar4 + *pbVar4;
    }
  } while( true );
}



// FirmwareLoader_Cypress::LoadIntelHexRecordIntoDevice(IOUSBDeviceStruct187**, unsigned char,
// unsigned char const*, unsigned short, bool)

void __thiscall
FirmwareLoader_Cypress::LoadIntelHexRecordIntoDevice
          (FirmwareLoader_Cypress *this,IOUSBDeviceStruct187 **param_1,uchar param_2,uchar *param_3,
          ushort param_4,bool param_5)

{
  int iVar1;
  undefined1 local_1c;
  undefined1 auStack_1b [3];
  int local_18;
  uchar *local_14;
  undefined4 local_10;
  
  local_10 = 0;
  _local_1c = CONCAT31(CONCAT21(0,(-!param_5 & 3U) + 0xa0),0x40);
  _local_1c = CONCAT22(param_4,_local_1c);
  local_18 = (uint)param_2 << 0x10;
  local_14 = param_3;
  iVar1 = (**(code **)(*param_1 + 0x68))(param_1,&local_1c);
  MM::ThrowIfErrorFunc(iVar1);
  return;
}



// FirmwareLoader_DFU_AppMode::PutDeviceIntoFirmwareMode(unsigned int, IOUSBDeviceStruct187**,
// unsigned char)

void __thiscall
FirmwareLoader_DFU_AppMode::PutDeviceIntoFirmwareMode
          (FirmwareLoader_DFU_AppMode *this,uint param_1,IOUSBDeviceStruct187 **param_2,
          uchar param_3)

{
  MessageCenter *pMVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  OpenDevice local_58 [24];
  undefined2 local_40;
  ushort uStack_3e;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  DFUFunctionalDescriptor1dot1 local_2d [3];
  ushort local_2a;
  ulong local_24;
  uint local_20 [4];
  
  pMVar1 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  MM::USB::OpenDevice::OpenDevice(local_58,param_1,param_2,pMVar1);
  GetDFUFunctionalDescriptor(param_2,local_2d);
  local_38 = 0;
  local_3c = (uint)param_3;
  local_34 = 0;
  _local_40 = CONCAT22(local_2a,0x21);
  iVar2 = (**(code **)(*param_2 + 0x68))(param_2,&local_40);
  MM::ThrowIfErrorFunc(iVar2);
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2,&local_24);
  MM::ThrowIfErrorFunc(iVar2);
  if ((0x2020 < (ushort)local_24) &&
     (((ushort)local_24 < 0x2024 || ((ushort)((ushort)local_24 + 0xd7df) < 3)))) {
    iVar2 = (**(code **)(*param_2 + 100))(param_2);
    MM::ThrowIfErrorFunc(iVar2);
  }
  uVar3 = 100;
  local_24 = 100;
  if (local_2a < 0x65) {
    uVar3 = (uint)local_2a;
    local_24 = (uint)local_2a;
  }
  while (uVar3 != 0) {
    uVar3 = millisleep(local_24,&local_24);
  }
  iVar2 = (**(code **)(*param_2 + 0x94))(param_2,0);
  MM::ThrowIfErrorFunc(iVar2);
  piVar4 = (int *)MM::GetGlobalServiceGoneDeadMessageCenter();
  local_20[0] = param_1;
  (**(code **)(*piVar4 + 0x1c))(piVar4,local_20,0,0);
  MM::USB::OpenDevice::~OpenDevice(local_58);
  return;
}



// FirmwareLoader_DFU::CompleteLoad(IOUSBDeviceStruct187**, bool, unsigned long, unsigned char)

undefined4 __thiscall
FirmwareLoader_DFU::CompleteLoad
          (FirmwareLoader_DFU *this,IOUSBDeviceStruct187 **param_1,bool param_2,ulong param_3,
          uchar param_4)

{
  undefined4 uVar1;
  int iVar2;
  byte local_26 [4];
  char local_22;
  ulong local_20 [4];
  
  uVar1 = GetDFUStatus(param_1,param_4,local_26,param_2,true);
  if (local_26[0] != 0) {
    MM::ThrowErrorFunc(local_26[0] + 0x47d);
  }
  if (local_22 == '\x02') {
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_20);
    MM::ThrowIfErrorFunc(iVar2);
    if ((short)local_20[0] == 0x2803) {
      return uVar1;
    }
    if ((short)local_20[0] == 0x2815) {
      return uVar1;
    }
  }
  else {
    if (local_22 != '\b') {
      MM::ThrowErrorFunc(0x475);
      return uVar1;
    }
    local_20[0] = 10;
    do {
      iVar2 = millisleep(local_20[0],local_20);
    } while (iVar2 != 0);
  }
  iVar2 = (**(code **)(*param_1 + 0x94))(param_1,0);
  MM::ThrowIfErrorFunc(iVar2);
  return uVar1;
}



// SleepAndGetDFUStatus(IOUSBDeviceStruct187**, unsigned char, unsigned long, unsigned char*, bool,
// bool)

void __regparm3
SleepAndGetDFUStatus
          (IOUSBDeviceStruct187 **param_1,uchar param_2,ulong param_3,uchar *param_4,bool param_5,
          bool param_6)

{
  int iVar1;
  ulong local_20 [4];
  
  local_20[0] = param_3;
  if (param_3 != 0) {
    do {
      iVar1 = millisleep(local_20[0],local_20);
    } while (iVar1 != 0);
  }
  GetDFUStatus(param_1,param_2,param_4,param_5,param_6);
  return;
}



// FirmwareLoader_DFU::LoadFirmwareIntoDevice(bool, unsigned int, IOUSBDeviceStruct187**, unsigned
// short, unsigned char const*, unsigned long, bool (*)(MM::FirmwareLoader::CallBackMessage const&,
// void*), void*)

undefined4 __thiscall
FirmwareLoader_DFU::LoadFirmwareIntoDevice
          (FirmwareLoader_DFU *this,bool param_1,uint param_2,IOUSBDeviceStruct187 **param_3,
          ushort param_4,uchar *param_5,ulong param_6,
          _func_bool_CallBackMessage_ptr_void_ptr *param_7,void *param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  MessageCenter *pMVar6;
  uint uVar7;
  __CFUUID *p_Var8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  bool bVar13;
  undefined4 local_bc;
  ushort local_b2;
  ServicePlugInInterface local_a4 [16];
  IOCFPlugInInterfaceStruct **local_94;
  OpenDevice local_8c [24];
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  IOService local_64 [4];
  uint local_60;
  DFUFunctionalDescriptor1dot1 local_55 [5];
  ushort local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  USBInterfaceIterator local_44 [4];
  undefined4 local_40;
  byte local_3a [4];
  char local_36;
  uint local_34;
  ulong local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  undefined1 local_20 [3];
  uchar local_1d [13];
  
  cVar2 = SimpleCallBack(9,param_7,param_8);
  if (cVar2 != '\0') {
    return 1;
  }
  iVar5 = (**(code **)(*param_3 + 0x38))(param_3,&local_30);
  MM::ThrowIfErrorFunc(iVar5);
  if ((ushort)((ushort)local_30 + 0xd780) < 2) {
    local_30 = 100;
    do {
      iVar5 = millisleep(local_30,&local_30);
    } while (iVar5 != 0);
  }
  if (param_4 < 0x15) {
    iVar5 = (**(code **)(*param_3 + 0x38))(param_3,&local_30);
    MM::ThrowIfErrorFunc(iVar5);
    if (((ushort)local_30 == 0x281b) && (cVar2 = SimpleCallBack(0,param_7,param_8), cVar2 != '\0'))
    {
      MM::ThrowErrorFunc(0x47c);
    }
  }
  iVar5 = MM::FirmwareLoader::GetStreamFooter
                    (param_5,param_6,(_func_bool_CallBackMessage_ptr_void_ptr *)0x0,(void *)0x0);
  bVar13 = iVar5 == 0;
  if (!bVar13) {
    iVar5 = (**(code **)(*param_3 + 0x38))(param_3,&local_30);
    MM::ThrowIfErrorFunc(iVar5);
    if ((ushort)local_30 < 0x2824) {
      if (0x2820 < (ushort)local_30) goto LAB_0000a924;
      uVar4 = (ushort)local_30 + 0xd7eb;
    }
    else {
      uVar4 = (ushort)local_30 + 0xd780;
    }
    if (1 < uVar4) {
      param_6 = param_6 - 0x12;
    }
  }
LAB_0000a924:
  pMVar6 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  MM::USB::OpenDevice::OpenDevice(local_8c,param_2,param_3,pMVar6);
  iVar5 = (**(code **)(*param_3 + 0x54))(param_3,0,&local_28);
  MM::ThrowIfErrorFunc(iVar5);
  iVar5 = (**(code **)(*param_3 + 0x5c))(param_3,*(undefined1 *)(local_28 + 5));
  MM::ThrowIfErrorFunc(iVar5);
  GetDFUFunctionalDescriptor(param_3,local_55);
  iVar5 = (**(code **)(*param_3 + 0x38))(param_3,&local_30);
  MM::ThrowIfErrorFunc(iVar5);
  uVar12 = (uint)local_50;
  if ((ushort)local_30 == 0x281b && param_4 < 0x16) {
    uVar12 = *(int *)(param_5 + 4) + 0xcU & 0xffff;
  }
  local_4c = 0xfe;
  local_4a = 1;
  uVar1 = param_6 % uVar12;
  local_48 = 0xffff;
  local_46 = 0xffff;
  MM::USB::USBInterfaceIterator::USBInterfaceIterator
            (local_44,param_3,(IOUSBFindInterfaceRequest *)&local_4c);
  pMVar6 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  uVar7 = _IOIteratorNext(local_40);
  MM::IOService::IOService(local_64,uVar7,pMVar6);
  pMVar6 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  p_Var8 = (__CFUUID *)
           _CFUUIDGetConstantUUIDWithBytes
                     (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5,0x28,0x61);
  MM::ServicePlugInInterface::ServicePlugInInterface(local_a4,local_60,p_Var8,pMVar6);
  MM::USB::InterfaceInterface::InterfaceInterface((InterfaceInterface *)&local_2c,local_94);
  iVar5 = (**(code **)(*local_2c + 0x44))(local_2c,local_1d);
  MM::ThrowIfErrorFunc(iVar5);
  uVar9 = GetDFUStatus(param_3,local_1d[0],local_3a,bVar13,false);
  if (local_3a[0] != 0) {
    ClearDFUStatus(param_3,local_1d[0]);
    uVar9 = GetDFUStatus(param_3,local_1d[0],local_3a,bVar13,false);
    if (local_3a[0] != 0) {
      MM::ThrowErrorFunc(local_3a[0] + 0x47d);
    }
  }
  if (local_36 != '\x02') {
    iVar5 = (**(code **)(*param_3 + 100))(param_3);
    MM::ThrowIfErrorFunc(iVar5);
    uVar9 = GetDFUStatus(param_3,local_1d[0],local_3a,bVar13,false);
    if (local_3a[0] != 0) {
      ClearDFUStatus(param_3,local_1d[0]);
      uVar9 = GetDFUStatus(param_3,local_1d[0],local_3a,bVar13,false);
      if (local_3a[0] != 0) {
        MM::ThrowErrorFunc(local_3a[0] + 0x47d);
      }
    }
    if (local_36 != '\x02') {
      MM::ThrowErrorFunc(0x475);
    }
  }
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_74 = 10;
  iVar5 = (**(code **)(*param_3 + 0x38))(param_3,local_20);
  MM::ThrowIfErrorFunc(iVar5);
  local_b2 = 0;
LAB_0000ad35:
  if ((ushort)(param_6 / uVar12) <= local_b2) {
    if ((short)uVar1 != 0) {
      uVar9 = (**(code **)(*(int *)this + 0x20))
                        (this,param_3,local_1d[0],(uint)local_b2,param_5 + uVar12 * local_b2,uVar1,
                         uVar9,bVar13,local_3a);
      if (local_36 != '\x05') {
        MM::ThrowErrorFunc(0x475);
      }
      local_b2 = local_b2 + 1;
      if (param_7 != (_func_bool_CallBackMessage_ptr_void_ptr *)0x0) {
        local_70 = local_70 + uVar1;
        bVar3 = (*param_7)((CallBackMessage *)&local_74,param_8);
        if (bVar3) {
          MM::ThrowErrorFunc(-0x80);
        }
      }
    }
    cVar2 = SimpleCallBack(0xb,param_7,param_8);
    local_bc = 1;
    if (cVar2 == '\0') {
      uVar9 = (**(code **)(*(int *)this + 0x20))
                        (this,param_3,local_1d[0],local_b2,0,0,uVar9,bVar13,local_3a);
      while (local_36 == '\x04') {
        uVar9 = SleepAndGetDFUStatus(param_3,local_1d[0],uVar9,local_3a,bVar13,false);
        if (local_3a[0] != 0) {
          MM::ThrowErrorFunc(local_3a[0] + 0x47d);
        }
      }
      if (local_3a[0] == 0xb) {
        piVar11 = (int *)MM::GetGlobalServiceGoneDeadMessageCenter();
        local_24 = param_2;
        (**(code **)(*piVar11 + 0x1c))(piVar11,&local_24,0,0);
        local_30 = 15000;
        do {
          iVar5 = millisleep(local_30,&local_30);
        } while (iVar5 != 0);
      }
      else {
        if (((local_36 == '\a') || (local_36 == '\b')) || (local_36 == '\x06')) {
          (**(code **)(*(int *)this + 0x24))(this,param_3,bVar13,uVar9,local_1d[0]);
        }
        else {
          MM::ThrowErrorFunc(0x475);
        }
        piVar11 = (int *)MM::GetGlobalServiceGoneDeadMessageCenter();
        local_34 = param_2;
        (**(code **)(*piVar11 + 0x1c))(piVar11,&local_34,0,0);
      }
      local_bc = 2;
    }
    MM::ServiceInterface<>::~ServiceInterface((ServiceInterface<> *)&local_2c);
    MM::ServicePlugInInterface::~ServicePlugInInterface(local_a4);
    MM::IOService::~IOService(local_64);
    MM::USB::USBInterfaceIterator::~USBInterfaceIterator(local_44);
    MM::USB::OpenDevice::~OpenDevice(local_8c);
    return local_bc;
  }
  uVar9 = (**(code **)(*(int *)this + 0x20))
                    (this,param_3,local_1d[0],(uint)local_b2,param_5 + uVar12 * local_b2,uVar12,
                     uVar9,bVar13,local_3a);
  if (param_7 == (_func_bool_CallBackMessage_ptr_void_ptr *)0x0) goto LAB_0000ad19;
  local_70 = local_70 + uVar12;
  bVar3 = (*param_7)((CallBackMessage *)&local_74,param_8);
  if (!bVar3) goto LAB_0000ad19;
  lVar10 = -0x80;
  do {
    MM::ThrowErrorFunc(lVar10);
LAB_0000ad19:
    do {
      if (local_36 != '\x04') {
        if (local_36 != '\x05') {
          MM::ThrowErrorFunc(0x475);
        }
        local_b2 = local_b2 + 1;
        goto LAB_0000ad35;
      }
      uVar9 = SleepAndGetDFUStatus(param_3,local_1d[0],uVar9,local_3a,bVar13,false);
    } while (local_3a[0] == 0);
    lVar10 = local_3a[0] + 0x47d;
  } while( true );
}



// FirmwareLoaderImplementation::Try(bool, unsigned int, unsigned char const*, unsigned short,
// IOUSBDeviceStruct187**)

undefined4 __thiscall
FirmwareLoaderImplementation::Try
          (FirmwareLoaderImplementation *this,bool param_1,uint param_2,uchar *param_3,
          ushort param_4,IOUSBDeviceStruct187 **param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_7a [70];
  SmartPtr local_34 [12];
  FileStream local_28 [8];
  char **local_20 [4];
  
  cVar2 = (*(code *)**(undefined4 **)this)(this,local_7a,param_3);
  if (cVar2 == '\0') {
    uVar5 = 0;
    cVar2 = (**(code **)(*(int *)this + 4))(this,local_20,param_3);
    if (cVar2 != '\0') {
      MM::Resource<char>::Resource((Resource<char> *)local_34,local_20[0]);
      MM::Resource<char>::Load((Resource<char> *)local_34);
      iVar6 = MM::Resource<char>::GetSize((Resource<char> *)local_34);
      uVar5 = 1;
      if (param_4 < (ushort)(*(ushort *)*local_20[0] << 8 | *(ushort *)*local_20[0] >> 8)) {
        MM::Resource<char>::Lock((Resource<char> *)local_34);
        uVar5 = (**(code **)(*(int *)this + 0x10))
                          (this,param_1,param_2,param_5,param_4,*local_20[0] + 2,iVar6 + -2,0,0);
      }
      MM::Resource<char>::~Resource((Resource<char> *)local_34);
    }
  }
  else {
    MM::FileStream::FileStream(local_28,local_7a,1,1);
    lVar3 = MM::FileStream::GetSize(local_28);
    MM::SmartPtr::SmartPtr(local_34,lVar3,0);
    pcVar4 = MM::SmartPtr::operator_cast_to_char_(local_34);
    MM::FileStream::Read(local_28,pcVar4,lVar3,true);
    pcVar1 = *(code **)(*(int *)this + 0x10);
    pcVar4 = MM::SmartPtr::operator_cast_to_char_(local_34);
    uVar5 = (*pcVar1)(this,param_1,param_2,param_5,param_4,pcVar4,lVar3,0,0);
    MM::SmartPtr::~SmartPtr(local_34);
    MM::FileStream::~FileStream(local_28);
  }
  return uVar5;
}



// FirmwareLoader_DFU_AppMode::LoadFirmwareIntoDevice(bool, unsigned int, IOUSBDeviceStruct187**,
// unsigned short, unsigned char const*, unsigned long, bool (*)(MM::FirmwareLoader::CallBackMessage
// const&, void*), void*)

undefined4 __thiscall
FirmwareLoader_DFU_AppMode::LoadFirmwareIntoDevice
          (FirmwareLoader_DFU_AppMode *this,bool param_1,uint param_2,IOUSBDeviceStruct187 **param_3
          ,ushort param_4,uchar *param_5,ulong param_6,
          _func_bool_CallBackMessage_ptr_void_ptr *param_7,void *param_8)

{
  char cVar1;
  int iVar2;
  MessageCenter *pMVar3;
  uint uVar4;
  undefined4 uVar5;
  RegistryEntryProperty local_50 [4];
  undefined4 local_4c;
  IOService local_44 [4];
  uint local_40;
  IOService local_38 [12];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24 [4];
  uint local_20 [4];
  
  local_2c = 0xfe;
  local_2a = 1;
  local_28 = 0xffff;
  local_26 = 0;
  iVar2 = (**(code **)(*param_3 + 0x70))(param_3,&local_2c,local_20);
  MM::ThrowIfErrorFunc(iVar2);
  pMVar3 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
  MM::IOService::IOService(local_38,local_20[0],pMVar3);
  uVar4 = _IOIteratorNext(local_20[0]);
  if (uVar4 == 0) {
    _sleep(1);
    uVar4 = _IOIteratorNext(local_20[0]);
    if (uVar4 != 0) goto LAB_0000b2db;
  }
  else {
LAB_0000b2db:
    if ((param_6 != 0) && ((ushort)(*(ushort *)param_5 << 8 | *(ushort *)param_5 >> 8) <= param_4))
    {
      cVar1 = SimpleCallBack(4,param_7,param_8);
      if (cVar1 != '\0') {
        MM::ThrowErrorFunc(-0x80);
      }
    }
    cVar1 = SimpleCallBack(5,param_7,param_8);
    if (cVar1 == '\0') {
      pMVar3 = (MessageCenter *)MM::GetGlobalServiceGoneDeadMessageCenter();
      MM::IOService::IOService(local_44,uVar4,pMVar3);
      MM::RegistryEntryProperty::RegistryEntryProperty
                (local_50,local_40,(__CFString *)&cf_bInterfaceNumber);
      _CFNumberGetValue(local_4c,3,local_24);
      (**(code **)(*(int *)this + 0x20))(this,param_2,param_3,local_24[0]);
      MM::RegistryEntryProperty::~RegistryEntryProperty(local_50);
      MM::IOService::~IOService(local_44);
      uVar5 = 2;
      goto LAB_0000b3df;
    }
  }
  uVar5 = 1;
LAB_0000b3df:
  MM::IOService::~IOService(local_38);
  return uVar5;
}



// MM::FirmwareLoader::LoadFirmwareForDevice(unsigned int, IOUSBDeviceStruct187**)

ushort MM::FirmwareLoader::LoadFirmwareForDevice(uint param_1,IOUSBDeviceStruct187 **param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  RegistryEntryProperty local_44 [4];
  undefined4 local_40;
  FirmwareLoader_Cypress local_38 [12];
  ushort local_2c [2];
  FirmwareLoader_DFU_AppMode local_28 [4];
  FirmwareLoader_DFU local_24 [6];
  ushort local_1e [7];
  
  iVar3 = (**(code **)(*param_2 + 0x38))(param_2,local_1e);
  ThrowIfErrorFunc(iVar3);
  RegistryEntryProperty::RegistryEntryProperty(local_44,param_1,(__CFString *)&cf_bcdDevice);
  _CFNumberGetValue(local_40,3,local_2c);
  uVar2 = local_1e[0];
  uVar1 = local_2c[0];
  FirmwareLoader_DFU_AppMode::FirmwareLoader_DFU_AppMode(local_28);
  iVar3 = FirmwareLoaderImplementation::Try
                    ((FirmwareLoaderImplementation *)local_28,param_1,uVar2,uVar1,param_2);
  FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode(local_28);
  uVar2 = local_1e[0];
  uVar1 = local_2c[0];
  if (iVar3 != 1) {
    if (iVar3 == 2) goto LAB_0000b567;
    FirmwareLoader_DFU::FirmwareLoader_DFU(local_24);
    iVar3 = FirmwareLoaderImplementation::Try
                      ((FirmwareLoaderImplementation *)local_24,param_1,uVar2,uVar1,param_2);
    FirmwareLoader_DFU::~FirmwareLoader_DFU(local_24);
    uVar1 = local_1e[0];
    if (iVar3 != 1) {
      if (iVar3 == 2) goto LAB_0000b567;
      FirmwareLoader_Cypress::FirmwareLoader_Cypress(local_38);
      iVar3 = FirmwareLoaderImplementation::Try
                        ((FirmwareLoaderImplementation *)local_38,param_1,uVar1,local_2c[0],param_2)
      ;
      FirmwareLoader_Cypress::~FirmwareLoader_Cypress(local_38);
      if (iVar3 == 2) goto LAB_0000b567;
    }
  }
  local_1e[0] = 0;
LAB_0000b567:
  RegistryEntryProperty::~RegistryEntryProperty(local_44);
  return local_1e[0];
}



// MM::USB::USBInterfaceIterator::CallCreateInterfaceIterator(IOUSBDeviceStruct187**,
// IOUSBFindInterfaceRequest const&)

undefined4
MM::USB::USBInterfaceIterator::CallCreateInterfaceIterator
          (IOUSBDeviceStruct187 **param_1,IOUSBFindInterfaceRequest *param_2)

{
  int iVar1;
  undefined4 local_10 [3];
  
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,local_10);
  ThrowIfErrorFunc(iVar1);
  return local_10[0];
}



// FirmwareLoaderImplementation::~FirmwareLoaderImplementation()

void __thiscall
FirmwareLoaderImplementation::~FirmwareLoaderImplementation(FirmwareLoaderImplementation *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  return;
}



// FirmwareLoaderImplementation::~FirmwareLoaderImplementation()

void __thiscall
FirmwareLoaderImplementation::~FirmwareLoaderImplementation(FirmwareLoaderImplementation *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  operator_delete(this);
  return;
}



// FirmwareLoader_Cypress::GetFirmwareStreamName()

FirmwareLoader_Cypress * __thiscall
FirmwareLoader_Cypress::GetFirmwareStreamName(FirmwareLoader_Cypress *this)

{
  MM::String::String((String *)this,"cypress",0x8000100);
  return this;
}



// FirmwareLoader_DFU::GetFirmwareStreamName()

FirmwareLoader_DFU * __thiscall FirmwareLoader_DFU::GetFirmwareStreamName(FirmwareLoader_DFU *this)

{
  MM::String::String((String *)this,"dfu",0x8000100);
  return this;
}



// FirmwareLoader_DFU_AppMode::GetFirmwareStreamName()

FirmwareLoader_DFU_AppMode * __thiscall
FirmwareLoader_DFU_AppMode::GetFirmwareStreamName(FirmwareLoader_DFU_AppMode *this)

{
  MM::String::String((String *)this,"dfu-app-mode",0x8000100);
  return this;
}



// MM::USB::USBInterfaceIterator::~USBInterfaceIterator()

void __thiscall MM::USB::USBInterfaceIterator::~USBInterfaceIterator(USBInterfaceIterator *this)

{
  *(undefined **)this = PTR_vtable_000150cc + 8;
  IOIterator::~IOIterator((IOIterator *)this);
  return;
}



// MM::USB::USBInterfaceIterator::~USBInterfaceIterator()

void __thiscall MM::USB::USBInterfaceIterator::~USBInterfaceIterator(USBInterfaceIterator *this)

{
  ~USBInterfaceIterator(this);
  return;
}



// MM::USB::USBInterfaceIterator::~USBInterfaceIterator()

void __thiscall MM::USB::USBInterfaceIterator::~USBInterfaceIterator(USBInterfaceIterator *this)

{
  *(undefined **)this = PTR_vtable_000150cc + 8;
  IOIterator::~IOIterator((IOIterator *)this);
  operator_delete(this);
  return;
}



// FirmwareLoader_Cypress::~FirmwareLoader_Cypress()

void __thiscall FirmwareLoader_Cypress::~FirmwareLoader_Cypress(FirmwareLoader_Cypress *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  operator_delete(this);
  return;
}



// std::allocator<unsigned char>::allocator()

void std::allocator<>::allocator(void)

{
  return;
}



// MM::Resource<char>::Resource(char**)

void __thiscall MM::Resource<char>::Resource(Resource<char> *this,char **param_1)

{
  short sVar1;
  
  *(undefined **)this = PTR_vtable_000150c8 + 8;
  *(char ***)(this + 4) = param_1;
  _GetResAttrs(param_1);
  sVar1 = _ResError();
  if (sVar1 == -0xc0) {
    this[8] = (Resource<char>)0x1;
  }
  else {
    ThrowIfErrorFunc((int)sVar1);
    this[8] = (Resource<char>)0x0;
  }
  return;
}



// MM::ServiceInterface<IOUSBInterfaceStruct183>::CallQueryInterface(IOCFPlugInInterfaceStruct**,
// __CFUUID const*)

undefined4
MM::ServiceInterface<>::CallQueryInterface(IOCFPlugInInterfaceStruct **param_1,__CFUUID *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [4];
  
  pcVar1 = *(code **)(*param_1 + 4);
  _CFUUIDGetUUIDBytes(&local_4c,param_2);
  local_24 = local_40;
  local_30 = local_4c;
  local_2c = local_48;
  local_28 = local_44;
  iVar2 = (*pcVar1)(param_1,local_4c,local_48,local_44,local_40,local_20);
  if (iVar2 != 0) {
    ThrowErrorFunc(0x3ff);
  }
  return local_20[0];
}



// __gnu_cxx::new_allocator<unsigned char>::allocate(unsigned long, void const*)

void __gnu_cxx::new_allocator<>::allocate(ulong param_1,void *param_2)

{
  operator_new((ulong)param_2);
  return;
}



// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > > const&,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > const&)

int __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  return *(int *)param_1 - *(int *)param_2;
}



// bool __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > > const&,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > const&)

bool __gnu_cxx::operator!=(__normal_iterator *param_1,__normal_iterator *param_2)

{
  return *(int *)param_1 != *(int *)param_2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked
// void std::_Destroy<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, std::allocator<unsigned char>
// >(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, std::allocator<unsigned char>)

void std::_Destroy<>(int param_1)

{
  bool bVar1;
  
  while( true ) {
    bVar1 = __gnu_cxx::operator!=
                      ((__normal_iterator *)&param_1,(__normal_iterator *)&stack0x00000008);
    if (!bVar1) break;
    param_1 = param_1 + 1;
  }
  return;
}



// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > std::__copy_backward_normal<true, true>::copy_b_n<__gnu_cxx::__normal_iterator<unsigned
// char*, std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > >(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, __gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >)

void * std::__copy_backward_normal<true,true>::copy_b_n<>(void *param_1,int param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_3 - (param_2 - (int)param_1));
  _memmove(pvVar1,param_1,param_2 - (int)param_1);
  return pvVar1;
}



// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > std::__copy_normal<true, true>::copy_n<__gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > >(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, __gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >)

int std::__copy_normal<true,true>::copy_n<>(void *param_1,int param_2,void *param_3)

{
  _memmove(param_3,param_1,param_2 - (int)param_1);
  return (param_2 - (int)param_1) + (int)param_3;
}



// MM::SystemWrapper<IOUSBInterfaceStruct183**>::SystemWrapper(IOUSBInterfaceStruct183** const&)

void __thiscall
MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,IOUSBInterfaceStruct183 ***param_1)

{
  *(IOUSBInterfaceStruct183 ***)this = *param_1;
  return;
}



// MM::ServiceInterface<IOUSBInterfaceStruct183>::ServiceInterface(IOCFPlugInInterfaceStruct**,
// __CFUUID const*)

void __thiscall
MM::ServiceInterface<>::ServiceInterface
          (ServiceInterface<> *this,IOCFPlugInInterfaceStruct **param_1,__CFUUID *param_2)

{
  IOUSBInterfaceStruct183 **local_10 [3];
  
  local_10[0] = (IOUSBInterfaceStruct183 **)CallQueryInterface(param_1,param_2);
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)this,local_10);
  return;
}



// MM::USB::USBInterfaceIterator::USBInterfaceIterator(IOUSBDeviceStruct187**,
// IOUSBFindInterfaceRequest const&)

void __thiscall
MM::USB::USBInterfaceIterator::USBInterfaceIterator
          (USBInterfaceIterator *this,IOUSBDeviceStruct187 **param_1,
          IOUSBFindInterfaceRequest *param_2)

{
  uint uVar1;
  
  uVar1 = CallCreateInterfaceIterator(param_1,param_2);
  IOIterator::IOIterator((IOIterator *)this,uVar1);
  *(undefined **)this = PTR_vtable_000150cc + 8;
  return;
}



// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > std::__fill_n<true>::fill_n<__gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >, unsigned long, unsigned
// char>(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, unsigned long, unsigned char const&)

void std::__fill_n<true>::fill_n<>(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  uVar1 = *param_3;
  puVar2 = param_1 + param_2;
  for (; param_1 != puVar2; param_1 = param_1 + 1) {
    *param_1 = uVar1;
  }
  return;
}



// void std::__fill<true>::fill<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned
// char, std::allocator<unsigned char> > >, unsigned char>(__gnu_cxx::__normal_iterator<unsigned
// char*, std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >, unsigned char const&)

void std::__fill<true>::fill<>(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  
  uVar1 = *param_3;
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&param_1,(__normal_iterator *)&param_2);
    if (!bVar2) break;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char> >::operator[](unsigned long)

int __thiscall std::vector<>::operator[](vector<> *this,ulong param_1)

{
  return *(int *)this + param_1;
}



// MM::ServiceInterface<IOUSBInterfaceStruct183>::~ServiceInterface()

void __thiscall MM::ServiceInterface<>::~ServiceInterface(ServiceInterface<> *this)

{
  (**(code **)(**(int **)this + 0xc))(*(int **)this);
  return;
}



// MM::USB::InterfaceInterface::InterfaceInterface(IOCFPlugInInterfaceStruct**)

void __thiscall
MM::USB::InterfaceInterface::InterfaceInterface
          (InterfaceInterface *this,IOCFPlugInInterfaceStruct **param_1)

{
  __CFUUID *p_Var1;
  
  p_Var1 = (__CFUUID *)
           _CFUUIDGetConstantUUIDWithBytes
                     (0,0x73,0xc9,0x7a,0xe8,0x9e,0xf3,0x11,0xd4,0xb1,0xd0,0,10,0x27,5,0x28,0x61);
  ServiceInterface<>::ServiceInterface((ServiceInterface<> *)this,param_1,p_Var1);
  return;
}



// __gnu_cxx::__normal_iterator<unsigned char const*, std::vector<unsigned char,
// std::allocator<unsigned char> > >::difference_type
// __gnu_cxx::TEMPNAMEPLACEHOLDERVALUE(__gnu_cxx::__normal_iterator<unsigned char const*,
// std::vector<unsigned char, std::allocator<unsigned char> > > const&,
// __gnu_cxx::__normal_iterator<unsigned char const*, std::vector<unsigned char,
// std::allocator<unsigned char> > > const&)

int __gnu_cxx::operator-(__normal_iterator *param_1,__normal_iterator *param_2)

{
  return *(int *)param_1 - *(int *)param_2;
}



// std::vector<unsigned char, std::allocator<unsigned char> >::size() const

void __thiscall std::vector<>::size(vector<> *this)

{
  undefined4 local_14;
  undefined4 local_10 [3];
  
  local_14 = *(undefined4 *)this;
  local_10[0] = *(undefined4 *)(this + 4);
  __gnu_cxx::operator-((__normal_iterator *)local_10,(__normal_iterator *)&local_14);
  return;
}



// unsigned char* std::__copy_normal<true, false>::copy_n<__gnu_cxx::__normal_iterator<unsigned
// char*, std::vector<unsigned char, std::allocator<unsigned char> > >, unsigned
// char*>(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, __gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >, unsigned char*)

uchar * std::__copy_normal<true,false>::copy_n<>(void *param_1,int param_2,void *param_3)

{
  _memmove(param_3,param_1,param_2 - (int)param_1);
  return (uchar *)((int)param_3 + (param_2 - (int)param_1));
}



// std::allocator<unsigned char>::~allocator()

void __thiscall std::allocator<>::~allocator(allocator<> *this)

{
  return;
}



// std::_Vector_base<unsigned char, std::allocator<unsigned char> >::_Vector_impl::~_Vector_impl()

void __thiscall std::_Vector_base<>::_Vector_impl::~_Vector_impl(_Vector_impl *this)

{
  allocator<>::~allocator((allocator<> *)this);
  return;
}



// std::allocator<unsigned char>::allocator(std::allocator<unsigned char> const&)

void std::allocator<>::allocator(allocator *param_1)

{
  return;
}



// std::_Vector_base<unsigned char, std::allocator<unsigned char>
// >::_Vector_impl::_Vector_impl(std::allocator<unsigned char> const&)

void __thiscall
std::_Vector_base<>::_Vector_impl::_Vector_impl(_Vector_impl *this,allocator *param_1)

{
  allocator<>::allocator((allocator *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



// std::_Vector_base<unsigned char, std::allocator<unsigned char>
// >::_Vector_base(std::allocator<unsigned char> const&)

void __thiscall std::_Vector_base<>::_Vector_base(_Vector_base<> *this,allocator *param_1)

{
  _Vector_impl::_Vector_impl((_Vector_impl *)this,param_1);
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char>
// >::erase(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, __gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >)

undefined4 __thiscall std::vector<>::erase(vector<> *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  allocator local_1d [13];
  
  uVar2 = __copy_normal<true,true>::copy_n<>(param_3,*(undefined4 *)(this + 4),param_2);
  allocator<>::allocator(local_1d);
  _Destroy<>(uVar2,*(undefined4 *)(this + 4),local_1d);
  allocator<>::~allocator((allocator<> *)local_1d);
  iVar1 = *(int *)(this + 4);
  iVar3 = __gnu_cxx::operator-((__normal_iterator *)&param_3,(__normal_iterator *)&param_2);
  *(int *)(this + 4) = iVar1 - iVar3;
  return param_2;
}



// MM::Resource<char>::~Resource()

void __thiscall MM::Resource<char>::~Resource(Resource<char> *this)

{
  int iVar1;
  short sVar2;
  
  *(undefined **)this = PTR_vtable_000150c8 + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    if (this[8] == (Resource<char>)0x0) {
      _ReleaseResource(iVar1);
      sVar2 = _ResError();
    }
    else {
      _DisposeHandle(iVar1);
      sVar2 = _MemError();
    }
    ThrowIfErrorFunc((int)sVar2);
    return;
  }
  return;
}



// MM::Resource<char>::~Resource()

void __thiscall MM::Resource<char>::~Resource(Resource<char> *this)

{
  ~Resource(this);
  return;
}



// MM::Resource<char>::Lock()

void __thiscall MM::Resource<char>::Lock(Resource<char> *this)

{
  short sVar1;
  
  _HLock(*(undefined4 *)(this + 4));
  sVar1 = _MemError();
  ThrowIfErrorFunc((int)sVar1);
  return;
}



// MM::Resource<char>::GetSize()

undefined4 __thiscall MM::Resource<char>::GetSize(Resource<char> *this)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = _GetHandleSize(*(undefined4 *)(this + 4));
  sVar1 = _MemError();
  ThrowIfErrorFunc((int)sVar1);
  return uVar2;
}



// MM::Resource<char>::Load()

void __thiscall MM::Resource<char>::Load(Resource<char> *this)

{
  short sVar1;
  
  _LoadResource(*(undefined4 *)(this + 4));
  sVar1 = _ResError();
  ThrowIfErrorFunc((int)sVar1);
  return;
}



// MM::Resource<char>::~Resource()

void __thiscall MM::Resource<char>::~Resource(Resource<char> *this)

{
  int iVar1;
  short sVar2;
  
  *(undefined **)this = PTR_vtable_000150c8 + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    if (this[8] == (Resource<char>)0x0) {
      _ReleaseResource(iVar1);
      sVar2 = _ResError();
    }
    else {
      _DisposeHandle(iVar1);
      sVar2 = _MemError();
    }
    ThrowIfErrorFunc((int)sVar2);
  }
  operator_delete(this);
  return;
}



// std::_Vector_base<unsigned char, std::allocator<unsigned char> >::~_Vector_base()

void __thiscall std::_Vector_base<>::~_Vector_base(_Vector_base<> *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  _Vector_impl::~_Vector_impl((_Vector_impl *)this);
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char> >::vector(std::allocator<unsigned char>
// const&)

void __thiscall std::vector<>::vector(vector<> *this,allocator *param_1)

{
  _Vector_base<>::_Vector_base((_Vector_base<> *)this,param_1);
  return;
}



// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > > std::__uninitialized_copy_a<__gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >, unsigned char>(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, __gnu_cxx::__normal_iterator<unsigned char*,
// std::vector<unsigned char, std::allocator<unsigned char> > >,
// __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
// char> > >, std::allocator<unsigned char>)

void std::__uninitialized_copy_a<>(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  __copy_normal<true,true>::copy_n<>(param_1,param_2,param_3);
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char> >::~vector()

void __thiscall std::vector<>::~vector(vector<> *this)

{
  int iVar1;
  allocator local_d;
  
  allocator<>::allocator(&local_d);
  for (iVar1 = 0; *(int *)(this + 4) - *(int *)this != iVar1; iVar1 = iVar1 + 1) {
  }
  allocator<>::~allocator((allocator<> *)&local_d);
  _Vector_base<>::~_Vector_base((_Vector_base<> *)this);
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char>
// >::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
// std::allocator<unsigned char> > >, unsigned long, unsigned char const&)

void __thiscall
std::vector<>::_M_fill_insert(vector<> *this,int param_2,void *param_3,undefined1 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  void **ppvVar3;
  int iVar4;
  undefined4 uVar5;
  void *extraout_ECX;
  int iVar6;
  int local_2c;
  void *local_28;
  allocator local_23;
  allocator local_22;
  allocator local_21;
  allocator local_20;
  allocator local_1f;
  allocator local_1e;
  allocator local_1d [13];
  
  if (param_3 != (void *)0x0) {
    local_2c = *(int *)(this + 4);
    if ((void *)(*(int *)(this + 8) - local_2c) < param_3) {
      pvVar2 = (void *)size(this);
      pvVar1 = param_3;
      local_28 = pvVar2;
      if ((void *)~(uint)pvVar2 < param_3) {
        std::__throw_length_error("vector::_M_fill_insert");
        pvVar2 = extraout_ECX;
      }
      ppvVar3 = &param_3;
      if (pvVar1 <= pvVar2) {
        ppvVar3 = &local_28;
      }
      pvVar1 = (void *)0xffffffff;
      if (pvVar2 <= (void *)((int)*ppvVar3 + (int)pvVar2)) {
        pvVar1 = (void *)((int)*ppvVar3 + (int)pvVar2);
      }
      iVar6 = __gnu_cxx::new_allocator<>::allocate((ulong)this,pvVar1);
      allocator<>::allocator(&local_20);
      iVar4 = __uninitialized_copy_a<>(*(undefined4 *)this,param_2,iVar6,&local_20);
      allocator<>::~allocator((allocator<> *)&local_20);
      allocator<>::allocator(&local_1f);
      __fill_n<true>::fill_n<>(iVar4,param_3,param_4);
      allocator<>::~allocator((allocator<> *)&local_1f);
      iVar4 = iVar4 + (int)param_3;
      allocator<>::allocator(&local_1e);
      uVar5 = __uninitialized_copy_a<>(param_2,*(undefined4 *)(this + 4),iVar4,&local_1e);
      allocator<>::~allocator((allocator<> *)&local_1e);
      allocator<>::allocator(local_1d);
      for (iVar4 = 0; iVar4 != *(int *)(this + 4) - *(int *)this; iVar4 = iVar4 + 1) {
      }
      allocator<>::~allocator((allocator<> *)local_1d);
      if (*(void **)this != (void *)0x0) {
        operator_delete(*(void **)this);
      }
      *(undefined4 *)(this + 4) = uVar5;
      *(int *)this = iVar6;
      *(int *)(this + 8) = iVar6 + (int)pvVar1;
    }
    else {
      local_28 = (void *)CONCAT31(local_28._1_3_,*param_4);
      pvVar1 = (void *)__gnu_cxx::operator-
                                 ((__normal_iterator *)&local_2c,(__normal_iterator *)&param_2);
      iVar6 = *(int *)(this + 4);
      if (param_3 < pvVar1) {
        allocator<>::allocator(&local_23);
        pvVar1 = *(void **)(this + 4);
        _memmove(pvVar1,(void *)((int)pvVar1 - (int)param_3),
                 (int)pvVar1 - ((int)pvVar1 - (int)param_3));
        allocator<>::~allocator((allocator<> *)&local_23);
        *(int *)(this + 4) = *(int *)(this + 4) + (int)param_3;
        __copy_backward_normal<true,true>::copy_b_n<>(param_2,iVar6 - (int)param_3,iVar6);
        iVar6 = param_2 + (int)param_3;
      }
      else {
        allocator<>::allocator(&local_22);
        _memset(*(void **)(this + 4),(uint)local_28 & 0xff,(int)param_3 - (int)pvVar1);
        allocator<>::~allocator((allocator<> *)&local_22);
        *(int *)(this + 4) = (int)param_3 + (*(int *)(this + 4) - (int)pvVar1);
        allocator<>::allocator(&local_21);
        __copy_normal<true,false>::copy_n<>(param_2,iVar6,*(undefined4 *)(this + 4));
        allocator<>::~allocator((allocator<> *)&local_21);
        *(int *)(this + 4) = *(int *)(this + 4) + (int)pvVar1;
      }
      __fill<true>::fill<>(param_2,iVar6,&local_28);
    }
  }
  return;
}



// std::vector<unsigned char, std::allocator<unsigned char> >::resize(unsigned long, unsigned char
// const&)

void __thiscall std::vector<>::resize(vector<> *this,ulong param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = size(this);
  if (param_1 < uVar1) {
    erase();
    return;
  }
  iVar2 = size(this);
  _M_fill_insert(this,*(undefined4 *)(this + 4),param_1 - iVar2,param_2);
  return;
}



// FirmwareLoader_Cypress::FirmwareLoader_Cypress()

void __thiscall FirmwareLoader_Cypress::FirmwareLoader_Cypress(FirmwareLoader_Cypress *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_00012588;
  *(undefined4 *)(this + 4) = 0;
  return;
}



// FirmwareLoader_DFU::FirmwareLoader_DFU()

void __thiscall FirmwareLoader_DFU::FirmwareLoader_DFU(FirmwareLoader_DFU *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_00012548;
  return;
}



// FirmwareLoader_DFU_AppMode::FirmwareLoader_DFU_AppMode()

void __thiscall
FirmwareLoader_DFU_AppMode::FirmwareLoader_DFU_AppMode(FirmwareLoader_DFU_AppMode *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_00012508;
  return;
}



// FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode()

void __thiscall
FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode(FirmwareLoader_DFU_AppMode *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  return;
}



// FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode()

void __thiscall
FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode(FirmwareLoader_DFU_AppMode *this)

{
  ~FirmwareLoader_DFU_AppMode(this);
  return;
}



// FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode()

void __thiscall
FirmwareLoader_DFU_AppMode::~FirmwareLoader_DFU_AppMode(FirmwareLoader_DFU_AppMode *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  operator_delete(this);
  return;
}



// FirmwareLoader_DFU::~FirmwareLoader_DFU()

void __thiscall FirmwareLoader_DFU::~FirmwareLoader_DFU(FirmwareLoader_DFU *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  return;
}



// FirmwareLoader_DFU::~FirmwareLoader_DFU()

void __thiscall FirmwareLoader_DFU::~FirmwareLoader_DFU(FirmwareLoader_DFU *this)

{
  ~FirmwareLoader_DFU(this);
  return;
}



// FirmwareLoader_DFU::~FirmwareLoader_DFU()

void __thiscall FirmwareLoader_DFU::~FirmwareLoader_DFU(FirmwareLoader_DFU *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  operator_delete(this);
  return;
}



// FirmwareLoader_Cypress::~FirmwareLoader_Cypress()

void __thiscall FirmwareLoader_Cypress::~FirmwareLoader_Cypress(FirmwareLoader_Cypress *this)

{
  *(undefined ***)this = &PTR_IsFirmwareFileAvailable_000124c8;
  return;
}



// FirmwareLoader_Cypress::~FirmwareLoader_Cypress()

void __thiscall FirmwareLoader_Cypress::~FirmwareLoader_Cypress(FirmwareLoader_Cypress *this)

{
  ~FirmwareLoader_Cypress(this);
  return;
}



uint _MoreCRC32(uint param_1,byte *param_2,uint param_3,char param_4)

{
  uint uVar1;
  
  if (param_2 == (byte *)0x0) {
    param_1 = 0;
    _DebugStr((ConstStr255Param)"\x17MoreAssert failure: buf");
  }
  else {
    if (param_4 != '\0') {
      param_1 = ~param_1;
    }
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar1 = param_1 >> 8 ^ *(uint *)(&_gTable + ((*param_2 ^ param_1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[1] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[2] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[3] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[4] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[5] ^ uVar1) & 0xff) * 4);
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[6] ^ uVar1) & 0xff) * 4);
      param_1 = uVar1 >> 8 ^ *(uint *)(&_gTable + ((param_2[7] ^ uVar1) & 0xff) * 4);
      param_2 = param_2 + 8;
    }
    if (param_3 != 0) {
      uVar1 = 0;
      do {
        uVar1 = uVar1 + 1;
        param_1 = param_1 >> 8 ^ *(uint *)(&_gTable + ((*param_2 ^ param_1) & 0xff) * 4);
        param_2 = param_2 + 1;
      } while (uVar1 != param_3);
    }
    if (param_4 != '\0') {
      param_1 = ~param_1;
    }
  }
  return param_1;
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// MM::GetGlobalServiceGoneDeadMessageCenter()

undefined1 * MM::GetGlobalServiceGoneDeadMessageCenter(void)

{
  int iVar1;
  
  if (GetGlobalServiceGoneDeadMessageCenter()::center == '\0') {
    iVar1 = ___cxa_guard_acquire(&GetGlobalServiceGoneDeadMessageCenter()::center);
    if (iVar1 != 0) {
      MessageCenter<>::MessageCenter
                ((MessageCenter<> *)&GetGlobalServiceGoneDeadMessageCenter()::center);
      ___cxa_guard_release(&GetGlobalServiceGoneDeadMessageCenter()::center);
      ___cxa_atexit(___tcf_0,0,PTR_MACH_HEADER_0001500c);
    }
  }
  return &GetGlobalServiceGoneDeadMessageCenter()::center;
}



void ___tcf_0(void)

{
  MM::MessageCenter<>::~MessageCenter
            ((MessageCenter<> *)&MM::GetGlobalServiceGoneDeadMessageCenter()::center);
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::operator[](unsigned long) const

undefined4 __thiscall MM::Array<>::operator[](Array<> *this,ulong param_1)

{
  undefined4 uVar1;
  HandleLocker local_14 [8];
  
  HandleLocker::HandleLocker(local_14,*(void **)this);
  uVar1 = *(undefined4 *)(**(int **)this + 8 + param_1 * 4);
  HandleLocker::~HandleLocker(local_14);
  return uVar1;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::DistributeMessage(MM::IOServiceGoneDeadMessage
// const&, unsigned long long)

void MM::MessageCenter<>::DistributeMessage(IOServiceGoneDeadMessage *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 in_stack_00000010;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0xc) = uVar1 + 1;
  *(uint *)(param_1 + 0x10) = iVar2 + (uint)(0xfffffffe < uVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar5 = uVar3;
  for (uVar6 = 0; uVar5 = uVar5 - 1, uVar3 != uVar6; uVar6 = uVar6 + 1) {
    piVar4 = (int *)Array<>::operator[]((Array<> *)(param_1 + 4),uVar5);
    (**(code **)(*piVar4 + 8))
              (piVar4,(undefined4)param_2,param_1,uVar1,iVar2,param_2._4_4_,in_stack_00000010);
  }
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::~Array()

void __thiscall MM::Array<>::~Array(Array<> *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HandleLocker local_14 [8];
  
  puVar3 = *(undefined4 **)this;
  iVar1 = *(int *)*puVar3;
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_14,puVar3);
      iVar1 = *(int *)(this + 4);
      for (iVar2 = 0; iVar1 != iVar2; iVar2 = iVar2 + 1) {
        *(int *)(this + 4) = *(int *)(this + 4) + -1;
      }
      HandleLocker::~HandleLocker(local_14);
      puVar3 = *(undefined4 **)this;
    }
    _DisposeHandle(puVar3);
    *(undefined4 *)this = 0x68f168f1;
  }
  else {
    *(int *)*puVar3 = iVar1 + -1;
  }
  return;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::MessageCenter()

void __thiscall MM::MessageCenter<>::MessageCenter(MessageCenter<> *this)

{
  undefined4 uVar1;
  
  *(undefined **)this = PTR_vtable_000150d0 + 8;
  uVar1 = NewHandleInDefaultHeap(8,true);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::CloneStorageIfNecessary()

void __thiscall MM::Array<>::CloneStorageIfNecessary(Array<> *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  HandleLocker local_2c [8];
  HandleLocker local_24 [20];
  
  if (*(int *)**(char ***)this != 0) {
    pcVar1 = (code *)DeduceHandleAllocator(*(char ***)this);
    piVar2 = (int *)(*pcVar1)(8,0);
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_24,*(void **)this);
      HandleLocker::HandleLocker(local_2c,piVar2);
      iVar3 = *(int *)(this + 4) + -1;
      do {
        *(undefined4 *)(*piVar2 + 8 + iVar3 * 4) = *(undefined4 *)(**(int **)this + 8 + iVar3 * 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
      HandleLocker::~HandleLocker(local_2c);
      HandleLocker::~HandleLocker(local_24);
    }
    *(undefined4 *)*piVar2 = 0;
    *(undefined4 *)(*piVar2 + 4) = 0;
    *(int **)this = piVar2;
  }
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::Delete(unsigned long)

void __thiscall MM::Array<>::Delete(Array<> *this,ulong param_1)

{
  short sVar1;
  HandleLocker local_14 [8];
  
  CloneStorageIfNecessary(this);
  HandleLocker::HandleLocker(local_14,*(void **)this);
  sVar1 = _Munger(*(undefined4 *)this,param_1 * 4 + 8,0,4,0,0);
  if (0 < sVar1) {
    sVar1 = 0;
  }
  ThrowIfErrorFunc((int)sVar1);
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  HandleLocker::~HandleLocker(local_14);
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::Contains(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*
// const&) const

undefined4 __thiscall MM::Array<>::Contains(Array<> *this,MessageRecipient **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HandleLocker local_24 [20];
  
  HandleLocker::HandleLocker(local_24,*(void **)this);
  iVar1 = 0;
  iVar2 = *(int *)(this + 4);
  do {
    iVar2 = iVar2 + -1;
    if (*(int *)(this + 4) == iVar1) {
      uVar3 = 0;
      goto LAB_0000c5cb;
    }
    iVar1 = iVar1 + 1;
  } while (*(MessageRecipient **)(**(int **)this + 8 + iVar2 * 4) != *param_1);
  uVar3 = 1;
LAB_0000c5cb:
  HandleLocker::~HandleLocker(local_24);
  return uVar3;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::IsRegistered(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*)

undefined1 MM::MessageCenter<>::IsRegistered(MessageRecipient *param_1)

{
  undefined1 uVar1;
  
  uVar1 = Array<>::Contains((Array<> *)(param_1 + 4),(MessageRecipient **)&stack0x00000008);
  return uVar1;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::GetNextMessageID(unsigned long long&)

void __thiscall MM::MessageCenter<>::GetNextMessageID(MessageCenter<> *this,ulonglong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)param_1 = uVar1;
  return;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::UnregisterRecipient(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*)

void __thiscall
MM::MessageCenter<>::UnregisterRecipient(MessageCenter<> *this,MessageRecipient *param_1)

{
  ulong uVar1;
  MessageRecipient *pMVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  do {
    uVar3 = uVar3 - 1;
    if (uVar1 == uVar4) {
      return;
    }
    uVar4 = uVar4 + 1;
    pMVar2 = (MessageRecipient *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
  } while (pMVar2 != param_1);
  (**(code **)(*(int *)param_1 + 4))(param_1,this);
  Array<>::Delete((Array<> *)(this + 4),uVar3);
  return;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::CountRecipients()

undefined4 __thiscall MM::MessageCenter<>::CountRecipients(MessageCenter<> *this)

{
  return *(undefined4 *)(this + 8);
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined **)this = PTR_vtable_000150d0 + 8;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  for (uVar4 = 0; uVar3 = uVar3 - 1, uVar1 != uVar4; uVar4 = uVar4 + 1) {
    piVar2 = (int *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
    (**(code **)(*piVar2 + 4))(piVar2,this);
  }
  Array<>::~Array((Array<> *)(this + 4));
  return;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ~MessageCenter(this);
  return;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined **)this = PTR_vtable_000150d0 + 8;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  for (uVar4 = 0; uVar3 = uVar3 - 1, uVar1 != uVar4; uVar4 = uVar4 + 1) {
    piVar2 = (int *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
    (**(code **)(*piVar2 + 4))(piVar2,this);
  }
  Array<>::~Array((Array<> *)(this + 4));
  operator_delete(this);
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>::Append(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*
// const&)

int __thiscall MM::Array<>::Append(Array<> *this,MessageRecipient **param_1)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  HandleLocker local_24 [20];
  
  CloneStorageIfNecessary(this);
  _SetHandleSize(*(undefined4 *)this,*(int *)(this + 4) * 4 + 0xc);
  sVar2 = _MemError();
  ThrowIfErrorFunc((int)sVar2);
  HandleLocker::HandleLocker(local_24,*(void **)this);
  iVar3 = *(int *)(this + 4);
  puVar1 = (undefined4 *)(**(int **)this + 8 + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    iVar3 = *(int *)(this + 4);
  }
  *(int *)(this + 4) = iVar3 + 1;
  HandleLocker::~HandleLocker(local_24);
  return iVar3;
}



// MM::MessageCenter<MM::IOServiceGoneDeadMessage>::RegisterRecipient(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*)

void __thiscall
MM::MessageCenter<>::RegisterRecipient(MessageCenter<> *this,MessageRecipient *param_1)

{
  Array<>::Append((Array<> *)(this + 4),&param_1);
  (*(code *)**(undefined4 **)param_1)(param_1,this);
  return;
}



void _CFArrayAppendValue(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFArrayCreateMutable(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFDataCreate(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFDataGetBytePtr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFDataGetLength(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFMessagePortCreateLocal(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFMessagePortCreateRemote(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFMessagePortCreateRunLoopSource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFMessagePortSendRequest(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFNumberGetValue(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRelease(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRetain(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRunLoopAddSource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRunLoopGetCurrent(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRunLoopRemoveSource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRunLoopRun(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFRunLoopStop(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFStringAppendPascalString(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFStringCreateMutable(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFStringGetPascalString(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFStringGetSmallestEncoding(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFUUIDGetConstantUUIDWithBytes(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFUUIDGetUUIDBytes(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CFUserNotificationDisplayNotice(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CloseResFile(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _CopyPascalStringToC(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _DebugStr(ConstStr255Param debuggerMsg)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _DisposeHandle(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _DisposePtr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSClose(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSMakeFSSpec(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSOpenResFile(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSOpenResourceFile(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSPathMakeRef(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSRead(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSWrite(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSpOpenDF(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _FSpOpenRF(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _Get1NamedResource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _GetEOF(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _GetHandleSize(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _GetPtrSize(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _GetResAttrs(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _GetResource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _HGetState(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _HLock(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _HUnlock(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOCreatePlugInInterfaceForService(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IODestroyPlugInInterface(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOIteratorNext(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOMasterPort(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IONotificationPortCreate(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IONotificationPortDestroy(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IONotificationPortGetRunLoopSource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOObjectRelease(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOObjectRetain(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IORegistryEntryCreateCFProperty(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOServiceAddMatchingNotification(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _IOServiceMatching(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LoadResource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _MemError(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _Munger(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _NewHandle(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _NewHandleClear(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _NewPtr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _NewPtrClear(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _PBGetFCBInfoSync(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _PLstrcat(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _PLstrchr(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _PLstrcpy(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _PLstrncpy(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _ReleaseResource(void)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



