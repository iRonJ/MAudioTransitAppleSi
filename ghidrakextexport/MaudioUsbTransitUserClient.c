#include "kext_defs.h"

// MaudioUsbTransitUserClient::MaudioUsbTransitUserClient(OSMetaClass const*)

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::MaudioUsbTransitUserClient
          (MaudioUsbTransitUserClient *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClient::MaudioUsbTransitUserClient(OSMetaClass const*)

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::MaudioUsbTransitUserClient
          (MaudioUsbTransitUserClient *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient()

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient(MaudioUsbTransitUserClient *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this);
  return this;
}



// MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient()

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient(MaudioUsbTransitUserClient *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this);
  return this;
}



// MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient()

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::~MaudioUsbTransitUserClient(MaudioUsbTransitUserClient *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDriverUserClient::~MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this);
  OSObject::operator_delete(this,0x90);
  return this;
}



// MaudioUsbTransitUserClient::getMetaClass() const

undefined1 * MaudioUsbTransitUserClient::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioUsbTransitUserClient::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClient::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitUserClient",
             (OSMetaClass *)&MaudioShDrTransitUsbDriverUserClient::gMetaClass,0x90);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClient::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClient::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitUserClient",
             (OSMetaClass *)&MaudioShDrTransitUsbDriverUserClient::gMetaClass,0x90);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClient::MaudioUsbTransitUserClient()

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::MaudioUsbTransitUserClient(MaudioUsbTransitUserClient *this)

{
  MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitUserClient::MetaClass::alloc() const

MaudioUsbTransitUserClient * MaudioUsbTransitUserClient::MetaClass::alloc(void)

{
  MaudioUsbTransitUserClient *this;
  MaudioUsbTransitUserClient *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x90,in_stack_ffffffe8);
  pMVar1 = (MaudioUsbTransitUserClient *)0x0;
  if (this != (MaudioUsbTransitUserClient *)0x0) {
    MaudioUsbTransitUserClient(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioUsbTransitUserClient::MaudioUsbTransitUserClient()

MaudioUsbTransitUserClient * __thiscall
MaudioUsbTransitUserClient::MaudioUsbTransitUserClient(MaudioUsbTransitUserClient *this)

{
  MaudioShDrTransitUsbDriverUserClient::MaudioShDrTransitUsbDriverUserClient
            ((MaudioShDrTransitUsbDriverUserClient *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitUserClient::getTargetAndMethodForIndex(IOService**, unsigned long)

undefined ** __thiscall
MaudioUsbTransitUserClient::getTargetAndMethodForIndex
          (MaudioUsbTransitUserClient *this,IOService **param_1,ulong param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  if (param_1 != (IOService **)0x0) {
    *param_1 = (IOService *)0x0;
    if (param_2 < 10) {
      ppuVar1 = (undefined **)
                MaudioShDrTransitUsbDriverUserClient::getTargetAndMethodForIndex
                          ((MaudioShDrTransitUsbDriverUserClient *)this,param_1,param_2);
    }
    else {
      ppuVar1 = (undefined **)0x0;
      if (param_2 - 0x3e9 < 2) {
        ppuVar1 = &getTargetAndMethodForIndex(IOService**,unsigned_long)::sMethods +
                  (param_2 - 0x3e9) * 6;
        *param_1 = (IOService *)this;
      }
    }
    if (*param_1 == (IOService *)0x0 || ppuVar1 == (undefined **)0x0) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Super: Unable to process user client message index %ld\n",param_2);
      _IOSleep(3);
      ppuVar1 = (undefined **)0x0;
      *param_1 = (IOService *)0x0;
    }
  }
  return ppuVar1;
}



// MaudioUsbTransitUserClient::start(IOService*)

undefined4 __thiscall
MaudioUsbTransitUserClient::start(MaudioUsbTransitUserClient *this,IOService *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = MaudioShDrTransitUsbDriverUserClient::start
                    ((MaudioShDrTransitUsbDriverUserClient *)this,param_1);
  if (cVar1 != '\0') {
    iVar2 = OSMetaClassBase::safeMetaCast
                      ((OSMetaClassBase *)param_1,
                       (OSMetaClass *)&MaudioUsbTransitUserClientDevice::gMetaClass);
    *(int *)(this + 0x8c) = iVar2;
    if ((iVar2 != 0) && (cVar1 = (**(code **)(*(int *)this + 0x530))(this,0xfa4), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitUserClient::stop(IOService*)

void MaudioUsbTransitUserClient::stop(IOService *param_1)

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



// MaudioUsbTransitUserClient::UcGetPreferenceData(PreferenceData*, unsigned long*) const

undefined4 __thiscall
MaudioUsbTransitUserClient::UcGetPreferenceData
          (MaudioUsbTransitUserClient *this,PreferenceData *param_1,ulong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  if ((*(int *)(this + 0x78) == 0) || (piVar1 = *(int **)(this + 0x8c), piVar1 == (int *)0x0)) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcGetPreferenceData failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x61c))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// MaudioUsbTransitUserClient::UcSetPreferenceData(PreferenceData*, unsigned long)

undefined4 __thiscall
MaudioUsbTransitUserClient::UcSetPreferenceData
          (MaudioUsbTransitUserClient *this,PreferenceData *param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)this + 0x18))(this);
  _IORecursiveLockLock(*(undefined4 *)(this + 0x7c));
  if ((*(int *)(this + 0x78) == 0) || (piVar1 = *(int **)(this + 0x8c), piVar1 == (int *)0x0)) {
    uVar2 = 0xe00002c0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("UcSetPreferenceData failed - device unplugged?\n");
    _IOSleep(3);
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x620))(piVar1,param_1,param_2);
  }
  _IORecursiveLockUnlock(*(undefined4 *)(this + 0x7c));
  (**(code **)(*(int *)this + 0x1c))(this);
  return uVar2;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioUsbTransitUserClient::MetaClass::MetaClass
              ((MetaClass *)&MaudioUsbTransitUserClient::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioUsbTransitUserClient::MetaClass::~MetaClass
              ((MetaClass *)&MaudioUsbTransitUserClient::gMetaClass);
  }
  return;
}



// MaudioUsbTransitUserClient::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitUserClient::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClient::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



