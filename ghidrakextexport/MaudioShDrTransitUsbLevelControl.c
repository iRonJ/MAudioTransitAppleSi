#include "kext_defs.h"

// MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl(OSMetaClass const*)

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this,OSMetaClass *param_1)

{
  IOAudioLevelControl::IOAudioLevelControl((IOAudioLevelControl *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl(OSMetaClass const*)

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this,OSMetaClass *param_1)

{
  IOAudioLevelControl::IOAudioLevelControl((IOAudioLevelControl *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl()

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioLevelControl::~IOAudioLevelControl((IOAudioLevelControl *)this);
  return this;
}



// MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl()

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioLevelControl::~IOAudioLevelControl((IOAudioLevelControl *)this);
  return this;
}



// MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl()

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::~MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this)

{
  *(undefined **)this = &vtable;
  IOAudioLevelControl::~IOAudioLevelControl((IOAudioLevelControl *)this);
  OSObject::operator_delete(this,0xec);
  return this;
}



// MaudioShDrTransitUsbLevelControl::getMetaClass() const

undefined1 * MaudioShDrTransitUsbLevelControl::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbLevelControl::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbLevelControl::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbLevelControl",
             (OSMetaClass *)&IOAudioLevelControl::gMetaClass,0xec);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbLevelControl::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbLevelControl::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbLevelControl",
             (OSMetaClass *)&IOAudioLevelControl::gMetaClass,0xec);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl()

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this)

{
  IOAudioLevelControl::IOAudioLevelControl((IOAudioLevelControl *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbLevelControl::MetaClass::alloc() const

MaudioShDrTransitUsbLevelControl * MaudioShDrTransitUsbLevelControl::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbLevelControl *this;
  MaudioShDrTransitUsbLevelControl *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0xec,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbLevelControl *)0x0;
  if (this != (MaudioShDrTransitUsbLevelControl *)0x0) {
    MaudioShDrTransitUsbLevelControl(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl()

MaudioShDrTransitUsbLevelControl * __thiscall
MaudioShDrTransitUsbLevelControl::MaudioShDrTransitUsbLevelControl
          (MaudioShDrTransitUsbLevelControl *this)

{
  IOAudioLevelControl::IOAudioLevelControl((IOAudioLevelControl *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbLevelControl::Create(MaudioShDrTransitUsbLevelControl::ControlInit*)

MaudioShDrTransitUsbLevelControl * MaudioShDrTransitUsbLevelControl::Create(ControlInit *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbLevelControl *this;
  MaudioShDrTransitUsbLevelControl *pMVar2;
  ulong in_stack_ffffffe8;
  
  pMVar2 = (MaudioShDrTransitUsbLevelControl *)0x0;
  if (param_1 != (ControlInit *)0x0) {
    this = OSObject::operator_new((OSObject *)0xec,in_stack_ffffffe8);
    pMVar2 = this;
    if (this != (MaudioShDrTransitUsbLevelControl *)0x0) {
      MaudioShDrTransitUsbLevelControl(this);
      cVar1 = (**(code **)(*(int *)this + 0x610))(this,param_1,0);
      if (cVar1 == '\0') {
        pMVar2 = (MaudioShDrTransitUsbLevelControl *)0x0;
        (**(code **)(*(int *)this + 0x1c))(this);
      }
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbLevelControl::GetUsbVolumeCur(short*)

void __thiscall
MaudioShDrTransitUsbLevelControl::GetUsbVolumeCur
          (MaudioShDrTransitUsbLevelControl *this,short *param_1)

{
  (**(code **)(*(int *)this + 0x61c))(this,0x81,param_1);
  return;
}



// MaudioShDrTransitUsbLevelControl::GetUsbVolumeMin(short*)

void __thiscall
MaudioShDrTransitUsbLevelControl::GetUsbVolumeMin
          (MaudioShDrTransitUsbLevelControl *this,short *param_1)

{
  (**(code **)(*(int *)this + 0x61c))(this,0x82,param_1);
  return;
}



// MaudioShDrTransitUsbLevelControl::ConvertUsbVolumeToDb(short)

int __thiscall
MaudioShDrTransitUsbLevelControl::ConvertUsbVolumeToDb
          (MaudioShDrTransitUsbLevelControl *this,short param_1)

{
  int iVar1;
  
  iVar1 = -0x80000000;
  if (param_1 != -0x8000) {
    iVar1 = (int)param_1 << 8;
  }
  return iVar1;
}



// MaudioShDrTransitUsbLevelControl::GetUsbVolumeMax(short*)

void __thiscall
MaudioShDrTransitUsbLevelControl::GetUsbVolumeMax
          (MaudioShDrTransitUsbLevelControl *this,short *param_1)

{
  (**(code **)(*(int *)this + 0x61c))(this,0x83,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbLevelControl::free()

void __thiscall MaudioShDrTransitUsbLevelControl::free(MaudioShDrTransitUsbLevelControl *this)

{
  if (*(int *)(this + 0xa8) != 0) {
    _thread_call_free(*(int *)(this + 0xa8));
    *(undefined4 *)(this + 0xa8) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x000100b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbLevelControl::performValueChange(OSObject*)

undefined4 __thiscall
MaudioShDrTransitUsbLevelControl::performValueChange
          (MaudioShDrTransitUsbLevelControl *this,OSObject *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = (**(code **)(*(int *)this + 0x5ec))(this);
  uVar2 = (**(code **)(*(int *)this + 0x5f4))(this);
  piVar3 = (int *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,OSNumber::metaClass);
  if (piVar3 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar3 + 0xac))(piVar3);
    if (*(int *)(this + 0xa8) != 0) {
      _thread_call_enter1(*(int *)(this + 0xa8),uVar4);
    }
    (**(code **)(**(int **)(this + 0xa0) + 0x5ec))
              (*(int **)(this + 0xa0),this[200],uVar4,uVar1,uVar2);
  }
  return 0;
}



// MaudioShDrTransitUsbLevelControl::updateUSBValue()

void __thiscall
MaudioShDrTransitUsbLevelControl::updateUSBValue(MaudioShDrTransitUsbLevelControl *this)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)this + 0x618);
  uVar2 = (**(code **)(*(int *)this + 0x544))(this);
  (*pcVar1)(this,uVar2);
  return;
}



// MaudioShDrTransitUsbLevelControl::updateUSBValue(long)

void MaudioShDrTransitUsbLevelControl::updateUSBValue(long param_1)

{
  (**(code **)(*(int *)param_1 + 0x5ec))(param_1);
  (**(code **)(*(int *)param_1 + 0x5f4))(param_1);
                    // WARNING: Could not recover jumptable at 0x000101f5. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)param_1 + 0x620))();
  return;
}



// MaudioShDrTransitUsbLevelControl::ConvertUsbVolumeToGainInDb(short)

short __thiscall
MaudioShDrTransitUsbLevelControl::ConvertUsbVolumeToGainInDb
          (MaudioShDrTransitUsbLevelControl *this,short param_1)

{
  return param_1;
}



// MaudioShDrTransitUsbLevelControl::GetUsbVolumeResolution(short*)

void __thiscall
MaudioShDrTransitUsbLevelControl::GetUsbVolumeResolution
          (MaudioShDrTransitUsbLevelControl *this,short *param_1)

{
  (**(code **)(*(int *)this + 0x61c))(this,0x84,param_1);
  return;
}



// MaudioShDrTransitUsbLevelControl::SetUsbVolumeCur(short)

void __thiscall
MaudioShDrTransitUsbLevelControl::SetUsbVolumeCur
          (MaudioShDrTransitUsbLevelControl *this,short param_1)

{
  short local_10 [6];
  
  local_10[0] = param_1;
  (**(code **)(*(int *)this + 0x61c))(this,1,local_10);
  return;
}



// MaudioShDrTransitUsbLevelControl::updateValueCallback(void*, void*)

void MaudioShDrTransitUsbLevelControl::updateValueCallback(void *param_1,void *param_2)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = OSMetaClassBase::safeMetaCast(param_1,(OSMetaClass *)&gMetaClass);
    if (iVar1 != 0) {
                    // WARNING: Could not recover jumptable at 0x00010294. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(int *)param_1 + 0x618))();
      return;
    }
  }
  return;
}



// MaudioShDrTransitUsbLevelControl::SetLevel(short, short, short, bool)

undefined4 __thiscall
MaudioShDrTransitUsbLevelControl::SetLevel
          (MaudioShDrTransitUsbLevelControl *this,short param_1,short param_2,short param_3,
          bool param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short sVar4;
  
  iVar1 = (**(code **)(*(int *)this + 0x5ec))(this);
  iVar2 = (**(code **)(*(int *)this + 0x5f4))(this);
  if (iVar1 < iVar2 && param_2 < param_3) {
    sVar4 = param_2;
    if ((param_2 <= param_1) && (sVar4 = param_1, param_3 < param_1)) {
      sVar4 = param_3;
    }
    iVar1 = iVar1 + ((iVar2 - iVar1) * ((int)sVar4 - (int)param_2)) / ((int)param_3 - (int)param_2);
    piVar3 = (int *)OSNumber::withNumber((longlong)iVar1,0x20);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*(int *)this + 0x618))(this,iVar1);
      if (param_4) {
        (**(code **)(*(int *)this + 0x53c))(this,piVar3);
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
    }
  }
  return 0;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbLevelControl::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbLevelControl::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbLevelControl::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbLevelControl::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbLevelControl::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbLevelControl::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbLevelControl::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbLevelControl::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbLevelControl::RequestUsbValue(unsigned char, short*)

int __thiscall
MaudioShDrTransitUsbLevelControl::RequestUsbValue
          (MaudioShDrTransitUsbLevelControl *this,uchar param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  char local_1c;
  uchar local_1b;
  ushort local_1a;
  undefined2 local_18;
  undefined2 local_16;
  short *local_14;
  
  if (param_2 == (short *)0x0) {
    return -0x1ffffd3e;
  }
  if (*(int *)(this + 0xbc) == 0) {
    local_1b = param_1;
    local_1c = (param_1 & 0x80) + 0x21;
    local_1a = (ushort)(byte)this[0xa5] << 8 | *(ushort *)(this + 0xc4);
    local_16 = 2;
    local_14 = param_2;
    local_18 = CONCAT11(this[0xb4],this[0xa4]);
    if (*(code **)(this + 0xac) == GetControlInterfaceClass) {
      return -0x1ffffd44;
    }
    iVar2 = (**(code **)(this + 0xac))(&local_1c,*(undefined4 *)(this + 0xb0),0);
    if (iVar2 == 0) {
      return 0;
    }
    *param_2 = 0;
    return iVar2;
  }
  if (*(int *)(this + 0xbc) != 1) {
    return -0x1ffffd44;
  }
  if (param_1 == 0x82) {
    sVar1 = *(short *)(this + 0xd8);
  }
  else if (param_1 < 0x83) {
    if (param_1 == '\x01') {
      iVar2 = (**(code **)(**(int **)(this + 0xa0) + 0x5f4))
                        (*(int **)(this + 0xa0),this[0xc0],*(undefined4 *)(this + 0xc4),*param_2);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(short *)(this + 0xd4) = *param_2;
      return 0;
    }
    if (param_1 != 0x81) {
      return -0x1ffffd44;
    }
    sVar1 = *(short *)(this + 0xd4);
  }
  else {
    if (param_1 != 0x83) {
      if (param_1 != 0x84) {
        return -0x1ffffd44;
      }
      *param_2 = 0;
      return -0x1ffffd44;
    }
    sVar1 = *(short *)(this + 0xd6);
  }
  *param_2 = sVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbLevelControl::init(MaudioShDrTransitUsbLevelControl::ControlInit*,
// OSDictionary*)

bool MaudioShDrTransitUsbLevelControl::init(ControlInit *param_1,OSDictionary *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  char *local_3c;
  short local_22;
  short local_20;
  short local_1e [7];
  
  param_1[0xe8] = (ControlInit)0x0;
  local_1e[0] = 0;
  if (param_2 != (OSDictionary *)0x0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x30);
    if ((((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0xac) != 0)) &&
        (param_1[0xa5] == (ControlInit)0x2)) && (*(uint *)(param_1 + 0xbc) < 2)) {
      iVar2 = _thread_call_allocate(updateValueCallback,param_1);
      *(int *)(param_1 + 0xa8) = iVar2;
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xc4);
        if (iVar2 == 1) {
          local_3c = "Left";
        }
        else if (iVar2 == 2) {
          local_3c = "Right";
        }
        else {
          local_3c = "All Channels";
          if (iVar2 != 0) goto LAB_00010691;
        }
        if (*(int *)(param_1 + 0xbc) == 1) {
          *(undefined2 *)(param_1 + 0xd4) = *(undefined2 *)(param_2 + 0x36);
          *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(param_2 + 0x36);
          *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_2 + 0x38);
          *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x3c);
          *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x3c);
          *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x40);
        }
        iVar2 = (**(code **)(*(int *)param_1 + 0x61c))(param_1,0x81,local_1e);
        local_20 = 0;
        iVar3 = (**(code **)(*(int *)param_1 + 0x61c))(param_1,0x82,&local_20);
        sVar8 = local_20;
        if (param_2[0x34] != (OSDictionary)0x0) {
          sVar8 = *(short *)(param_2 + 0x36);
        }
        if (sVar8 == -0x8000) {
          sVar8 = -0x7fff;
        }
        if (param_2[0x3a] == (OSDictionary)0x0) {
          iVar4 = (int)sVar8 << 8;
          if (sVar8 == -0x8000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = *(int *)(param_2 + 0x3c);
        }
        local_22 = 0;
        iVar5 = (**(code **)(*(int *)param_1 + 0x61c))(param_1,0x83,&local_22);
        sVar6 = local_22;
        if (param_2[0x34] != (OSDictionary)0x0) {
          sVar6 = *(short *)(param_2 + 0x38);
        }
        if (param_2[0x3a] == (OSDictionary)0x0) {
          iVar7 = -0x80000000;
          if (sVar6 != -0x8000) {
            iVar7 = (int)sVar6 << 8;
          }
        }
        else {
          iVar7 = *(int *)(param_2 + 0x40);
        }
        if ((iVar5 == 0 && (iVar2 == 0 && iVar3 == 0)) &&
           (cVar1 = (*_vtable)(param_1,(int)local_1e[0],(int)sVar8,(int)sVar6,iVar4,iVar7,
                               *(undefined4 *)(param_1 + 0xc4),local_3c,param_1[200],
                               *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),0),
           cVar1 != '\0')) {
          iVar2 = 0;
          goto LAB_00010840;
        }
      }
    }
  }
LAB_00010691:
  iVar2 = -0x1ffffd44;
LAB_00010840:
  return iVar2 == 0;
}



