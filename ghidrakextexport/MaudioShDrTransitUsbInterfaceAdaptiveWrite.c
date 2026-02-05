#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAdaptiveWrite::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  return *(undefined4 *)(this + 0x158);
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite()

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite()

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite()

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::~MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this);
  OSObject::operator_delete(this,0x1a0);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceAdaptiveWrite::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptiveWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass,0x1a0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptiveWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass,0x1a0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite()

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceAdaptiveWrite *
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceAdaptiveWrite *this;
  MaudioShDrTransitUsbInterfaceAdaptiveWrite *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x1a0,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceAdaptiveWrite *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceAdaptiveWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceAdaptiveWrite(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite()

MaudioShDrTransitUsbInterfaceAdaptiveWrite * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MaudioShDrTransitUsbInterfaceAdaptiveWrite
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceAdaptiveWrite *
MaudioShDrTransitUsbInterfaceAdaptiveWrite::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceAdaptiveWrite *this;
  MaudioShDrTransitUsbInterfaceAdaptiveWrite *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x1a0,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceAdaptiveWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceAdaptiveWrite(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceAdaptiveWrite *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::init(MaudioShDrTransitUsbInterface::InitStruct
// const&)

bool __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::init
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,InitStruct *param_1)

{
  char cVar1;
  
  cVar1 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,0);
  }
  return cVar1 != '\0';
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::SetAlternateSetting(unsigned short)

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::SetAlternateSetting
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,ushort param_1)

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



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::SetSampleRate
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,_IOAudioSampleRate *param_1)

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
        this[0xc4] = (MaudioShDrTransitUsbInterfaceAdaptiveWrite)(uVar6 != (uVar6 / 1000) * 1000);
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



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::UsbFrameListSubmit()

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::UsbFrameListSubmit
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint local_28;
  undefined2 local_24;
  
  local_28 = *(int *)(this + 0x170) * 4;
  iVar3 = *(int *)(this + 0x170) * 0x40;
  uVar1 = local_28 + 4;
  iVar5 = iVar3;
  for (; local_28 < uVar1; local_28 = local_28 + 1) {
    local_24 = *(undefined2 *)(this + 200);
    if (this[0xc4] != (MaudioShDrTransitUsbInterfaceAdaptiveWrite)0x0) {
      uVar2 = *(uint *)(this + 0x194);
      iVar4 = *(int *)(this + 0x198);
      lVar6 = ___umoddi3(uVar2,iVar4,*(undefined2 *)(this + 0xc6),0);
      *(uint *)(this + 0x194) = uVar2 + 1;
      *(uint *)(this + 0x198) = iVar4 + (uint)(0xfffffffe < uVar2);
      if (lVar6 == 0) {
        local_24 = *(undefined2 *)(this + 0xca);
      }
    }
    *(undefined4 *)(iVar5 + *(int *)(this + 0x180)) = 0x6c6c6974;
    *(undefined2 *)(iVar5 + 4 + *(int *)(this + 0x180)) = local_24;
    *(undefined2 *)(iVar5 + 6 + *(int *)(this + 0x180)) = 0;
    iVar5 = iVar5 + 0x10;
  }
  iVar5 = -0x1ffffd44;
  if (*(int *)(this + 0x6c) != 0) {
    *(int *)(*(int *)(this + 0x178) + 8 + *(int *)(this + 0x170) * 0xc) = *(int *)(this + 0x170);
    (**(code **)(*(int *)this + 0x18))(this);
    _OSIncrementAtomic(this + 0x174);
    uVar1 = *(uint *)(this + 0x168);
    iVar5 = *(int *)(this + 0x16c);
    *(uint *)(this + 0x168) = uVar1 + 4;
    *(uint *)(this + 0x16c) = iVar5 + (uint)(0xfffffffb < uVar1);
    iVar4 = *(int *)(this + 0x170) * 0xc;
    *(uint *)(this + 0x170) = (*(int *)(this + 0x170) + 1U) % 100;
    iVar5 = (**(code **)(**(int **)(this + 0x6c) + 0x108))
                      (*(int **)(this + 0x6c),*(undefined4 *)(*(int *)(this + 0x160) + iVar4),uVar1,
                       iVar5,4,iVar3 + *(int *)(this + 0x180),*(int *)(this + 0x178) + iVar4,1);
    if (iVar5 != 0) {
      (**(code **)(*(int *)this + 0x1c))(this);
      _OSDecrementAtomic(this + 0x174);
    }
  }
  return iVar5;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::FreeBuffers
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  MaudioShDrTransitUsbInterface::IsocCompletionsFree((UsbIsocCompletions *)(this + 0x178));
  MaudioShDrTransitUsbInterface::IsocFramesFree((UsbIsocFrames *)(this + 0x180));
  MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescFree((UsbBufferAdaptive *)(this + 0x150));
  MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferFree
            ((MaudioShDrTransitUsbInterfaceAdaptive *)this,(UsbBufferAdaptive *)(this + 0x150));
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::free()

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::free(MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  FreeBuffers(this);
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::FinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  int iVar1;
  
  iVar1 = -0x1ffffd3e;
  if (((byte)this[0xc0] & 3) == 0) {
    FreeBuffers(this);
    iVar1 = MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAllocate
                      ((MaudioShDrTransitUsbInterfaceAdaptive *)this,*(ulong *)(this + 0xbc),
                       (UsbBufferAdaptive *)(this + 0x150));
    if (iVar1 == 0) {
      iVar1 = MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescAllocate
                        (100,4,(UsbBufferAdaptive *)(this + 0x150),(bool)this[0xc4],
                         (uint)*(ushort *)(this + 200),(uint)*(ushort *)(this + 0xca),
                         (uint)*(ushort *)(this + 0xc6));
      if (iVar1 == 0) {
        iVar1 = MaudioShDrTransitUsbInterface::IsocFramesAllocate
                          (400,(UsbIsocFrames *)(this + 0x180));
        if (iVar1 == 0) {
          iVar1 = MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
                            (100,UsbFrameListHandler,this,(UsbIsocCompletions *)(this + 0x178));
          if (iVar1 == 0) {
            MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
          }
        }
      }
    }
  }
  return iVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceAdaptiveWrite::Start(ulonglong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_0000000c;
  
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 400) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x16c) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x19c) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x18c) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x194) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x198) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x168) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x170) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x174) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x188) = 0;
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    **(undefined4 **)((MaudioShDrTransitUsbInterface *)param_1 + 0x180) = 0x6c6c6974;
    iVar4 = 0x19;
    MaudioShDrTransitUsbInterface::StartTimerCallback
              ((IOUSBLowLatencyIsocFrame *)(MaudioShDrTransitUsbInterface *)param_1,
               CONCAT44(param_1._4_4_,
                        *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x180)));
    do {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar3 == 0xb) goto LAB_00006bcb;
        iVar1 = UsbFrameListSubmit((MaudioShDrTransitUsbInterfaceAdaptiveWrite *)
                                   (MaudioShDrTransitUsbInterface *)param_1);
      } while (iVar1 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
    uVar2 = 0;
  }
  else {
LAB_00006bcb:
    uVar2 = 0xe00002bc;
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::Stop(MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  int *piVar1;
  
  this[0xdb] = (MaudioShDrTransitUsbInterfaceAdaptiveWrite)(*(int *)(this + 0x174) != 0);
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



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::CheckForCompletedFrames()

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::CheckForCompletedFrames
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _OSIncrementAtomic(this + 0x19c);
  if (iVar1 == 0) {
LAB_00006cd3:
    do {
      uVar2 = *(uint *)(this + 0x188);
      do {
        iVar1 = *(int *)(this + 0x180);
        iVar3 = uVar2 * 0x10;
        if (*(int *)(iVar1 + iVar3) == 0x6c6c6974) goto LAB_00006cf1;
        uVar2 = (uVar2 + 1) % 400;
        *(uint *)(this + 0x188) = uVar2;
        if (uVar2 == 0) {
          MaudioShDrTransitUsbInterface::BufferWrapped
                    (this,*(undefined4 *)(iVar3 + 8 + iVar1),*(undefined4 *)(iVar3 + 0xc + iVar1),0,
                     0);
          iVar1 = *(int *)(this + 0x180);
        }
        MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes
                  ((MaudioShDrTransitUsbInterface *)this,(uint)*(ushort *)(iVar3 + 4 + iVar1));
        *(undefined4 *)(iVar3 + *(int *)(this + 0x180)) = 0x6c6c6974;
        if (this[0xdb] != (MaudioShDrTransitUsbInterfaceAdaptiveWrite)0x0) goto LAB_00006cd3;
        uVar2 = *(uint *)(this + 0x188);
      } while ((uVar2 & 3) != 0);
      UsbFrameListSubmit(this);
    } while( true );
  }
LAB_00006cf1:
  _OSDecrementAtomic();
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::UsbFrameListHandler(void*, void*, int,
// IOUSBLowLatencyIsocFrame*)

void MaudioShDrTransitUsbInterfaceAdaptiveWrite::UsbFrameListHandler
               (void *param_1,void *param_2,int param_3,IOUSBLowLatencyIsocFrame *param_4)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x5c) != 0) {
      CheckForCompletedFrames(param_1);
    }
    _OSDecrementAtomic((int)param_1 + 0x174);
    if ((*(char *)((int)param_1 + 0xdb) != '\0') && (*(int *)((int)param_1 + 0x174) == 0)) {
      *(undefined1 *)((int)param_1 + 0xdb) = 0;
      MaudioShDrTransitUsbInterface::SetState(param_1,1);
    }
                    // WARNING: Could not recover jumptable at 0x00006d62. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)param_1 + 0x1c))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::TransferAudio(float*, unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::TransferAudio
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this,float *param_1,ulong param_2,
          ulong param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0x140) == 2) {
    iVar3 = param_2 * *(int *)(this + 0x70);
    if (*(uint *)(this + 0x158) <
        *(ushort *)(this + 0xcc) * param_3 + (uint)*(ushort *)(this + 0xd6) * iVar3) {
      return 0xe00002bc;
    }
    iVar1 = *(ushort *)(this + 0xcc) * param_3 + *(int *)(this + 0x154);
    if (*(int *)(this + 0x54) == 1) {
      if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAdaptiveWrite)0x18) {
        _ClipFloat32ToSInt24LE_4(param_1,iVar1,iVar3);
      }
      else {
        _ClipFloat32ToSInt16LE_4(param_1,iVar1,iVar3);
      }
    }
    else if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAdaptiveWrite)0x18) {
      _ClipFloat32ToSInt24BE(param_1,iVar1,iVar3);
    }
    else {
      _ClipFloat32ToSInt16BE(param_1,iVar1,iVar3);
    }
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x50) + 0x4d0))(*(int **)(this + 0x50));
    piVar2 = (int *)(**(code **)(*piVar2 + 0x4e8))(piVar2);
    uVar4 = (**(code **)(*piVar2 + 0x548))(piVar2);
    if ((*(int *)(this + 0x16c) - (int)((ulonglong)uVar4 >> 0x20) ==
         (uint)(*(uint *)(this + 0x168) < (uint)uVar4)) &&
       (*(uint *)(this + 0x168) - (uint)uVar4 < 0x32)) {
      CheckForCompletedFrames(this);
    }
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::IsActive() const

bool __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::IsActive
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  return *(short *)(this + 0xd8) != 0;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptiveWrite::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptiveWrite::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptiveWrite::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptiveWrite::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceAdaptiveWrite *this)

{
  return *(undefined4 *)(this + 0x158);
}



