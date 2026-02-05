#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAsyncRead::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  return *(undefined4 *)(this + 0x1a0);
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead()

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead()

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead()

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::~MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterfaceAsync::~MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this);
  OSObject::operator_delete(this,0x220);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceAsyncRead::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAsyncRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAsync::gMetaClass,0x220);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAsyncRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterfaceAsync::gMetaClass,0x220);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead()

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceAsyncRead *
MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceAsyncRead *this;
  MaudioShDrTransitUsbInterfaceAsyncRead *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new
                   ((OSObject *)MaudioUsbTransitDevice::MaudioUsbTransitDevice,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceAsyncRead *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceAsyncRead *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncRead(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead()

MaudioShDrTransitUsbInterfaceAsyncRead * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MaudioShDrTransitUsbInterfaceAsyncRead
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  MaudioShDrTransitUsbInterfaceAsync::MaudioShDrTransitUsbInterfaceAsync
            ((MaudioShDrTransitUsbInterfaceAsync *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceAsyncRead *
MaudioShDrTransitUsbInterfaceAsyncRead::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceAsyncRead *this;
  MaudioShDrTransitUsbInterfaceAsyncRead *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new
                   ((OSObject *)MaudioUsbTransitDevice::MaudioUsbTransitDevice,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceAsyncRead *)0x0) {
    MaudioShDrTransitUsbInterfaceAsyncRead(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceAsyncRead *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::init(MaudioShDrTransitUsbInterface::InitStruct const&)

bool __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::init
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,InitStruct *param_1)

{
  char cVar1;
  
  cVar1 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,1);
    *(undefined4 *)(this + 0x1dc) = 48000;
    *(undefined4 *)(this + 0x1e0) = 0;
    this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
    *(undefined4 *)(this + 0x1f0) = 0;
    *(undefined4 *)(this + 500) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    this[0x1fc] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x1;
    this[0xdb] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
    *(undefined4 *)(this + 0x204) = 0;
  }
  return cVar1 != '\0';
}



// MaudioShDrTransitUsbInterfaceAsyncRead::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::Stop(MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  int *piVar1;
  
  this[0xdc] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
  this[0xdb] = (MaudioShDrTransitUsbInterfaceAsyncRead)(*(int *)(this + 0x188) != 0);
  if (*(int *)(this + 0x188) != 0) {
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



// MaudioShDrTransitUsbInterfaceAsyncRead::SetAlternateSetting(unsigned short)

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::SetAlternateSetting
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,ushort param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_22;
  undefined1 local_21;
  undefined2 local_20;
  undefined1 local_1e;
  
  *(undefined2 *)(this + 0xd8) = 0;
  *(undefined2 *)(this + 0xd4) = 0;
  iVar1 = MaudioShDrTransitUsbInterface::SetAlternateInterface
                    ((MaudioShDrTransitUsbInterface *)this,(uint)param_1);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    local_22 = 1;
    local_20 = 0xffff;
    local_1e = 0xff;
    local_21 = 1;
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



// MaudioShDrTransitUsbInterfaceAsyncRead::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::SetFormat
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,AudioStreamFormat *param_1)

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



// MaudioShDrTransitUsbInterfaceAsyncRead::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::SetSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,_IOAudioSampleRate *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = MaudioShDrTransitUsbInterface::SetSampleRate
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (iVar2 == 0) {
    if (param_1 == (_IOAudioSampleRate *)0x0) {
      iVar2 = -0x1ffffd44;
    }
    else {
      *(undefined4 *)(this + 0x1dc) = *(undefined4 *)param_1;
      uVar1 = *(undefined4 *)(param_1 + 4);
      this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
      *(undefined4 *)(this + 0x1f0) = 0;
      *(undefined4 *)(this + 500) = 0;
      *(undefined4 *)(this + 0x1e0) = uVar1;
      *(undefined4 *)(this + 0x1f8) = 0;
      this[0x1fc] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x1;
    }
  }
  return iVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListInit(IOUSBLowLatencyIsocFrame*, unsigned
// long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListInit
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,IOUSBLowLatencyIsocFrame *param_1,
          ulong param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *(undefined4 *)param_1 = 0x6c6c6974;
    uVar1 = *(undefined2 *)(this + 0xd4);
    *(undefined2 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 4) = uVar1;
    param_1 = param_1 + 0x10;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::FreeBuffers(MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  MaudioShDrTransitUsbInterface::SampleBufferFree
            ((MaudioShDrTransitUsbInterface *)this,(OldSampleBuffer *)(this + 0x19c));
  MaudioShDrTransitUsbInterface::IsocCompletionsFree((UsbIsocCompletions *)(this + 0x18c));
  MaudioShDrTransitUsbInterface::IsocFramesFree((UsbIsocFrames *)(this + 0x194));
  MaudioShDrTransitUsbInterface::UsbBufferFree((UsbBuffer *)(this + 0x158));
  MaudioShDrTransitUsbInterface::BufferFree
            ((ulong *)(this + 0x178),(IOBufferMemoryDescriptor **)(this + 0x170),
             (uchar **)(this + 0x174));
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::free()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::free(MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  FreeBuffers(this);
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::FinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = -0x1ffffd44;
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1);
    *(undefined4 *)(this + 0x150) = 200;
    uVar2 = uVar2 - uVar2 % *(ushort *)(this + 0xcc);
    *(ushort *)(this + 0xd4) = uVar2;
    *(uint *)(this + 0x154) = (uint)uVar2 * 2;
    FreeBuffers(this);
    *(undefined4 *)(this + 0x178) = *(undefined4 *)(this + 0x154);
    iVar3 = MaudioShDrTransitUsbInterface::BufferAllocate
                      ((ulong *)(this + 0x178),(IOBufferMemoryDescriptor **)(this + 0x170),
                       (uchar **)(this + 0x174));
    if (iVar3 == 0) {
      iVar3 = MaudioShDrTransitUsbInterface::UsbBufferAllocate
                        ((FrameList *)(this + 0x150),(UsbBuffer *)(this + 0x158));
      if (iVar3 == 0) {
        iVar3 = MaudioShDrTransitUsbInterface::IsocFramesAllocate
                          (400,(UsbIsocFrames *)(this + 0x194));
        if (iVar3 == 0) {
          iVar3 = MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
                            (*(ulong *)(this + 0x150),UsbFrameListHandler,this,
                             (UsbIsocCompletions *)(this + 0x18c));
          if (iVar3 == 0) {
            iVar3 = MaudioShDrTransitUsbInterface::SampleBufferAllocate
                              ((MaudioShDrTransitUsbInterface *)this,*(ulong *)(this + 0xc0),
                               (_IOAudioSampleRate *)(this + 0x98),
                               (AudioStreamFormat *)(this + 0x70),(OldSampleBuffer *)(this + 0x19c))
            ;
            if (iVar3 == 0) {
              MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
            }
          }
        }
      }
    }
  }
  return iVar3;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::CopyBuffer(unsigned char*, unsigned char const*, unsigned
// long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::CopyBuffer
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,uchar *param_1,uchar *param_2,ulong param_3)

{
  if ((param_2 != (uchar *)0x0 && param_1 != (uchar *)0x0) && (param_3 != 0)) {
    _memcpy(param_1,param_2,param_3);
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::FixBytesToCopy(unsigned long)

ulong __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::FixBytesToCopy
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,ulong param_1)

{
  if (param_1 == 0) {
    param_1 = (uint)*(ushort *)(this + 0xcc) * *(int *)(this + 0xa4);
    *(undefined4 *)(this + 0x1f8) = 1;
  }
  return param_1;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::TrackSampleRate(unsigned long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::TrackSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x1bc) = 0;
  uVar1 = param_1 / *(ushort *)(this + 0xcc);
  iVar3 = uVar1 * 1000;
  *(uint *)(this + 0x1c4) = uVar1;
  *(int *)(this + 0x1c0) = iVar3;
  *(int *)(this + 0x1b8) = iVar3;
  if (iVar3 < 1) {
    *(undefined4 *)(this + 0x1c8) = 0;
    *(undefined4 *)(this + 0x1cc) = 0;
    this[0x1d0] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
    *(undefined4 *)(this + 0x1d4) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    return;
  }
  iVar3 = MaudioShDrTransitUsbInterfaceService::GetClosestValidSampleRate
                    (*(_IOAudioSampleRate **)(this + 0x58),(_IOAudioSampleRate *)(this + 0x1b8));
  iVar2 = *(int *)(this + 0x1c8) + *(int *)(this + 0x1cc) + uVar1 * -1000;
  if ((iVar2 == 0) || (iVar2 != *(int *)(this + 0x1d8))) {
    *(undefined4 *)(this + 0x1d4) = 0x10;
    *(int *)(this + 0x1d8) = iVar2;
  }
  else {
    if (*(int *)(this + 0x1d4) == 0) goto LAB_000084cc;
    *(int *)(this + 0x1d4) = *(int *)(this + 0x1d4) + -1;
  }
  if (*(int *)(this + 0x1d4) != 0) {
    this[0x1d0] = (MaudioShDrTransitUsbInterfaceAsyncRead)(iVar3 == 0);
    return;
  }
LAB_000084cc:
  this[0x1d0] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::SetExternalSampleRate(_IOAudioSampleRate const&)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::SetExternalSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,_IOAudioSampleRate *param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  if ((*(int *)(this + 0xb4) == 2) && (this[0xdc] != (MaudioShDrTransitUsbInterfaceAsyncRead)0x0)) {
    local_1c = *(undefined4 *)param_1;
    local_18 = *(undefined4 *)(param_1 + 4);
    local_14 = 1;
    local_10 = 1;
    MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler
              (*(MaudioShDrTransitUsbInterfaceService **)(this + 0x58),
               (ExternalSampleRate *)&local_1c);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::TransferAudioPerform(float*, unsigned long, unsigned
// long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::TransferAudioPerform
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,float *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x19c) + param_2;
  uVar1 = param_3 / *(ushort *)(this + 0xd6);
  if (param_3 + param_2 <= *(uint *)(this + 0x1a0)) {
    if (*(int *)(this + 0x54) == 1) {
      if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x18) {
        if (this[0x125] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) {
          _ConvertSInt24LEToFloat32(iVar2,param_1,uVar1);
        }
        else {
          _ConvertSInt24LEToFloat32InDriver(iVar2,param_1,uVar1,this + 0xe0);
        }
      }
      else if (this[0x125] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) {
        _ConvertSInt16LEToFloat32(iVar2,param_1,uVar1);
      }
      else {
        _ConvertSInt16LEToFloat32InDriver(iVar2,param_1,uVar1,this + 0xe0);
      }
    }
    else if (this[0x7c] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x18) {
      _ConvertSInt24BEToFloat32(iVar2,param_1,uVar1);
    }
    else {
      _ConvertSInt16BEToFloat32(iVar2,param_1,uVar1);
    }
    if ((param_2 < *(uint *)(this + 0x1a4)) && (*(uint *)(this + 0x1a4) < param_3 + param_2)) {
      MaudioShDrTransitUsbEngine::ReportHardwareError
                (*(MaudioShDrTransitUsbEngine **)(this + 0x5c),0xe00002d0);
      return;
    }
  }
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAsyncRead::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAsyncRead::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListSubmit()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListSubmit
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  MaudioShDrTransitUsbInterfaceAsyncRead *pMVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_24;
  uint local_20;
  uint uVar7;
  
  iVar5 = MaudioShDrTransitUsbInterface::GetUsbFrameNumber
                    ((MaudioShDrTransitUsbInterface *)this,(ulonglong *)&local_24);
  if (iVar5 == 0) {
    uVar7 = *(uint *)(this + 0x17c);
    iVar5 = *(int *)(this + 0x180);
    uVar12 = iVar5 + (uint)(0xffffffcd < uVar7);
    if ((uVar12 <= local_20) && ((uVar12 < local_20 || (uVar7 + 0x32 < local_24)))) {
      uVar12 = *(uint *)(this + 0x184);
      do {
        uVar6 = uVar7 + 2;
        iVar5 = iVar5 + (uint)(0xfffffffd < uVar7);
        *(uint *)(this + 0x17c) = uVar6;
        *(int *)(this + 0x180) = iVar5;
        uVar12 = (uVar12 + 1) % 200;
        *(uint *)(this + 0x184) = uVar12;
        uVar8 = uVar7 + 0x34;
        uVar13 = iVar5 + (uint)(0xffffffcd < uVar6);
        if (local_20 < uVar13) break;
        uVar7 = uVar6;
      } while ((uVar13 < local_20) || (uVar8 <= local_24));
      MaudioShDrTransitUsbEngine::ReportHardwareError
                (*(MaudioShDrTransitUsbEngine **)(this + 0x5c),0xe00002ee);
    }
  }
  iVar5 = *(int *)(this + 0x184);
  if ((((*(int *)(this + 0x6c) != 0) && (*(int *)(this + 0x15c) != 0)) &&
      (*(int *)(this + 0x194) != 0)) &&
     ((*(int *)(this + 0x18c) != 0 && (*(int *)(this + 0x168) != 0)))) {
    iVar4 = *(int *)(*(int *)(this + 0x168) + iVar5 * 4);
    puVar9 = (undefined4 *)(*(int *)(this + 0x194) + iVar5 * 0x20);
    iVar2 = *(int *)(this + 0x18c) + iVar5 * 0xc;
    if ((puVar9 != (undefined4 *)0x0) && ((iVar2 != 0 && (iVar4 != 0)))) {
      iVar10 = 0;
      puVar11 = puVar9;
      do {
        *puVar11 = 0x6c6c6974;
        uVar3 = *(undefined2 *)(this + 0xd4);
        iVar10 = iVar10 + 1;
        *(undefined2 *)((int)puVar11 + 6) = 0;
        *(undefined2 *)(puVar11 + 1) = uVar3;
        puVar11 = puVar11 + 4;
      } while (iVar10 != 2);
      (**(code **)(*(int *)this + 0x18))(this);
      *(int *)(iVar2 + 8) = iVar5;
      iVar5 = (**(code **)(**(int **)(this + 0x6c) + 0x104))
                        (*(int **)(this + 0x6c),iVar4,*(undefined4 *)(this + 0x17c),
                         *(undefined4 *)(this + 0x180),2,puVar9,iVar2,1);
      if (iVar5 != 0) {
        (**(code **)(*(int *)this + 0x1c))(this);
        return iVar5;
      }
      _OSIncrementAtomic(this + 0x188);
      pMVar1 = this + 0x17c;
      uVar7 = *(uint *)pMVar1;
      *(uint *)pMVar1 = *(uint *)pMVar1 + 2;
      *(uint *)(this + 0x180) = *(int *)(this + 0x180) + (uint)(0xfffffffd < uVar7);
      *(uint *)(this + 0x184) = (*(int *)(this + 0x184) + 1U) % 200;
      return 0;
    }
  }
  return -0x1ffffd44;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceAsyncRead::Start(ulonglong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_0000000c;
  
  uVar2 = 0xe00002bc;
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    ((MaudioShDrTransitUsbInterface *)param_1)[0xdb] = (MaudioShDrTransitUsbInterface)0x0;
    iVar1 = 0x32;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x17c) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x180) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x184) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x188) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1ac) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b0) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1b4) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a4) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1a8) = 0;
    ((MaudioShDrTransitUsbInterface *)param_1)[0x1ec] = (MaudioShDrTransitUsbInterface)0x0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1f0) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 500) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x1f8) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x200) = 0;
    ((MaudioShDrTransitUsbInterface *)param_1)[0x218] = (MaudioShDrTransitUsbInterface)0x1;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x21c) = 0;
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    do {
      uVar2 = UsbFrameListSubmit((MaudioShDrTransitUsbInterfaceAsyncRead *)
                                 (MaudioShDrTransitUsbInterface *)param_1);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
    ((MaudioShDrTransitUsbInterface *)param_1)[0xdc] = (MaudioShDrTransitUsbInterface)0x1;
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::CheckForSampleRateChange()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::CheckForSampleRateChange
          (MaudioShDrTransitUsbInterfaceAsyncRead *this)

{
  MaudioShDrTransitUsbInterfaceAsyncRead MVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  iVar2 = *(int *)(this + 0x1c8) + *(int *)(this + 0x1cc);
  if (*(int *)(this + 0x1dc) + *(int *)(this + 0x1e0) == iVar2) {
    MVar1 = this[0x1d0];
    if (this[0x1fc] == MVar1) {
      this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
      *(undefined4 *)(this + 0x1f0) = 0;
      goto LAB_00008b3c;
    }
    this[0x1fc] = MVar1;
    if (MVar1 != (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) {
      this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x1;
      *(undefined4 *)(this + 0x1f0) = 0;
      *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(this + 0x1c8);
      *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(this + 0x1cc);
      this[0x214] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x1;
    }
  }
  if (iVar2 == 0) {
    if (*(uint *)(this + 500) < 0x400) {
      *(uint *)(this + 500) = *(uint *)(this + 500) + 1;
    }
  }
  else if ((this[0x1ec] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) ||
          (iVar2 != *(int *)(this + 0x1e4) + *(int *)(this + 0x1e8))) {
    this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x1;
    *(undefined4 *)(this + 0x1f0) = 0x10;
    *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(this + 0x1c8);
    *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(this + 0x1cc);
  }
  else if (*(int *)(this + 0x1f0) != 0) {
    *(int *)(this + 0x1f0) = *(int *)(this + 0x1f0) + -1;
  }
LAB_00008b3c:
  if ((this[0x1ec] != (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) && (*(int *)(this + 0x1f0) == 0))
  {
    if (*(char *)(*(int *)(this + 0x5c) + 0xe6) == '\0') {
      local_1c = *(undefined4 *)(this + 0x1c8);
      local_18 = *(undefined4 *)(this + 0x1cc);
      this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
      *(undefined4 *)(this + 0x1dc) = local_1c;
      *(undefined4 *)(this + 0x1e0) = local_18;
      *(undefined4 *)(this + 500) = 0x401;
      if ((*(int *)(this + 0xb4) == 2) &&
         (this[0xdc] != (MaudioShDrTransitUsbInterfaceAsyncRead)0x0)) {
        local_14 = 1;
        local_10 = 1;
        MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler
                  (*(MaudioShDrTransitUsbInterfaceService **)(this + 0x58),
                   (ExternalSampleRate *)&local_1c);
      }
    }
    else {
      this[0x1ec] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::CopyBufferFrameToSample(unsigned char const*, unsigned
// long, UnsignedWide)

uint MaudioShDrTransitUsbInterfaceAsyncRead::CopyBufferFrameToSample
               (int param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  size_t sVar6;
  size_t sVar7;
  
  uVar2 = (uint)(param_3 == 0);
  if (param_2 == (void *)0x0 || param_3 == 0) {
    return uVar2;
  }
  pvVar5 = *(void **)(param_1 + 0x19c);
  if (pvVar5 == (void *)0x0) {
    return uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x1a4);
  pvVar1 = (void *)((int)pvVar5 + iVar3);
  if (*(uint *)(param_1 + 0x1a0) < param_3 + iVar3) {
    sVar4 = *(uint *)(param_1 + 0x1a0) - iVar3;
    sVar6 = param_3 - sVar4;
    if ((sVar4 != 0) && (param_2 != (void *)0x0 && pvVar1 != (void *)0x0)) {
      _memcpy(pvVar1,param_2,sVar4);
      pvVar5 = *(void **)(param_1 + 0x19c);
    }
    sVar7 = param_3;
    if (((void *)((int)param_2 + sVar4) != (void *)0x0 && pvVar5 != (void *)0x0) && (sVar6 != 0)) {
      _memcpy(pvVar5,(void *)((int)param_2 + sVar4),sVar6);
    }
  }
  else {
    if ((param_2 != (void *)0x0 && pvVar1 != (void *)0x0) && (param_3 != 0)) {
      _memcpy(pvVar1,param_2,param_3);
      iVar3 = *(int *)(param_1 + 0x1a4);
    }
    if (*(int *)(param_1 + 0x1a0) != param_3 + iVar3) goto LAB_00008d2d;
    sVar6 = 0;
    sVar7 = 0;
  }
  MaudioShDrTransitUsbInterface::BufferWrapped(param_1,param_4,param_5,sVar6,sVar7);
  iVar3 = *(int *)(param_1 + 0x1a4);
LAB_00008d2d:
  *(uint *)(param_1 + 0x1a4) = (iVar3 + param_3) % *(uint *)(param_1 + 0x1a0);
  return (iVar3 + param_3) / *(uint *)(param_1 + 0x1a0);
}



// MaudioShDrTransitUsbInterfaceAsyncRead::CopyInputFrames(long)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::CopyInputFrames
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,long param_1)

{
  MaudioShDrTransitUsbInterfaceAsyncRead *pMVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  long local_34;
  ulong local_28;
  
  local_34 = param_1;
  iVar3 = _OSIncrementAtomic(this + 0x204);
  if (iVar3 != 0) {
LAB_00008f9f:
    _OSDecrementAtomic();
    return;
  }
  bVar9 = param_1 != 0;
  if (!bVar9) {
    while (0 < *(int *)(this + 0x21c)) {
      UsbFrameListSubmit(this);
      *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + -1;
    }
  }
  if (*(int *)(this + 0x15c) == 0) goto LAB_00008f9f;
  if (this[0x218] != (MaudioShDrTransitUsbInterfaceAsyncRead)0x0) {
    piVar8 = *(int **)(this + 0x194);
    if (*piVar8 == 0x6c6c6974) goto LAB_00008de8;
    this[0x218] = (MaudioShDrTransitUsbInterfaceAsyncRead)0x0;
    MaudioShDrTransitUsbInterface::TakeFirstTimeStamp(this,piVar8[2],piVar8[3]);
  }
  piVar8 = *(int **)(this + 0x194);
LAB_00008de8:
  local_28 = 0;
LAB_00008f4c:
  uVar6 = *(uint *)(this + 0x1b4);
  do {
    if (piVar8[uVar6 * 4] == 0x6c6c6974) {
LAB_00008f89:
      if (local_28 != 0) {
        MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes
                  ((MaudioShDrTransitUsbInterface *)this,local_28);
      }
      goto LAB_00008f9f;
    }
    iVar4 = *(ushort *)(this + 0xd4) * uVar6;
    iVar3 = *(int *)(this + 0x15c);
    uVar2 = *(ushort *)((int)(piVar8 + uVar6 * 4) + 6);
    uVar5 = (uint)uVar2;
    if (*(int *)(this + 0xb4) == 2) {
      TrackSampleRate(this,uVar5);
      CheckForSampleRateChange(this);
      piVar8 = *(int **)(this + 0x194);
      uVar6 = *(uint *)(this + 0x1b4);
    }
    uVar7 = uVar5;
    if (uVar2 == 0) {
      uVar7 = (uint)*(ushort *)(this + 0xcc) * *(int *)(this + 0xa4);
      *(undefined4 *)(this + 0x1f8) = 1;
      if (uVar7 != 0) goto LAB_00008e6b;
    }
    else {
LAB_00008e6b:
      if (*(int *)(this + 0x1f8) == 0) {
        CopyBufferFrameToSample
                  (this,iVar4 + iVar3,uVar7,piVar8[uVar6 * 4 + 2],piVar8[uVar6 * 4 + 3]);
      }
      else {
        *(int *)(this + 0x1f8) = *(int *)(this + 0x1f8) + -1;
        CopyBufferFrameToSample
                  (this,*(undefined4 *)(this + 0x174),uVar7,piVar8[uVar6 * 4 + 2],
                   piVar8[uVar6 * 4 + 3]);
        MaudioShDrTransitUsbEngine::ReportHardwareError
                  (*(MaudioShDrTransitUsbEngine **)(this + 0x5c),0xe00002e7);
      }
      local_28 = local_28 + uVar7;
      piVar8 = *(int **)(this + 0x194);
      uVar6 = *(uint *)(this + 0x1b4);
    }
    pMVar1 = this + 0x1ac;
    uVar7 = *(uint *)pMVar1;
    *(uint *)pMVar1 = *(uint *)pMVar1 + 1;
    *(uint *)(this + 0x1b0) = *(int *)(this + 0x1b0) + (uint)(0xfffffffe < uVar7);
    piVar8[uVar6 * 4] = 0x6c6c6974;
    uVar6 = (*(int *)(this + 0x1b4) + 1U) % 400;
    *(uint *)(this + 0x1b4) = uVar6;
    if (((uVar6 & 1) == 0) && (this[0xdb] == (MaudioShDrTransitUsbInterfaceAsyncRead)0x0)) {
      if (!bVar9) break;
      *(int *)(this + 0x21c) = *(int *)(this + 0x21c) + 1;
LAB_00008f62:
      local_34 = local_34 - uVar5;
      if (local_34 < 1) goto LAB_00008f89;
    }
    else if (bVar9) goto LAB_00008f62;
    piVar8 = *(int **)(this + 0x194);
  } while( true );
  UsbFrameListSubmit(this);
  piVar8 = *(int **)(this + 0x194);
  goto LAB_00008f4c;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::TransferAudio(float*, unsigned long, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncRead::TransferAudio
          (MaudioShDrTransitUsbInterfaceAsyncRead *this,float *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = 0;
  if (*(int *)(this + 0x140) == 2) {
    uVar3 = *(ushort *)(this + 0xcc) * param_2;
    uVar5 = *(ushort *)(this + 0xcc) * param_3;
    uVar1 = *(uint *)(this + 0x1a0);
    uVar7 = uVar5 + uVar3;
    uVar2 = 0xe00002bc;
    if (uVar7 <= uVar1) {
      uVar4 = *(int *)(this + 0x1a4) + 1;
      if (uVar1 < uVar4) {
        uVar4 = 0;
      }
      uVar6 = uVar4 + (uint)*(ushort *)(this + 0xca) * 100;
      if (uVar1 < uVar6) {
        uVar6 = uVar6 - uVar1;
      }
      if (((uVar4 < uVar7 && uVar7 < uVar6) || (uVar6 < uVar4 && uVar7 < uVar6)) ||
         ((uVar4 < uVar7 && uVar6 < uVar4 && (uVar6 < uVar7)))) {
        uVar7 = uVar7 - *(int *)(this + 0x1a4);
        if (0x7fffffff < uVar7) {
          uVar7 = uVar7 + uVar1;
        }
        CopyInputFrames(this,uVar7);
      }
      TransferAudioPerform(this,param_1,uVar5,uVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListHandler(void*, void*, int,
// IOUSBLowLatencyIsocFrame*)

void MaudioShDrTransitUsbInterfaceAsyncRead::UsbFrameListHandler
               (void *param_1,void *param_2,int param_3,IOUSBLowLatencyIsocFrame *param_4)

{
  if (param_1 != (void *)0x0) {
    _OSDecrementAtomic((int)param_1 + 0x188);
    if (*(char *)((int)param_1 + 0xdb) == '\0') {
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        CopyInputFrames(param_1,0);
      }
    }
    else if (*(int *)((int)param_1 + 0x188) == 0) {
      MaudioShDrTransitUsbInterface::SetState(param_1,1);
    }
                    // WARNING: Could not recover jumptable at 0x000090f9. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)param_1 + 0x1c))();
    return;
  }
  return;
}



