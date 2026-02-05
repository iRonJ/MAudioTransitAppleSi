#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceVirtWrite::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  return *(undefined4 *)(this + 0x154);
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite(OSMetaClass
// const*)

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite()

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite()

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite()

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::~MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  OSObject::operator_delete(this,0x158);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceVirtWrite::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceVirtWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x158);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceVirtWrite",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x158);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite()

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceVirtWrite *
MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceVirtWrite *this;
  MaudioShDrTransitUsbInterfaceVirtWrite *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x158,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceVirtWrite(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite()

MaudioShDrTransitUsbInterfaceVirtWrite * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MaudioShDrTransitUsbInterfaceVirtWrite
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceVirtWrite *
MaudioShDrTransitUsbInterfaceVirtWrite::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceVirtWrite *this;
  MaudioShDrTransitUsbInterfaceVirtWrite *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x158,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0) {
    MaudioShDrTransitUsbInterfaceVirtWrite(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::init(MaudioShDrTransitUsbInterface::InitStruct const&)

char __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::init
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,InitStruct *param_1)

{
  char cVar1;
  
  cVar1 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,0);
  }
  return cVar1;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceVirtWrite::Start(ulonglong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xe00002bc;
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
    uVar1 = 0;
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::Stop(MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::SetAlternateSetting(unsigned short)

void MaudioShDrTransitUsbInterfaceVirtWrite::SetAlternateSetting(ushort param_1)

{
  undefined2 in_stack_00000006;
  
  MaudioShDrTransitUsbInterface::SetAlternateInterface(_param_1,0);
  *(undefined2 *)(_param_1 + 0xd8) = 0xff;
  return;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::SetFormat
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,AudioStreamFormat *param_1)

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



// MaudioShDrTransitUsbInterfaceVirtWrite::SetSampleRate(_IOAudioSampleRate const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::SetSampleRate
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,_IOAudioSampleRate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = uVar2;
  uVar3 = *(int *)(this + 0x98) + *(int *)(this + 0x9c);
  *(uint *)(this + 0xa0) = uVar3;
  *(uint *)(this + 0xa4) = uVar3 / 1000;
  *(uint *)(this + 0xac) = uVar3 % 1000;
  this[0xc4] = (MaudioShDrTransitUsbInterfaceVirtWrite)(uVar3 % 1000 != 0);
  *(uint *)(this + 0xa8) = (uVar3 / 1000) * 1000;
  (**(code **)(*(int *)this + 0x4f0))
            (this,uVar1,uVar2,*(undefined4 *)(this + 0xc0),*(undefined2 *)(this + 0xcc));
  MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,0);
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferFree(MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferVirtWrite*)

void __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferFree
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,UsbBufferVirtWrite *param_1)

{
  if ((param_1 != (UsbBufferVirtWrite *)0x0) && (*(int *)param_1 != 0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferAllocate(unsigned long,
// MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferVirtWrite*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::UsbBufferAllocate
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,ulong param_1,UsbBufferVirtWrite *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == (UsbBufferVirtWrite *)0x0)) {
    uVar2 = 0xe00002c2;
  }
  else {
    iVar1 = *(int *)(this + 0x60);
    *(int *)param_2 = iVar1;
    uVar2 = 0xe00002bd;
    if (iVar1 != 0) {
      uVar2 = 0;
      *(ulong *)(param_2 + 4) = param_1;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::TransferAudio(float*, unsigned long, unsigned long)

undefined4
MaudioShDrTransitUsbInterfaceVirtWrite::TransferAudio(float *param_1,ulong param_2,ulong param_3)

{
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::TransferAudioPerform(float*, unsigned long, unsigned
// long)

void __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::TransferAudioPerform
          (MaudioShDrTransitUsbInterfaceVirtWrite *this,float *param_1,ulong param_2,ulong param_3)

{
  if (*(uint *)(this + 0x154) < param_2 + param_3) {
    return;
  }
  if (*(int *)(this + 0x54) == 1) {
    if (this[0x7c] == (MaudioShDrTransitUsbInterfaceVirtWrite)0x18) {
      _ClipFloat32ToSInt24LE();
      return;
    }
    _ClipFloat32ToSInt16LE();
    return;
  }
  if (this[0x7c] == (MaudioShDrTransitUsbInterfaceVirtWrite)0x18) {
    _ClipFloat32ToSInt24BE();
    return;
  }
  _ClipFloat32ToSInt16BE();
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceVirtWrite::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceVirtWrite::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::~MetaClass()

MetaClass * __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::FreeBuffers(MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  if ((this != (MaudioShDrTransitUsbInterfaceVirtWrite *)0xfffffeb0) &&
     (*(int *)(this + 0x150) != 0)) {
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::free()

void __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::free(MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  if ((this != (MaudioShDrTransitUsbInterfaceVirtWrite *)0xfffffeb0) &&
     (*(int *)(this + 0x150) != 0)) {
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceVirtWrite::FinalizeBuffers()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtWrite::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceVirtWrite *this)

{
  undefined4 uVar1;
  MaudioShDrTransitUsbInterfaceVirtWrite *pMVar2;
  
  pMVar2 = this + 0x150;
  if ((pMVar2 != (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0) && (*(int *)(this + 0x150) != 0)) {
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x154) = 0;
  }
  if ((*(int *)(this + 0xbc) == 0) || (pMVar2 == (MaudioShDrTransitUsbInterfaceVirtWrite *)0x0)) {
    uVar1 = 0xe00002c2;
  }
  else {
    uVar1 = 0xe00002bd;
    *(int *)pMVar2 = *(int *)(this + 0x60);
    if (*(int *)(this + 0x60) != 0) {
      *(int *)(this + 0x154) = *(int *)(this + 0xbc);
      MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
      uVar1 = 0;
    }
  }
  return uVar1;
}



