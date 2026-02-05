#include "kext_defs.h"

// MaudioShDrTransitUsbEngine::DoNotVendInputVirtualStream()

undefined1 __thiscall
MaudioShDrTransitUsbEngine::DoNotVendInputVirtualStream(MaudioShDrTransitUsbEngine *this)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x6c8))(this);
  return uVar1;
}



// MaudioShDrTransitUsbEngine::GetCurrentSampleRate() const

undefined8 __thiscall
MaudioShDrTransitUsbEngine::GetCurrentSampleRate(MaudioShDrTransitUsbEngine *this)

{
  return *(undefined8 *)(this + 0x54);
}



// MaudioShDrTransitUsbEngine::GetInterfaceClass()

undefined4 MaudioShDrTransitUsbEngine::GetInterfaceClass(void)

{
  return 1;
}



// MaudioShDrTransitUsbEngine::AlternateSettingInfo*) const

undefined4 __thiscall
MaudioUsbTransitEngine::GetAlternateSettingInfo
          (MaudioUsbTransitEngine *this,uchar param_1,ushort param_2,AlternateSettingInfo *param_3)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  
  if (param_3 != (AlternateSettingInfo *)0x0) {
    iVar1 = 0;
    puVar2 = "\x01";
    iVar3 = 0;
    do {
      if ((*puVar2 == param_1) && (puVar2[1] == param_2)) {
        *(undefined4 *)param_3 = *(undefined4 *)((int)&MaudioShDrTransitUsbEngine::kAltInfo + iVar3)
        ;
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)((int)&DAT_00016844 + iVar3);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)((int)&DAT_00016848 + iVar3);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)((int)&DAT_0001684c + iVar3);
        *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)((int)&DAT_00016850 + iVar3);
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)((int)&DAT_00016854 + iVar3);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)((int)&DAT_00016858 + iVar3);
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (iVar1 != 10);
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::init(OSDictionary*)

undefined4 MaudioShDrTransitUsbEngine::init(OSDictionary *param_1)

{
  _IOLog("*** MAUDIOUsbEngine::init not implemented\n");
  _IOSleep(5);
  return 0;
}



// MaudioShDrTransitUsbEngine::DoNotVendInputVirtualStream()

undefined1 __thiscall
MaudioShDrTransitUsbEngine::DoNotVendInputVirtualStream(MaudioShDrTransitUsbEngine *this)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x6c8))(this);
  return uVar1;
}



// MaudioShDrTransitUsbEngine::GetCurrentSampleRate() const

undefined8 __thiscall
MaudioShDrTransitUsbEngine::GetCurrentSampleRate(MaudioShDrTransitUsbEngine *this)

{
  return *(undefined8 *)(this + 0x54);
}



// MaudioShDrTransitUsbEngine::GetConfigurationSampleRate(MaudioShDrTransitUsbPrefData*) const

void MaudioShDrTransitUsbEngine::GetConfigurationSampleRate(MaudioShDrTransitUsbPrefData *param_1)

{
  (**(code **)(*(int *)param_1 + 0x6d8))(param_1);
  return;
}



// MaudioShDrTransitUsbEngine::SetFeatureConfiguration()

undefined4 MaudioShDrTransitUsbEngine::SetFeatureConfiguration(void)

{
  return 0;
}



// MaudioShDrTransitUsbEngine::GetInterfaceClass()

undefined4 MaudioShDrTransitUsbEngine::GetInterfaceClass(void)

{
  return 1;
}



// MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine(OSMetaClass const*)

MaudioShDrTransitUsbEngine * __thiscall
MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine
          (MaudioShDrTransitUsbEngine *this,OSMetaClass *param_1)

{
  IOAudioEngine::IOAudioEngine((IOAudioEngine *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine(OSMetaClass const*)

MaudioShDrTransitUsbEngine * __thiscall
MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine
          (MaudioShDrTransitUsbEngine *this,OSMetaClass *param_1)

{
  IOAudioEngine::IOAudioEngine((IOAudioEngine *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine()

MaudioShDrTransitUsbEngine * __thiscall
MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine(MaudioShDrTransitUsbEngine *this)

{
  *(undefined **)this = &vtable;
  IOAudioEngine::~IOAudioEngine((IOAudioEngine *)this);
  return this;
}



// MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine()

MaudioShDrTransitUsbEngine * __thiscall
MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine(MaudioShDrTransitUsbEngine *this)

{
  *(undefined **)this = &vtable;
  IOAudioEngine::~IOAudioEngine((IOAudioEngine *)this);
  return this;
}



// MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine()

MaudioShDrTransitUsbEngine * __thiscall
MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine(MaudioShDrTransitUsbEngine *this)

{
  *(undefined **)this = &vtable;
  IOAudioEngine::~IOAudioEngine((IOAudioEngine *)this);
  OSObject::operator_delete(this,0xf8);
  return this;
}



// MaudioShDrTransitUsbEngine::getMetaClass() const

undefined1 * MaudioShDrTransitUsbEngine::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbEngine::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbEngine::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbEngine",
             (OSMetaClass *)&IOAudioEngine::gMetaClass,0xf8);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbEngine::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbEngine::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbEngine",
             (OSMetaClass *)&IOAudioEngine::gMetaClass,0xf8);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbEngine::MetaClass::alloc() const

undefined4 MaudioShDrTransitUsbEngine::MetaClass::alloc(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::initWithStreamCount(OSDictionary*, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbEngine::initWithStreamCount
          (MaudioShDrTransitUsbEngine *this,OSDictionary *param_1,ulong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = (*_vtable)(this,param_1);
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0xb0) = 0;
    uVar2 = OSArray::withCapacity(param_2);
    *(undefined4 *)(this + 0xb4) = uVar2;
    iVar3 = OSArray::withCapacity(param_2);
    *(int *)(this + 0xb8) = iVar3;
    if ((iVar3 != 0) && (*(int *)(this + 0xb4) != 0)) {
      *(undefined4 *)(this + 0xc4) = 0;
      *(undefined4 *)(this + 200) = 3;
      *(undefined4 *)(this + 0xcc) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      this[0xe6] = (MaudioShDrTransitUsbEngine)0x0;
      this[0xe4] = (MaudioShDrTransitUsbEngine)0x0;
      this[0xf4] = (MaudioShDrTransitUsbEngine)0x0;
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::free()

void __thiscall MaudioShDrTransitUsbEngine::free(MaudioShDrTransitUsbEngine *this)

{
  int *piVar1;
  
  (**(code **)(*(int *)this + 0x678))(this);
  if (*(int *)(this + 0xb0) != 0) {
    *(undefined4 *)(this + 0xb0) = 0;
  }
  piVar1 = *(int **)(this + 0xf0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x11c))(piVar1);
    (**(code **)(**(int **)(this + 0xf0) + 0x1c))(*(int **)(this + 0xf0));
    *(undefined4 *)(this + 0xf0) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x0000d94a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::start(IOService*, IOAudioDevice*)

undefined1 __thiscall
MaudioShDrTransitUsbEngine::start
          (MaudioShDrTransitUsbEngine *this,IOService *param_1,IOAudioDevice *param_2)

{
  undefined1 uVar1;
  
  if ((param_2 != (IOAudioDevice *)0x0 && param_1 != (IOService *)0x0) &&
     (*(IOAudioDevice **)(this + 0xb0) = param_2, param_2 != (IOAudioDevice *)0x0)) {
    uVar1 = (*_vtable)(this,param_1,param_2);
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::initHardware(IOService*)

undefined1 __thiscall
MaudioShDrTransitUsbEngine::initHardware(MaudioShDrTransitUsbEngine *this,IOService *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = (*_vtable)(this,param_1);
  uVar2 = 0;
  if (cVar1 != '\0') {
    iVar3 = IOTimerEventSource::timerEventSource((OSObject *)this,StartTimerProc);
    *(int *)(this + 0xf0) = iVar3;
    uVar2 = 0;
    if (iVar3 != 0) {
      *(undefined4 *)(this + 0xe8) = 0;
      (**(code **)(**(int **)(this + 0x7c) + 0xa8))(*(int **)(this + 0x7c),iVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbEngine::ReleaseStreamsAndInterfaces()

void __thiscall
MaudioShDrTransitUsbEngine::ReleaseStreamsAndInterfaces(MaudioShDrTransitUsbEngine *this)

{
  int *piVar1;
  MaudioShDrTransitUsbInterfaceService *this_00;
  OSMetaClassBase *pOVar2;
  int *piVar3;
  
  if (*(OSCollection **)(this + 0xb4) != (OSCollection *)0x0) {
    piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb4));
    if (piVar1 != (int *)0x0) {
      while( true ) {
        pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        MaudioShDrTransitUsbInterfaceService::StopUsingEngine(this_00);
      }
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    (**(code **)(**(int **)(this + 0xb4) + 0xb4))(*(int **)(this + 0xb4));
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) {
    piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x94))(piVar1);
      while( true ) {
        pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
        piVar3 = (int *)OSMetaClassBase::safeMetaCast
                                  (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (piVar3 == (int *)0x0) break;
        (**(code **)(*piVar3 + 0x2ec))(piVar3,0);
      }
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    (**(code **)(**(int **)(this + 0xb8) + 0xb4))(*(int **)(this + 0xb8));
    *(undefined4 *)(this + 0xb8) = 0;
  }
  return;
}



// MaudioShDrTransitUsbEngine::performErase()

void __thiscall MaudioShDrTransitUsbEngine::performErase(MaudioShDrTransitUsbEngine *this)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  
  cVar2 = (**(code **)(*(int *)this + 0x5c0))(this);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*(int *)this + 0x5b4))(this);
    if (iVar3 == 1) {
      piVar4 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0x8c));
      if (piVar4 != (int *)0x0) {
        uVar5 = (**(code **)(*(int *)this + 0x598))(this);
        uVar1 = *(uint *)(*(int *)(this + 0x74) + 0x10);
        while( true ) {
          piVar8 = (int *)(**(code **)(*piVar4 + 0x9c))(piVar4);
          if (piVar8 == (int *)0x0) break;
          uVar6 = (**(code **)(*piVar8 + 0x570))(piVar8);
          uVar7 = (**(code **)(*piVar8 + 0x57c))(piVar8);
          if (uVar5 < uVar1) {
            (**(code **)(*(int *)this + 0x4b8))(this,uVar7,uVar6,0,uVar5,piVar8 + 0x1a,piVar8);
            (**(code **)(*(int *)this + 0x4b8))
                      (this,uVar7,uVar6,uVar1,*(int *)(this + 0x50) - uVar1,piVar8 + 0x1a,piVar8);
          }
          else {
            (**(code **)(*(int *)this + 0x4b8))
                      (this,uVar7,uVar6,uVar1,uVar5 - uVar1,piVar8 + 0x1a,piVar8);
          }
        }
        *(uint *)(*(int *)(this + 0x74) + 0x10) = uVar5;
                    // WARNING: Could not recover jumptable at 0x0000dc49. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*piVar4 + 0x1c))();
        return;
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbEngine::eraseOutputSamples(void const*, void*, unsigned long, unsigned long,
// _IOAudioStreamFormat const*, IOAudioStream*)

undefined4 __thiscall
MaudioShDrTransitUsbEngine::eraseOutputSamples
          (MaudioShDrTransitUsbEngine *this,void *param_1,void *param_2,ulong param_3,ulong param_4,
          _IOAudioStreamFormat *param_5,IOAudioStream *param_6)

{
  char cVar1;
  MaudioShDrTransitUsbStream *this_00;
  
  if (param_1 != (void *)0x0) {
    _bzero((void *)(*(int *)param_5 * 4 * param_3 + (int)param_1),param_4 * *(int *)param_5 * 4);
  }
  this_00 = (MaudioShDrTransitUsbStream *)
            OSMetaClassBase::safeMetaCast
                      ((OSMetaClassBase *)param_6,
                       (OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  if (this_00 != (MaudioShDrTransitUsbStream *)0x0) {
    cVar1 = (**(code **)(*(int *)this_00 + 0x5c4))(this_00);
    if (cVar1 != '\0') {
      MaudioShDrTransitUsbStream::EraseOutputSamples(this_00,param_3,param_4);
    }
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::performFormatChange(IOAudioStream*, _IOAudioStreamFormat const*,
// _IOAudioStreamFormatExtension const*, _IOAudioSampleRate const*)

undefined4 __thiscall
MaudioShDrTransitUsbEngine::performFormatChange
          (MaudioShDrTransitUsbEngine *this,IOAudioStream *param_1,_IOAudioStreamFormat *param_2,
          _IOAudioStreamFormatExtension *param_3,_IOAudioSampleRate *param_4)

{
  undefined4 uVar1;
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
  
  uVar1 = 0xe00002c2;
  if (param_1 != (IOAudioStream *)0x0) {
    if (param_3 == (_IOAudioStreamFormatExtension *)0x0 || param_2 == (_IOAudioStreamFormat *)0x0) {
      uVar1 = (**(code **)(*(int *)this + 0x680))(this,param_1,0,param_4);
    }
    else {
      local_44 = *(undefined4 *)param_2;
      local_40 = *(undefined4 *)(param_2 + 4);
      local_3c = *(undefined4 *)(param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 0xc);
      local_34 = *(undefined4 *)(param_2 + 0x10);
      local_30 = *(undefined4 *)(param_2 + 0x14);
      local_2c = *(undefined4 *)param_3;
      local_28 = *(undefined4 *)(param_3 + 4);
      local_24 = *(undefined4 *)(param_3 + 8);
      local_20 = *(undefined4 *)(param_3 + 0xc);
      uVar1 = (**(code **)(*(int *)this + 0x680))(this,param_1,&local_44,param_4);
    }
  }
  return uVar1;
}



// MaudioShDrTransitUsbEngine::PerformFormatChange(IOAudioStream*, AudioStreamFormat const*,
// _IOAudioSampleRate const*)

void __thiscall
MaudioShDrTransitUsbEngine::PerformFormatChange
          (MaudioShDrTransitUsbEngine *this,IOAudioStream *param_1,AudioStreamFormat *param_2,
          _IOAudioSampleRate *param_3)

{
  int iVar1;
  undefined4 uVar2;
  AudioStreamFormat *pAVar3;
  AudioStreamFormat *pAVar4;
  undefined4 local_24;
  undefined4 local_20;
  
  this[0xe5] = (MaudioShDrTransitUsbEngine)0x1;
  if (param_3 == (_IOAudioSampleRate *)0x0) {
    param_3 = (_IOAudioSampleRate *)(**(code **)(*(int *)this + 0x5b8))(this);
  }
  local_20 = *(undefined4 *)(param_3 + 4);
  local_24 = *(undefined4 *)param_3;
  iVar1 = (**(code **)(*(int *)param_1 + 0x568))(param_1);
  pAVar3 = param_2;
  pAVar4 = (AudioStreamFormat *)0x0;
  if (iVar1 != 0) {
    pAVar3 = (AudioStreamFormat *)0x0;
    pAVar4 = param_2;
  }
  uVar2 = (**(code **)(*(int *)this + 0x698))(this);
  (**(code **)(*(int *)this + 0x6e4))(this,uVar2,pAVar3,pAVar4,&local_24);
  return;
}



// MaudioShDrTransitUsbEngine::SetAvailableFormats(IOAudioStream*)

int __thiscall
MaudioShDrTransitUsbEngine::SetAvailableFormats
          (MaudioShDrTransitUsbEngine *this,IOAudioStream *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_54;
  int local_50;
  uint local_4c [6];
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  
  (**(code **)(*(int *)param_1 + 0x5b0))(param_1);
  pcVar1 = *(code **)(*(int *)this + 0x694);
  uVar3 = (**(code **)(*(int *)param_1 + 0x568))(param_1);
  iVar4 = (*pcVar1)(this,uVar3,local_4c);
  local_50 = 0;
  local_54 = 0;
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)this + 0x6b0))(this,&local_24,0);
    local_50 = 0;
    local_54 = local_24 + local_20;
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*(int *)this + 0x6ac))(this,&local_24,0);
      local_50 = local_24 + local_20;
    }
  }
  if (*(uint *)(this + 0x90) < local_4c[0]) {
    *(uint *)(this + 0x90) = local_4c[0];
  }
  if (iVar4 == 0) {
    for (uVar5 = 0; (uVar5 & 0xff) < (uint)1.4013e-44; uVar5 = uVar5 + 1) {
      local_24 = (&kValidSampleRate)[uVar5 & 0xff];
      if ((local_54 <= local_24) && (local_24 <= local_50)) {
        local_20 = 0;
        (**(code **)(*(int *)param_1 + 0x4b0))(param_1,local_4c,local_34,&local_24,&local_24,0,0);
        cVar2 = (**(code **)(*(int *)this + 0x6c8))(this);
        if ((cVar2 != '\0') && (*(int *)(param_1 + 100) == 0)) {
          (**(code **)(*(int *)this + 0x6c0))(this,param_1,local_4c,&local_24);
        }
      }
    }
  }
  return iVar4;
}



// MaudioShDrTransitUsbEngine::GetInitialSampleRate(_IOAudioSampleRate*) const

undefined4 __thiscall
MaudioShDrTransitUsbEngine::GetInitialSampleRate
          (MaudioShDrTransitUsbEngine *this,_IOAudioSampleRate *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xe00002c2;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    *(undefined4 *)param_1 = 48000;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return uVar1;
}



// MaudioShDrTransitUsbEngine::CheckValidSampleRate(_IOAudioSampleRate const&) const

undefined4 MaudioShDrTransitUsbEngine::CheckValidSampleRate(_IOAudioSampleRate *param_1)

{
  return 0;
}



// MaudioShDrTransitUsbEngine::GetClosestValidSampleRate(_IOAudioSampleRate const&,
// _IOAudioSampleRate*) const

int __thiscall
MaudioShDrTransitUsbEngine::GetClosestValidSampleRate
          (MaudioShDrTransitUsbEngine *this,_IOAudioSampleRate *param_1,_IOAudioSampleRate *param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined **local_30;
  undefined **local_24;
  int local_20;
  
  iVar1 = (**(code **)(*(int *)this + 0x68c))(this,param_1);
  if (iVar1 == 0 && param_2 != (_IOAudioSampleRate *)0x0) {
    ppuVar8 = &PTR_getBusyState_00017700;
    ppuVar5 = (undefined **)(*(int *)param_1 + *(int *)(param_1 + 4));
    local_30 = &PTR_getBusyState_00017700;
    if (ppuVar5 < &PTR_getBusyState_00017700) {
      local_30 = (undefined **)0x2b11;
      for (iVar6 = 0; iVar6 < (int)1.4013e-44; iVar6 = iVar6 + 1) {
        uVar2 = (int)ppuVar5 - (int)(&kValidSampleRate)[iVar6];
        uVar7 = (int)uVar2 >> 0x1f;
        ppuVar3 = (undefined **)((uVar2 ^ uVar7) - uVar7);
        if ((int)ppuVar3 < (int)ppuVar8) {
          ppuVar8 = ppuVar3;
          local_30 = (undefined **)(&kValidSampleRate)[iVar6];
        }
      }
    }
    ppuVar8 = local_30;
    iVar6 = 0;
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x6b0))(this,&local_24,1);
      if (iVar1 == 0) {
        if (local_30 < (undefined **)((int)local_24 + local_20)) {
          local_30 = local_24;
          iVar6 = local_20;
        }
        else {
          iVar6 = 0;
        }
        iVar1 = -0x1ffffd44;
        iVar4 = (**(code **)(*(int *)this + 0x6ac))(this,&local_24,1);
        ppuVar8 = (undefined **)(iVar6 + (int)local_30);
        if (iVar4 == 0) {
          iVar1 = 0;
          ppuVar8 = (undefined **)(iVar6 + (int)local_30);
          if ((undefined **)((int)local_24 + local_20) < (undefined **)(iVar6 + (int)local_30)) {
            local_30 = local_24;
            ppuVar8 = (undefined **)((int)local_24 + local_20);
            iVar6 = local_20;
          }
        }
      }
      else {
        iVar1 = -0x1ffffd44;
      }
    }
    if ((ppuVar5 + 500 < ppuVar8) || (ppuVar8 < ppuVar5 + -500)) {
      iVar1 = -0x1ffffd14;
    }
    if (iVar1 == 0 || iVar1 == -0x1ffffd14) {
      *(int *)(param_2 + 4) = iVar6;
      *(undefined ***)param_2 = local_30;
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::setSampleRate(_IOAudioSampleRate const*)

void __thiscall
MaudioShDrTransitUsbEngine::setSampleRate
          (MaudioShDrTransitUsbEngine *this,_IOAudioSampleRate *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char *pcVar8;
  int local_24;
  int local_20;
  
  piVar4 = (int *)(**(code **)(*(int *)this + 0x5b8))(this);
  if (piVar4 != (int *)0x0 && param_1 != (_IOAudioSampleRate *)0x0) {
    (*_vtable)(this,param_1);
    local_20 = *(int *)(param_1 + 4);
    local_24 = *(int *)param_1;
    cVar3 = (**(code **)(*(int *)this + 0x6e0))(this,&local_24);
    iVar6 = local_24 + local_20;
    iVar5 = *piVar4 + piVar4[1];
    iVar1 = *(int *)param_1;
    iVar2 = *(int *)(param_1 + 4);
    if (cVar3 == '\0') {
      bVar7 = iVar5 != iVar1 + iVar2;
    }
    else {
      bVar7 = iVar5 != iVar6;
      if (bVar7) {
        _IOLog("%s: ","M-Audio Transit USB");
        pcVar8 = 
        "Can\'t set sample rate to %d Hz in current configuration.  Reconfiguring to %d Hz.\n";
      }
      else {
        _IOLog("%s: ","M-Audio Transit USB");
        pcVar8 = "Request to set sample rate to %d Hz denied.  Staying at %d Hz.\n";
        iVar6 = iVar5;
      }
      _IOLog(pcVar8,iVar1 + iVar2,iVar6);
      _IOSleep(3);
      (*_vtable)(this,&local_24);
      (**(code **)(*(int *)this + 0x5bc))(this,&local_24);
    }
    if ((bVar7) && (iVar5 != 0)) {
      *(int *)(this + 0xd4) = local_24;
      *(int *)(this + 0xd8) = local_20;
      *(undefined4 *)(this + 0xdc) = 1;
      this[0xe0] = (MaudioShDrTransitUsbEngine)0x1;
      if (this[0xe6] == (MaudioShDrTransitUsbEngine)0x0) {
        piVar4 = (int *)(**(code **)(*(int *)this + 0x564))(this);
        if (piVar4 != (int *)0x0) {
          this[0xe4] = (MaudioShDrTransitUsbEngine)0x0;
          (**(code **)(*piVar4 + 0xec))
                    (piVar4,SetSampleRateFromUsbFrameListHandlerAction,this + 0xd4,0,0,0);
        }
      }
      else {
        this[0xe4] = (MaudioShDrTransitUsbEngine)0x1;
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbEngine::CommonConfigureSteps(AudioStreamFormat const*, AudioStreamFormat
// const*, _IOAudioSampleRate*)

int __thiscall
MaudioShDrTransitUsbEngine::CommonConfigureSteps
          (MaudioShDrTransitUsbEngine *this,AudioStreamFormat *param_1,AudioStreamFormat *param_2,
          _IOAudioSampleRate *param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  OSMetaClassBase *pOVar4;
  int *piVar5;
  
  sVar2 = (**(code **)(*(int *)this + 0x688))(this,param_1,param_2,param_3);
  if (sVar2 == 0) {
    return -0x1ffffd44;
  }
  iVar3 = (**(code **)(*(int *)this + 0x69c))(this,0);
  if ((iVar3 == 0) && (iVar3 = (**(code **)(*(int *)this + 0x69c))(this,sVar2), iVar3 == 0)) {
    iVar3 = (**(code **)(*(int *)this + 0x6a4))(this);
  }
  if (param_3 != (_IOAudioSampleRate *)0x0 && iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x6a8))(this,param_3);
  }
  if (param_1 != (AudioStreamFormat *)0x0 && iVar3 == 0) {
    pOVar4 = (OSMetaClassBase *)
             (**(code **)(**(int **)(this + 0x8c) + 0x104))(*(int **)(this + 0x8c),0);
    piVar5 = (int *)OSMetaClassBase::safeMetaCast
                              (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (piVar5 == (int *)0x0) {
      iVar3 = -0x1ffffd44;
    }
    else {
      cVar1 = (**(code **)(*piVar5 + 0x5c4))(piVar5);
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*piVar5 + 0x62c))(piVar5,param_1);
      }
    }
  }
  if (param_2 != (AudioStreamFormat *)0x0 && iVar3 == 0) {
    pOVar4 = (OSMetaClassBase *)
             (**(code **)(**(int **)(this + 0x84) + 0x104))(*(int **)(this + 0x84),0);
    piVar5 = (int *)OSMetaClassBase::safeMetaCast
                              (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (piVar5 == (int *)0x0) {
      iVar3 = -0x1ffffd44;
      goto LAB_0000e4a2;
    }
    cVar1 = (**(code **)(*piVar5 + 0x5c4))(piVar5);
    if (cVar1 != '\0') {
      iVar3 = (**(code **)(*piVar5 + 0x62c))(piVar5,param_2);
    }
  }
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x6f4))(this);
  }
LAB_0000e4a2:
  if (param_1 != (AudioStreamFormat *)0x0 && iVar3 == 0) {
    pOVar4 = (OSMetaClassBase *)
             (**(code **)(**(int **)(this + 0x8c) + 0x104))(*(int **)(this + 0x8c),0);
    piVar5 = (int *)OSMetaClassBase::safeMetaCast
                              (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (piVar5 == (int *)0x0) {
      iVar3 = -0x1ffffd44;
    }
    else {
      cVar1 = (**(code **)(*piVar5 + 0x5c4))(piVar5);
      if (cVar1 != '\0') {
        iVar3 = (**(code **)(*piVar5 + 0x630))(piVar5,param_1);
      }
    }
  }
  if (iVar3 != 0 || param_2 == (AudioStreamFormat *)0x0) {
    return iVar3;
  }
  pOVar4 = (OSMetaClassBase *)
           (**(code **)(**(int **)(this + 0x84) + 0x104))(*(int **)(this + 0x84),0);
  piVar5 = (int *)OSMetaClassBase::safeMetaCast
                            (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  if (piVar5 == (int *)0x0) {
    return -0x1ffffd44;
  }
  cVar1 = (**(code **)(*piVar5 + 0x5c4))(piVar5);
  if (cVar1 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0000e570. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar3 = (**(code **)(*piVar5 + 0x630))();
    return iVar3;
  }
  return iVar3;
}



// MaudioShDrTransitUsbEngine::FixConfigurationSampleRate(_IOAudioSampleRate*) const

undefined4 __thiscall
MaudioShDrTransitUsbEngine::FixConfigurationSampleRate
          (MaudioShDrTransitUsbEngine *this,_IOAudioSampleRate *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar2 = 0;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    iVar1 = (**(code **)(*(int *)this + 0x6ac))(this,&local_24,0);
    if ((iVar1 == 0) &&
       ((uint)(local_24 + local_20) < (uint)(*(int *)param_1 + *(int *)(param_1 + 4)))) {
      uVar2 = 1;
      *(int *)param_1 = local_24;
      *(int *)(param_1 + 4) = local_20;
    }
    else {
      uVar2 = 0;
    }
    iVar1 = (**(code **)(*(int *)this + 0x6b0))(this,&local_2c,0);
    if ((iVar1 == 0) &&
       ((uint)(*(int *)param_1 + *(int *)(param_1 + 4)) < (uint)(local_2c + local_28))) {
      uVar2 = 1;
      *(int *)param_1 = local_2c;
      *(int *)(param_1 + 4) = local_28;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbEngine::SetSampleRateFromUsbFrameListHandlerAction(OSObject*, void*, void*,
// void*, void*)

undefined4
MaudioShDrTransitUsbEngine::SetSampleRateFromUsbFrameListHandlerAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 != (OSObject *)0x0) {
    piVar1 = (int *)OSMetaClassBase::safeMetaCast
                              ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
    if (piVar1 != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000e667. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)(*piVar1 + 0x6ec))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



// MaudioShDrTransitUsbEngine::SetSampleRateFromUsbFrameListHandler(ExternalSampleRate const*)

undefined4 __thiscall
MaudioShDrTransitUsbEngine::SetSampleRateFromUsbFrameListHandler
          (MaudioShDrTransitUsbEngine *this,ExternalSampleRate *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (ExternalSampleRate *)0x0) {
    uVar3 = (**(code **)(*(int *)this + 0x6d8))(this);
    if (((param_1[0xc] != (ExternalSampleRate)0x0) ||
        (*(int *)(this + 200) != *(int *)(param_1 + 8))) ||
       (*(int *)param_1 + *(int *)(param_1 + 4) != (int)((ulonglong)uVar3 >> 0x20) + (int)uVar3)) {
      uVar2 = 0;
      iVar1 = _OSIncrementAtomic(this + 0xc4);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 200) = *(undefined4 *)(param_1 + 8);
        uVar2 = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + 0xcc) = *(undefined4 *)param_1;
        *(undefined4 *)(this + 0xd0) = uVar2;
        uVar2 = (**(code **)(*(int *)this + 0x698))(this);
        uVar2 = (**(code **)(*(int *)this + 0x6e4))(this,uVar2,0,0,param_1);
      }
      _OSDecrementAtomic(this + 0xc4);
      return uVar2;
    }
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::CalculateBufferSizeInSampleFrames(_IOAudioSampleRate const&, unsigned
// long)

int MaudioShDrTransitUsbEngine::CalculateBufferSizeInSampleFrames
              (_IOAudioSampleRate *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = (uint)(*(int *)param_1 + *(int *)(param_1 + 4)) % 1000;
  if (uVar2 != 0) {
    uVar3 = (uint)(1000 / (ulonglong)uVar2);
  }
  iVar1 = ((uint)(*(int *)param_1 + *(int *)(param_1 + 4)) / 1000) * param_2;
  if (uVar3 != 0) {
    iVar1 = iVar1 + param_2 / uVar3;
  }
  return iVar1;
}



// MaudioShDrTransitUsbEngine::TakeTimeStamp(UnsignedWide, unsigned long, bool)

void MaudioShDrTransitUsbEngine::TakeTimeStamp
               (int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,char param_5)

{
  undefined4 uVar1;
  
  if ((param_5 == '\0') && (*(char *)((int)param_1 + 0xe7) == '\0')) {
    return;
  }
  if (param_4 == 0) {
    if (param_1[0x2f] == 0) {
      if ((char)param_1[0x30] != '\0') {
        return;
      }
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x30) = 1;
      goto LAB_0000e82c;
    }
    if (param_1[0x2f] != -1) {
      return;
    }
    param_1[0x2f] = 0;
    _IOLog("%s: ","M-Audio Transit USB");
    _IOLog("Congratulations, you\'ve wrapped the wrapCount!\n");
    _IOSleep(3);
  }
  else {
    if (param_4 <= (uint)param_1[0x2f]) {
      return;
    }
    param_1[0x2f] = param_4;
  }
  uVar1 = 1;
LAB_0000e82c:
  (**(code **)(*param_1 + 0x5ec))(param_1,uVar1,&param_2);
  return;
}



// MaudioShDrTransitUsbEngine::GetAdaptiveReadEvenSampleRateVariance()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::GetAdaptiveReadEvenSampleRateVariance(MaudioShDrTransitUsbEngine *this)

{
  undefined4 uVar1;
  
  if (*(MaudioShDrTransitUsbDevice **)(this + 0xb0) != (MaudioShDrTransitUsbDevice *)0x0) {
    uVar1 = MaudioShDrTransitUsbDevice::GetAdaptiveReadEvenSampleRateVariance
                      (*(MaudioShDrTransitUsbDevice **)(this + 0xb0));
    return uVar1;
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::FinalizeBuffers()

int __thiscall MaudioShDrTransitUsbEngine::FinalizeBuffers(MaudioShDrTransitUsbEngine *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  int local_20;
  
  (**(code **)(*(int *)this + 0x6f8))(this);
  piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
  local_20 = -0x1ffffd44;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x94))(piVar2);
    local_20 = -0x1ffffd44;
    do {
      do {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
        piVar4 = (int *)OSMetaClassBase::safeMetaCast
                                  (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (piVar4 == (int *)0x0) goto LAB_0000e8f4;
        cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
      } while (cVar1 == '\0');
      local_20 = (**(code **)(*piVar4 + 0x620))(piVar4);
    } while (local_20 == 0);
LAB_0000e8f4:
    (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  return local_20;
}



// MaudioShDrTransitUsbEngine::GetCurrentSampleFrameUsingSampleFrame(unsigned long*)

char __thiscall
MaudioShDrTransitUsbEngine::GetCurrentSampleFrameUsingSampleFrame
          (MaudioShDrTransitUsbEngine *this,ulong *param_1)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  uint uVar5;
  char local_31;
  uint local_30;
  uint local_20 [4];
  
  if (param_1 != (ulong *)0x0) {
    *param_1 = 0;
    piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x94))(piVar2);
      local_31 = '\0';
      local_30 = 0xffffffff;
      while( true ) {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
        piVar4 = (int *)OSMetaClassBase::safeMetaCast
                                  (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (piVar4 == (int *)0x0) break;
        cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
        if (((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*piVar4 + 0x638))(piVar4,local_20), cVar1 != '\0')) &&
           (local_31 = '\x01', local_20[0] < local_30)) {
          local_30 = local_20[0];
        }
      }
      (**(code **)(*piVar2 + 0x1c))(piVar2);
      if (local_31 == '\0') {
        return '\0';
      }
      uVar5 = (**(code **)(*(int *)this + 0x620))(this);
      *param_1 = local_30 % uVar5;
      return local_31;
    }
  }
  return '\0';
}



// MaudioShDrTransitUsbEngine::StartStreams(unsigned long long)

undefined4 MaudioShDrTransitUsbEngine::StartStreams(ulonglong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  OSMetaClassBase *pOVar4;
  int *piVar5;
  undefined4 in_stack_0000000c;
  
  uVar2 = 0xe00002bc;
  ((int *)param_1)[0x2f] = 0;
  *(undefined1 *)((int *)param_1 + 0x30) = 0;
  ((int *)param_1)[0x3a] = 0;
  ((int *)param_1)[0x3b] = 0;
  if ((OSCollection *)((int *)param_1)[0x2e] != (OSCollection *)0x0) {
    piVar3 = (int *)OSCollectionIterator::withCollection((OSCollection *)((int *)param_1)[0x2e]);
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x94))(piVar3);
      while( true ) {
        pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
        piVar5 = (int *)OSMetaClassBase::safeMetaCast
                                  (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (piVar5 == (int *)0x0) break;
        cVar1 = (**(code **)(*piVar5 + 0x5c4))(piVar5);
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*(int *)param_1 + 0x620))((int *)param_1);
          (**(code **)(*piVar5 + 0x618))(piVar5,param_1._4_4_,in_stack_0000000c,uVar2);
        }
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbEngine::CreateAudioInterfaceServices()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::CreateAudioInterfaceServices(MaudioShDrTransitUsbEngine *this)

{
  char cVar1;
  OSMetaClassBase *pOVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  IOUSBInterface *pIVar6;
  char local_2d;
  ushort local_24 [10];
  
  piVar3 = *(int **)(this + 0xb0);
  if (piVar3 != (int *)0x0) {
    pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x330))(piVar3);
    piVar3 = (int *)OSMetaClassBase::safeMetaCast(pOVar2,IOUSBDevice::metaClass);
    if (piVar3 != (int *)0x0) {
      pIVar6 = (IOUSBInterface *)0x0;
      _memset(local_24,0,8);
      local_24[0] = (**(code **)(*(int *)this + 0x714))(this);
      local_24[1] = 2;
      local_24[2] = 0xffff;
      local_24[3] = 0xffff;
      local_2d = '\0';
      local_24[0] = local_24[0] & 0xff;
      while (pIVar6 = (IOUSBInterface *)(**(code **)(*piVar3 + 0x4c8))(piVar3,pIVar6,local_24),
            pIVar6 != (IOUSBInterface *)0x0) {
        for (uVar5 = 0; (uVar5 & 0xff) < 2; uVar5 = uVar5 + 1) {
          cVar1 = (**(code **)(*(int *)pIVar6 + 0x4d4))(pIVar6);
          if (((&kStreamInterface)[(uVar5 & 0xff) * 0xc] == cVar1) &&
             (piVar4 = (int *)MaudioShDrTransitUsbInterfaceService::withInterface(this,pIVar6),
             piVar4 != (int *)0x0)) {
            (**(code **)(**(int **)(this + 0xb4) + 0xe4))(*(int **)(this + 0xb4),piVar4);
            (**(code **)(*piVar4 + 0x1c))(piVar4);
            local_2d = local_2d + '\x01';
            break;
          }
        }
        if (local_2d == '\x02') {
          return 0;
        }
      }
    }
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbEngine::ReacquireInterfaces()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::ReacquireInterfaces(MaudioShDrTransitUsbEngine *this)

{
  code *pcVar1;
  undefined1 uVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  MaudioShDrTransitUsbInterfaceService *this_00;
  IOUSBInterface *pIVar5;
  char cVar6;
  undefined4 local_34;
  ushort local_24 [10];
  
  piVar4 = *(int **)(this + 0xb0);
  if (piVar4 == (int *)0x0) {
LAB_0000ed0c:
    local_34 = 0xe00002bc;
  }
  else {
    cVar6 = '\0';
    pIVar5 = (IOUSBInterface *)0x0;
    pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar4 + 0x330))(piVar4);
    piVar4 = (int *)OSMetaClassBase::safeMetaCast(pOVar3,IOUSBDevice::metaClass);
    _memset(local_24,0,8);
    local_24[0] = (**(code **)(*(int *)this + 0x714))(this);
    local_24[1] = 2;
    local_24[2] = 0xffff;
    local_24[3] = 0xffff;
    local_34 = 0xe00002bc;
    local_24[0] = local_24[0] & 0xff;
    do {
      pIVar5 = (IOUSBInterface *)(**(code **)(*piVar4 + 0x4c8))(piVar4,pIVar5,local_24);
      if (pIVar5 == (IOUSBInterface *)0x0) {
        if (cVar6 == '\x02') {
          return local_34;
        }
        goto LAB_0000ed0c;
      }
      pcVar1 = *(code **)(*(int *)this + 0x70c);
      uVar2 = (**(code **)(*(int *)pIVar5 + 0x4d4))(pIVar5);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)(*pcVar1)(this,uVar2);
      if (this_00 != (MaudioShDrTransitUsbInterfaceService *)0x0) {
        cVar6 = cVar6 + '\x01';
        local_34 = MaudioShDrTransitUsbInterfaceService::SetInterface(this_00,pIVar5);
      }
    } while (cVar6 != '\x02');
    local_34 = 0;
  }
  return local_34;
}



// MaudioShDrTransitUsbEngine::GetInterfaceService(unsigned char)

int __thiscall
MaudioShDrTransitUsbEngine::GetInterfaceService(MaudioShDrTransitUsbEngine *this,uchar param_1)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  int iVar3;
  
  if ((*(OSCollection **)(this + 0xb4) == (OSCollection *)0x0) ||
     (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb4)),
     piVar1 == (int *)0x0)) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x94))(piVar1);
  do {
    pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
    iVar3 = OSMetaClassBase::safeMetaCast
                      (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
    if (iVar3 == 0) break;
  } while (*(uchar *)(iVar3 + 0x14) != param_1);
  (**(code **)(*piVar1 + 0x1c))(piVar1);
  return iVar3;
}



// MaudioShDrTransitUsbEngine::GetAlternateSettingInfo(unsigned char, unsigned short,
// MaudioShDrTransitUsbEngine::AlternateSettingInfo*) const

undefined4 __thiscall
MaudioShDrTransitUsbEngine::GetAlternateSettingInfo
          (MaudioShDrTransitUsbEngine *this,uchar param_1,ushort param_2,
          AlternateSettingInfo *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  if (param_3 != (AlternateSettingInfo *)0x0) {
    pbVar2 = (byte *)((int)&kAltInfo + 1);
    iVar3 = 0;
    for (uVar1 = 0; uVar1 < 10; uVar1 = uVar1 + 1) {
      if ((pbVar2[-1] == param_1) && (*pbVar2 == param_2)) {
        *(undefined4 *)param_3 = *(undefined4 *)((int)&kAltInfo + iVar3);
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)((int)&DAT_00016844 + iVar3);
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)((int)&DAT_00016848 + iVar3);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)((int)&DAT_0001684c + iVar3);
        *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)((int)&DAT_00016850 + iVar3);
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)((int)&DAT_00016854 + iVar3);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)((int)&DAT_00016858 + iVar3);
        return 1;
      }
      iVar3 = iVar3 + 0x1c;
      pbVar2 = pbVar2 + 0x1c;
    }
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::SetGainDbToLinearIndex(unsigned char, ChannelId, unsigned short)

int __thiscall
MaudioShDrTransitUsbEngine::SetGainDbToLinearIndex
          (MaudioShDrTransitUsbEngine *this,undefined1 param_1,undefined4 param_3,undefined2 param_4
          )

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  int iVar5;
  
  if ((*(OSCollection **)(this + 0xb8) == (OSCollection *)0x0) ||
     (piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8)),
     piVar2 == (int *)0x0)) {
    return -0x1ffffd44;
  }
  iVar5 = -0x1ffffd44;
  (**(code **)(*piVar2 + 0x94))(piVar2);
  do {
    pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
    piVar4 = (int *)OSMetaClassBase::safeMetaCast
                              (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (piVar4 == (int *)0x0) break;
    cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
  } while ((cVar1 == '\0') ||
          (iVar5 = (**(code **)(*piVar4 + 0x650))(piVar4,param_1,param_3,param_4), iVar5 != 0));
  (**(code **)(*piVar2 + 0x1c))(piVar2);
  return iVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::pauseAudioEngine()

undefined4 __thiscall MaudioShDrTransitUsbEngine::pauseAudioEngine(MaudioShDrTransitUsbEngine *this)

{
  undefined4 uVar1;
  
  if (this[0xe5] == (MaudioShDrTransitUsbEngine)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000ef1c. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*_vtable)();
    return uVar1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::resumeAudioEngine()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::resumeAudioEngine(MaudioShDrTransitUsbEngine *this)

{
  undefined4 uVar1;
  
  if (this[0xe5] == (MaudioShDrTransitUsbEngine)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000ef38. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (*_vtable)();
    return uVar1;
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::LockAllStreams()

undefined4 __thiscall MaudioShDrTransitUsbEngine::LockAllStreams(MaudioShDrTransitUsbEngine *this)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if ((*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) &&
     (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8)),
     piVar1 != (int *)0x0)) {
    uVar4 = 0xe00002bc;
    while( true ) {
      pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
      piVar3 = (int *)OSMetaClassBase::safeMetaCast
                                (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (piVar3 == (int *)0x0) break;
      uVar4 = 0;
      (**(code **)(*piVar3 + 0x5d0))(piVar3);
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    return uVar4;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbEngine::UnlockAllStreams()

void __thiscall MaudioShDrTransitUsbEngine::UnlockAllStreams(MaudioShDrTransitUsbEngine *this)

{
  int *piVar1;
  OSMetaClassBase *pOVar2;
  int *piVar3;
  
  if ((*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) &&
     (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8)),
     piVar1 != (int *)0x0)) {
    while( true ) {
      pOVar2 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
      piVar3 = (int *)OSMetaClassBase::safeMetaCast
                                (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (piVar3 == (int *)0x0) break;
      (**(code **)(*piVar3 + 0x5d4))(piVar3);
    }
                    // WARNING: Could not recover jumptable at 0x0000f01b. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*piVar1 + 0x1c))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbEngine::StartTimerProc(OSObject*, IOTimerEventSource*)

void MaudioShDrTransitUsbEngine::StartTimerProc(OSObject *param_1,IOTimerEventSource *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((code *)piVar1[0x3a] != GetControlInterfaceClass) {
    iVar2 = (*(code *)piVar1[0x3a])(piVar1[0x3b]);
    if (iVar2 != 0) {
                    // WARNING: Could not recover jumptable at 0x0000f0a3. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(int *)piVar1[0x3c] + 0xf4))();
      return;
    }
  }
  (**(code **)(*(int *)piVar1[0x3c] + 0xb4))((int *)piVar1[0x3c]);
  piVar1[0x3a] = 0;
                    // WARNING: Could not recover jumptable at 0x0000f088. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0x1c))();
  return;
}



// MaudioShDrTransitUsbEngine::SetStartTimerCallback(unsigned long (*)(OSObject*), OSObject*, bool,
// unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbEngine::SetStartTimerCallback
          (MaudioShDrTransitUsbEngine *this,_func_ulong_OSObject_ptr *param_1,OSObject *param_2,
          bool param_3,ulong param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0xf0) == 0) || (*(int *)(this + 0xe8) != 0)) {
    uVar1 = 0;
  }
  else {
    *(OSObject **)(this + 0xec) = param_2;
    *(_func_ulong_OSObject_ptr **)(this + 0xe8) = param_1;
    (**(code **)(*(int *)this + 0x18))(this);
    (**(code **)(**(int **)(this + 0xf0) + 0xb0))(*(int **)(this + 0xf0));
    (**(code **)(**(int **)(this + 0xf0) + 0xf0))(*(int **)(this + 0xf0),param_4);
    uVar1 = 1;
  }
  return uVar1;
}



// MaudioShDrTransitUsbEngine::ReportHardwareError(unsigned long)

void __thiscall
MaudioShDrTransitUsbEngine::ReportHardwareError(MaudioShDrTransitUsbEngine *this,ulong param_1)

{
  if (*(MaudioShDrTransitUsbDevice **)(this + 0xb0) != (MaudioShDrTransitUsbDevice *)0x0) {
    MaudioShDrTransitUsbDevice::SignalDeviceError
              (*(MaudioShDrTransitUsbDevice **)(this + 0xb0),param_1);
    return;
  }
  return;
}



// MaudioShDrTransitUsbEngine::FullSpeedIntoHighSpeedHub()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::FullSpeedIntoHighSpeedHub(MaudioShDrTransitUsbEngine *this)

{
  int *piVar1;
  OSMetaClass *pOVar2;
  char cVar3;
  OSMetaClassBase *pOVar4;
  undefined4 uVar5;
  OSMetaClassBase *pOVar6;
  
  piVar1 = *(int **)(this + 0xb0);
  if (piVar1 != (int *)0x0) {
    pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x330))(piVar1);
    pOVar4 = (OSMetaClassBase *)OSMetaClassBase::safeMetaCast(pOVar4,IOUSBDevice::metaClass);
    if ((pOVar4 != (OSMetaClassBase *)0x0) &&
       (cVar3 = (**(code **)(*(int *)pOVar4 + 0x4e4))(pOVar4), cVar3 != '\x02')) {
      uVar5 = IORegistryEntry::getPlane("IOUSB");
      pOVar2 = IORegistryEntry::metaClass;
      pOVar6 = (OSMetaClassBase *)OSMetaClassBase::safeMetaCast(pOVar4,IORegistryEntry::metaClass);
      while (pOVar4 != (OSMetaClassBase *)0x0 && pOVar6 != (OSMetaClassBase *)0x0) {
        cVar3 = (**(code **)(*(int *)pOVar4 + 0x4e4))(pOVar4);
        if (cVar3 == '\x02') {
          return 1;
        }
        pOVar4 = (OSMetaClassBase *)(**(code **)(*(int *)pOVar6 + 0x17c))(pOVar6,uVar5);
        pOVar6 = (OSMetaClassBase *)OSMetaClassBase::safeMetaCast(pOVar4,pOVar2);
        pOVar4 = (OSMetaClassBase *)OSMetaClassBase::safeMetaCast(pOVar6,IOUSBDevice::metaClass);
      }
    }
  }
  return 0;
}



// MaudioShDrTransitUsbEngine::FinalizeLatencySettings()

undefined4 __thiscall
MaudioShDrTransitUsbEngine::FinalizeLatencySettings(MaudioShDrTransitUsbEngine *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  OSMetaClassBase *pOVar8;
  MaudioShDrTransitUsbInterfaceService *this_00;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  piVar4 = (int *)(**(code **)(*(int *)this + 0x5b8))(this);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  piVar4 = (int *)(**(code **)(*(int *)this + 0x698))(this);
  uVar5 = 1;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 0x24))(piVar4);
  }
  puVar11 = (undefined4 *)0x0;
  for (uVar9 = 0; uVar6 = uVar9 & 0xff, uVar6 < 0x24; uVar9 = uVar9 + 1) {
    if ((&kSampleLatencyAndOffset)[uVar6 * 6] == (uVar5 & 0xff)) {
      if (iVar1 + iVar2 == (&DAT_00016964)[uVar6 * 6]) {
        puVar11 = &kSampleLatencyAndOffset + uVar6 * 6;
      }
    }
  }
  uVar7 = 0xe00002bc;
  if (puVar11 != (undefined4 *)0x0) {
    (**(code **)(*(int *)this + 0x634))(this,puVar11[3]);
    (**(code **)(*(int *)this + 0x630))(this,puVar11[4]);
    iVar10 = puVar11[2];
    cVar3 = FullSpeedIntoHighSpeedHub(this);
    if (cVar3 != '\0') {
      iVar10 = iVar10 + (iVar1 + iVar2 + 999U) / 1000;
    }
    (**(code **)(*(int *)this + 0x638))(this,iVar10);
    piVar4 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb4));
    uVar7 = 0;
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x94))(piVar4);
      while( true ) {
        pOVar8 = (OSMetaClassBase *)(**(code **)(*piVar4 + 0x9c))(piVar4);
        this_00 = (MaudioShDrTransitUsbInterfaceService *)
                  OSMetaClassBase::safeMetaCast
                            (pOVar8,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass
                            );
        if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
        MaudioShDrTransitUsbInterfaceService::SetLeadFrames(this_00,*(uchar *)(puVar11 + 5));
      }
      (**(code **)(*piVar4 + 0x1c))(piVar4);
      uVar7 = 0;
    }
  }
  return uVar7;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbEngine::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbEngine::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbEngine::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbEngine::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbEngine::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbEngine::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbEngine::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbEngine::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbEngine::MirrorStreamConfig(MaudioShDrTransitUsbStream*,
// MaudioShDrTransitUsbStream*)

int __thiscall
MaudioShDrTransitUsbEngine::MirrorStreamConfig
          (MaudioShDrTransitUsbEngine *this,MaudioShDrTransitUsbStream *param_1,
          MaudioShDrTransitUsbStream *param_2)

{
  int *piVar1;
  OSDictionary *pOVar2;
  OSMetaClassBase *pOVar3;
  OSDictionary *pOVar4;
  undefined4 uVar5;
  int iVar6;
  _IOAudioStreamFormat local_54 [24];
  _IOAudioStreamFormatExtension local_3c [16];
  _IOAudioSampleRate local_2c [8];
  _IOAudioSampleRate local_24 [20];
  
  if (param_2 != (MaudioShDrTransitUsbStream *)0x0 && param_1 != (MaudioShDrTransitUsbStream *)0x0)
  {
    (**(code **)(*(int *)param_1 + 0x5b0))(param_1);
    if ((*(OSCollection **)(param_2 + 0x84) == (OSCollection *)0x0) ||
       (piVar1 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(param_2 + 0x84)),
       piVar1 == (int *)0x0)) {
      return -0x1ffffd44;
    }
    iVar6 = -0x1ffffd44;
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x9c))(piVar1);
      pOVar4 = (OSDictionary *)OSMetaClassBase::safeMetaCast(pOVar3,OSDictionary::metaClass);
      if (pOVar4 == (OSDictionary *)0x0) break;
      pOVar3 = (OSMetaClassBase *)
               (**(code **)(*(int *)pOVar4 + 0x104))(pOVar4,IOAudioStream::gMinimumSampleRateKey);
      pOVar2 = (OSDictionary *)OSMetaClassBase::safeMetaCast(pOVar3,OSDictionary::metaClass);
      if ((pOVar2 == (OSDictionary *)0x0) ||
         (iVar6 = IOAudioEngine::createSampleRateFromDictionary(pOVar2,local_24), iVar6 == 0)) {
LAB_0000f5ae:
        iVar6 = -0x1ffffd44;
        break;
      }
      pOVar3 = (OSMetaClassBase *)
               (**(code **)(*(int *)pOVar4 + 0x104))(pOVar4,IOAudioStream::gMaximumSampleRateKey);
      pOVar2 = (OSDictionary *)OSMetaClassBase::safeMetaCast(pOVar3,OSDictionary::metaClass);
      if ((pOVar2 == (OSDictionary *)0x0) ||
         ((iVar6 = IOAudioEngine::createSampleRateFromDictionary(pOVar2,local_2c), iVar6 == 0 ||
          (iVar6 = IOAudioStream::createFormatFromDictionary(pOVar4,local_54,local_3c), iVar6 == 0))
         )) goto LAB_0000f5ae;
      iVar6 = 0;
      (**(code **)(*(int *)param_1 + 0x4b0))(param_1,local_54,local_3c,local_24,local_2c,0,0);
    }
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  iVar6 = (**(code **)(*(int *)param_1 + 0x62c))(param_1,param_2 + 0xe0);
  if (iVar6 == 0) {
    uVar5 = (**(code **)(*(int *)this + 0x5b8))(this);
    iVar6 = (**(code **)(*(int *)param_1 + 0x634))(param_1,uVar5);
    if (iVar6 == 0) {
      uVar5 = (**(code **)(*(int *)this + 0x6b4))(this);
      iVar6 = (**(code **)(*(int *)param_1 + 0x628))(param_1,uVar5);
      if (iVar6 == 0) {
        iVar6 = (**(code **)(*(int *)param_1 + 0x620))(param_1);
      }
    }
  }
  return iVar6;
}



// MaudioShDrTransitUsbEngine::SetVirtualMode(OSCollectionIterator*, OSCollectionIterator*)

int __thiscall
MaudioShDrTransitUsbEngine::SetVirtualMode
          (MaudioShDrTransitUsbEngine *this,OSCollectionIterator *param_1,
          OSCollectionIterator *param_2)

{
  char cVar1;
  char cVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  MaudioShDrTransitUsbStream *pMVar5;
  MaudioShDrTransitUsbStream *pMVar6;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int iVar7;
  byte bVar8;
  
  cVar2 = '\0';
  (**(code **)(*(int *)param_1 + 0x94))(param_1);
  while( true ) {
    pOVar3 = (OSMetaClassBase *)(**(code **)(*(int *)param_1 + 0x9c))(param_1);
    piVar4 = (int *)OSMetaClassBase::safeMetaCast
                              (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (piVar4 == (int *)0x0) break;
    cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
    cVar2 = (cVar2 + '\x01') - (cVar1 == '\0');
  }
  if (cVar2 == '\0') {
    (**(code **)(*(int *)param_1 + 0x94))(param_1);
    pOVar3 = (OSMetaClassBase *)(**(code **)(*(int *)param_1 + 0x9c))(param_1);
    pMVar5 = (MaudioShDrTransitUsbStream *)
             OSMetaClassBase::safeMetaCast
                       (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
    if (pMVar5 != (MaudioShDrTransitUsbStream *)0x0) {
      (**(code **)(*(int *)param_2 + 0x94))(param_2);
      do {
        pOVar3 = (OSMetaClassBase *)(**(code **)(*(int *)param_2 + 0x9c))(param_2);
        pMVar6 = (MaudioShDrTransitUsbStream *)
                 OSMetaClassBase::safeMetaCast
                           (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (pMVar6 == (MaudioShDrTransitUsbStream *)0x0) {
          bVar8 = 0;
          goto LAB_0000f746;
        }
        cVar2 = (**(code **)(*(int *)pMVar6 + 0x5c4))(pMVar6);
      } while ((cVar2 == '\0') ||
              ((pMVar6 != (MaudioShDrTransitUsbStream *)0xffffff20 &&
               (cVar2 = (**(code **)(*(int *)this + 0x6c4))(this), cVar2 != '\0'))));
      bVar8 = 1;
LAB_0000f746:
      if (((bool)(bVar8 & pMVar5 != (MaudioShDrTransitUsbStream *)0x0)) &&
         (this_00 = (MaudioShDrTransitUsbInterfaceService *)
                    (**(code **)(*(int *)pMVar5 + 0x614))(pMVar5,0),
         this_00 != (MaudioShDrTransitUsbInterfaceService *)0x0)) {
        iVar7 = (**(code **)(*(int *)pMVar6 + 0x568))(pMVar6);
        iVar7 = MaudioShDrTransitUsbInterfaceService::SetAlternateSetting
                          (this_00,0xff - (iVar7 == 0));
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar7 = MirrorStreamConfig(this,pMVar5,pMVar6);
        if (iVar7 != 0) {
          return iVar7;
        }
        (**(code **)(*(int *)pMVar5 + 0x5c0))(pMVar5,1);
        return 0;
      }
      if (pMVar6 == (MaudioShDrTransitUsbStream *)0x0) goto LAB_0000f7c1;
    }
    iVar7 = -0x1ffffd44;
  }
  else {
LAB_0000f7c1:
    iVar7 = 0;
  }
  return iVar7;
}



// MaudioShDrTransitUsbEngine::EnableDisableVirtualStreams()

int __thiscall
MaudioShDrTransitUsbEngine::EnableDisableVirtualStreams(MaudioShDrTransitUsbEngine *this)

{
  OSCollectionIterator *pOVar1;
  OSCollectionIterator *pOVar2;
  int iVar3;
  
  if (((*(OSCollection **)(this + 0x8c) != (OSCollection *)0x0) && (*(int *)(this + 0x84) != 0)) &&
     (pOVar1 = (OSCollectionIterator *)
               OSCollectionIterator::withCollection(*(OSCollection **)(this + 0x8c)),
     pOVar1 != (OSCollectionIterator *)0x0)) {
    iVar3 = -0x1ffffd44;
    (**(code **)(*(int *)pOVar1 + 0x94))(pOVar1);
    pOVar2 = (OSCollectionIterator *)
             OSCollectionIterator::withCollection(*(OSCollection **)(this + 0x84));
    if (pOVar2 != (OSCollectionIterator *)0x0) {
      iVar3 = SetVirtualMode(this,pOVar1,pOVar2);
      if (iVar3 == 0) {
        iVar3 = SetVirtualMode(this,pOVar2,pOVar1);
      }
      (**(code **)(*(int *)pOVar2 + 0x1c))(pOVar2);
    }
    (**(code **)(*(int *)pOVar1 + 0x1c))(pOVar1);
    return iVar3;
  }
  return -0x1ffffd44;
}



// MaudioShDrTransitUsbEngine::SetConfiguration(MaudioShDrTransitUsbPrefData*, AudioStreamFormat
// const*, AudioStreamFormat const*, _IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbEngine::SetConfiguration
          (MaudioShDrTransitUsbEngine *this,MaudioShDrTransitUsbPrefData *param_1,
          AudioStreamFormat *param_2,AudioStreamFormat *param_3,_IOAudioSampleRate *param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  OSMetaClassBase *pOVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *local_84;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  
  this[0xe6] = (MaudioShDrTransitUsbEngine)0x1;
  if ((param_1 == (MaudioShDrTransitUsbPrefData *)0x0) || (*(int *)(this + 0xb0) == 0)) {
    return -0x1ffffd44;
  }
  bVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
  cVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  iVar1 = *(int *)(this + 0x70);
  this[0xe7] = (MaudioShDrTransitUsbEngine)(bVar2 ^ 1);
  iVar9 = 0;
  if (iVar1 == 1) {
    iVar9 = (**(code **)(*(int *)this + 0x5a0))(this);
  }
  (**(code **)(*(int *)this + 0x5fc))(this);
  if ((cVar3 != '\0') && (iVar9 == 0)) {
    if (param_2 == (AudioStreamFormat *)0x0) {
      iVar9 = -0x1ffffd44;
      pOVar7 = (OSMetaClassBase *)
               (**(code **)(**(int **)(this + 0x8c) + 0x104))(*(int **)(this + 0x8c),0);
      iVar5 = OSMetaClassBase::safeMetaCast
                        (pOVar7,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (iVar5 != 0) {
        iVar9 = (**(code **)(*(int *)this + 0x694))(this,0,&local_4c);
      }
    }
    else {
      local_4c = *(undefined4 *)param_2;
      local_48 = *(undefined4 *)(param_2 + 4);
      local_44 = *(undefined4 *)(param_2 + 8);
      local_40 = *(undefined4 *)(param_2 + 0xc);
      local_3c = *(undefined4 *)(param_2 + 0x10);
      local_38 = *(undefined4 *)(param_2 + 0x14);
      local_34 = *(undefined4 *)(param_2 + 0x18);
      local_30 = *(undefined4 *)(param_2 + 0x1c);
      local_2c = *(undefined4 *)(param_2 + 0x20);
      local_28 = *(undefined4 *)(param_2 + 0x24);
    }
  }
  if ((bVar2 != 0) && (iVar9 == 0)) {
    if (param_3 == (AudioStreamFormat *)0x0) {
      iVar9 = -0x1ffffd44;
      pOVar7 = (OSMetaClassBase *)
               (**(code **)(**(int **)(this + 0x84) + 0x104))(*(int **)(this + 0x84),0);
      iVar5 = OSMetaClassBase::safeMetaCast
                        (pOVar7,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (iVar5 != 0) {
        iVar9 = (**(code **)(*(int *)this + 0x694))(this,1,&local_74);
      }
    }
    else {
      local_74 = *(undefined4 *)param_3;
      local_70 = *(undefined4 *)(param_3 + 4);
      local_6c = *(undefined4 *)(param_3 + 8);
      local_68 = *(undefined4 *)(param_3 + 0xc);
      local_64 = *(undefined4 *)(param_3 + 0x10);
      local_60 = *(undefined4 *)(param_3 + 0x14);
      local_5c = *(undefined4 *)(param_3 + 0x18);
      local_58 = *(undefined4 *)(param_3 + 0x1c);
      local_54 = *(undefined4 *)(param_3 + 0x20);
      local_50 = *(undefined4 *)(param_3 + 0x24);
    }
  }
  (**(code **)(*(int *)this + 0x5b8))(this);
  local_24._0_4_ = 0;
  local_24._4_4_ = 0;
  local_24 = 0;
  if (iVar9 == 0) {
    if (param_4 == (_IOAudioSampleRate *)0x0) {
      uVar10 = (**(code **)(*(int *)this + 0x6dc))(this,param_1);
      if ((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20) == 0) {
        uVar10 = (**(code **)(*(int *)this + 0x6d8))(this);
        local_24 = CONCAT44(local_24._4_4_,(undefined4)local_24);
        if ((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20) == 0) goto LAB_0000fae7;
      }
      local_24 = uVar10;
    }
    else {
      local_24 = *(undefined8 *)param_4;
    }
LAB_0000fae7:
    (**(code **)(*(int *)this + 0x6e0))(this,&local_24);
    iVar9 = (**(code **)(*(int *)this + 0x69c))(this,0);
    if (iVar9 == 0) {
      iVar9 = (**(code **)(**(int **)(this + 0xb0) + 0x598))(*(int **)(this + 0xb0));
      if (iVar9 == 0) {
        iVar9 = (**(code **)(**(int **)(this + 0xb0) + 0x590))(*(int **)(this + 0xb0),1,0);
        if (iVar9 == 0) {
          (**(code **)(*(int *)this + 0x708))(this);
        }
      }
    }
  }
  local_84 = &local_24;
  iVar9 = (**(code **)(*(int *)this + 0x684))(this);
  if (iVar9 == 0) {
    if (*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) {
      piVar6 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0x94))(piVar6);
        do {
          do {
            pOVar7 = (OSMetaClassBase *)(**(code **)(*piVar6 + 0x9c))(piVar6);
            piVar8 = (int *)OSMetaClassBase::safeMetaCast
                                      (pOVar7,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass
                                      );
            if (piVar8 == (int *)0x0) goto LAB_0000fbed;
            cVar4 = (**(code **)(*piVar8 + 0x5c4))(piVar8);
          } while (cVar4 == '\0');
          iVar9 = (**(code **)(*(int *)this + 0x6a0))(this,piVar8);
        } while (iVar9 == 0);
LAB_0000fbed:
        (**(code **)(*piVar6 + 0x1c))(piVar6);
        goto LAB_0000fbf9;
      }
    }
    iVar9 = 0;
  }
LAB_0000fbf9:
  (**(code **)(*(int *)this + 0x5bc))(this,local_84);
  if (iVar9 == 0) {
    if (bVar2 == 0) {
      iVar9 = -0x1ffffd3e;
      if (cVar3 == '\0') goto LAB_0000fc98;
      iVar9 = *(int *)this;
      puVar11 = &local_4c;
      puVar12 = (undefined4 *)0x0;
    }
    else {
      if (cVar3 != '\0') {
        iVar9 = (**(code **)(*(int *)this + 0x6d0))(this,&local_4c,&local_74,local_84);
        goto LAB_0000fc98;
      }
      iVar9 = *(int *)this;
      puVar12 = &local_74;
      puVar11 = (undefined4 *)0x0;
    }
    iVar9 = (**(code **)(iVar9 + 0x6d0))(this,puVar11,puVar12,local_84);
  }
LAB_0000fc98:
  EnableDisableVirtualStreams(this);
  (**(code **)(*(int *)this + 0x6e8))(this);
  (**(code **)(*(int *)this + 0x600))(this);
  if ((iVar1 == 1) && (iVar9 == 0)) {
    this[0xf4] = (MaudioShDrTransitUsbEngine)0x1;
    (**(code **)(*(int *)this + 0x59c))(this);
    this[0xf4] = (MaudioShDrTransitUsbEngine)0x0;
    (**(code **)(*(int *)this + 0x5a4))(this);
    (**(code **)(*(int *)this + 0x5a8))(this);
  }
  this[0xe5] = (MaudioShDrTransitUsbEngine)0x0;
  this[0xe6] = (MaudioShDrTransitUsbEngine)0x0;
  if ((this[0xe4] != (MaudioShDrTransitUsbEngine)0x0) && (iVar9 == 0)) {
    this[0xe4] = (MaudioShDrTransitUsbEngine)0x0;
    iVar9 = (**(code **)(*(int *)this + 0x6ec))(this,this + 0xd4);
  }
  return iVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbEngine::stop(IOService*)

void __thiscall
MaudioShDrTransitUsbEngine::stop(MaudioShDrTransitUsbEngine *this,IOService *param_1)

{
  if (*(MaudioShDrTransitUsbDevice **)(this + 0xb0) != (MaudioShDrTransitUsbDevice *)0x0) {
    MaudioShDrTransitUsbDevice::SignalDeviceError
              (*(MaudioShDrTransitUsbDevice **)(this + 0xb0),0xe00002d7);
  }
  (*_vtable)(this,param_1);
  (**(code **)(*(int *)this + 0x5b0))(this);
  (**(code **)(*(int *)this + 0x678))(this);
  if (*(int *)(this + 0xb0) != 0) {
    *(undefined4 *)(this + 0xb0) = 0;
  }
  return;
}



