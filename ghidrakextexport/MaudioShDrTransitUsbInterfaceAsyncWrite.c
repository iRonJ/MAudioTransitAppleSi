#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAsyncWrite::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  return *(undefined4 *)(this + 0x168);
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite()

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite()

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite()

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::~MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  OSObject::operator_delete(this,0x1c0);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceAsyncWrite::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAsyncWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAsync::gMetaClass,0x1c0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAsyncWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAsync::gMetaClass,0x1c0);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite()

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceAsyncWrite *
MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceAsyncWrite *this;
  MaudioShDrTransitUsbInterfaceAsyncWrite *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new
                   ((OSObject *)MaudioUsbTransitDevice::MaudioUsbTransitDevice,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceAsyncWrite *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceAsyncWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncWrite(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite()

MaudioShDrTransitUsbInterfaceAsyncWrite * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MaudioShDrTransitUsbInterfaceAsyncWrite
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceAsyncWrite *
MaudioShDrTransitUsbInterfaceAsyncWrite::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceAsyncWrite *this;
  MaudioShDrTransitUsbInterfaceAsyncWrite *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new
                   ((OSObject *)MaudioUsbTransitDevice::MaudioUsbTransitDevice,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceAsyncWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncWrite(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceAsyncWrite *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::init(MaudioShDrTransitUsbInterface::InitStruct const&)

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::init
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,InitStruct *param_1)

{
  char cVar1;
  undefined1 uVar2;
  MaudioShDrTransitUsbInterfaceAsyncFeedback *this_00;
  MaudioShDrTransitUsbInterfaceAsyncWrite *local_20;
  code *local_1c;
  code *local_18;
  code *local_14;
  code *local_10;
  
  cVar1 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,0);
    this[0x1a9] = (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0;
    local_1c = FeedbackCallback;
    local_18 = FeedbackCallbackGetClosestValidSampleRate;
    local_14 = FeedbackCallbackSampleRateChange;
    local_10 = FeedbackCallbackStop;
    local_20 = this;
    this_00 = operator_new(0xb8);
    if (this_00 != (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
      MaudioShDrTransitUsbInterfaceAsyncFeedback::MaudioShDrTransitUsbInterfaceAsyncFeedback
                (this_00,(Callback *)&local_20);
    }
    *(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) = this_00;
    uVar2 = 1;
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::StopUsingEngine()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::StopUsingEngine
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterface::StopUsingEngine((MaudioShDrTransitUsbInterface *)this);
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::terminate(unsigned long)

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::terminate
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,ulong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
  }
  uVar2 = MaudioShDrTransitUsbInterface::terminate((MaudioShDrTransitUsbInterface *)this,param_1);
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::Stopped()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::Stopped(MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  if ((this[0xdb] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0) &&
     (this[0x1a9] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0)) {
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::SetAlternateSetting(unsigned short)

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::SetAlternateSetting
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,ushort param_1)

{
  int iVar1;
  int *piVar2;
  IOUSBPipe *pIVar3;
  int iVar4;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1e;
  
  *(undefined2 *)(this + 0xd8) = 0;
  *(undefined2 *)(this + 0xd4) = 0;
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
  }
  iVar1 = MaudioShDrTransitUsbInterface::SetAlternateInterface
                    ((MaudioShDrTransitUsbInterface *)this,(uint)param_1);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    local_22 = 1;
    local_20 = 0xffff;
    local_1e = 0xff;
    local_21 = 0;
    piVar2 = (int *)(**(code **)(**(int **)(this + 0x50) + 0x4bc))
                              (*(int **)(this + 0x50),0,&local_22);
    *(int **)(this + 0x6c) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(piVar2);
      local_22 = 1;
      local_20 = 0xffff;
      local_1e = 0xff;
      local_21 = 1;
      pIVar3 = (IOUSBPipe *)
               (**(code **)(**(int **)(this + 0x50) + 0x4bc))(*(int **)(this + 0x50),0,&local_22);
      if (pIVar3 != (IOUSBPipe *)0x0) {
        if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
            (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
          MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRetain
                    (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac),pIVar3);
        }
        *(ushort *)(this + 0xd8) = param_1;
        return 0;
      }
    }
    iVar1 = -0x1ffffd44;
  }
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
  }
  iVar4 = MaudioShDrTransitUsbInterface::SetAlternateInterface
                    ((MaudioShDrTransitUsbInterface *)this,0);
  if (iVar4 == 0) {
    *(undefined2 *)(this + 0xd8) = 0;
  }
  return iVar1;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::SetFormat
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,AudioStreamFormat *param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002c2;
  if (param_1 != (AudioStreamFormat *)0x0) {
    if (*(int *)(this + 0x140) == 2) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Can\'t Interface::SetFormat while streaming.\n");
      _IOSleep(3);
      uVar2 = 0xe00002bc;
    }
    else {
      *(undefined4 *)(this + 0x70) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x24);
      this[0x7f] = SUB41(*(undefined4 *)(this + 0x54),0);
      *(ushort *)(this + 0xd6) = (ushort)((byte)this[0x7d] >> 3);
      sVar1 = (ushort)((byte)this[0x7d] >> 3) * (short)*(undefined4 *)(this + 0x70);
      *(short *)(this + 0xcc) = sVar1;
      (**(code **)(*(int *)this + 0x4f0))
                (this,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x9c),
                 *(undefined4 *)(this + 0xc0),sVar1);
      MaudioShDrTransitUsbInterface::InitInDriverStruct
                ((MaudioShDrTransitUsbInterface *)this,*(ulong *)param_1);
      MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::SetSampleRate(_IOAudioSampleRate const*)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::SetSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,_IOAudioSampleRate *param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  if (*(int *)(this + 0x1ac) != 0) {
    local_1c = *(undefined4 *)param_1;
    local_18 = *(undefined4 *)(param_1 + 4);
    local_14 = *(undefined4 *)(this + 0xb8);
    local_10 = 0;
    MaudioShDrTransitUsbInterfaceAsyncFeedback::SetExternalSampleRate
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac),
               (ExternalSampleRate *)&local_1c);
  }
  MaudioShDrTransitUsbInterface::SetSampleRate((MaudioShDrTransitUsbInterface *)this,param_1);
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListInit(IOUSBLowLatencyIsocFrame*, unsigned
// long, FeedbackData const&)

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListInit
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,IOUSBLowLatencyIsocFrame *param_1,
          ulong param_2,FeedbackData *param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong local_2c;
  int local_20;
  
  local_20 = 0;
  if (param_2 != 0 && param_1 != (IOUSBLowLatencyIsocFrame *)0x0) {
    uVar7 = *(uint *)param_3;
    if (uVar7 == 0) {
      iVar8 = *(int *)(param_3 + 4);
      iVar5 = *(int *)(param_3 + 8);
      iVar3 = ((uint)(iVar8 + iVar5) / 1000) * 1000;
      for (uVar7 = 0; uVar7 < param_2; uVar7 = uVar7 + 1) {
        iVar4 = *(int *)(this + 0x1b0);
        uVar2 = (uint)(iVar8 + iVar5) % 1000 + *(int *)(this + 0x1b4);
        *(uint *)(this + 0x1b4) = uVar2;
        if (iVar4 != 0) {
          *(undefined4 *)(this + 0x1b0) = 0;
          uVar2 = uVar2 + ((uint)local_2c >> 0x10);
          *(uint *)(this + 0x1b4) = uVar2;
          local_2c = (longlong)iVar4 * 0x3e80000 >> 0x10;
        }
        iVar4 = iVar3;
        if (999 < uVar2) {
          iVar4 = iVar3 + 1000;
          *(uint *)(this + 0x1b4) = uVar2 - 1000;
        }
        uVar1 = *(ushort *)(this + 0xcc);
        *(undefined4 *)param_1 = 0x6c6c6974;
        *(undefined2 *)(param_1 + 6) = 0;
        uVar2 = (iVar4 * (uint)uVar1) / 1000;
        *(short *)(param_1 + 4) = (short)uVar2;
        param_1 = param_1 + 0x10;
        local_20 = local_20 + (uVar2 & 0xffff);
      }
    }
    else {
      iVar8 = (uVar7 >> 0x10) * 1000;
      local_20 = 0;
      for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
        iVar3 = (uVar7 & 0xffff) + *(int *)(this + 0x1b0);
        *(int *)(this + 0x1b0) = iVar3;
        iVar5 = iVar8;
        if (0xfffe < iVar3) {
          iVar5 = iVar8 + 1000;
          *(int *)(this + 0x1b0) = iVar3 + -0xffff;
        }
        uVar1 = *(ushort *)(this + 0xcc);
        *(undefined4 *)param_1 = 0x6c6c6974;
        *(undefined2 *)(param_1 + 6) = 0;
        uVar6 = (iVar5 * (uint)uVar1) / 1000;
        *(short *)(param_1 + 4) = (short)uVar6;
        param_1 = param_1 + 0x10;
        local_20 = local_20 + (uVar6 & 0xffff);
      }
    }
  }
  return local_20;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListSubmit()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListSubmit
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterfaceAsyncWrite *pMVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  IOUSBLowLatencyIsocFrame *pIVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((((*(int *)(this + 0x6c) != 0) && (*(int *)(this + 0x15c) != 0)) &&
      (*(int *)(this + 0x194) != 0)) &&
     ((*(int *)(this + 0x18c) != 0 && (*(int *)(this + 0x170) != 0)))) {
    iVar3 = *(int *)(this + 0x180);
    piVar9 = (int *)(*(int *)(this + 0x170) + iVar3 * 0xc);
    pIVar6 = (IOUSBLowLatencyIsocFrame *)(*(int *)(this + 0x194) + iVar3 * 0x40);
    iVar7 = *(int *)(this + 0x18c) + iVar3 * 0xc;
    if ((iVar7 != 0 && pIVar6 != (IOUSBLowLatencyIsocFrame *)0x0) && (*piVar9 != 0)) {
      local_28 = *(undefined4 *)(this + 0x19c);
      iVar8 = -0x1ffffd44;
      local_24 = *(undefined4 *)(this + 0x1a0);
      local_20 = *(undefined4 *)(this + 0x1a4);
      iVar5 = UsbFrameListInit(this,pIVar6,4,(FeedbackData *)&local_28);
      cVar4 = (**(code **)(*(int *)*piVar9 + 0x130))
                        ((int *)*piVar9,*(undefined4 *)(this + 0x158),*(undefined4 *)(this + 0x188),
                         iVar5,0);
      if (cVar4 != '\0') {
        piVar9[1] = *(int *)(this + 0x188);
        *(undefined1 *)(piVar9 + 2) = 1;
        (**(code **)(*(int *)this + 0x18))(this);
        *(int *)(iVar7 + 8) = iVar3;
        iVar8 = (**(code **)(**(int **)(this + 0x6c) + 0x108))
                          (*(int **)(this + 0x6c),*piVar9,*(undefined4 *)(this + 0x178),
                           *(undefined4 *)(this + 0x17c),4,pIVar6,iVar7,1);
        if (iVar8 == 0) {
          _OSIncrementAtomic(this + 0x184);
          pMVar1 = this + 0x178;
          uVar2 = *(uint *)pMVar1;
          *(uint *)pMVar1 = *(uint *)pMVar1 + 4;
          *(uint *)(this + 0x17c) = *(int *)(this + 0x17c) + (uint)(0xfffffffb < uVar2);
          *(uint *)(this + 0x180) = (*(int *)(this + 0x180) + 1U) % 100;
          *(uint *)(this + 0x188) = (uint)(iVar5 + *(int *)(this + 0x188)) % *(uint *)(this + 0x168)
          ;
          return 0;
        }
      }
      *(undefined1 *)(piVar9 + 2) = 0;
      (**(code **)(*(int *)this + 0x1c))(this);
      return iVar8;
    }
  }
  return -0x1ffffd44;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceAsyncWrite::Start(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_0000000c;
  
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x178) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x17c) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x180) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x188) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x184) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b8) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1bc) = 0;
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    _memset((void *)(*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x15c) +
                    *(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x168)),0,
            *(size_t *)((MaudioShDrTransitUsbInterface *)param_1 + 0x164));
    ((MaudioShDrTransitUsbInterface *)param_1)[0xdb] = (MaudioShDrTransitUsbInterface)0x0;
    ((MaudioShDrTransitUsbInterface *)param_1)[0x1a9] = (MaudioShDrTransitUsbInterface)0x0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a0) =
         *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x98);
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b0) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b4) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x19c) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a4) =
         *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x9c);
    if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1ac) != 0) {
      iVar2 = 0x14;
      MaudioShDrTransitUsbInterfaceAsyncFeedback::Start
                (CONCAT44(param_1._4_4_,*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1ac)))
      ;
      do {
        MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListSubmitStart
                  (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)
                    ((MaudioShDrTransitUsbInterface *)param_1 + 0x1ac));
        uVar1 = UsbFrameListSubmit((MaudioShDrTransitUsbInterfaceAsyncWrite *)
                                   (MaudioShDrTransitUsbInterface *)param_1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
      ((MaudioShDrTransitUsbInterface *)param_1)[0xdc] = (MaudioShDrTransitUsbInterface)0x1;
      return uVar1;
    }
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::CheckForCompletedFrames()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::CheckForCompletedFrames
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _OSIncrementAtomic(this + 0x1b8);
  if (iVar1 == 0) {
LAB_00009b85:
    do {
      uVar2 = *(uint *)(this + 0x1bc);
      do {
        iVar1 = *(int *)(this + 0x194);
        iVar3 = uVar2 * 0x10;
        if (*(int *)(iVar1 + iVar3) == 0x6c6c6974) goto LAB_00009ba3;
        uVar2 = (uVar2 + 1) % 400;
        *(uint *)(this + 0x1bc) = uVar2;
        if (uVar2 == 0) {
          MaudioShDrTransitUsbInterface::BufferWrapped
                    (this,*(undefined4 *)(iVar3 + 8 + iVar1),*(undefined4 *)(iVar3 + 0xc + iVar1),0,
                     0);
          iVar1 = *(int *)(this + 0x194);
        }
        MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes
                  ((MaudioShDrTransitUsbInterface *)this,(uint)*(ushort *)(iVar3 + 4 + iVar1));
        *(undefined4 *)(iVar3 + *(int *)(this + 0x194)) = 0x6c6c6974;
        if (this[0xdb] != (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0) goto LAB_00009b85;
        uVar2 = *(uint *)(this + 0x1bc);
      } while ((uVar2 & 3) != 0);
      UsbFrameListSubmit(this);
    } while( true );
  }
LAB_00009ba3:
  _OSDecrementAtomic();
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferDescFree(MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAsyncWrite*)

void MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferDescFree(UsbBufferAsyncWrite *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (UsbBufferAsyncWrite *)0x0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = 0;
      iVar2 = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        for (; uVar3 < *(uint *)(param_1 + 0x1c); uVar3 = uVar3 + 1) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x18) + iVar2);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x1c))(piVar1);
            *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2) = 0;
            *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x18)) = 0;
          }
          iVar2 = iVar2 + 0xc;
        }
      }
      (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferFree(MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAsyncWrite*)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferFree
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,UsbBufferAsyncWrite *param_1)

{
  if (param_1 != (UsbBufferAsyncWrite *)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAllocate(unsigned long,
// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAsyncWrite*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAllocate
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,ulong param_1,UsbBufferAsyncWrite *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == (UsbBufferAsyncWrite *)0x0)) {
    uVar2 = 0xe00002c2;
  }
  else {
    iVar1 = *(int *)(this + 0x68);
    *(int *)param_2 = iVar1;
    uVar2 = 0xe00002bd;
    if (iVar1 != 0) {
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x60);
      *(ulong *)(param_2 + 8) = param_1;
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::TransferAudioPerform(float*, unsigned long, unsigned
// long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::TransferAudioPerform
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,float *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)(*(int *)(this + 0x15c) + param_2);
  if (param_2 + param_3 <= *(uint *)(this + 0x168)) {
    uVar1 = param_3 / *(ushort *)(this + 0xd6);
    if (*(int *)(this + 0x54) == 1) {
      if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x18) {
        _ClipFloat32ToSInt24LE_4(param_1,pvVar2,uVar1);
      }
      else {
        _ClipFloat32ToSInt16LE_4(param_1,pvVar2,uVar1);
      }
    }
    else if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x18) {
      _ClipFloat32ToSInt24BE(param_1,pvVar2,uVar1);
    }
    else {
      _ClipFloat32ToSInt16BE(param_1,pvVar2,uVar1);
    }
    if (param_2 < *(uint *)(this + 0x164)) {
      uVar1 = *(uint *)(this + 0x164) - param_2;
      if (param_3 < uVar1) {
        uVar1 = param_3;
      }
      if (uVar1 != 0) {
        _memcpy((void *)(param_2 + *(int *)(this + 0x15c) + *(int *)(this + 0x168)),pvVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::TransferAudio(float*, unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::TransferAudio
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,float *param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(int *)(this + 0x140) == 2) {
    uVar3 = *(ushort *)(this + 0xcc) * param_3;
    uVar2 = *(ushort *)(this + 0xcc) * param_2;
    if (*(uint *)(this + 0x168) < uVar3 + uVar2) {
      return 0xe00002bc;
    }
    TransferAudioPerform(this,param_1,uVar3,uVar2);
    piVar1 = (int *)(**(code **)(**(int **)(this + 0x50) + 0x4d0))(*(int **)(this + 0x50));
    piVar1 = (int *)(**(code **)(*piVar1 + 0x4e8))(piVar1);
    uVar4 = (**(code **)(*piVar1 + 0x548))(piVar1);
    if ((*(int *)(this + 0x17c) - (int)((ulonglong)uVar4 >> 0x20) ==
         (uint)(*(uint *)(this + 0x178) < (uint)uVar4)) &&
       (*(uint *)(this + 0x178) - (uint)uVar4 < 0x28)) {
      CheckForCompletedFrames(this);
    }
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferDescAllocate(unsigned long, unsigned long,
// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferAsyncWrite*, unsigned long)

undefined4
MaudioShDrTransitUsbInterfaceAsyncWrite::UsbBufferDescAllocate
          (ulong param_1,ulong param_2,UsbBufferAsyncWrite *param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  ulong local_24;
  int local_20;
  
  if ((((param_3 == (UsbBufferAsyncWrite *)0x0) || (*(int *)(param_3 + 0x18) != 0)) ||
      (param_2 == 0)) || (param_1 == 0)) {
    uVar3 = 0xe00002c2;
  }
  else {
    piVar2 = (int *)IOBufferMemoryDescriptor::withOptions(3,param_2 * 0xc,0x1000);
    *(int **)(param_3 + 0x14) = piVar2;
    uVar3 = 0xe00002bd;
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 400))(piVar2);
      *(undefined4 *)(param_3 + 0x18) = uVar3;
      *(ulong *)(param_3 + 0x1c) = param_2;
      local_24 = 0;
      local_20 = 0;
      do {
        iVar1 = *(int *)(param_3 + 0x18);
        uVar3 = (**(code **)(*IOSubMemoryDescriptor::metaClass + 0x4c))
                          (IOSubMemoryDescriptor::metaClass);
        *(undefined4 *)(local_20 + iVar1) = uVar3;
        piVar2 = *(int **)(*(int *)(param_3 + 0x18) + local_20);
        if (piVar2 == (int *)0x0) {
          UsbBufferDescFree(param_3);
          return 0xe00002bd;
        }
        (**(code **)(*piVar2 + 0x130))(piVar2,*(undefined4 *)param_3,param_4,param_1,0);
        *(ulong *)(*(int *)(param_3 + 0x18) + 4 + local_20) = param_4;
        local_24 = local_24 + 1;
        param_4 = param_4 + param_1;
        local_20 = local_20 + 0xc;
      } while (param_2 != local_24);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackGetClosestValidSampleRate(MaudioShDrTransitUsbInterface*,
// _IOAudioSampleRate const&, _IOAudioSampleRate*)

undefined4
MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackGetClosestValidSampleRate
          (MaudioShDrTransitUsbInterface *param_1,_IOAudioSampleRate *param_2,
          _IOAudioSampleRate *param_3)

{
  undefined4 uVar1;
  
  if (param_3 != (_IOAudioSampleRate *)0x0 && param_1 != (MaudioShDrTransitUsbInterface *)0x0) {
    uVar1 = MaudioShDrTransitUsbInterfaceService::GetClosestValidSampleRate
                      (*(_IOAudioSampleRate **)(param_1 + 0x58),param_2);
    return uVar1;
  }
  return 0xe00002c2;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackIsValidSampleRate(_IOAudioSampleRate const&)

bool __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackIsValidSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this,_IOAudioSampleRate *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (1000 < (uint)(*(int *)param_1 + *(int *)(param_1 + 4))) {
    bVar1 = ((*(int *)param_1 + *(int *)(param_1 + 4)) * (uint)*(ushort *)(this + 0xcc)) / 1000 <=
            (uint)*(ushort *)(this + 0xd4);
  }
  return bVar1;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAsyncWrite::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAsyncWrite::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::FreeBuffers(MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterface::IsocCompletionsFree((UsbIsocCompletions *)(this + 0x18c));
  MaudioShDrTransitUsbInterface::IsocFramesFree((UsbIsocFrames *)(this + 0x194));
  UsbBufferDescFree((UsbBufferAsyncWrite *)(this + 0x158));
  if ((UsbBufferAsyncWrite *)(this + 0x158) != (UsbBufferAsyncWrite *)0x0) {
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    *(undefined4 *)(this + 0x160) = 0;
  }
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::FreeBuffers
              (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::free()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::free(MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  MaudioShDrTransitUsbInterfaceAsyncFeedback *this_00;
  
  FreeBuffers(this);
  this_00 = *(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac);
  if (this_00 != (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncFeedback::~MaudioShDrTransitUsbInterfaceAsyncFeedback(this_00)
    ;
    operator_delete(this_00);
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  ulong uVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  piVar2 = *(int **)(this + 0x6c);
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2);
    iVar5 = *(int *)(this + 0xbc);
    *(undefined4 *)(this + 0x150) = 100;
    uVar1 = (uint)uVar3 * 4;
    uVar4 = uVar3 - uVar3 % *(ushort *)(this + 0xcc);
    *(ushort *)(this + 0xd4) = uVar4;
    *(uint *)(this + 0x154) = (uint)uVar4 << 2;
    FreeBuffers(this);
    *(ulong *)(this + 0x164) = uVar1;
    if (((iVar5 + uVar1 != 0) &&
        ((UsbBufferAsyncWrite *)(this + 0x158) != (UsbBufferAsyncWrite *)0x0)) &&
       (*(int *)(this + 0x158) = *(int *)(this + 0x68), *(int *)(this + 0x68) != 0)) {
      *(ulong *)(this + 0x160) = iVar5 + uVar1;
      *(undefined4 *)(this + 0x15c) = *(undefined4 *)(this + 0x60);
      *(uint *)(this + 0x168) = *(int *)(this + 0x160) + (uint)uVar3 * -4;
      iVar5 = UsbBufferDescAllocate
                        (*(ulong *)(this + 0x154),*(ulong *)(this + 0x150),
                         (UsbBufferAsyncWrite *)(this + 0x158),uVar1);
      if ((iVar5 == 0) &&
         (iVar5 = MaudioShDrTransitUsbInterface::IsocFramesAllocate
                            (400,(UsbIsocFrames *)(this + 0x194)), iVar5 == 0)) {
        MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
                  (*(ulong *)(this + 0x150),UsbFrameListHandler,this,
                   (UsbIsocCompletions *)(this + 0x18c));
      }
    }
    if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac) !=
        (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
      iVar5 = MaudioShDrTransitUsbInterfaceAsyncFeedback::FinalizeBuffers
                        (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(this + 0x1ac));
      if (iVar5 != 0) {
        return iVar5;
      }
      MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
      return 0;
    }
  }
  return -0x1ffffd44;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallback(MaudioShDrTransitUsbInterface*,
// FeedbackData const&)

void MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallback
               (MaudioShDrTransitUsbInterface *param_1,FeedbackData *param_2)

{
  MaudioShDrTransitUsbInterface MVar1;
  
  MVar1 = (MaudioShDrTransitUsbInterface)0x0;
  if (1000 < (uint)(*(int *)(param_2 + 4) + *(int *)(param_2 + 8))) {
    MVar1 = (MaudioShDrTransitUsbInterface)
            (((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) * (uint)*(ushort *)(param_1 + 0xcc)) /
             1000 <= (uint)*(ushort *)(param_1 + 0xd4));
  }
  if (MVar1 == (MaudioShDrTransitUsbInterface)0x0) {
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x9c);
  }
  else {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 8);
  }
  if (param_1[0x1a8] != MVar1) {
    param_1[0x1a8] = MVar1;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackSampleRateChange(MaudioShDrTransitUsbInterface*,
// ExternalSampleRate const&)

void MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackSampleRateChange
               (MaudioShDrTransitUsbInterface *param_1,ExternalSampleRate *param_2)

{
  int iVar1;
  
  if ((((param_1 != (MaudioShDrTransitUsbInterface *)0x0) &&
       (param_1[0xdc] != (MaudioShDrTransitUsbInterface)0x0)) && (*(int *)(param_1 + 0xb4) == 3)) &&
     (((1000 < (uint)(*(int *)param_2 + *(int *)(param_2 + 4)) &&
       (((*(int *)param_2 + *(int *)(param_2 + 4)) * (uint)*(ushort *)(param_1 + 0xcc)) / 1000 <=
        (uint)*(ushort *)(param_1 + 0xd4))) && (*(int *)(param_1 + 0x140) == 2)))) {
    iVar1 = MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler
                      (*(MaudioShDrTransitUsbInterfaceService **)(param_1 + 0x58),param_2);
    if (iVar1 != 0) {
      _IOLog("%s: Unable to change sample rate to %d\n","M-Audio Transit USB",
             *(int *)param_2 + *(int *)(param_2 + 4));
      _IOSleep();
      return;
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncWrite::Stop(MaudioShDrTransitUsbInterfaceAsyncWrite *this)

{
  int *piVar1;
  int iVar2;
  
  this[0xdc] = (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0;
  this[0x1a9] = (MaudioShDrTransitUsbInterfaceAsyncWrite)0x1;
  this[0xdb] = (MaudioShDrTransitUsbInterfaceAsyncWrite)(*(int *)(this + 0x184) != 0);
  if ((this[0xdb] != (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0) &&
     (piVar1 = *(int **)(this + 0x6c), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x9c))(piVar1);
  }
  (**(code **)(*(int *)this + 0x18))(this);
  iVar2 = _IOCreateThread(FeedbackThreadStop,this);
  if (iVar2 == 0) {
    this[0x1a9] = (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0;
    (**(code **)(*(int *)this + 0x1c))(this);
  }
  _memset((void *)(*(int *)(this + 0x15c) + *(int *)(this + 0x168)),0,*(size_t *)(this + 0x164));
  if ((this[0xdb] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0) &&
     (this[0x1a9] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0)) {
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListHandler(void*, void*, int,
// IOUSBLowLatencyIsocFrame*)

void MaudioShDrTransitUsbInterfaceAsyncWrite::UsbFrameListHandler
               (void *param_1,void *param_2,int param_3,IOUSBLowLatencyIsocFrame *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (void *)0x0) {
    iVar2 = *(int *)((int)param_1 + 0x5c);
    puVar1 = (undefined4 *)(*(int *)((int)param_1 + 0x170) + (int)param_2 * 0xc);
    iVar3 = puVar1[1];
    *(undefined1 *)(puVar1 + 2) = 0;
    iVar4 = (**(code **)(*(int *)*puVar1 + 0xec))((int *)*puVar1);
    if (*(uint *)((int)param_1 + 0x168) < (uint)(iVar3 + iVar4)) {
      iVar5 = *(uint *)((int)param_1 + 0x168) - iVar3;
      _memset((void *)(iVar3 + iVar5 + *(int *)((int)param_1 + 0x15c)),0,iVar4 - iVar5);
    }
    _OSDecrementAtomic((int)param_1 + 0x184);
    if (*(char *)((int)param_1 + 0xdb) == '\0') {
      if (iVar2 != 0) {
        CheckForCompletedFrames(param_1);
      }
    }
    else if ((*(int *)((int)param_1 + 0x184) == 0) &&
            (*(undefined1 *)((int)param_1 + 0xdb) = 0, *(char *)((int)param_1 + 0x1a9) == '\0')) {
      MaudioShDrTransitUsbInterface::SetState(param_1,1);
    }
                    // WARNING: Could not recover jumptable at 0x0000a5a1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)param_1 + 0x1c))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackThreadStop(MaudioShDrTransitUsbInterfaceAsyncWrite*)

OSObject *
MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackThreadStop
          (MaudioShDrTransitUsbInterfaceAsyncWrite *param_1)

{
  OSObject *pOVar1;
  OSObject *pOStack_34;
  OSMetaClass *pOStack_30;
  MaudioShDrTransitUsbInterface *local_18;
  
  if (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(param_1 + 0x1ac) !=
      (MaudioShDrTransitUsbInterfaceAsyncFeedback *)0x0) {
    pOVar1 = (OSObject *)
             MaudioShDrTransitUsbInterfaceAsyncFeedback::Stop
                       (*(MaudioShDrTransitUsbInterfaceAsyncFeedback **)(param_1 + 0x1ac));
    return pOVar1;
  }
  param_1[0x1a9] = (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0;
  if (param_1[0xdb] == (MaudioShDrTransitUsbInterfaceAsyncWrite)0x0) {
    local_18 = (MaudioShDrTransitUsbInterface *)0x1;
    MaudioShDrTransitUsbInterface::SetState();
  }
  (**(code **)(*(int *)param_1 + 0x1c))();
  _IOExitThread();
  if (local_18 != (MaudioShDrTransitUsbInterface *)0x0) {
    local_18[0x1a9] = (MaudioShDrTransitUsbInterface)0x0;
    if (local_18[0xdb] == (MaudioShDrTransitUsbInterface)0x0) {
      pOStack_34 = (OSObject *)0x1;
      MaudioShDrTransitUsbInterface::SetState(local_18);
    }
    (**(code **)(*(int *)local_18 + 0x1c))(local_18);
  }
  _IOExitThread();
  OSObject::OSObject(pOStack_34,pOStack_30);
  *(undefined **)pOStack_34 = &MaudioShDrTransitUsbInterfaceService::vtable;
  return pOStack_34;
}



// MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackStop(MaudioShDrTransitUsbInterface*)

OSObject *
MaudioShDrTransitUsbInterfaceAsyncWrite::FeedbackCallbackStop
          (MaudioShDrTransitUsbInterface *param_1)

{
  OSObject *local_18;
  OSMetaClass *pOStack_14;
  
  if (param_1 != (MaudioShDrTransitUsbInterface *)0x0) {
    param_1[0x1a9] = (MaudioShDrTransitUsbInterface)0x0;
    if (param_1[0xdb] == (MaudioShDrTransitUsbInterface)0x0) {
      local_18 = (OSObject *)0x1;
      MaudioShDrTransitUsbInterface::SetState(param_1);
    }
    (**(code **)(*(int *)param_1 + 0x1c))(param_1);
  }
  _IOExitThread();
  OSObject::OSObject(local_18,pOStack_14);
  *(undefined **)local_18 = &MaudioShDrTransitUsbInterfaceService::vtable;
  return local_18;
}



