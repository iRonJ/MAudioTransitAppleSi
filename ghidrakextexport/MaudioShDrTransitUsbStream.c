#include "kext_defs.h"

// MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream(OSMetaClass const*)

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream
          (MaudioShDrTransitUsbStream *this,OSMetaClass *param_1)

{
  IOAudioStream::IOAudioStream((IOAudioStream *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream(OSMetaClass const*)

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream
          (MaudioShDrTransitUsbStream *this,OSMetaClass *param_1)

{
  IOAudioStream::IOAudioStream((IOAudioStream *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream()

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream(MaudioShDrTransitUsbStream *this)

{
  *(undefined **)this = &vtable;
  IOAudioStream::~IOAudioStream((IOAudioStream *)this);
  return this;
}



// MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream()

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream(MaudioShDrTransitUsbStream *this)

{
  *(undefined **)this = &vtable;
  IOAudioStream::~IOAudioStream((IOAudioStream *)this);
  return this;
}



// MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream()

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::~MaudioShDrTransitUsbStream(MaudioShDrTransitUsbStream *this)

{
  *(undefined **)this = &vtable;
  IOAudioStream::~IOAudioStream((IOAudioStream *)this);
  OSObject::operator_delete(this,0x134);
  return this;
}



// MaudioShDrTransitUsbStream::getMetaClass() const

undefined1 * MaudioShDrTransitUsbStream::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbStream::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbStream::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbStream",
             (OSMetaClass *)&IOAudioStream::gMetaClass,0x134);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbStream::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbStream::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbStream",
             (OSMetaClass *)&IOAudioStream::gMetaClass,0x134);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream()

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream(MaudioShDrTransitUsbStream *this)

{
  IOAudioStream::IOAudioStream((IOAudioStream *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbStream::MetaClass::alloc() const

MaudioShDrTransitUsbStream * MaudioShDrTransitUsbStream::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbStream *this;
  MaudioShDrTransitUsbStream *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x134,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbStream *)0x0;
  if (this != (MaudioShDrTransitUsbStream *)0x0) {
    MaudioShDrTransitUsbStream(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream()

MaudioShDrTransitUsbStream * __thiscall
MaudioShDrTransitUsbStream::MaudioShDrTransitUsbStream(MaudioShDrTransitUsbStream *this)

{
  IOAudioStream::IOAudioStream((IOAudioStream *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::init(IOAudioEngine*, _IOAudioStreamDirection)

undefined1 __thiscall
MaudioShDrTransitUsbStream::init
          (MaudioShDrTransitUsbStream *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = (*_vtable)(this,param_1,param_3,1,0,0);
  if (cVar1 != '\0') {
    iVar2 = OSArray::withCapacity(1);
    *(int *)(this + 0xd8) = iVar2;
    if (iVar2 != 0) {
      iVar2 = _IOMalloc(0xc80);
      *(int *)(this + 300) = iVar2;
      if (iVar2 != 0) {
        piVar3 = (int *)IOSyncer::create(false);
        *(int **)(this + 0x130) = piVar3;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xa4))(piVar3,0,0);
        }
        *(undefined4 *)(this + 0xdc) = 0;
        _memset(this + 0xe0,0,0x28);
        this[0x10c] = (MaudioShDrTransitUsbStream)0x0;
        *(undefined4 *)(this + 0x110) = 0;
        *(undefined4 *)(this + 0x114) = 0;
        *(undefined4 *)(this + 0x118) = 0;
        this[0x11c] = (MaudioShDrTransitUsbStream)0x0;
        *(undefined4 *)(this + 0x120) = 0;
        *(undefined4 *)(this + 0x124) = 0;
        *(undefined4 *)(this + 0x128) = 0;
        *(undefined4 *)(this + 0x108) = 0;
        return 1;
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::free()

void __thiscall MaudioShDrTransitUsbStream::free(MaudioShDrTransitUsbStream *this)

{
  int *piVar1;
  
  if (*(int *)(this + 300) != 0) {
    _IOFree(*(int *)(this + 300),0xc80);
    *(undefined4 *)(this + 300) = 0;
  }
  piVar1 = *(int **)(this + 0xd8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb4))(piVar1);
    *(undefined4 *)(this + 0xd8) = 0;
  }
  piVar1 = *(int **)(this + 0x130);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x130) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x000112eb. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbStream::SetState(State)

void __thiscall
MaudioShDrTransitUsbStream::SetState(MaudioShDrTransitUsbStream *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x118) = param_2;
  return;
}



// MaudioShDrTransitUsbStream::GetInterfaceCount()

undefined1 __thiscall
MaudioShDrTransitUsbStream::GetInterfaceCount(MaudioShDrTransitUsbStream *this)

{
  int *piVar1;
  undefined1 uVar2;
  
  piVar1 = *(int **)(this + 0xd8);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xa0))(piVar1);
  }
  return uVar2;
}



// MaudioShDrTransitUsbStream::GetInterface(unsigned char)

undefined4 __thiscall
MaudioShDrTransitUsbStream::GetInterface(MaudioShDrTransitUsbStream *this,uchar param_1)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0xd8);
  if (piVar1 != (int *)0x0) {
    pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0xfc))(piVar1,param_1);
    uVar3 = OSMetaClassBase::safeMetaCast
                      (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
    return uVar3;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::setFormat(_IOAudioStreamFormat const*, bool)

void __thiscall
MaudioShDrTransitUsbStream::setFormat
          (MaudioShDrTransitUsbStream *this,_IOAudioStreamFormat *param_1,bool param_2)

{
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + '\x01');
  (*_vtable)(this,param_1,param_2);
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + -1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::setFormat(OSDictionary*)

void __thiscall
MaudioShDrTransitUsbStream::setFormat(MaudioShDrTransitUsbStream *this,OSDictionary *param_1)

{
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + '\x01');
  (*_vtable)(this,param_1);
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + -1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::setFormat(_IOAudioStreamFormat const*, OSDictionary*, bool)

void __thiscall
MaudioShDrTransitUsbStream::setFormat
          (MaudioShDrTransitUsbStream *this,_IOAudioStreamFormat *param_1,OSDictionary *param_2,
          bool param_3)

{
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + '\x01');
  (*_vtable)(this,param_1,param_2,param_3);
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + -1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::setFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension
// const*, bool)

void __thiscall
MaudioShDrTransitUsbStream::setFormat
          (MaudioShDrTransitUsbStream *this,_IOAudioStreamFormat *param_1,
          _IOAudioStreamFormatExtension *param_2,bool param_3)

{
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + '\x01');
  (*_vtable)(this,param_1,param_2,param_3);
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + -1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::setFormat(_IOAudioStreamFormat const*, _IOAudioStreamFormatExtension
// const*, OSDictionary*, bool)

void __thiscall
MaudioShDrTransitUsbStream::setFormat
          (MaudioShDrTransitUsbStream *this,_IOAudioStreamFormat *param_1,
          _IOAudioStreamFormatExtension *param_2,OSDictionary *param_3,bool param_4)

{
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + '\x01');
  (*_vtable)(this,param_1,param_2,param_3,param_4);
  this[0x11c] = (MaudioShDrTransitUsbStream)((char)this[0x11c] + -1);
  return;
}



// MaudioShDrTransitUsbStream::PostFinalizeBuffersSetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbStream::PostFinalizeBuffersSetFormat
          (MaudioShDrTransitUsbStream *this,AudioStreamFormat *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  OSMetaClassBase *pOVar4;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 != (AudioStreamFormat *)0x0) {
    local_44 = *(undefined4 *)param_1;
    local_40 = *(undefined4 *)(param_1 + 4);
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0xc);
    local_34 = *(undefined4 *)(param_1 + 0x10);
    local_30 = *(undefined4 *)(param_1 + 0x14);
    local_2c = *(undefined4 *)(param_1 + 0x18);
    local_28 = *(undefined4 *)(param_1 + 0x1c);
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x24);
    if (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) {
      piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x94))(piVar2);
        do {
          do {
            pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
            this_00 = (MaudioShDrTransitUsbInterfaceService *)
                      OSMetaClassBase::safeMetaCast
                                (pOVar4,(OSMetaClass *)
                                        &MaudioShDrTransitUsbInterfaceService::gMetaClass);
            if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) goto LAB_00011547;
            cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
          } while (cVar1 == '\0');
          iVar3 = MaudioShDrTransitUsbInterfaceService::PostFinalizeBuffersSetFormat
                            (this_00,(AudioStreamFormat *)&local_44);
        } while (iVar3 == 0);
LAB_00011547:
        (**(code **)(*piVar2 + 0x1c))(piVar2);
      }
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::FinalizeFormatAfterFinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbStream::FinalizeFormatAfterFinalizeBuffers(MaudioShDrTransitUsbStream *this)

{
  int *piVar1;
  int iVar2;
  
  if (this[0x11c] == (MaudioShDrTransitUsbStream)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x594))(this);
    iVar2 = (**(code **)(*(int *)this + 0x4a4))(this);
    if (iVar2 == 0 || piVar1 == (int *)0x0) {
      return -0x1ffffd44;
    }
    if ((((((*piVar1 != *(int *)(this + 0xe0)) || (piVar1[1] != *(int *)(this + 0xe4))) ||
          (piVar1[2] != *(int *)(this + 0xe8))) ||
         ((this[0xec] != *(MaudioShDrTransitUsbStream *)(piVar1 + 3) ||
          (this[0xed] != *(MaudioShDrTransitUsbStream *)((int)piVar1 + 0xd))))) ||
        ((this[0xee] != *(MaudioShDrTransitUsbStream *)((int)piVar1 + 0xe) ||
         ((this[0xef] != *(MaudioShDrTransitUsbStream *)((int)piVar1 + 0xf) ||
          (this[0xf0] != *(MaudioShDrTransitUsbStream *)(piVar1 + 4))))))) ||
       (piVar1[5] != *(int *)(this + 0xf4))) {
      piVar1 = (int *)IOAudioStream::createDictionaryFromFormat
                                ((_IOAudioStreamFormat *)(this + 0xe0),
                                 (_IOAudioStreamFormatExtension *)(this + 0xf8),(OSDictionary *)0x0)
      ;
      if (piVar1 == (int *)0x0) {
        return -0x1ffffd43;
      }
      iVar2 = (*_vtable)(this,(_IOAudioStreamFormat *)(this + 0xe0),
                         (_IOAudioStreamFormatExtension *)(this + 0xf8),piVar1,0);
      if (iVar2 == 0) {
        *(uint *)(this + 0xf4) = *(uint *)(this + 0xf4) & 0xfffffffe;
        this[0x10c] = (MaudioShDrTransitUsbStream)0x1;
      }
      (**(code **)(*piVar1 + 0x1c))(piVar1);
      return iVar2;
    }
  }
  return 0;
}



// MaudioShDrTransitUsbStream::IsAsynchronous() const

char __thiscall MaudioShDrTransitUsbStream::IsAsynchronous(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  OSMetaClassBase *pOVar4;
  MaudioShDrTransitUsbInterfaceService *this_00;
  char cVar5;
  int local_20;
  
  if ((*(OSCollection **)(this + 0xd8) == (OSCollection *)0x0) ||
     (piVar3 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar3 == (int *)0x0)) {
    cVar5 = '\0';
  }
  else {
    (**(code **)(*piVar3 + 0x94))(piVar3);
    local_20 = 0;
    cVar2 = '\0';
    do {
      do {
        cVar5 = cVar2;
        pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) goto LAB_0001171e;
        cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
        cVar2 = cVar5;
      } while (cVar1 == '\0');
      cVar2 = MaudioShDrTransitUsbInterfaceService::IsAsynchronous(this_00);
      local_20 = local_20 + 1;
    } while ((local_20 == 1) || (cVar5 == cVar2));
    cVar5 = '\0';
LAB_0001171e:
    (**(code **)(*piVar3 + 0x1c))(piVar3);
  }
  return cVar5;
}



// MaudioShDrTransitUsbStream::ActivateExternalSampleRateController(ExternalSampleRateController)

undefined4 __thiscall
MaudioShDrTransitUsbStream::ActivateExternalSampleRateController
          (MaudioShDrTransitUsbStream *this,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 uVar4;
  
  if ((*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) &&
     (piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar2 != (int *)0x0)) {
    uVar4 = 0xe00002bc;
    (**(code **)(*piVar2 + 0x94))(piVar2);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
      if (cVar1 != '\0') {
        uVar4 = 0;
        MaudioShDrTransitUsbInterfaceService::ActivateExternalSampleRateController(this_00,param_2);
      }
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    return uVar4;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbStream::SetExternalSampleRateMode(ExternalSampleRateMode)

undefined4 __thiscall
MaudioShDrTransitUsbStream::SetExternalSampleRateMode
          (MaudioShDrTransitUsbStream *this,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 uVar4;
  
  if ((*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) &&
     (piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar2 != (int *)0x0)) {
    uVar4 = 0xe00002bc;
    (**(code **)(*piVar2 + 0x94))(piVar2);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
      if (cVar1 != '\0') {
        uVar4 = 0;
        MaudioShDrTransitUsbInterfaceService::SetExternalSampleRateMode(this_00,param_2);
      }
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    return uVar4;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbStream::GetLowestSampleFrameCount(unsigned long*) const

char __thiscall
MaudioShDrTransitUsbStream::GetLowestSampleFrameCount
          (MaudioShDrTransitUsbStream *this,ulong *param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  OSMetaClassBase *pOVar4;
  MaudioShDrTransitUsbInterfaceService *this_00;
  uint local_30;
  uint local_20 [4];
  
  if (((param_1 != (ulong *)0x0) && (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0)) &&
     (piVar3 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar3 != (int *)0x0)) {
    cVar2 = '\0';
    (**(code **)(*piVar3 + 0x94))(piVar3);
    local_30 = 0xffffffff;
    while( true ) {
      pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
      if (((cVar1 != '\0') &&
          (cVar1 = MaudioShDrTransitUsbInterfaceService::IsVirtual(this_00), cVar1 == '\0')) &&
         ((cVar2 = MaudioShDrTransitUsbInterfaceService::GetSampleFrameCount(this_00,local_20),
          cVar2 != '\0' && (cVar2 = '\x01', local_20[0] < local_30)))) {
        local_30 = local_20[0];
      }
    }
    if (cVar2 != '\0') {
      *param_1 = local_30;
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
    return cVar2;
  }
  return '\0';
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::clipIfNecessary()

void __thiscall MaudioShDrTransitUsbStream::clipIfNecessary(MaudioShDrTransitUsbStream *this)

{
  if (*(int *)(this + 0x6c) != 0x63616333) {
                    // WARNING: Could not recover jumptable at 0x00011952. Too many branches
                    // WARNING: Treating indirect jump as call
    (*_vtable)();
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::processOutputSamples(IOAudioClientBuffer*, unsigned long, unsigned
// long, bool)

undefined4
MaudioShDrTransitUsbStream::processOutputSamples
          (IOAudioClientBuffer *param_1,ulong param_2,ulong param_3,bool param_4)

{
  undefined4 uVar1;
  char in_stack_00000014;
  
  if (*(int *)(param_1 + 0x118) != 2) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x6c) == 0x63616333) && (in_stack_00000014 != '\0')) {
                    // WARNING: Could not recover jumptable at 0x00011999. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(*(int *)param_1 + 0x63c))();
    return uVar1;
  }
                    // WARNING: Could not recover jumptable at 0x000119bb. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*_vtable)();
  return uVar1;
}



// MaudioShDrTransitUsbStream::createDictionaryFromFormat(_IOAudioStreamFormat const*,
// OSDictionary*)

OSDictionary *
MaudioShDrTransitUsbStream::createDictionaryFromFormat
          (_IOAudioStreamFormat *param_1,OSDictionary *param_2)

{
  int *piVar1;
  OSDictionary *pOVar2;
  
  pOVar2 = (OSDictionary *)0x0;
  if (param_1 != (_IOAudioStreamFormat *)0x0) {
    pOVar2 = param_2;
    if ((param_2 == (OSDictionary *)0x0) &&
       (pOVar2 = (OSDictionary *)OSDictionary::withCapacity(7), pOVar2 == (OSDictionary *)0x0)) {
      return (OSDictionary *)0x0;
    }
    if (IOAudioStream::gNumChannelsKey == 0) {
      IOAudioStream::initKeys();
    }
    piVar1 = (int *)OSNumber::withNumber((ulonglong)*(uint *)param_1,0x20);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gNumChannelsKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)*(uint *)(param_1 + 4),0x20);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gSampleFormatKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)*(uint *)(param_1 + 8),0x20);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gNumericRepresentationKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)(byte)param_1[0xc],8);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gBitDepthKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)(byte)param_1[0xd],8);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gBitWidthKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)(byte)param_1[0xe],8);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gAlignmentKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)(byte)param_1[0xf],8);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gByteOrderKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)(byte)param_1[0x10],8);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gIsMixableKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    piVar1 = (int *)OSNumber::withNumber((ulonglong)*(uint *)(param_1 + 0x14),0x20);
    (**(code **)(*(int *)pOVar2 + 0xe8))(pOVar2,IOAudioStream::gDriverTagKey,piVar1);
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  return pOVar2;
}



// MaudioShDrTransitUsbStream::TransferAudioToSingleInterface(void const*, void*, unsigned long,
// unsigned long, _IOAudioStreamFormat const*, IOAudioStream*)

undefined4 __thiscall
MaudioShDrTransitUsbStream::TransferAudioToSingleInterface
          (MaudioShDrTransitUsbStream *this,void *param_1,void *param_2,ulong param_3,ulong param_4,
          _IOAudioStreamFormat *param_5,IOAudioStream *param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  OSMetaClassBase *pOVar4;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 uVar5;
  
  if (param_6 == (IOAudioStream *)0x0 || param_5 == (_IOAudioStreamFormat *)0x0) {
    return 0xe00002c2;
  }
  if (param_4 == 0) {
LAB_00011d38:
    uVar5 = 0;
  }
  else {
    iVar3 = OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_6,(OSMetaClass *)&gMetaClass);
    if ((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0xd8), piVar1 != (int *)0x0)) {
      pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0xfc))(piVar1,0);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if ((this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) ||
         ((cVar2 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00), cVar2 == '\0' ||
          (cVar2 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00), cVar2 == '\0'))))
      goto LAB_00011d38;
      if (*(int *)(iVar3 + 100) == 0) {
        if (param_1 != (void *)0x0) {
          param_2 = (void *)((int)param_1 + param_3 * *(int *)(iVar3 + 0x68) * 4);
LAB_00011d17:
          uVar5 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                            ((float *)this_00,(ulong)param_2,param_4);
          return uVar5;
        }
      }
      else if (param_2 != (void *)0x0) goto LAB_00011d17;
    }
    uVar5 = 0xe00002bc;
  }
  return uVar5;
}



// MaudioShDrTransitUsbStream::TransferAudioToInterfaces(void const*, void*, unsigned long, unsigned
// long)

undefined4 __thiscall
MaudioShDrTransitUsbStream::TransferAudioToInterfaces
          (MaudioShDrTransitUsbStream *this,void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0xe00002bc;
  if ((param_2 != (void *)0x0 && param_1 != (void *)0x0) && (uVar2 = 0, param_4 != 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x568))(this);
    if (iVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)this + 0x648);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(int *)this + 0x64c);
    }
                    // WARNING: Could not recover jumptable at 0x00011de9. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  return uVar2;
}



// MaudioShDrTransitUsbStream::SetGainDbToLinearIndex(unsigned char, ChannelId, unsigned short)

undefined4 __thiscall
MaudioShDrTransitUsbStream::SetGainDbToLinearIndex
          (MaudioShDrTransitUsbStream *this,MaudioShDrTransitUsbInterfaceService param_1,
          undefined4 param_3,undefined2 param_4)

{
  MaudioShDrTransitUsbInterfaceService MVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  OSMetaClassBase *pOVar5;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 local_24;
  
  if ((*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) &&
     (piVar4 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x94))(piVar4);
    local_24 = 0xe00002bc;
    while( true ) {
      pOVar5 = (OSMetaClassBase *)(**(code **)(*piVar4 + 0x9c))(piVar4);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar5,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      MVar1 = this_00[0x14];
      cVar2 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
      cVar3 = MaudioShDrTransitUsbInterfaceService::IsVirtual(this_00);
      if (((param_1 == MVar1) && (cVar2 != '\0')) && (cVar3 == '\0')) {
        local_24 = (**(code **)(*(int *)this_00 + 0x9c))(this_00,param_3,param_4);
      }
    }
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    return local_24;
  }
  return 0xe00002bc;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbStream::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbStream::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbStream::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbStream::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbStream::Start(unsigned long long, unsigned long)

int MaudioShDrTransitUsbStream::Start(ulonglong param_1,ulong param_2)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this;
  int iVar4;
  int in_stack_00000010;
  int local_20;
  
  ((int *)param_1)[0x42] = in_stack_00000010;
  ((int *)param_1)[0x4a] = 0;
  if (((((int *)param_1)[0x46] == 1) &&
      ((OSCollection *)((int *)param_1)[0x36] != (OSCollection *)0x0)) &&
     (piVar2 = (int *)OSCollectionIterator::withCollection((OSCollection *)((int *)param_1)[0x36]),
     piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x94))(piVar2);
    local_20 = -0x1ffffd44;
    do {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this = (MaudioShDrTransitUsbInterfaceService *)
             OSMetaClassBase::safeMetaCast
                       (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this);
    } while ((cVar1 == '\0') ||
            (local_20 = MaudioShDrTransitUsbInterfaceService::Start(CONCAT44(param_1._4_4_,this)),
            local_20 == 0));
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    if (local_20 == 0) {
      ((int *)param_1)[0x48] = param_1._4_4_;
      ((int *)param_1)[0x49] = param_2;
      (**(code **)(*(int *)param_1 + 0x18))((int *)param_1);
      piVar2 = (int *)((int *)param_1)[0x4c];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x9c))(piVar2);
      }
      iVar4 = _IOCreateThread(WaitForStreamingStartThread,(int *)param_1);
      if (iVar4 != 0) {
        return 0;
      }
      piVar2 = (int *)((int *)param_1)[0x4c];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xa4))(piVar2,0,0);
      }
      ((int *)param_1)[0x46] = 2;
      return 0;
    }
  }
  else {
    local_20 = -0x1ffffd44;
  }
  (**(code **)(*(int *)param_1 + 0x61c))((int *)param_1);
  return local_20;
}



// MaudioShDrTransitUsbStream::WaitForStreamingStartThread(void*)

void MaudioShDrTransitUsbStream::WaitForStreamingStartThread(void *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  OSMetaClassBase *pOVar5;
  MaudioShDrTransitUsbInterfaceService *this;
  int iVar6;
  int local_24 [5];
  
  if (param_1 == (void *)0x0) goto LAB_000121c3;
  if (*(int *)((int)param_1 + 0xd8) != 0) {
    do {
      piVar4 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)((int)param_1 + 0xd8));
      if (piVar4 == (int *)0x0) break;
      (**(code **)(*piVar4 + 0x94))(piVar4);
      do {
        pOVar5 = (OSMetaClassBase *)(**(code **)(*piVar4 + 0x9c))(piVar4);
        this = (MaudioShDrTransitUsbInterfaceService *)
               OSMetaClassBase::safeMetaCast
                         (pOVar5,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
        if (this == (MaudioShDrTransitUsbInterfaceService *)0x0) {
          bVar2 = false;
          goto LAB_000121b1;
        }
        cVar3 = MaudioShDrTransitUsbInterfaceService::IsActive(this);
      } while ((cVar3 == '\0') ||
              (iVar6 = MaudioShDrTransitUsbInterfaceService::GetUsbFrameNumber
                                 (this,(ulonglong *)local_24), iVar6 != 0));
      iVar6 = *(int *)((int)param_1 + 0x120) - local_24[0];
      if (0x3e6 < iVar6 - 1U) {
        *(undefined4 *)((int)param_1 + 0x118) = 2;
        piVar1 = *(int **)((int)param_1 + 0x130);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0xa4))(piVar1,0,0);
        }
        (**(code **)(*piVar4 + 0x1c))(piVar4);
        goto LAB_000121d5;
      }
      bVar2 = true;
      _IOSleep(iVar6);
LAB_000121b1:
      (**(code **)(*piVar4 + 0x1c))(piVar4);
    } while (bVar2);
  }
  do {
    *(undefined4 *)((int)param_1 + 0x118) = 2;
LAB_000121d5:
    (**(code **)(*(int *)param_1 + 0x1c))(param_1);
LAB_000121c3:
    _IOExitThread();
  } while( true );
}



// MaudioShDrTransitUsbStream::WaitUntilStopped()

void __thiscall MaudioShDrTransitUsbStream::WaitUntilStopped(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  
  if (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) {
    piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x94))(piVar2);
      while( true ) {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
        if (cVar1 != '\0') {
          MaudioShDrTransitUsbInterfaceService::WaitUntilStopped(this_00);
        }
      }
      (**(code **)(*piVar2 + 0x1c))(piVar2);
    }
  }
  *(undefined4 *)(this + 0x118) = 1;
  return;
}



// MaudioShDrTransitUsbStream::Stop()

void __thiscall MaudioShDrTransitUsbStream::Stop(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int iVar4;
  
  piVar2 = *(int **)(this + 0x130);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xa0))(piVar2,0);
  }
  if (*(int *)(this + 0xd8) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
    piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(this + 0x118) = 0;
    }
    else {
      iVar4 = 0;
      (**(code **)(*piVar2 + 0x94))(piVar2);
      while( true ) {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
        if (cVar1 != '\0') {
          MaudioShDrTransitUsbInterfaceService::Stop(this_00);
        }
        iVar4 = iVar4 + 1;
      }
      (**(code **)(*piVar2 + 0x1c))(piVar2);
      if (iVar4 != 0) {
        WaitUntilStopped(this);
        return;
      }
      *(undefined4 *)(this + 0x118) = 0;
    }
  }
  return;
}



// MaudioShDrTransitUsbStream::SetBufferSize(unsigned long)

int __thiscall
MaudioShDrTransitUsbStream::SetBufferSize(MaudioShDrTransitUsbStream *this,ulong param_1)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  ulong uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  *(undefined4 *)(this + 0xdc) = 0;
  if ((param_1 != 0) && (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0)) {
    piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar1 != (int *)0x0) {
      iVar4 = -0x1ffffd44;
      (**(code **)(*piVar1 + 0x94))(piVar1);
      do {
        pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
        puVar5 = &MaudioShDrTransitUsbInterfaceService::gMetaClass;
        uVar3 = OSMetaClassBase::safeMetaCast
                          (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
        if (uVar3 == 0) break;
        puVar5 = (undefined1 *)param_1;
        iVar4 = MaudioShDrTransitUsbInterfaceService::SetBufferSize(uVar3);
      } while (iVar4 == 0);
      *(ulong *)(this + 0xdc) = param_1;
      (**(code **)(*piVar1 + 0x1c))(piVar1,puVar5);
      goto LAB_000123ea;
    }
  }
  iVar4 = -0x1ffffd44;
LAB_000123ea:
  *(undefined4 *)(this + 0x118) = 0;
  return iVar4;
}



// MaudioShDrTransitUsbStream::SetFormat(AudioStreamFormat const*)

int __thiscall
MaudioShDrTransitUsbStream::SetFormat(MaudioShDrTransitUsbStream *this,AudioStreamFormat *param_1)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 != (AudioStreamFormat *)0x0) {
    *(undefined4 *)(this + 0xe0) = 0;
    local_40 = *(undefined4 *)(param_1 + 4);
    local_3c = *(undefined4 *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_1 + 0xc);
    local_34 = *(undefined4 *)(param_1 + 0x10);
    local_30 = *(undefined4 *)(param_1 + 0x14);
    local_2c = *(undefined4 *)(param_1 + 0x18);
    local_28 = *(undefined4 *)(param_1 + 0x1c);
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x24);
    local_44 = 2;
    if (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) {
      piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
      if (piVar2 != (int *)0x0) {
        iVar4 = -0x1ffffd44;
        (**(code **)(*piVar2 + 0x94))(piVar2);
        do {
          do {
            pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
            puVar5 = (undefined4 *)&MaudioShDrTransitUsbInterfaceService::gMetaClass;
            this_00 = (MaudioShDrTransitUsbInterfaceService *)
                      OSMetaClassBase::safeMetaCast
                                (pOVar3,(OSMetaClass *)
                                        &MaudioShDrTransitUsbInterfaceService::gMetaClass);
            if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) goto LAB_000124eb;
            cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
          } while (cVar1 == '\0');
          puVar5 = &local_44;
          iVar4 = MaudioShDrTransitUsbInterfaceService::SetFormat((AudioStreamFormat *)this_00);
        } while (iVar4 == 0);
LAB_000124eb:
        (**(code **)(*piVar2 + 0x1c))(piVar2,puVar5);
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0xe0) = *(undefined4 *)param_1;
          *(undefined4 *)(this + 0xe4) = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xc);
          *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x14);
          *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0x18);
          *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x1c);
          *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x24);
        }
        goto LAB_0001255d;
      }
    }
  }
  iVar4 = -0x1ffffd44;
LAB_0001255d:
  *(undefined4 *)(this + 0x118) = 0;
  return iVar4;
}



// MaudioShDrTransitUsbStream::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbStream::SetSampleRate
          (MaudioShDrTransitUsbStream *this,_IOAudioSampleRate *param_1)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  _IOAudioSampleRate *p_Var6;
  int local_28;
  
  local_28 = -0x1ffffd44;
  if (param_1 == (_IOAudioSampleRate *)0x0) goto LAB_00012669;
  uVar4 = *(undefined4 *)(this + 0x110);
  uVar5 = *(undefined4 *)(this + 0x114);
  if (*(int *)(this + 0xd8) == 0) {
LAB_00012650:
    local_28 = -0x1ffffd44;
  }
  else {
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar2 == (int *)0x0) goto LAB_00012650;
    (**(code **)(*piVar2 + 0x94))(piVar2);
    local_28 = -0x1ffffd44;
    do {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      p_Var6 = (_IOAudioSampleRate *)&MaudioShDrTransitUsbInterfaceService::gMetaClass;
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
    } while ((cVar1 == '\0') ||
            (p_Var6 = param_1,
            local_28 = MaudioShDrTransitUsbInterfaceService::SetSampleRate
                                 ((_IOAudioSampleRate *)this_00), local_28 == 0));
    (**(code **)(*piVar2 + 0x1c))(piVar2,p_Var6);
    if (local_28 == 0) {
      uVar4 = *(undefined4 *)param_1;
      uVar5 = *(undefined4 *)(param_1 + 4);
    }
  }
  *(undefined4 *)(this + 0x110) = uVar4;
  *(undefined4 *)(this + 0x114) = uVar5;
LAB_00012669:
  *(undefined4 *)(this + 0x118) = 0;
  return local_28;
}



// MaudioShDrTransitUsbStream::FinalizeBuffers()

int __thiscall MaudioShDrTransitUsbStream::FinalizeBuffers(MaudioShDrTransitUsbStream *this)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  OSMetaClassBase *pOVar6;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int local_24;
  
  if (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) {
    piVar3 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*(int *)this + 0x56c))(this,0,0);
      (**(code **)(*(int *)this + 0x578))(this,0,0);
      (**(code **)(*piVar3 + 0x94))(piVar3);
      local_24 = -0x1ffffd44;
      while( true ) {
        pOVar6 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar6,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        cVar2 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
        if (cVar2 != '\0') {
          local_24 = MaudioShDrTransitUsbInterfaceService::FinalizeBuffers(this_00);
          if (local_24 != 0) break;
          pcVar1 = *(code **)(*(int *)this + 0x56c);
          uVar4 = MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize(this_00);
          uVar5 = MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(this_00);
          (*pcVar1)(this,uVar5,uVar4);
        }
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      if (local_24 == 0) {
        local_24 = (**(code **)(*(int *)this + 0x624))(this);
      }
      goto LAB_0001279e;
    }
  }
  local_24 = -0x1ffffd44;
LAB_0001279e:
  *(undefined4 *)(this + 0x118) = 1;
  return local_24;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::getSampleBuffer()

undefined4 __thiscall MaudioShDrTransitUsbStream::getSampleBuffer(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x5c4))(this);
  if ((cVar1 != '\0') && (*(int *)(this + 0x118) != 0)) {
                    // WARNING: Could not recover jumptable at 0x000127eb. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*_vtable)();
    return uVar2;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbStream::getSampleBufferSize()

undefined4 __thiscall
MaudioShDrTransitUsbStream::getSampleBufferSize(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x5c4))(this);
  if ((cVar1 != '\0') && (*(int *)(this + 0x118) != 0)) {
                    // WARNING: Could not recover jumptable at 0x00012827. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (*_vtable)();
    return uVar2;
  }
  return 0;
}



// MaudioShDrTransitUsbStream::clearSampleBuffer()

void __thiscall MaudioShDrTransitUsbStream::clearSampleBuffer(MaudioShDrTransitUsbStream *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  OSMetaClassBase *pOVar6;
  MaudioShDrTransitUsbInterfaceService *this_00;
  
  cVar1 = (**(code **)(*(int *)this + 0x5c4))(this);
  if ((cVar1 != '\0') && ((*(int *)(this + 0x118) == 1 || (*(int *)(this + 0x118) == 2)))) {
    if ((*(void **)(this + 0x9c) != (void *)0x0) && (*(size_t *)(this + 0xa0) != 0)) {
      _bzero(*(void **)(this + 0x9c),*(size_t *)(this + 0xa0));
    }
    if (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0) {
      piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x94))(piVar2);
        while( true ) {
          pOVar6 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
          this_00 = (MaudioShDrTransitUsbInterfaceService *)
                    OSMetaClassBase::safeMetaCast
                              (pOVar6,(OSMetaClass *)
                                      &MaudioShDrTransitUsbInterfaceService::gMetaClass);
          if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
          cVar1 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00);
          if (cVar1 != '\0') {
            cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
            if (cVar1 != '\0') {
              iVar3 = MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(this_00);
              if (iVar3 != 0) {
                iVar3 = MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize(this_00);
                if (iVar3 != 0) {
                  sVar4 = MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize(this_00);
                  pvVar5 = (void *)MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(this_00);
                  _bzero(pvVar5,sVar4);
                }
              }
            }
          }
        }
                    // WARNING: Could not recover jumptable at 0x00012934. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar2 + 0x1c))();
        return;
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbStream::EraseOutputSamples(unsigned long, unsigned long)

void __thiscall
MaudioShDrTransitUsbStream::EraseOutputSamples
          (MaudioShDrTransitUsbStream *this,ulong param_1,ulong param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  OSMetaClassBase *pOVar6;
  MaudioShDrTransitUsbInterfaceService *this_00;
  
  cVar1 = (**(code **)(*(int *)this + 0x5c4))(this);
  if ((cVar1 != '\0') &&
     (((*(int *)(this + 0x118) == 1 || (*(int *)(this + 0x118) == 2)) &&
      (*(OSCollection **)(this + 0xd8) != (OSCollection *)0x0)))) {
    piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x94))(piVar2);
      while( true ) {
        pOVar6 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar6,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        cVar1 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00);
        if (cVar1 != '\0') {
          cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00);
          if (cVar1 != '\0') {
            iVar3 = MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(this_00);
            if (iVar3 != 0) {
              iVar3 = MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize(this_00);
              if (iVar3 != 0) {
                uVar4 = MaudioShDrTransitUsbInterfaceService::GetChannelCount(this_00);
                iVar3 = (int)((uint)(byte)this[0xec] * (uVar4 & 0xff)) >> 3;
                iVar5 = MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(this_00);
                _bzero((void *)(iVar5 + iVar3 * param_1),iVar3 * param_2);
              }
            }
          }
        }
      }
                    // WARNING: Could not recover jumptable at 0x00012a55. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*piVar2 + 0x1c))();
      return;
    }
  }
  return;
}



// MaudioShDrTransitUsbStream::RemoveInterface(MaudioShDrTransitUsbInterfaceService*)

undefined4 __thiscall
MaudioShDrTransitUsbStream::RemoveInterface
          (MaudioShDrTransitUsbStream *this,MaudioShDrTransitUsbInterfaceService *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  piVar1 = *(int **)(this + 0xd8);
  if (piVar1 != (int *)0x0) {
    if (((param_1 == (MaudioShDrTransitUsbInterfaceService *)0x0) || (*(int *)(this + 0x118) == 2))
       || (*(int *)(param_1 + 0x20) == -1)) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*piVar1 + 0xf4))(piVar1,*(int *)(param_1 + 0x20));
      uVar2 = 1;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbStream::ProcessOutputSamplesForAc3(IOAudioClientBuffer*, unsigned long)

int __thiscall
MaudioShDrTransitUsbStream::ProcessOutputSamplesForAc3
          (MaudioShDrTransitUsbStream *this,IOAudioClientBuffer *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbInterfaceService *this_00;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar2 = 0;
  if ((*(int *)(this + 0x118) == 2) && (iVar2 = -0x1ffffd3e, param_1 != (IOAudioClientBuffer *)0x0))
  {
    if ((*(int *)(this + 0x6c) == 0x63616333) &&
       (((*(int *)(this + 0xd8) != 0 &&
         (cVar1 = (**(code **)(*(int *)this + 0x5c4))(this), cVar1 != '\0')) &&
        (piVar5 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
        piVar5 != (int *)0x0)))) {
      do {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar5 + 0x9c))(piVar5);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) goto LAB_00012bea;
      } while (*(int *)(this_00 + 0x18) != 8);
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00);
      if ((cVar1 != '\0') &&
         (cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00), cVar1 != '\0')) {
        uVar6 = *(ulong *)(param_1 + 0x18);
        if (uVar6 == 0x300) {
          uVar6 = 0x600;
        }
        if (*(uint *)(this + 0x108) < uVar6 + param_2) {
          uVar4 = *(uint *)(this + 0x108) - param_2;
          uVar6 = uVar6 - uVar4;
          uVar7 = *(ulong *)(param_1 + 8) + uVar4 * *(int *)(this + 0x68) * 2;
          iVar2 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                            ((float *)this_00,*(ulong *)(param_1 + 8),uVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        else {
          uVar7 = *(ulong *)(param_1 + 8);
        }
        iVar2 = MaudioShDrTransitUsbInterfaceService::TransferAudio((float *)this_00,uVar7,uVar6);
        return iVar2;
      }
    }
LAB_00012bea:
    iVar2 = -0x1ffffd44;
  }
  return iVar2;
}



// MaudioShDrTransitUsbStream::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbStream::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbStream::AddInterface(MaudioShDrTransitUsbInterfaceService*)

char __thiscall
MaudioShDrTransitUsbStream::AddInterface
          (MaudioShDrTransitUsbStream *this,MaudioShDrTransitUsbInterfaceService *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (((param_1 == (MaudioShDrTransitUsbInterfaceService *)0x0) ||
      (piVar1 = *(int **)(this + 0xd8), piVar1 == (int *)0x0)) || (*(int *)(this + 0x118) == 2)) {
    cVar2 = '\0';
  }
  else {
    uVar3 = (**(code **)(*piVar1 + 0xa0))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    cVar2 = (**(code **)(**(int **)(this + 0xd8) + 0xe4))(*(int **)(this + 0xd8),param_1);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
  }
  return cVar2;
}



// MaudioShDrTransitUsbStream::TransferToOutputInterfaces(void const*, void*, unsigned long,
// unsigned long)

int __thiscall
MaudioShDrTransitUsbStream::TransferToOutputInterfaces
          (MaudioShDrTransitUsbStream *this,void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  OSMetaClassBase *pOVar7;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  int local_30;
  ulong local_2c;
  void *local_20;
  
  if ((*(OSCollection **)(this + 0xd8) == (OSCollection *)0x0) ||
     (piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar2 == (int *)0x0)) {
    return -0x1ffffd44;
  }
  iVar10 = -0x1ffffd44;
  (**(code **)(*piVar2 + 0x94))(piVar2);
  local_30 = 0;
  do {
    while( true ) {
      pOVar7 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar7,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) {
        (**(code **)(*piVar2 + 0x1c))(piVar2);
        return iVar10;
      }
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00);
      if ((cVar1 != '\0') &&
         (cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00), cVar1 != '\0')) break;
      iVar10 = 0;
    }
    local_20 = (void *)((int)param_1 + (param_3 * *(int *)(this + 0x68) + local_30) * 4);
    uVar3 = MaudioShDrTransitUsbInterfaceService::GetChannelCount(this_00);
    uVar4 = *(uint *)(this + 0x68);
    uVar12 = (uint)(byte)((char)uVar4 - (char)uVar3);
    if (uVar4 < (uVar3 & 0xff)) {
      uVar12 = 0;
      uVar3 = uVar4;
    }
    uVar3 = uVar3 & 0xff;
    uVar4 = (uint)(0xc80 / (ulonglong)(uVar3 * 4));
    for (local_2c = param_4; uVar4 < local_2c; local_2c = local_2c - uVar4) {
      puVar8 = *(undefined4 **)(this + 300);
      pvVar11 = local_20;
      for (uVar9 = 0; uVar9 != uVar4; uVar9 = uVar9 + 1) {
        uVar6 = 0;
        while (uVar5 = uVar6 & 0xffff, uVar6 = uVar6 + 1, uVar5 < uVar3) {
          *puVar8 = *(undefined4 *)((int)pvVar11 + uVar6 * 4 + -4);
          puVar8 = puVar8 + 1;
        }
        pvVar11 = (void *)((int)pvVar11 + uVar12 * 4 + uVar6 * 4 + -4);
      }
      iVar10 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                         ((float *)this_00,*(ulong *)(this + 300),uVar4);
      if (iVar10 != 0) goto LAB_00012e5f;
      local_20 = (void *)((int)local_20 + uVar4 * *(int *)(this + 0x68) * 4);
    }
    if (local_2c != 0) {
      uVar4 = 0;
      puVar8 = *(undefined4 **)(this + 300);
      do {
        uVar9 = 0;
        while (uVar6 = uVar9 & 0xffff, uVar9 = uVar9 + 1, uVar6 < uVar3) {
          *puVar8 = *(undefined4 *)((int)local_20 + uVar9 * 4 + -4);
          puVar8 = puVar8 + 1;
        }
        uVar4 = uVar4 + 1;
        local_20 = (void *)((int)local_20 + uVar12 * 4 + uVar9 * 4 + -4);
      } while (uVar4 != local_2c);
      iVar10 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                         ((float *)this_00,*(ulong *)(this + 300),local_2c);
    }
LAB_00012e5f:
    uVar4 = MaudioShDrTransitUsbInterfaceService::GetChannelCount(this_00);
    local_30 = local_30 + (uVar4 & 0xff);
  } while( true );
}



// MaudioShDrTransitUsbStream::TransferFromInputInterfaces(void const*, void*, unsigned long,
// unsigned long)

int __thiscall
MaudioShDrTransitUsbStream::TransferFromInputInterfaces
          (MaudioShDrTransitUsbStream *this,void *param_1,void *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  OSMetaClassBase *pOVar8;
  MaudioShDrTransitUsbInterfaceService *this_00;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int local_30;
  ulong local_2c;
  undefined4 *local_20;
  
  if ((*(OSCollection **)(this + 0xd8) == (OSCollection *)0x0) ||
     (piVar3 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xd8)),
     piVar3 == (int *)0x0)) {
    return -0x1ffffd44;
  }
  iVar11 = -0x1ffffd44;
  (**(code **)(*piVar3 + 0x94))(piVar3);
  local_30 = 0;
  do {
    while( true ) {
      pOVar8 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar8,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) {
        (**(code **)(*piVar3 + 0x1c))(piVar3);
        return iVar11;
      }
      cVar1 = MaudioShDrTransitUsbInterfaceService::IsStreaming(this_00);
      if ((cVar1 != '\0') &&
         (cVar1 = MaudioShDrTransitUsbInterfaceService::IsActive(this_00), cVar1 != '\0')) break;
      iVar11 = 0;
    }
    local_20 = (undefined4 *)((int)param_2 + local_30 * 4);
    uVar4 = MaudioShDrTransitUsbInterfaceService::GetChannelCount(this_00);
    uVar5 = *(uint *)(this + 0x68);
    bVar2 = (char)uVar5 - (char)uVar4;
    if (uVar5 < (uVar4 & 0xff)) {
      bVar2 = 0;
      uVar4 = uVar5;
    }
    uVar4 = uVar4 & 0xff;
    uVar5 = (uint)(0xc80 / (ulonglong)(uVar4 * 4));
    for (local_2c = param_4; uVar5 < local_2c; local_2c = local_2c - uVar5) {
      iVar11 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                         ((float *)this_00,*(ulong *)(this + 300),uVar5);
      if (iVar11 != 0) goto LAB_00013079;
      iVar11 = *(int *)(this + 300);
      puVar9 = local_20;
      for (uVar10 = 0; uVar5 != uVar10; uVar10 = uVar10 + 1) {
        uVar7 = 0;
        while (uVar6 = uVar7 & 0xffff, uVar7 = uVar7 + 1, uVar6 < uVar4) {
          *puVar9 = *(undefined4 *)(iVar11 + -4 + uVar7 * 4);
          puVar9 = puVar9 + 1;
        }
        puVar9 = puVar9 + bVar2;
        iVar11 = iVar11 + -4 + uVar7 * 4;
      }
      iVar11 = 0;
      local_20 = local_20 + uVar5 * *(int *)(this + 0x68);
    }
    if ((local_2c != 0) &&
       (iVar11 = MaudioShDrTransitUsbInterfaceService::TransferAudio
                           ((float *)this_00,*(ulong *)(this + 300),local_2c), iVar11 == 0)) {
      iVar11 = *(int *)(this + 300);
      uVar5 = 0;
      do {
        uVar10 = 0;
        while (uVar7 = uVar10 & 0xffff, uVar10 = uVar10 + 1, uVar7 < uVar4) {
          *local_20 = *(undefined4 *)(iVar11 + -4 + uVar10 * 4);
          local_20 = local_20 + 1;
        }
        uVar5 = uVar5 + 1;
        local_20 = local_20 + bVar2;
        iVar11 = iVar11 + -4 + uVar10 * 4;
      } while (uVar5 != local_2c);
      iVar11 = 0;
    }
LAB_00013079:
    uVar5 = MaudioShDrTransitUsbInterfaceService::GetChannelCount(this_00);
    local_30 = local_30 + (uVar5 & 0xff);
  } while( true );
}



