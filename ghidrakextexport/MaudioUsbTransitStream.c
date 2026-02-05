#include "kext_defs.h"

// MaudioUsbTransitStream::MaudioUsbTransitStream(OSMetaClass const*)

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::MaudioUsbTransitStream(MaudioUsbTransitStream *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream((MaudioShDrTransitUsbStream *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitStream::MaudioUsbTransitStream(OSMetaClass const*)

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::MaudioUsbTransitStream(MaudioUsbTransitStream *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream((MaudioShDrTransitUsbStream *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitStream::~MaudioUsbTransitStream()

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::~MaudioUsbTransitStream(MaudioUsbTransitStream *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream((MaudioShDrTransitUsbStream *)this);
  return this;
}



// MaudioUsbTransitStream::~MaudioUsbTransitStream()

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::~MaudioUsbTransitStream(MaudioUsbTransitStream *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream((MaudioShDrTransitUsbStream *)this);
  return this;
}



// MaudioUsbTransitStream::~MaudioUsbTransitStream()

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::~MaudioUsbTransitStream(MaudioUsbTransitStream *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream((MaudioShDrTransitUsbStream *)this);
  OSObject::operator_delete(this,0x134);
  return this;
}



// MaudioUsbTransitStream::getMetaClass() const

undefined1 * MaudioUsbTransitStream::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioUsbTransitStream::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitStream::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitStream",
             (OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass,0x134);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitStream::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitStream::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitStream",
             (OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass,0x134);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitStream::MaudioUsbTransitStream()

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::MaudioUsbTransitStream(MaudioUsbTransitStream *this)

{
  MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream
            ((MaudioShDrTransitUsbStream *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitStream::MetaClass::alloc() const

MaudioUsbTransitStream * MaudioUsbTransitStream::MetaClass::alloc(void)

{
  MaudioUsbTransitStream *this;
  MaudioUsbTransitStream *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x134,in_stack_ffffffe8);
  pMVar1 = (MaudioUsbTransitStream *)0x0;
  if (this != (MaudioUsbTransitStream *)0x0) {
    MaudioUsbTransitStream(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioUsbTransitStream::MaudioUsbTransitStream()

MaudioUsbTransitStream * __thiscall
MaudioUsbTransitStream::MaudioUsbTransitStream(MaudioUsbTransitStream *this)

{
  MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream
            ((MaudioShDrTransitUsbStream *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitStream::init(MaudioUsbTransitEngine*, _IOAudioStreamDirection)

bool __thiscall
MaudioUsbTransitStream::init(MaudioUsbTransitStream *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = MaudioShDrTransitUsbStream::init((MaudioShDrTransitUsbStream *)this,param_1,param_3);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0x58c))(this,TransferAudio);
  }
  return cVar1 != '\0';
}



// MaudioUsbTransitStream::TransferAudio(void const*, void*, unsigned long, unsigned long,
// _IOAudioStreamFormat const*, IOAudioStream*)

undefined4
MaudioUsbTransitStream::TransferAudio
          (void *param_1,void *param_2,ulong param_3,ulong param_4,_IOAudioStreamFormat *param_5,
          IOAudioStream *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_6,(OSMetaClass *)&gMetaClass);
  if ((piVar1 == (int *)0x0) || (piVar1[0x44] == 0)) {
    uVar2 = 0xe00002bc;
  }
  else {
    uVar2 = (**(code **)(*piVar1 + 0x640))(piVar1,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}



// MaudioUsbTransitStream::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioUsbTransitStream::SetFormat(MaudioUsbTransitStream *this,AudioStreamFormat *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0xe00002bc;
  if (param_1 != (AudioStreamFormat *)0x0) {
    uVar2 = MaudioShDrTransitUsbStream::SetFormat((MaudioShDrTransitUsbStream *)this,param_1);
    cVar1 = MaudioShDrTransitUsbStream::IsAsynchronous((MaudioShDrTransitUsbStream *)this);
    if (cVar1 != '\0') {
      *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) | 1;
    }
  }
  return uVar2;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioUsbTransitStream::MetaClass::MetaClass((MetaClass *)&MaudioUsbTransitStream::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioUsbTransitStream::MetaClass::~MetaClass((MetaClass *)&MaudioUsbTransitStream::gMetaClass);
  }
  return;
}



// MaudioUsbTransitStream::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitStream::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitStream::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitStream::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



