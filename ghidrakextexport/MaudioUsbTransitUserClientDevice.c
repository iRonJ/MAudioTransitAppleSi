#include "kext_defs.h"

// MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice(OSMetaClass const*)

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this,OSMetaClass *param_1)

{
  MaudioUsbTransitDevice::MaudioUsbTransitDevice((MaudioUsbTransitDevice *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice(OSMetaClass const*)

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this,OSMetaClass *param_1)

{
  MaudioUsbTransitDevice::MaudioUsbTransitDevice((MaudioUsbTransitDevice *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitDevice::~MaudioUsbTransitDevice((MaudioUsbTransitDevice *)this);
  return this;
}



// MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitDevice::~MaudioUsbTransitDevice((MaudioUsbTransitDevice *)this);
  return this;
}



// MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::~MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitDevice::~MaudioUsbTransitDevice((MaudioUsbTransitDevice *)this);
  OSObject::operator_delete(this,0x108);
  return this;
}



// MaudioUsbTransitUserClientDevice::getMetaClass() const

undefined1 * MaudioUsbTransitUserClientDevice::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioUsbTransitUserClientDevice::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClientDevice::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitUserClientDevice",
             (OSMetaClass *)&MaudioUsbTransitDevice::gMetaClass,0x108);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClientDevice::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClientDevice::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitUserClientDevice",
             (OSMetaClass *)&MaudioUsbTransitDevice::gMetaClass,0x108);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this)

{
  MaudioUsbTransitDevice::MaudioUsbTransitDevice
            ((MaudioUsbTransitDevice *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitUserClientDevice::MetaClass::alloc() const

MaudioUsbTransitUserClientDevice * MaudioUsbTransitUserClientDevice::MetaClass::alloc(void)

{
  MaudioUsbTransitUserClientDevice *this;
  MaudioUsbTransitUserClientDevice *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x108,in_stack_ffffffe8);
  pMVar1 = (MaudioUsbTransitUserClientDevice *)0x0;
  if (this != (MaudioUsbTransitUserClientDevice *)0x0) {
    MaudioUsbTransitUserClientDevice(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::MaudioUsbTransitUserClientDevice
          (MaudioUsbTransitUserClientDevice *this)

{
  MaudioUsbTransitDevice::MaudioUsbTransitDevice
            ((MaudioUsbTransitDevice *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitUserClientDevice::init(OSDictionary*)

undefined1 __thiscall
MaudioUsbTransitUserClientDevice::init(MaudioUsbTransitUserClientDevice *this,OSDictionary *param_1)

{
  undefined1 uVar1;
  int iVar2;
  MaudioUsbTransitUserClientDevice *pMVar3;
  
  uVar1 = MaudioUsbTransitDevice::init((MaudioUsbTransitDevice *)this,param_1);
  iVar2 = 2;
  pMVar3 = this;
  do {
    pMVar3[0xe4] = (MaudioUsbTransitUserClientDevice)0x1;
    pMVar3 = pMVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this[0xfc] = (MaudioUsbTransitUserClientDevice)0x0;
  this[0xfd] = (MaudioUsbTransitUserClientDevice)0x1;
  return uVar1;
}



// MaudioUsbTransitUserClientDevice::start(IOService*)

bool __thiscall
MaudioUsbTransitUserClientDevice::start(MaudioUsbTransitUserClientDevice *this,IOService *param_1)

{
  char cVar1;
  
  cVar1 = MaudioUsbTransitDevice::start((MaudioUsbTransitDevice *)this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x2c4))(this,0);
  }
  return cVar1 != '\0';
}



// MaudioUsbTransitUserClientDevice::incrementCount()

void __thiscall
MaudioUsbTransitUserClientDevice::incrementCount(MaudioUsbTransitUserClientDevice *this)

{
  MaudioUsbTransitUserClientDevice MVar1;
  
  MVar1 = (MaudioUsbTransitUserClientDevice)0x0;
  if ((byte)((char)this[0x100] + 1U) < 10) {
    MVar1 = (MaudioUsbTransitUserClientDevice)((char)this[0x100] + 1U);
  }
  this[0x100] = MVar1;
  return;
}



// MaudioUsbTransitUserClientDevice::getCount()

MaudioUsbTransitUserClientDevice * __thiscall
MaudioUsbTransitUserClientDevice::getCount(MaudioUsbTransitUserClientDevice *this)

{
  return this + 0x100;
}



// MaudioUsbTransitUserClientDevice::UcGetData(unsigned long, UcMsgData*, unsigned long*) const

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcGetData
          (MaudioUsbTransitUserClientDevice *this,ulong param_1,UcMsgData *param_2,ulong *param_3)

{
  char cVar1;
  
  if (param_3 != (ulong *)0x0 && param_2 != (UcMsgData *)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x2dc))(this,0);
    if (cVar1 == '\0') {
      return 0xe00002cd;
    }
    if (param_1 == 2) {
      _strcpy((char *)(param_2 + 8),"1.8");
      return 0;
    }
  }
  return 0xe00002c2;
}



// MaudioUsbTransitUserClientDevice::UcSetData(unsigned long, UcMsgData*, unsigned long)

undefined4
MaudioUsbTransitUserClientDevice::UcSetData(ulong param_1,UcMsgData *param_2,ulong param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(int *)param_1 + 0x2dc))(param_1,0);
  uVar3 = 0xe00002cd;
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x534))(param_1);
    uVar3 = 0xe00002bc;
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0xec))
                        (piVar2,UcSetDataAction,&param_2,param_3,&stack0x00000010,0);
    }
  }
  return uVar3;
}



// MaudioUsbTransitUserClientDevice::UcSetDataAction(OSObject*, void*, void*, void*, void*)

undefined4
MaudioUsbTransitUserClientDevice::UcSetDataAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
  if (piVar1 != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00002c24. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*piVar1 + 0x5b8))();
    return uVar2;
  }
  return 0xe00002bc;
}



// MaudioUsbTransitUserClientDevice::UcSetDataPerform(unsigned long, UcMsgData*, unsigned long)

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcSetDataPerform
          (MaudioUsbTransitUserClientDevice *this,ulong param_1,UcMsgData *param_2,ulong param_3)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xe00002c2;
  if (0x47 < param_3 && param_2 != (UcMsgData *)0x0) {
    if ((*(OSCollection **)(this + 0x6c) == (OSCollection *)0x0) ||
       (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0x6c)),
       piVar1 == (int *)0x0)) {
      uVar4 = 0xe00002bc;
    }
    else {
      uVar4 = 0xe00002bc;
      (**(code **)(*piVar1 + 0x94))(piVar1);
      while( true ) {
        pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
        iVar3 = OSMetaClassBase::safeMetaCast
                          (pOVar2,(OSMetaClass *)&MaudioUsbTransitEngine::gMetaClass);
        if (iVar3 == 0) break;
        uVar4 = 0;
        if (param_1 != 2) {
          uVar4 = 0xe00002c2;
        }
      }
    }
  }
  return uVar4;
}



// MaudioUsbTransitUserClientDevice::UcGetProperty(unsigned long, unsigned long*) const

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcGetProperty
          (MaudioUsbTransitUserClientDevice *this,ulong param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (ulong *)0x0) {
    return 0xe00002c2;
  }
  cVar1 = (**(code **)(*(int *)this + 0x2dc))(this,0);
  if (cVar1 != '\0') {
    if (param_1 == 0x3ec) {
      uVar2 = (uint)*(short *)(this + 0xec);
    }
    else if (param_1 < 0x3ed) {
      if (param_1 == 4) {
        uVar2 = (uint)(byte)this[0xfd];
      }
      else if (param_1 < 5) {
        if (param_1 == 1) {
          uVar2 = *(uint *)(this + 0x98);
        }
        else {
          if (param_1 != 3) {
            return 0xe00002c2;
          }
          uVar2 = (uint)(byte)this[0xfc];
        }
      }
      else if (param_1 == 0x3ea) {
        uVar2 = (uint)(byte)this[0xf7];
      }
      else {
        if (param_1 != 0x3eb) {
          return 0xe00002c2;
        }
        uVar2 = (uint)(byte)this[0xf5];
      }
    }
    else if (param_1 == 0x3ef) {
      uVar2 = (uint)(byte)this[0xf4];
    }
    else if (param_1 < 0x3f0) {
      if (param_1 == 0x3ed) {
        uVar2 = (uint)*(short *)(this + 0xf0);
      }
      else {
        if (param_1 != 0x3ee) {
          return 0xe00002c2;
        }
        uVar2 = (uint)(byte)this[0xf6];
      }
    }
    else if (param_1 == 0x3f1) {
      uVar2 = (uint)*(short *)(this + 0xee);
    }
    else if (param_1 < 0x3f1) {
      uVar2 = (uint)*(short *)(this + 0xea);
    }
    else {
      if (param_1 != 0x3f2) {
        return 0xe00002c2;
      }
      uVar2 = (uint)*(short *)(this + 0xf8);
    }
    *param_2 = uVar2;
    return 0;
  }
  return 0xe00002cd;
}



// MaudioUsbTransitUserClientDevice::UcSetProperty(unsigned long, unsigned long)

undefined4 MaudioUsbTransitUserClientDevice::UcSetProperty(ulong param_1,ulong param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(int *)param_1 + 0x2dc))(param_1,0);
  uVar3 = 0xe00002cd;
  if (cVar1 != '\0') {
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x534))(param_1);
    uVar3 = 0xe00002bc;
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0xec))
                        (piVar2,UcSetPropertyAction,&param_2,&stack0x0000000c,0,0);
    }
  }
  return uVar3;
}



// MaudioUsbTransitUserClientDevice::UcSetPropertyAction(OSObject*, void*, void*, void*, void*)

undefined4
MaudioUsbTransitUserClientDevice::UcSetPropertyAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
  if (piVar1 != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00002eda. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*piVar1 + 0x5ac))();
    return uVar2;
  }
  return 0xe00002bc;
}



// MaudioUsbTransitUserClientDevice::UcSetPropertyPerform(unsigned long, unsigned long)

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcSetPropertyPerform
          (MaudioUsbTransitUserClientDevice *this,ulong param_1,ulong param_2)

{
  MaudioUsbTransitUserClientDevice MVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0x3ed) {
    iVar2 = *(int *)this;
    uVar3 = 1;
  }
  else {
    MVar1 = SUB41(param_2,0);
    if (param_1 < 0x3ee) {
      if (param_1 == 0x3ea) {
        this[0xf7] = MVar1;
      }
      else {
        if (0x3ea < param_1) {
          if (param_1 == 0x3eb) {
            iVar2 = *(int *)this;
            uVar3 = 2;
            goto LAB_0000301f;
          }
          if (param_1 != 0x3ec) {
            return 0xe00002c2;
          }
          iVar2 = *(int *)this;
          uVar3 = 0;
          goto LAB_00003079;
        }
        if (param_1 == 3) {
          this[0xfc] = MVar1;
        }
        else {
          if (param_1 != 4) {
            return 0xe00002c2;
          }
          this[0xfd] = MVar1;
        }
      }
      return 0;
    }
    if (param_1 == 0x3f0) {
      iVar2 = *(int *)this;
      uVar3 = 3;
    }
    else {
      if (param_1 < 0x3f1) {
        if (param_1 == 0x3ee) {
          this[0xf6] = MVar1;
          return 0;
        }
        if (param_1 != 0x3ef) {
          return 0xe00002c2;
        }
        iVar2 = *(int *)this;
        uVar3 = 5;
LAB_0000301f:
        uVar3 = (**(code **)(iVar2 + 0x608))(this,uVar3,param_2 != 0,1);
        return uVar3;
      }
      if (param_1 == 0x3f1) {
        iVar2 = *(int *)this;
        uVar3 = 4;
      }
      else {
        if (param_1 != 0x3f2) {
          return 0xe00002c2;
        }
        iVar2 = *(int *)this;
        uVar3 = 6;
      }
    }
  }
LAB_00003079:
  uVar3 = (**(code **)(iVar2 + 0x5f0))(this,uVar3,(int)(short)param_2,1);
  return uVar3;
}



// MaudioUsbTransitUserClientDevice::UcSendMessage(unsigned long) const

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcSendMessage
          (MaudioUsbTransitUserClientDevice *this,ulong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002d8;
  if (*(int *)(this + 0x9c) != 0) {
    UcSendMessage(unsigned_long)::header = param_1;
    cVar1 = (**(code **)(**(int **)(this + 0x9c) + 0xa0))
                      (*(int **)(this + 0x9c),&UcSendMessage(unsigned_long)::header,4);
    uVar2 = 0;
    if (cVar1 == '\0') {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("UcSendMessage failed - data queue full?\n");
      _IOSleep(3);
      uVar2 = 0xe00002d8;
    }
  }
  return uVar2;
}



// MaudioUsbTransitUserClientDevice::UcGetPreferenceData(PreferenceData*, unsigned long*) const

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcGetPreferenceData
          (MaudioUsbTransitUserClientDevice *this,PreferenceData *param_1,ulong *param_2)

{
  char cVar1;
  
  if (((param_2 != (ulong *)0x0 && param_1 != (PreferenceData *)0x0) && (*param_2 == 0x1c)) &&
     (cVar1 = (**(code **)(*(int *)this + 0x2dc))(this,0), cVar1 != '\0')) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0xe4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xe8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0xec);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xf0);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0xf4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0xf8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0xfc);
    return 0;
  }
  return 0xe00002c2;
}



// MaudioUsbTransitUserClientDevice::UcSetPreferenceData(PreferenceData*, unsigned long)

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcSetPreferenceData
          (MaudioUsbTransitUserClientDevice *this,PreferenceData *param_1,ulong param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0xe00002c2;
  if (param_2 == 0x1c && param_1 != (PreferenceData *)0x0) {
    cVar1 = (**(code **)(*(int *)this + 0x2dc))(this,0);
    uVar3 = 0xe00002cd;
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(*(int *)this + 0x534))(this);
      uVar3 = 0xe00002bc;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0xec))(piVar2,UcSetPreferenceDataAction,param_1,&param_2,0,0)
        ;
      }
    }
  }
  return uVar3;
}



// MaudioUsbTransitUserClientDevice::UcSetPreferenceDataAction(OSObject*, void*, void*, void*,
// void*)

undefined4
MaudioUsbTransitUserClientDevice::UcSetPreferenceDataAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
  if ((param_2 != (void *)0x0 && piVar1 != (int *)0x0) && (param_3 != (void *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00003280. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*piVar1 + 0x624))();
    return uVar2;
  }
  return 0xe00002c2;
}



// MaudioUsbTransitUserClientDevice::UcSetPreferenceDataPerform(PreferenceData*, unsigned long)

undefined4 __thiscall
MaudioUsbTransitUserClientDevice::UcSetPreferenceDataPerform
          (MaudioUsbTransitUserClientDevice *this,PreferenceData *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  OSMetaClassBase *pOVar3;
  MaudioUsbTransitEngine *this_00;
  undefined4 uVar4;
  
  if (((param_2 == 0x1c && param_1 != (PreferenceData *)0x0) &&
      (*(OSCollection **)(this + 0x6c) != (OSCollection *)0x0)) &&
     (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0x6c)),
     piVar1 != (int *)0x0)) {
    uVar4 = 0xe00002c2;
    (**(code **)(*piVar1 + 0x94))(piVar1);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
      this_00 = (MaudioUsbTransitEngine *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioUsbTransitEngine::gMetaClass);
      if (this_00 == (MaudioUsbTransitEngine *)0x0) break;
      *(undefined4 *)(this + 0xe4) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x18);
      MaudioUsbTransitEngine::SetPreferenceData(this_00,(PreferenceData *)(this + 0xe4));
      iVar2 = (**(code **)(*(int *)this_00 + 0x698))(this_00);
      if (iVar2 != 0) {
        uVar4 = (**(code **)(*(int *)this_00 + 0x6e4))(this_00,iVar2,0,0,0);
      }
    }
  }
  else {
    uVar4 = 0xe00002c2;
  }
  return uVar4;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioUsbTransitUserClientDevice::MetaClass::MetaClass
              ((MetaClass *)&MaudioUsbTransitUserClientDevice::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioUsbTransitUserClientDevice::MetaClass::~MetaClass
              ((MetaClass *)&MaudioUsbTransitUserClientDevice::gMetaClass);
  }
  return;
}



// MaudioUsbTransitUserClientDevice::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClientDevice::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitUserClientDevice::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitUserClientDevice::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



