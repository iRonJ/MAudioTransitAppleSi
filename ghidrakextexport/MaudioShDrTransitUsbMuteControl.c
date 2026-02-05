#include "kext_defs.h"

// MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl(OSMetaClass const*)

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this,OSMetaClass *param_1)

{
  IOAudioToggleControl::IOAudioToggleControl((IOAudioToggleControl *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl(OSMetaClass const*)

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this,OSMetaClass *param_1)

{
  IOAudioToggleControl::IOAudioToggleControl((IOAudioToggleControl *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl()

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioToggleControl::~IOAudioToggleControl((IOAudioToggleControl *)this);
  return this;
}



// MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl()

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioToggleControl::~IOAudioToggleControl((IOAudioToggleControl *)this);
  return this;
}



// MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl()

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::~MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioToggleControl::~IOAudioToggleControl((IOAudioToggleControl *)this);
  OSObject::operator_delete(this,0xc0);
  return this;
}



// MaudioShDrTransitUsbMuteControl::getMetaClass() const

undefined1 * MaudioShDrTransitUsbMuteControl::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbMuteControl::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbMuteControl::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbMuteControl",
             (OSMetaClass *)&IOAudioToggleControl::gMetaClass,0xc0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbMuteControl::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbMuteControl::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbMuteControl",
             (OSMetaClass *)&IOAudioToggleControl::gMetaClass,0xc0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl()

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this)

{
  IOAudioToggleControl::IOAudioToggleControl
            ((IOAudioToggleControl *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbMuteControl::MetaClass::alloc() const

MaudioShDrTransitUsbMuteControl * MaudioShDrTransitUsbMuteControl::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbMuteControl *this;
  MaudioShDrTransitUsbMuteControl *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0xc0,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbMuteControl *)0x0;
  if (this != (MaudioShDrTransitUsbMuteControl *)0x0) {
    MaudioShDrTransitUsbMuteControl(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl()

MaudioShDrTransitUsbMuteControl * __thiscall
MaudioShDrTransitUsbMuteControl::MaudioShDrTransitUsbMuteControl
          (MaudioShDrTransitUsbMuteControl *this)

{
  IOAudioToggleControl::IOAudioToggleControl
            ((IOAudioToggleControl *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbMuteControl::Create(MaudioShDrTransitUsbMuteControl::ControlInit*)

MaudioShDrTransitUsbMuteControl * MaudioShDrTransitUsbMuteControl::Create(ControlInit *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbMuteControl *this;
  MaudioShDrTransitUsbMuteControl *pMVar2;
  ulong in_stack_ffffffe8;
  
  pMVar2 = (MaudioShDrTransitUsbMuteControl *)0x0;
  if (param_1 != (ControlInit *)0x0) {
    this = OSObject::operator_new((OSObject *)0xc0,in_stack_ffffffe8);
    pMVar2 = this;
    if (this != (MaudioShDrTransitUsbMuteControl *)0x0) {
      MaudioShDrTransitUsbMuteControl(this);
      cVar1 = (**(code **)(*(int *)this + 0x5e8))(this,param_1,0);
      if (cVar1 == '\0') {
        pMVar2 = (MaudioShDrTransitUsbMuteControl *)0x0;
        (**(code **)(*(int *)this + 0x1c))(this);
      }
    }
  }
  return pMVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbMuteControl::free()

void __thiscall MaudioShDrTransitUsbMuteControl::free(MaudioShDrTransitUsbMuteControl *this)

{
  if (*(int *)(this + 0x94) != 0) {
    _thread_call_free(*(int *)(this + 0x94));
    *(undefined4 *)(this + 0x94) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x00010ab4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbMuteControl::performValueChange(OSObject*)

undefined4 __thiscall
MaudioShDrTransitUsbMuteControl::performValueChange
          (MaudioShDrTransitUsbMuteControl *this,OSObject *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,OSNumber::metaClass);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xac))(piVar1);
    if (*(int *)(this + 0x94) != 0) {
      _thread_call_enter1(*(int *)(this + 0x94),uVar2);
    }
    (**(code **)(**(int **)(this + 0x8c) + 0x604))(*(int **)(this + 0x8c),this[0xb4],uVar2);
  }
  return 0;
}



// MaudioShDrTransitUsbMuteControl::RequestUsbValue(unsigned char, unsigned char*)

int __thiscall
MaudioShDrTransitUsbMuteControl::RequestUsbValue
          (MaudioShDrTransitUsbMuteControl *this,uchar param_1,uchar *param_2)

{
  int iVar1;
  char local_1c;
  uchar local_1b;
  ushort local_1a;
  undefined2 local_18;
  undefined2 local_16;
  uchar *local_14;
  
  if (param_2 != (uchar *)0x0) {
    local_1b = param_1;
    local_1c = (param_1 & 0x80) + 0x21;
    local_1a = (ushort)(byte)this[0x91] << 8 | *(ushort *)(this + 0xb0);
    local_16 = 1;
    local_14 = param_2;
    local_18 = CONCAT11(this[0xa0],this[0x90]);
    if (*(code **)(this + 0x98) != GetControlInterfaceClass) {
      iVar1 = (**(code **)(this + 0x98))(&local_1c,*(undefined4 *)(this + 0x9c),0);
      if (iVar1 == 0) {
        return 0;
      }
      *param_2 = '\0';
      return iVar1;
    }
  }
  return -0x1ffffd3e;
}



// MaudioShDrTransitUsbMuteControl::GetUsbMute(unsigned char*)

void __thiscall
MaudioShDrTransitUsbMuteControl::GetUsbMute(MaudioShDrTransitUsbMuteControl *this,uchar *param_1)

{
  RequestUsbValue(this,0x81,param_1);
  return;
}



// MaudioShDrTransitUsbMuteControl::SetUsbMute(unsigned char)

void __thiscall
MaudioShDrTransitUsbMuteControl::SetUsbMute(MaudioShDrTransitUsbMuteControl *this,uchar param_1)

{
  uchar local_10 [12];
  
  local_10[0] = param_1;
  RequestUsbValue(this,'\x01',local_10);
  return;
}



// MaudioShDrTransitUsbMuteControl::updateUSBValue()

void __thiscall
MaudioShDrTransitUsbMuteControl::updateUSBValue(MaudioShDrTransitUsbMuteControl *this)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)this + 0x5f0);
  uVar2 = (**(code **)(*(int *)this + 0x544))(this);
  (*pcVar1)(this,uVar2);
  return;
}



// MaudioShDrTransitUsbMuteControl::updateValueCallback(void*, void*)

void MaudioShDrTransitUsbMuteControl::updateValueCallback(void *param_1,void *param_2)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = OSMetaClassBase::safeMetaCast(param_1,(OSMetaClass *)&gMetaClass);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00010c76. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(int *)param_1 + 0x5f0))();
      return;
    }
  }
  return;
}



// MaudioShDrTransitUsbMuteControl::SetIsMute(bool, bool)

undefined4 __thiscall
MaudioShDrTransitUsbMuteControl::SetIsMute
          (MaudioShDrTransitUsbMuteControl *this,bool param_1,bool param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)OSNumber::withNumber((ulonglong)param_1,0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*(int *)this + 0x5f0))(this,param_1);
    if (param_2) {
      uVar2 = (**(code **)(*(int *)this + 0x53c))(this,piVar1);
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  return uVar2;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbMuteControl::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbMuteControl::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbMuteControl::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbMuteControl::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbMuteControl::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbMuteControl::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbMuteControl::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbMuteControl::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbMuteControl::init(MaudioShDrTransitUsbMuteControl::ControlInit*,
// OSDictionary*)

bool MaudioShDrTransitUsbMuteControl::init(ControlInit *param_1,OSDictionary *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uchar local_1d [13];
  
  local_1d[0] = '\0';
  if (param_2 != (OSDictionary *)0x0) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x30);
    if ((((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x98) != 0)) &&
        (param_1[0x91] == (ControlInit)0x1)) && (*(int *)(param_1 + 0xa8) == 0)) {
      iVar2 = _thread_call_allocate(updateValueCallback,param_1);
      *(int *)(param_1 + 0x94) = iVar2;
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xb0);
        if (iVar2 == 1) {
          pcVar3 = "Left";
        }
        else if (iVar2 == 2) {
          pcVar3 = "Right";
        }
        else {
          pcVar3 = "All Channels";
          if (iVar2 != 0) goto LAB_00010ea1;
        }
        iVar2 = RequestUsbValue((MaudioShDrTransitUsbMuteControl *)param_1,0x81,local_1d);
        if (iVar2 != 0) goto LAB_00010f20;
        cVar1 = (*_vtable)(param_1,local_1d[0] != '\0',*(undefined4 *)(param_1 + 0xb0),pcVar3,
                           param_1[0xb4],*(undefined4 *)(param_1 + 0xb8),
                           *(undefined4 *)(param_1 + 0xbc),0);
        if (cVar1 != '\0') goto LAB_00010f20;
      }
    }
  }
LAB_00010ea1:
  iVar2 = -0x1ffffd44;
LAB_00010f20:
  return iVar2 == 0;
}



// MaudioShDrTransitUsbMuteControl::updateUSBValue(long)

void __thiscall
MaudioShDrTransitUsbMuteControl::updateUSBValue(MaudioShDrTransitUsbMuteControl *this,long param_1)

{
  uchar local_d [9];
  
  local_d[0] = param_1 != 0;
  RequestUsbValue(this,'\x01',local_d);
  return;
}



