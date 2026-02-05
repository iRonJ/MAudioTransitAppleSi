#include "kext_defs.h"

// MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient(OSMetaClass const*)

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this,OSMetaClass *param_1)

{
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient(OSMetaClass const*)

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this,OSMetaClass *param_1)

{
  IOUserClient::IOUserClient((IOUserClient *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient()

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this)

{
  *(undefined **)this = &vtable;
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient()

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this)

{
  *(undefined **)this = &vtable;
  IOUserClient::~IOUserClient((IOUserClient *)this);
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient()

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this)

{
  *(undefined **)this = &vtable;
  IOUserClient::~IOUserClient((IOUserClient *)this);
  OSObject::operator_delete(this,0x8c);
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::getMetaClass() const

undefined1 * MaudioShDrTransitUsbDriverUserClient::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbDriverUserClient::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbDriverUserClient::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbDriverUserClient",
             (OSMetaClass *)&IOUserClient::gMetaClass,0x8c);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbDriverUserClient::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbDriverUserClient",
             (OSMetaClass *)&IOUserClient::gMetaClass,0x8c);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient()

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this)

{
  IOUserClient::IOUserClient((IOUserClient *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::MetaClass::alloc() const

MaudioShDrTransitUsbDriverUserClient * MaudioShDrTransitUsbDriverUserClient::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbDriverUserClient *this;
  MaudioShDrTransitUsbDriverUserClient *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x8c,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbDriverUserClient *)0x0;
  if (this != (MaudioShDrTransitUsbDriverUserClient *)0x0) {
    MaudioShDrTransitUsbDriverUserClient(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient()

MaudioShDrTransitUsbDriverUserClient * __thiscall
MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
          (MaudioShDrTransitUsbDriverUserClient *this)

{
  IOUserClient::IOUserClient((IOUserClient *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::getTargetAndMethodForIndex(IOService**, unsigned long)

undefined ** __thiscall
MaudioShDrTransitUsbDriverUserClient::getTargetAndMethodForIndex
          (MaudioShDrTransitUsbDriverUserClient *this,IOService **param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if (param_1 != (IOService **)0x0) {
    *param_1 = (IOService *)0x0;
    if (param_2 < 10) {
      *param_1 = (IOService *)this;
      ppuVar1 = &getTargetAndMethodForIndex(IOService**,unsigned_long)::sMethods + param_2 * 6;
    }
    if (*param_1 == (IOService *)0x0 || ppuVar1 == (undefined **)0x0) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Base: Unable to process user client message index %d\n",param_2);
      _IOSleep(3);
      ppuVar1 = (undefined **)0x0;
      *param_1 = (IOService *)0x0;
    }
  }
  return ppuVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::initWithTask(task*, void*, unsigned long)

bool __thiscall
MaudioShDrTransitUsbDriverUserClient::initWithTask
          (MaudioShDrTransitUsbDriverUserClient *this,task *param_1,void *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = (*_vtable)(this,param_1,param_2,param_3);
  if ((cVar1 == '\0') || (param_1 == (task *)0x0)) {
    bVar3 = false;
  }
  else {
    *(undefined4 *)(this + 0x78) = 0;
    iVar2 = _IORecursiveLockAlloc();
    *(undefined4 *)(this + 0x84) = 0;
    this[0x88] = (MaudioShDrTransitUsbDriverUserClient)0x0;
    bVar3 = iVar2 != 0;
    *(int *)(this + 0x7c) = iVar2;
  }
  return bVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::free()

void __thiscall
MaudioShDrTransitUsbDriverUserClient::free(MaudioShDrTransitUsbDriverUserClient *this)

{
  if (*(int *)(this + 0x7c) != 0) {
    _IORecursiveLockFree(*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x0000cabe. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbDriverUserClient::AllocateDataQueue(unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::AllocateDataQueue
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1)

{
  int iVar1;
  IODataQueue *pIVar2;
  IOMemoryDescriptor *pIVar3;
  undefined4 uVar4;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  if (*(MaudioShDrTransitUsbDevice **)(this + 0x78) == (MaudioShDrTransitUsbDevice *)0x0)
  goto LAB_0000cb57;
  iVar1 = MaudioShDrTransitUsbDevice::UcGetDataQueue(*(MaudioShDrTransitUsbDevice **)(this + 0x78));
  if (iVar1 == 0) {
    iVar1 = MaudioShDrTransitUsbDevice::UcGetMemoryDescriptor
                      (*(MaudioShDrTransitUsbDevice **)(this + 0x78));
    if (iVar1 == 0) {
      pIVar2 = (IODataQueue *)IODataQueue::withCapacity(param_1);
      if (pIVar2 != (IODataQueue *)0x0) {
        pIVar3 = (IOMemoryDescriptor *)(**(code **)(*(int *)pIVar2 + 0xa8))(pIVar2);
        if (pIVar3 != (IOMemoryDescriptor *)0x0) {
          MaudioShDrTransitUsbDevice::UcSetDataQueue
                    (*(MaudioShDrTransitUsbDevice **)(this + 0x78),pIVar2);
          MaudioShDrTransitUsbDevice::UcSetMemoryDescriptor
                    (*(MaudioShDrTransitUsbDevice **)(this + 0x78),pIVar3);
          *(IODataQueue **)(this + 0x80) = pIVar2;
          goto LAB_0000cb5b;
        }
        (**(code **)(*(int *)pIVar2 + 0x1c))(pIVar2);
      }
LAB_0000cb57:
      uVar4 = 0;
      goto LAB_0000cb60;
    }
  }
LAB_0000cb5b:
  uVar4 = 1;
LAB_0000cb60:
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::start(IOService*)

bool __thiscall
MaudioShDrTransitUsbDriverUserClient::start
          (MaudioShDrTransitUsbDriverUserClient *this,IOService *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  cVar1 = (*_vtable)(this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x18))(this);
    _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
    iVar2 = OSMetaClassBase::safeMetaCast
                      ((OSMetaClassBase *)param_1,
                       (OSMetaClass *)&MaudioShDrTransitUsbDevice::gMetaClass);
    bVar3 = iVar2 != 0;
    *(int *)(this + 0x78) = iVar2;
    _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
    (**(code **)(*(int *)this + 0x1c))(this);
  }
  return bVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::stop(IOService*)

void MaudioShDrTransitUsbDriverUserClient::stop(IOService *param_1)

{
  (**(code **)(*(int *)param_1 + 0x18))(param_1);
  _IORecursiveLockLock(*(undefined4 *)(param_1 + 0x7c));
  while (*(int *)(param_1 + 0x78) != 0) {
    (**(code **)(*(int *)param_1 + 0x534))(param_1);
    (**(code **)(**(int **)(param_1 + 0x78) + 0x2d8))(*(int **)(param_1 + 0x78),param_1,0);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  _IORecursiveLockUnlock(*(undefined4 *)(param_1 + 0x7c));
  (**(code **)(*(int *)param_1 + 0x1c))(param_1);
                    // WARNING: Could not recover jumptable at 0x0000cc79. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbDriverUserClient::open()

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::open(MaudioShDrTransitUsbDriverUserClient *this)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002d9;
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    uVar2 = 0;
    (**(code **)(*piVar1 + 0x2d4))(piVar1,this,0,0);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::close()

uint __thiscall
MaudioShDrTransitUsbDriverUserClient::close(MaudioShDrTransitUsbDriverUserClient *this)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  iVar1 = *(int *)(this + 0x78);
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return -(uint)(iVar1 == 0) & 0xe00002d9;
}



// MaudioShDrTransitUsbDriverUserClient::clientClose()

undefined4 MaudioShDrTransitUsbDriverUserClient::clientClose(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::clientDied()

void __thiscall
MaudioShDrTransitUsbDriverUserClient::clientDied(MaudioShDrTransitUsbDriverUserClient *this)

{
  char cVar1;
  MaudioShDrTransitUsbDriverUserClient *local_10 [2];
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  if (*(int *)(this + 0x78) != 0) {
    local_10[0] = (MaudioShDrTransitUsbDriverUserClient *)0x0;
    cVar1 = (**(code **)(**(int **)(this + 0x78) + 0x5dc))(*(int **)(this + 0x78),local_10);
    if ((cVar1 != '\0') && (this == local_10[0])) {
      (**(code **)(**(int **)(this + 0x78) + 0x5d8))(*(int **)(this + 0x78),this);
    }
    (**(code **)(*(int *)this + 0x534))(this);
    (**(code **)(**(int **)(this + 0x78) + 0x2d8))(*(int **)(this + 0x78),this,0);
    *(undefined4 *)(this + 0x78) = 0;
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  (*_vtable)(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::message(unsigned long, IOService*, void*)

void MaudioShDrTransitUsbDriverUserClient::message(ulong param_1,IOService *param_2,void *param_3)

{
                    // WARNING: Could not recover jumptable at 0x0000cdec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::finalize(unsigned long)

undefined1 __thiscall
MaudioShDrTransitUsbDriverUserClient::finalize
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1)

{
  undefined1 uVar1;
  
  uVar1 = (*_vtable)(this,param_1);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbDriverUserClient::terminate(unsigned long)

undefined1 __thiscall
MaudioShDrTransitUsbDriverUserClient::terminate
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1)

{
  undefined1 uVar1;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  while (*(int *)(this + 0x78) != 0) {
    (**(code **)(*(int *)this + 0x534))(this);
    (**(code **)(**(int **)(this + 0x78) + 0x2d8))(*(int **)(this + 0x78),this,0);
    *(undefined4 *)(this + 0x78) = 0;
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  uVar1 = (*_vtable)(this,param_1);
  return uVar1;
}



// MaudioShDrTransitUsbDriverUserClient::clientMemoryForType(unsigned long, unsigned long*,
// IOMemoryDescriptor**)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::clientMemoryForType
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,ulong *param_2,
          IOMemoryDescriptor **param_3)

{
  MaudioShDrTransitUsbDevice *this_00;
  IOMemoryDescriptor *pIVar1;
  undefined4 uVar2;
  
  if (param_3 != (IOMemoryDescriptor **)0x0 && param_2 != (ulong *)0x0) {
    *param_3 = (IOMemoryDescriptor *)0x0;
    *param_2 = 0;
    if (param_1 == 0) {
      if (this[0x88] == (MaudioShDrTransitUsbDriverUserClient)0x0) {
        (**(code **)(*(int *)this + 0x18))(this);
        _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
        this_00 = *(MaudioShDrTransitUsbDevice **)(this + 0x78);
        if (((this_00 == (MaudioShDrTransitUsbDevice *)0x0) ||
            (this_00[0xa8] != (MaudioShDrTransitUsbDevice)0x0)) ||
           (pIVar1 = (IOMemoryDescriptor *)
                     MaudioShDrTransitUsbDevice::UcGetMemoryDescriptor(this_00),
           pIVar1 == (IOMemoryDescriptor *)0x0)) {
          uVar2 = 0xe00002bd;
        }
        else {
          (**(code **)(*(int *)pIVar1 + 0x18))(pIVar1);
          *param_3 = pIVar1;
          uVar2 = 0;
          *param_2 = 0;
          *(undefined1 *)(*(int *)(this + 0x78) + 0xa8) = 1;
        }
        _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
        (**(code **)(*(int *)this + 0x1c))(this);
        return uVar2;
      }
      *(undefined4 *)(this + 0x84) = 0;
      return 0;
    }
  }
  return 0xe00002bd;
}



// MaudioShDrTransitUsbDriverUserClient::registerNotificationPort(ipc_port*, unsigned long, unsigned
// long)

undefined4
MaudioShDrTransitUsbDriverUserClient::registerNotificationPort
          (ipc_port *param_1,ulong param_2,ulong param_3)

{
  MaudioShDrTransitUsbDevice *this;
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)param_1 + 0x18))(param_1);
  _IORecursiveLockLock(*(undefined4 *)(param_1 + 0x7c));
  this = *(MaudioShDrTransitUsbDevice **)(param_1 + 0x78);
  if (this != (MaudioShDrTransitUsbDevice *)0x0) {
    uVar2 = 0;
    if (this[0xa0] != (MaudioShDrTransitUsbDevice)0x0) goto LAB_0000cfd3;
    piVar1 = (int *)MaudioShDrTransitUsbDevice::UcGetDataQueue(this);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa4))(piVar1,param_2);
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0xa0) = 1;
      goto LAB_0000cfd3;
    }
  }
  uVar2 = 0xe00002bc;
LAB_0000cfd3:
  _IORecursiveLockUnlock(*(undefined4 *)(param_1 + 0x7c));
  (**(code **)(*(int *)param_1 + 0x1c))(param_1);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcGetProperty(unsigned long, unsigned long*) const

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcGetProperty
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,ulong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcGetProperty failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5a4))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcSetProperty(unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcSetProperty
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSetProperty failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5a8))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcSetPropertyPerform(unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcSetPropertyPerform
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSetPropertyPerform failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5ac))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcGetData(unsigned long, UcMsgData*, unsigned long*) const

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcGetData
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,UcMsgData *param_2,
          ulong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcGetData failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5b0))(piVar1,param_1,param_2,param_3);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcSetData(unsigned long, UcMsgData*, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcSetData
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,UcMsgData *param_2,ulong param_3
          )

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSetData failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5b4))(piVar1,param_1,param_2,param_3);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcSetDataPerform(unsigned long, UcMsgData*, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcSetDataPerform
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1,UcMsgData *param_2,ulong param_3
          )

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSetDataPerform failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5b8))(piVar1,param_1,param_2,param_3);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcSendMessage(unsigned long) const

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcSendMessage
          (MaudioShDrTransitUsbDriverUserClient *this,ulong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSendMessage failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x5bc))(piVar1,param_1);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UcErrorReport(int*)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcErrorReport
          (MaudioShDrTransitUsbDriverUserClient *this,int *param_1)

{
  int iVar1;
  
  if (*(MaudioShDrTransitUsbDevice **)(this + 0x78) != (MaudioShDrTransitUsbDevice *)0x0) {
    iVar1 = MaudioShDrTransitUsbDevice::ReportErrorsToClient
                      (*(MaudioShDrTransitUsbDevice **)(this + 0x78));
    *param_1 = iVar1;
  }
  return 0;
}



// MaudioShDrTransitUsbDriverUserClient::UcUsbClassRequestSet(UcUsbClassRequest*)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UcUsbClassRequestSet
          (MaudioShDrTransitUsbDriverUserClient *this,UcUsbClassRequest *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002c0;
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x5c0))(piVar1,param_1);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioShDrTransitUsbDriverUserClient::UsbClassRequestGet(UcUsbClassRequest*, void*)

undefined4 __thiscall
MaudioShDrTransitUsbDriverUserClient::UsbClassRequestGet
          (MaudioShDrTransitUsbDriverUserClient *this,UcUsbClassRequest *param_1,void *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002c0;
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  piVar1 = *(int **)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x5c8))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbDriverUserClient::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbDriverUserClient::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbDriverUserClient::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbDriverUserClient::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbDriverUserClient::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbDriverUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbDriverUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbDriverUserClient::KillDataQueue()

void __thiscall
MaudioShDrTransitUsbDriverUserClient::KillDataQueue(MaudioShDrTransitUsbDriverUserClient *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  if (*(MaudioShDrTransitUsbDevice **)(this + 0x78) != (MaudioShDrTransitUsbDevice *)0x0) {
    piVar2 = (int *)MaudioShDrTransitUsbDevice::UcGetDataQueue
                              (*(MaudioShDrTransitUsbDevice **)(this + 0x78));
    if ((piVar2 != (int *)0x0) && (piVar2 == *(int **)(this + 0x80))) {
      this[0x88] = (MaudioShDrTransitUsbDriverUserClient)0x1;
      *(undefined4 *)(this + 0x84) = 500;
      cVar1 = (**(code **)(*piVar2 + 0xa0))(piVar2,&kMsgStopListening,4);
      if (cVar1 == '\0') {
        _IOLog("%s: ","M-Audio Transit USB");
        _IOLog("kMsgStopListening failed - data queue overflow?\n");
        _IOSleep(3);
      }
      while (0 < *(int *)(this + 0x84)) {
        _IOSleep(2);
        *(int *)(this + 0x84) = *(int *)(this + 0x84) + -1;
      }
      this[0x88] = (MaudioShDrTransitUsbDriverUserClient)0x0;
      MaudioShDrTransitUsbDevice::UcSetDataQueue
                (*(MaudioShDrTransitUsbDevice **)(this + 0x78),(IODataQueue *)0x0);
      *(undefined1 *)(*(int *)(this + 0x78) + 0xa0) = 0;
      iVar3 = MaudioShDrTransitUsbDevice::UcGetMemoryDescriptor
                        (*(MaudioShDrTransitUsbDevice **)(this + 0x78));
      if (iVar3 != 0) {
        MaudioShDrTransitUsbDevice::UcSetMemoryDescriptor
                  (*(MaudioShDrTransitUsbDevice **)(this + 0x78),(IOMemoryDescriptor *)0x0);
        *(undefined1 *)(*(int *)(this + 0x78) + 0xa8) = 0;
      }
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return;
}



