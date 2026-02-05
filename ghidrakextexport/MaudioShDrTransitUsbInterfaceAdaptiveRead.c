#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAdaptiveRead::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  return *(undefined4 *)(this + 0x198);
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead()

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead()

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead()

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::~MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  OSObject::operator_delete(this,0x1d4);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceAdaptiveRead::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptiveRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass,0x1d4);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptiveRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass,0x1d4);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead()

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceAdaptiveRead *
MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceAdaptiveRead *this;
  MaudioShDrTransitUsbInterfaceAdaptiveRead *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x1d4,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceAdaptiveRead *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceAdaptiveRead *)0x0) {
    MaudioShDrTransitUsbInterfaceAdaptiveRead(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead()

MaudioShDrTransitUsbInterfaceAdaptiveRead * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MaudioShDrTransitUsbInterfaceAdaptiveRead
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceAdaptiveRead *
MaudioShDrTransitUsbInterfaceAdaptiveRead::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceAdaptiveRead *this;
  MaudioShDrTransitUsbInterfaceAdaptiveRead *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x1d4,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceAdaptiveRead *)0x0) {
    MaudioShDrTransitUsbInterfaceAdaptiveRead(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceAdaptiveRead *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::init(MaudioShDrTransitUsbInterface::InitStruct const&)

char __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::init
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,InitStruct *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (cVar2 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,1);
    piVar1 = *(int **)(this + 0x5c);
    if (piVar1 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 0x6f0))(piVar1);
      *(undefined4 *)(this + 0x1c8) = uVar3;
    }
  }
  *(undefined4 *)(this + 0x1c4) = 0;
  return cVar2;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::SetAlternateSetting(unsigned short)

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::SetAlternateSetting
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,ushort param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1e;
  
  *(undefined2 *)(this + 0xd8) = 0;
  iVar1 = MaudioShDrTransitUsbInterface::SetAlternateInterface
                    ((MaudioShDrTransitUsbInterface *)this,(uint)param_1);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    local_22 = 1;
    local_20 = 0xffff;
    local_1e = 0xff;
    local_21 = *(int *)(this + 0xb0) != 0;
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x50) + 0x4bc))
                              (*(int **)(this + 0x50),0,&local_22);
    *(int **)(this + 0x6c) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(piVar2);
      *(ushort *)(this + 0xd8) = param_1;
      return 0;
    }
    iVar1 = -0x1ffffd44;
  }
  iVar3 = MaudioShDrTransitUsbInterface::SetAlternateInterface
                    ((MaudioShDrTransitUsbInterface *)this,0);
  if (iVar3 == 0) {
    *(undefined2 *)(this + 0xd8) = 0;
  }
  return iVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::SetSampleRate
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,_IOAudioSampleRate *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iStack_40;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined2 uStack_2e;
  ushort uStack_2c;
  undefined2 uStack_2a;
  uint *puStack_28;
  uint auStack_20 [4];
  
  iStack_40 = -0x1ffffd3e;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    if (*(int *)(this + 0x140) == 2) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Can\'t Interface::SetSampleRate while streaming.\n");
      _IOSleep(3);
    }
    else {
      piVar1 = *(int **)(this + 0x6c);
      uVar6 = *(int *)param_1 + *(int *)(param_1 + 4);
      if ((((piVar1 != (int *)0x0) && (*(int *)(this + 0x50) != 0)) &&
          (iVar4 = (**(code **)(*piVar1 + 0xc4))(piVar1), iVar4 != 0)) &&
         ((*(byte *)(iVar4 + 3) & 1) != 0)) {
        uStack_30 = 0x22;
        uStack_2f = 1;
        uStack_2e = 0x100;
        uStack_2a = 3;
        uStack_2c = (ushort)*(byte *)(iVar4 + 2);
        puStack_28 = auStack_20;
        auStack_20[0] = uVar6;
        iVar4 = (**(code **)(**(int **)(this + 0x50) + 0x4f0))(*(int **)(this + 0x50),&uStack_30,0);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)param_1;
        uVar3 = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + 0x98) = uVar2;
        *(undefined4 *)(this + 0x9c) = uVar3;
        uVar5 = *(int *)(this + 0x98) + *(int *)(this + 0x9c);
        *(uint *)(this + 0xa0) = uVar5;
        *(uint *)(this + 0xa4) = uVar5 / 1000;
        *(uint *)(this + 0xa8) = (uVar5 / 1000) * 1000;
        *(uint *)(this + 0xac) = uVar5 % 1000;
        this[0xc4] = (MaudioShDrTransitUsbInterfaceAdaptiveRead)(uVar6 != (uVar6 / 1000) * 1000);
        (**(code **)(*(int *)this + 0x4f0))
                  (this,uVar2,uVar3,*(undefined4 *)(this + 0xc0),*(undefined2 *)(this + 0xcc));
        MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,0);
        return 0;
      }
    }
    iStack_40 = -0x1ffffd44;
  }
  return iStack_40;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::CalculateEngineBufferSizeInBytes(_IOAudioSampleRate,
// unsigned long, unsigned long)

void MaudioShDrTransitUsbInterfaceAdaptiveRead::CalculateEngineBufferSizeInBytes
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort uVar4;
  
  MaudioShDrTransitUsbInterface::CalculateEngineBufferSizeInBytes
            (param_1,param_2,param_3,param_4,param_5);
  if ((*(char *)(param_1 + 0xc4) == '\0') && (*(int *)(param_1 + 0x1c8) != 0)) {
    piVar1 = *(int **)(param_1 + 0x6c);
    uVar4 = (short)param_5 * (short)*(undefined4 *)(param_1 + 0x1c8) + *(short *)(param_1 + 0xca);
    *(short *)(param_1 + 200) =
         *(short *)(param_1 + 200) - (short)*(int *)(param_1 + 0x1c8) * (short)param_5;
    *(ushort *)(param_1 + 0xca) = uVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1);
      if (uVar2 < uVar4) {
        uVar3 = (**(code **)(**(int **)(param_1 + 0x6c) + 0xd8))(*(int **)(param_1 + 0x6c));
        *(undefined2 *)(param_1 + 0xca) = uVar3;
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbFrameListSubmit()

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbFrameListSubmit
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(int *)(this + 0x170) * 2;
  iVar2 = *(int *)(this + 0x170) * 0x20;
  uVar1 = uVar4 + 2;
  iVar5 = iVar2;
  for (; uVar4 < uVar1; uVar4 = uVar4 + 1) {
    *(undefined4 *)(iVar5 + *(int *)(this + 0x18c)) = 0x6c6c6974;
    *(undefined2 *)(iVar5 + 4 + *(int *)(this + 0x18c)) = *(undefined2 *)(this + 0xca);
    *(undefined2 *)(iVar5 + 6 + *(int *)(this + 0x18c)) = 0;
    iVar5 = iVar5 + 0x10;
  }
  iVar5 = -0x1ffffd44;
  if (*(int *)(this + 0x6c) != 0) {
    *(int *)(*(int *)(this + 0x184) + 8 + *(int *)(this + 0x170) * 0xc) = *(int *)(this + 0x170);
    (**(code **)(*(int *)this + 0x18))(this);
    _OSIncrementAtomic(this + 0x174);
    uVar1 = *(uint *)(this + 0x168);
    iVar5 = *(int *)(this + 0x16c);
    *(uint *)(this + 0x16c) = iVar5 + (uint)(0xfffffffd < uVar1);
    *(uint *)(this + 0x168) = uVar1 + 2;
    iVar3 = *(int *)(this + 0x170) * 0xc;
    *(uint *)(this + 0x170) = (*(int *)(this + 0x170) + 1U) % 200;
    iVar5 = (**(code **)(**(int **)(this + 0x6c) + 0x104))
                      (*(int **)(this + 0x6c),*(undefined4 *)(*(int *)(this + 0x160) + iVar3),uVar1,
                       iVar5,2,iVar2 + *(int *)(this + 0x18c),iVar3 + *(int *)(this + 0x184),1);
    if (iVar5 != 0) {
      (**(code **)(*(int *)this + 0x1c))(this);
      _OSDecrementAtomic(this + 0x174);
    }
  }
  return iVar5;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbResetIfTooManyUnderruns(int,
// IOUSBLowLatencyIsocFrame*)

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbResetIfTooManyUnderruns
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,int param_1,
          IOUSBLowLatencyIsocFrame *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  
  iVar1 = *(int *)(this + 300);
  uVar3 = *(uint *)(this + 0x128);
  *(code **)(this + 300) = (code *)(iVar1 + 2);
  if (param_1 == -0x1ffffd19) {
    uVar3 = uVar3 + 2;
  }
  else {
    iVar2 = 2;
    do {
      uVar3 = uVar3 + (*(ushort *)(param_2 + 6) < *(ushort *)(this + 200));
      param_2 = param_2 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (uVar3 != *(uint *)(this + 0x128)) {
    if (MaudioUsbTransitEngine::GetExternalSampleRateController < (code *)(iVar1 + 2)) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("%d USB underrun(s) after %d frames affected recording quality.\n",
             uVar3 - *(int *)(this + 0x128),*(undefined4 *)(this + 300));
      _IOSleep(3);
      if (uVar3 == *(uint *)(this + 0x128)) {
        return;
      }
    }
    *(uint *)(this + 0x128) = uVar3;
    if (400 < uVar3) {
      local_28 = *(int *)(this + 0x9c);
      local_2c = *(int *)(this + 0x98);
      *(undefined4 *)(this + 0x128) = 0;
      *(undefined4 *)(this + 300) = 0;
      local_24 = 1;
      local_20 = 1;
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Too many USB underruns, must reset (%d Hz).\n",local_2c + local_28);
      _IOSleep(3);
      iVar1 = MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler
                        (*(MaudioShDrTransitUsbInterfaceService **)(this + 0x58),
                         (ExternalSampleRate *)&local_2c);
      if (iVar1 != 0) {
        _IOLog("%s: ","M-Audio Transit USB");
        _IOLog("Too many USB underruns, reset failed.\n");
        _IOSleep(3);
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceAdaptiveRead::Start(ulonglong param_1)

{
  uint uVar1;
  MaudioShDrTransitUsbInterface MVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_stack_0000000c;
  
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1ac) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x168) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a0) = param_1._4_4_;
    ((MaudioShDrTransitUsbInterface *)param_1)[0xdb] = (MaudioShDrTransitUsbInterface)0x0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b0) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x16c) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x170) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x174) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a4) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a8) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x19c) = 0;
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 2;
      iVar5 = uVar6 << 4;
      for (; uVar6 < uVar1; uVar6 = uVar6 + 1) {
        *(undefined4 *)(iVar5 + *(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x18c)) =
             0x6c6c6974;
        *(undefined2 *)(iVar5 + 4 + *(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x18c)) =
             *(undefined2 *)((MaudioShDrTransitUsbInterface *)param_1 + 0xca);
        *(undefined2 *)(iVar5 + 6 + *(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x18c)) = 0;
        iVar5 = iVar5 + 0x10;
      }
      uVar6 = uVar1;
    } while (uVar1 != 400);
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x128) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 300) = 0;
    if ((*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1c8) != 0) ||
       (MVar2 = (MaudioShDrTransitUsbInterface)0x1,
       ((MaudioShDrTransitUsbInterface *)param_1)[0xc4] != (MaudioShDrTransitUsbInterface)0x0)) {
      MVar2 = (MaudioShDrTransitUsbInterface)0x0;
    }
    ((MaudioShDrTransitUsbInterface *)param_1)[0x1cc] = MVar2;
    iVar5 = 0x32;
    ((MaudioShDrTransitUsbInterface *)param_1)[0x1cd] = (MaudioShDrTransitUsbInterface)0x1;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1d0) = 0;
    do {
      iVar7 = 0;
      do {
        iVar7 = iVar7 + 1;
        if (iVar7 == 0xb) goto LAB_00005af2;
        iVar3 = UsbFrameListSubmit((MaudioShDrTransitUsbInterfaceAdaptiveRead *)
                                   (MaudioShDrTransitUsbInterface *)param_1);
      } while (iVar3 != 0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
    uVar4 = 0;
    ((MaudioShDrTransitUsbInterface *)param_1)[0xdc] = (MaudioShDrTransitUsbInterface)0x1;
  }
  else {
LAB_00005af2:
    uVar4 = 0xe00002bc;
  }
  return uVar4;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::Stop(MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  int *piVar1;
  
  this[0xdc] = (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0;
  this[0xdb] = (MaudioShDrTransitUsbInterfaceAdaptiveRead)(*(int *)(this + 0x174) != 0);
  if (*(int *)(this + 0x174) != 0) {
    piVar1 = *(int **)(this + 0x6c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x9c))(piVar1);
    }
  }
  else {
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::IsFractionalSamplePresent(unsigned char*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::IsFractionalSamplePresent
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xff;
    if (*(ushort *)(this + 0xcc) <= uVar2) {
      return 0;
    }
    uVar1 = uVar1 + 1;
  } while (param_1[uVar2] == (&_kSampleFrameTestPattern)[uVar2]);
  return 1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::TestPatternBytes(unsigned char*)

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::TestPatternBytes
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  
  uVar4 = 0;
  local_14 = 0;
  do {
    if ((uint)(*(int *)(this + 0x1c8) * 2) <= (uVar4 & 0xff)) {
      return local_14;
    }
    uVar1 = 0;
    uVar3 = (uint)*(ushort *)(this + 0xcc);
    do {
      uVar2 = uVar1 & 0xff;
      if (uVar3 <= uVar2) {
        return local_14;
      }
      uVar1 = uVar1 + 1;
    } while (param_1[uVar2] == (&_kSampleFrameTestPattern)[uVar2]);
    local_14 = local_14 + uVar3;
    param_1 = param_1 + uVar3;
    uVar4 = uVar4 + 1;
  } while( true );
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::CopyInputFrames(long)

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::CopyInputFrames
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,long param_1)

{
  MaudioShDrTransitUsbInterfaceAdaptiveRead *pMVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  int *piVar7;
  uint uVar8;
  size_t sVar9;
  uint uVar10;
  bool bVar11;
  long local_34;
  
  local_34 = param_1;
  iVar4 = _OSIncrementAtomic(this + 0x1c4);
  if (iVar4 == 0) {
    bVar11 = param_1 != 0;
    if (!bVar11) {
      while (0 < *(int *)(this + 0x1d0)) {
        UsbFrameListSubmit(this);
        *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + -1;
      }
    }
    if (*(int *)(this + 0x154) != 0) {
      if (this[0x1cd] != (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0) {
        piVar7 = *(int **)(this + 0x18c);
        if (*piVar7 == 0x6c6c6974) goto LAB_00005e8a;
        this[0x1cd] = (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0;
        MaudioShDrTransitUsbInterface::TakeFirstTimeStamp(this,piVar7[2],piVar7[3]);
      }
LAB_00005e84:
      piVar7 = *(int **)(this + 0x18c);
LAB_00005e8a:
      uVar8 = *(uint *)(this + 0x1a8);
      do {
        if (piVar7[uVar8 * 4] == 0x6c6c6974) break;
        pvVar3 = (void *)(uVar8 * *(ushort *)(this + 0xca) + *(int *)(this + 0x154));
        iVar4 = *(int *)(this + 0x19c);
        pvVar5 = (void *)(*(int *)(this + 0x194) + iVar4);
        uVar10 = (uint)*(ushort *)((int)(piVar7 + uVar8 * 4) + 6);
        uVar8 = (uint)*(ushort *)(this + 200);
        if (uVar10 < uVar8) {
          if (this[0xc4] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0) {
            uVar8 = uVar8 + (uint)*(ushort *)(this + 0xcc) * *(int *)(this + 0x1c8);
          }
          _bzero((void *)((int)pvVar3 + uVar10),uVar8 - uVar10);
          MaudioShDrTransitUsbEngine::ReportHardwareError
                    (*(MaudioShDrTransitUsbEngine **)(this + 0x5c),0xe00002e7);
          iVar4 = *(int *)(this + 0x19c);
          uVar10 = uVar8;
        }
        if (*(uint *)(this + 0x198) < uVar10 + iVar4) {
          sVar9 = *(uint *)(this + 0x198) - iVar4;
          sVar6 = uVar10 - sVar9;
          puVar2 = (undefined4 *)(*(int *)(this + 0x1a8) * 0x10 + 8 + *(int *)(this + 0x18c));
          MaudioShDrTransitUsbInterface::BufferWrapped(this,*puVar2,puVar2[1],sVar6,uVar10);
          _memcpy(pvVar5,pvVar3,sVar9);
          _memcpy(*(void **)(this + 0x194),(void *)(sVar9 + (int)pvVar3),sVar6);
          *(size_t *)(this + 0x19c) = sVar6;
        }
        else {
          _memcpy(pvVar5,pvVar3,uVar10);
          uVar8 = (uVar10 + *(int *)(this + 0x19c)) % *(uint *)(this + 0x198);
          *(uint *)(this + 0x19c) = uVar8;
          if (uVar8 == 0) {
            puVar2 = (undefined4 *)(*(int *)(this + 0x1a8) * 0x10 + 8 + *(int *)(this + 0x18c));
            MaudioShDrTransitUsbInterface::BufferWrapped(this,*puVar2,puVar2[1],0,0);
          }
        }
        pMVar1 = this + 0x1a0;
        uVar8 = *(uint *)pMVar1;
        *(uint *)pMVar1 = *(uint *)pMVar1 + 1;
        *(uint *)(this + 0x1a4) = *(int *)(this + 0x1a4) + (uint)(0xfffffffe < uVar8);
        *(undefined4 *)(*(int *)(this + 0x1a8) * 0x10 + *(int *)(this + 0x18c)) = 0x6c6c6974;
        *(uint *)(this + 0x1a8) = (*(int *)(this + 0x1a8) + 1U) % *(uint *)(this + 0xc0);
        MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes
                  ((MaudioShDrTransitUsbInterface *)this,uVar10);
        uVar8 = *(uint *)(this + 0x1a8);
        if (((uVar8 & 1) == 0) && (this[0xdb] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0)) {
          if (!bVar11) goto code_r0x00005e60;
          *(int *)(this + 0x1d0) = *(int *)(this + 0x1d0) + 1;
LAB_00005e78:
          local_34 = local_34 - uVar10;
          if (local_34 < 1) break;
        }
        else if (bVar11) goto LAB_00005e78;
        piVar7 = *(int **)(this + 0x18c);
      } while( true );
    }
  }
  _OSDecrementAtomic();
  return;
code_r0x00005e60:
  UsbFrameListSubmit(this);
  goto LAB_00005e84;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbFrameListHandler(void*, void*, int,
// IOUSBLowLatencyIsocFrame*)

void MaudioShDrTransitUsbInterfaceAdaptiveRead::UsbFrameListHandler
               (void *param_1,void *param_2,int param_3,IOUSBLowLatencyIsocFrame *param_4)

{
  bool bVar1;
  
  if (param_1 != (void *)0x0) {
    bVar1 = *(int *)((int)param_1 + 0x5c) != 0;
    if ((((bVar1) && (param_4 != (IOUSBLowLatencyIsocFrame *)0x0)) &&
        (*(char *)((int)param_1 + 0x1cc) != '\0')) && (*(char *)((int)param_1 + 0xdc) != '\0')) {
      UsbResetIfTooManyUnderruns(param_1,param_3,param_4);
    }
    _OSDecrementAtomic((int)param_1 + 0x174);
    if (*(char *)((int)param_1 + 0xdb) == '\0') {
      if (bVar1) {
        CopyInputFrames(param_1,0);
      }
    }
    else if (*(int *)((int)param_1 + 0x174) == 0) {
      *(undefined1 *)((int)param_1 + 0xdb) = 0;
      MaudioShDrTransitUsbInterface::SetState(param_1,1);
    }
                    // WARNING: Could not recover jumptable at 0x00005f69. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)param_1 + 0x1c))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::TransferAudio(float*, unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::TransferAudio
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this,float *param_1,ulong param_2,
          ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)(this + 0x140) == 2) {
    uVar2 = *(ushort *)(this + 0xcc) * param_3;
    iVar3 = param_2 * *(int *)(this + 0x70);
    uVar4 = (uint)*(ushort *)(this + 0xd6) * iVar3 + uVar2;
    uVar1 = *(uint *)(this + 0x198);
    if (uVar1 < uVar4) {
      return 0xe00002bc;
    }
    uVar5 = *(int *)(this + 0x19c) + 1;
    if (uVar1 < uVar5) {
      uVar5 = 0;
    }
    uVar6 = uVar5 + (uint)*(ushort *)(this + 0xca) * 100;
    if (uVar1 < uVar6) {
      uVar6 = uVar6 - uVar1;
    }
    if (((uVar4 < uVar6 && uVar5 < uVar4) || (uVar4 < uVar6 && uVar6 < uVar5)) ||
       ((uVar6 < uVar5 && uVar5 < uVar4 && (uVar6 < uVar4)))) {
      uVar5 = uVar4 - *(int *)(this + 0x19c);
      if (0x7fffffff < uVar5) {
        uVar5 = uVar5 + uVar1;
      }
      CopyInputFrames(this,uVar5);
    }
    iVar7 = uVar2 + *(int *)(this + 0x194);
    if (*(int *)(this + 0x54) == 1) {
      if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x18) {
        if (this[0x125] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0) {
          _ConvertSInt24LEToFloat32(iVar7,param_1,iVar3);
        }
        else {
          _ConvertSInt24LEToFloat32InDriver(iVar7,param_1,iVar3,this + 0xe0);
        }
      }
      else if (this[0x125] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x0) {
        _ConvertSInt16LEToFloat32(iVar7,param_1,iVar3);
      }
      else {
        _ConvertSInt16LEToFloat32InDriver(iVar7,param_1,iVar3,this + 0xe0);
      }
    }
    else if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAdaptiveRead)0x18) {
      _ConvertSInt24BEToFloat32(iVar7,param_1,iVar3);
    }
    else {
      _ConvertSInt16BEToFloat32(iVar7,param_1,iVar3);
    }
    if ((uVar2 < *(uint *)(this + 0x19c)) && (*(uint *)(this + 0x19c) < uVar4)) {
      MaudioShDrTransitUsbEngine::ReportHardwareError
                (*(MaudioShDrTransitUsbEngine **)(this + 0x5c),0xe00002d0);
    }
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::FreeBuffers
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  MaudioShDrTransitUsbInterface::SampleBufferFree
            ((MaudioShDrTransitUsbInterface *)this,(OldSampleBuffer *)(this + 0x194));
  MaudioShDrTransitUsbInterface::IsocCompletionsFree((UsbIsocCompletions *)(this + 0x184));
  MaudioShDrTransitUsbInterface::IsocFramesFree((UsbIsocFrames *)(this + 0x18c));
  MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescFree((UsbBufferAdaptive *)(this + 0x150));
  MaudioShDrTransitUsbInterface::BufferFree
            ((ulong *)(this + 0x158),(IOBufferMemoryDescriptor **)(this + 0x150),
             (uchar **)(this + 0x154));
  MaudioShDrTransitUsbInterface::BufferFree
            ((ulong *)(this + 0x180),(IOBufferMemoryDescriptor **)(this + 0x178),
             (uchar **)(this + 0x17c));
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::FinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined2 *)(this + 0xd4) = *(undefined2 *)(this + 0xca);
  FreeBuffers(this);
  *(uint *)(this + 0x180) = (uint)*(ushort *)(this + 0xca);
  iVar1 = MaudioShDrTransitUsbInterface::BufferAllocate
                    ((ulong *)(this + 0x180),(IOBufferMemoryDescriptor **)(this + 0x178),
                     (uchar **)(this + 0x17c));
  if (iVar1 == 0) {
    iVar1 = -0x1ffffd44;
    iVar4 = (uint)*(ushort *)(this + 0xca) * *(int *)(this + 0xc0);
    if (iVar4 != 0) {
      iVar1 = -0x1ffffd43;
      piVar2 = (int *)IOBufferMemoryDescriptor::withCapacity(iVar4,3,1);
      *(int **)(this + 0x150) = piVar2;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 400))(piVar2);
        *(int *)(this + 0x158) = iVar4;
        *(undefined4 *)(this + 0x154) = uVar3;
        iVar1 = MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescAllocate
                          (200,2,(UsbBufferAdaptive *)(this + 0x150),(bool)this[0xc4],
                           (uint)*(ushort *)(this + 0xca),(uint)*(ushort *)(this + 0xca),
                           (uint)*(ushort *)(this + 0xc6));
        if (iVar1 == 0) {
          iVar1 = MaudioShDrTransitUsbInterface::IsocFramesAllocate
                            (400,(UsbIsocFrames *)(this + 0x18c));
          if (iVar1 == 0) {
            iVar1 = MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
                              (200,UsbFrameListHandler,this,(UsbIsocCompletions *)(this + 0x184));
            if (iVar1 == 0) {
              iVar1 = MaudioShDrTransitUsbInterface::SampleBufferAllocate
                                ((MaudioShDrTransitUsbInterface *)this,*(ulong *)(this + 0xc0),
                                 (_IOAudioSampleRate *)(this + 0x98),
                                 (AudioStreamFormat *)(this + 0x70),
                                 (OldSampleBuffer *)(this + 0x194));
              if (iVar1 == 0) {
                MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::free()

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::free(MaudioShDrTransitUsbInterfaceAdaptiveRead *this)

{
  FreeBuffers(this);
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptiveRead::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptiveRead::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



