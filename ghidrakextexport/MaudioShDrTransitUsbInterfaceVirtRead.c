#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceVirtRead::GetSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  return *(undefined4 *)(this + 0x154);
}



// MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead()

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead()

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead()

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::~MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  OSObject::operator_delete(this,0x16c);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceVirtRead::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceVirtRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x16c);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceVirtRead",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x16c);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead()

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceVirtRead *
MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceVirtRead *this;
  MaudioShDrTransitUsbInterfaceVirtRead *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x16c,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceVirtRead *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceVirtRead *)0x0) {
    MaudioShDrTransitUsbInterfaceVirtRead(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead()

MaudioShDrTransitUsbInterfaceVirtRead * __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::MaudioShDrTransitUsbInterfaceVirtRead
          (MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::withInitStruct(MaudioShDrTransitUsbInterface::InitStruct
// const&)

MaudioShDrTransitUsbInterfaceVirtRead *
MaudioShDrTransitUsbInterfaceVirtRead::withInitStruct(InitStruct *param_1)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceVirtRead *this;
  MaudioShDrTransitUsbInterfaceVirtRead *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x16c,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceVirtRead *)0x0) {
    MaudioShDrTransitUsbInterfaceVirtRead(this);
    cVar1 = (**(code **)(*(int *)this + 0x50c))(this,param_1);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceVirtRead *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceVirtRead::init(MaudioShDrTransitUsbInterface::InitStruct const&)

char __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::init
          (MaudioShDrTransitUsbInterfaceVirtRead *this,InitStruct *param_1)

{
  char cVar1;
  
  cVar1 = MaudioShDrTransitUsbInterface::initWithStruct
                    ((MaudioShDrTransitUsbInterface *)this,param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x4ec))(this,1);
  }
  return cVar1;
}



// MaudioShDrTransitUsbInterfaceVirtRead::FreeBuffers()

void MaudioShDrTransitUsbInterfaceVirtRead::FreeBuffers(void)

{
  return;
}



// MaudioShDrTransitUsbInterfaceVirtRead::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceVirtRead::Start(ulonglong param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_0000000c;
  
  uVar1 = 0xe00002bc;
  if (*(int *)((MaudioShDrTransitUsbInterface *)param_1 + 0x140) == 1) {
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x160) = param_1._4_4_;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x164) = in_stack_0000000c;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x168) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x158) = 0;
    *(undefined4 *)((MaudioShDrTransitUsbInterface *)param_1 + 0x15c) = 0;
    MaudioShDrTransitUsbInterface::InitSampleFrameCount(param_1);
    MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)param_1,2);
    uVar1 = 0;
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceVirtRead::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::Stop(MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtRead::SetAlternateSetting(unsigned short)

void MaudioShDrTransitUsbInterfaceVirtRead::SetAlternateSetting(ushort param_1)

{
  undefined2 in_stack_00000006;
  
  MaudioShDrTransitUsbInterface::SetAlternateInterface(_param_1,0);
  *(undefined2 *)(_param_1 + 0xd8) = 0xfe;
  return;
}



// MaudioShDrTransitUsbInterfaceVirtRead::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::SetFormat
          (MaudioShDrTransitUsbInterfaceVirtRead *this,AudioStreamFormat *param_1)

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



// MaudioShDrTransitUsbInterfaceVirtRead::SetSampleRate(_IOAudioSampleRate const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::SetSampleRate
          (MaudioShDrTransitUsbInterfaceVirtRead *this,_IOAudioSampleRate *param_1)

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
  this[0xc4] = (MaudioShDrTransitUsbInterfaceVirtRead)(uVar3 % 1000 != 0);
  *(uint *)(this + 0xa8) = (uVar3 / 1000) * 1000;
  (**(code **)(*(int *)this + 0x4f0))
            (this,uVar1,uVar2,*(undefined4 *)(this + 0xc0),*(undefined2 *)(this + 0xcc));
  MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,0);
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtRead::TransferAudio(float*, unsigned long, unsigned long)

undefined4
MaudioShDrTransitUsbInterfaceVirtRead::TransferAudio(float *param_1,ulong param_2,ulong param_3)

{
  _bzero((void *)param_2,*(byte *)(param_1 + 0x1c) * param_3 * 4);
  return 0;
}



// MaudioShDrTransitUsbInterfaceVirtRead::TransferAudioPerform(float*, unsigned long, unsigned long)

void MaudioShDrTransitUsbInterfaceVirtRead::TransferAudioPerform
               (float *param_1,ulong param_2,ulong param_3)

{
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceVirtRead::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceVirtRead::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceVirtRead::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceVirtRead::free()

void __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::free(MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  MaudioShDrTransitUsbInterface::free((MaudioShDrTransitUsbInterface *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceVirtRead::FinalizeBuffers()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceVirtRead::FinalizeBuffers(MaudioShDrTransitUsbInterfaceVirtRead *this)

{
  MaudioShDrTransitUsbInterface::SetState((MaudioShDrTransitUsbInterface *)this,1);
  return 0;
}



