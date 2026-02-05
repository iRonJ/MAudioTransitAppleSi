#include "kext_defs.h"

// MaudioUsbTransitEngine::init(OSDictionary*)

undefined4 MaudioUsbTransitEngine::init(OSDictionary *param_1)

{
  _IOLog("%s: ","M-Audio Transit USB");
  _IOLog("*** ERROR *** MAudioUsbTransitEngine::init not implemented\n");
  _IOSleep(3);
  return 0;
}



// MaudioUsbTransitEngine::IsAc3Mode()

undefined1 __thiscall MaudioUsbTransitEngine::IsAc3Mode(MaudioUsbTransitEngine *this)

{
  undefined1 uVar1;
  
  uVar1 = MaudioUsbTransitPrefData::IsOutputAc3((MaudioUsbTransitPrefData *)(this + 0xf8));
  return uVar1;
}



// MaudioUsbTransitEngine::MaudioUsbTransitEngine(OSMetaClass const*)

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::MaudioUsbTransitEngine(MaudioUsbTransitEngine *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine((MaudioShDrTransitUsbEngine *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  return this;
}



// MaudioUsbTransitEngine::MaudioUsbTransitEngine(OSMetaClass const*)

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::MaudioUsbTransitEngine(MaudioUsbTransitEngine *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine((MaudioShDrTransitUsbEngine *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  return this;
}



// MaudioUsbTransitEngine::~MaudioUsbTransitEngine()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::~MaudioUsbTransitEngine(MaudioUsbTransitEngine *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine((MaudioShDrTransitUsbEngine *)this);
  return this;
}



// MaudioUsbTransitEngine::~MaudioUsbTransitEngine()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::~MaudioUsbTransitEngine(MaudioUsbTransitEngine *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine((MaudioShDrTransitUsbEngine *)this);
  return this;
}



// MaudioUsbTransitEngine::~MaudioUsbTransitEngine()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::~MaudioUsbTransitEngine(MaudioUsbTransitEngine *this)

{
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  MaudioShDrTransitUsbEngine::~MaudioShDrTransitUsbEngine((MaudioShDrTransitUsbEngine *)this);
  OSObject::operator_delete(this,0x108);
  return this;
}



// MaudioUsbTransitEngine::getMetaClass() const

undefined1 * MaudioUsbTransitEngine::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioUsbTransitEngine::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitEngine::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitEngine",
             (OSMetaClass *)&MaudioShDrTransitUsbEngine::gMetaClass,0x108);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitEngine::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitEngine::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitEngine",
             (OSMetaClass *)&MaudioShDrTransitUsbEngine::gMetaClass,0x108);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitEngine::MaudioUsbTransitEngine()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::MaudioUsbTransitEngine(MaudioUsbTransitEngine *this)

{
  MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine
            ((MaudioShDrTransitUsbEngine *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitEngine::MetaClass::alloc() const

MaudioUsbTransitEngine * MaudioUsbTransitEngine::MetaClass::alloc(void)

{
  MaudioUsbTransitEngine *this;
  MaudioUsbTransitEngine *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x108,in_stack_ffffffe8);
  pMVar1 = (MaudioUsbTransitEngine *)0x0;
  if (this != (MaudioUsbTransitEngine *)0x0) {
    MaudioUsbTransitEngine(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioUsbTransitEngine::MaudioUsbTransitEngine()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::MaudioUsbTransitEngine(MaudioUsbTransitEngine *this)

{
  MaudioShDrTransitUsbEngine::MaudioShDrTransitUsbEngine
            ((MaudioShDrTransitUsbEngine *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  MaudioUsbTransitPrefData::MaudioUsbTransitPrefData((MaudioUsbTransitPrefData *)(this + 0xf8));
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitEngine::init(OSDictionary*, PreferenceData*)

undefined1 __thiscall
MaudioUsbTransitEngine::init
          (MaudioUsbTransitEngine *this,OSDictionary *param_1,PreferenceData *param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_2 != (PreferenceData *)0x0) {
    MaudioUsbTransitPrefData::init((MaudioUsbTransitPrefData *)(this + 0xf8),param_2);
    uVar1 = MaudioShDrTransitUsbEngine::initWithStreamCount
                      ((MaudioShDrTransitUsbEngine *)this,param_1,2);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitEngine::free()

void __thiscall MaudioUsbTransitEngine::free(MaudioUsbTransitEngine *this)

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



// MaudioUsbTransitEngine::start(IOService*, IOAudioDevice*)

undefined1 __thiscall
MaudioUsbTransitEngine::start
          (MaudioUsbTransitEngine *this,IOService *param_1,IOAudioDevice *param_2)

{
  undefined1 uVar1;
  
  uVar1 = MaudioShDrTransitUsbEngine::start((MaudioShDrTransitUsbEngine *)this,param_1,param_2);
  return uVar1;
}



// MaudioUsbTransitEngine::GetPreferenceDataPtr() const

void __thiscall MaudioUsbTransitEngine::GetPreferenceDataPtr(MaudioUsbTransitEngine *this)

{
  MaudioUsbTransitPrefData::GetPreferenceDataPtr((MaudioUsbTransitPrefData *)(this + 0xf8));
  return;
}



// MaudioUsbTransitEngine::SetPreferenceData(PreferenceData*)

void __thiscall
MaudioUsbTransitEngine::SetPreferenceData(MaudioUsbTransitEngine *this,PreferenceData *param_1)

{
  MaudioUsbTransitPrefData::SetPreferenceDataPtr((MaudioUsbTransitPrefData *)(this + 0xf8),param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitEngine::stop(IOService*)

void __thiscall MaudioUsbTransitEngine::stop(MaudioUsbTransitEngine *this,IOService *param_1)

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



// MaudioUsbTransitEngine::stopAudioEngine()

int __thiscall MaudioUsbTransitEngine::stopAudioEngine(MaudioUsbTransitEngine *this)

{
  int iVar1;
  
  iVar1 = IOAudioEngine::stopAudioEngine();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x624))(this,0);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitEngine::pauseAudioEngine()

undefined4 __thiscall MaudioUsbTransitEngine::pauseAudioEngine(MaudioUsbTransitEngine *this)

{
  undefined4 uVar1;
  
  if (this[0xe5] != (MaudioUsbTransitEngine)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x0000ef1c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*_vtable)();
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitEngine::resumeAudioEngine()

undefined4 __thiscall MaudioUsbTransitEngine::resumeAudioEngine(MaudioUsbTransitEngine *this)

{
  undefined4 uVar1;
  
  if (this[0xe5] != (MaudioUsbTransitEngine)0x0) {
    return 0;
  }
                    // WARNING: Could not recover jumptable at 0x0000ef38. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*_vtable)();
  return uVar1;
}



// MaudioUsbTransitEngine::getCurrentSampleFrame()

undefined4 __thiscall MaudioUsbTransitEngine::getCurrentSampleFrame(MaudioUsbTransitEngine *this)

{
  char cVar1;
  int iVar2;
  undefined4 local_10 [2];
  
  iVar2 = (**(code **)(*(int *)this + 0x5b4))(this);
  if (iVar2 == 1) {
    local_10[0] = *(undefined4 *)(this + 0x104);
    cVar1 = (**(code **)(*(int *)this + 0x6fc))(this,local_10);
    if (cVar1 != '\0') {
      *(undefined4 *)(this + 0x104) = local_10[0];
    }
  }
  return *(undefined4 *)(this + 0x104);
}



// MaudioUsbTransitEngine::IsAsynchronous()

undefined1 __thiscall MaudioUsbTransitEngine::IsAsynchronous(MaudioUsbTransitEngine *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  MaudioShDrTransitUsbStream *this_00;
  undefined1 local_1d;
  
  if ((*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) &&
     (piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8)),
     piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x94))(piVar2);
    local_1d = 0;
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this_00 = (MaudioShDrTransitUsbStream *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbStream *)0x0) break;
      cVar1 = (**(code **)(*(int *)this_00 + 0x5c4))(this_00);
      if (cVar1 != '\0') {
        local_1d = MaudioShDrTransitUsbStream::IsAsynchronous(this_00);
      }
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
    return local_1d;
  }
  return 0;
}



// MaudioUsbTransitEngine::GetUsbFrameNumberStart(unsigned long long, bool)

undefined8 MaudioUsbTransitEngine::GetUsbFrameNumberStart(ulonglong param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined3 in_stack_0000000d;
  char in_stack_00000010;
  
  if (in_stack_00000010 == '\0') {
    bVar3 = 0xfffffffa < param_1._4_4_;
    uVar2 = param_1._4_4_ + 5;
  }
  else {
    uVar2 = param_1._4_4_ + 5;
    _param_2 = _param_2 + (uint)(0xfffffffa < param_1._4_4_);
    uVar1 = uVar2 & 3;
    if (uVar1 == 0) goto LAB_00000ebf;
    _param_2 = _param_2 - (uint)(uVar2 < uVar1);
    bVar3 = 0xfffffffb < uVar2 - uVar1;
    uVar2 = (uVar2 - uVar1) + 4;
  }
  _param_2 = _param_2 + (uint)bVar3;
LAB_00000ebf:
  return CONCAT44(_param_2,uVar2);
}



// MaudioUsbTransitEngine::ActivateExternalSampleRateController(ExternalSampleRateController)

undefined4 __thiscall
MaudioUsbTransitEngine::ActivateExternalSampleRateController
          (MaudioUsbTransitEngine *this,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  OSMetaClassBase *pOVar4;
  MaudioShDrTransitUsbStream *pMVar5;
  
  uVar2 = 0xe00002bc;
  if (*(OSCollection **)(this + 0xb8) != (OSCollection *)0x0) {
    piVar3 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x94))(piVar3);
      while( true ) {
        pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar3 + 0x9c))(piVar3);
        pMVar5 = (MaudioShDrTransitUsbStream *)
                 OSMetaClassBase::safeMetaCast
                           (pOVar4,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
        if (pMVar5 == (MaudioShDrTransitUsbStream *)0x0) break;
        cVar1 = (**(code **)(*(int *)pMVar5 + 0x5c4))(pMVar5);
        if (cVar1 != '\0') {
          MaudioShDrTransitUsbStream::ActivateExternalSampleRateController(pMVar5,param_2);
        }
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioUsbTransitEngine::startAudioEngine()

int __thiscall MaudioUsbTransitEngine::startAudioEngine(MaudioUsbTransitEngine *this)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)this + 0x6bc))(this);
  ActivateExternalSampleRateController(this,uVar1);
  iVar2 = IOAudioEngine::startAudioEngine();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x624))(this,1);
  }
  return iVar2;
}



// MaudioUsbTransitEngine::performAudioEngineStop()

undefined4 __thiscall MaudioUsbTransitEngine::performAudioEngineStop(MaudioUsbTransitEngine *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  MaudioShDrTransitUsbStream *this_00;
  
  piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x94))(piVar2);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      piVar4 = (int *)OSMetaClassBase::safeMetaCast
                                (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (piVar4 == (int *)0x0) break;
      cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
      if (cVar1 != '\0') {
        (**(code **)(*piVar4 + 0x61c))(piVar4);
      }
    }
    (**(code **)(*piVar2 + 0x94))(piVar2);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      this_00 = (MaudioShDrTransitUsbStream *)
                OSMetaClassBase::safeMetaCast
                          (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (this_00 == (MaudioShDrTransitUsbStream *)0x0) break;
      cVar1 = (**(code **)(*(int *)this_00 + 0x5c4))(this_00);
      if (cVar1 != '\0') {
        MaudioShDrTransitUsbStream::WaitUntilStopped(this_00);
      }
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  return 0;
}



// MaudioUsbTransitEngine::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioUsbTransitEngine::SetSampleRate(MaudioUsbTransitEngine *this,_IOAudioSampleRate *param_1)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  int *piVar5;
  OSMetaClassBase *pOVar6;
  MaudioShDrTransitUsbStream *pMVar7;
  int iVar8;
  
  iVar8 = -0x1ffffd3e;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    iVar8 = -0x1ffffd44;
    uVar2 = (**(code **)(*(int *)this + 0x6b4))(this);
    uVar3 = (**(code **)(*(int *)this + 0x6b4))(this);
    uVar4 = MaudioShDrTransitUsbEngine::CalculateBufferSizeInSampleFrames(param_1,uVar3);
    (**(code **)(*(int *)this + 0x61c))(this,uVar4);
    piVar5 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
    if (piVar5 != (int *)0x0) {
      iVar8 = 0;
      (**(code **)(*piVar5 + 0x94))(piVar5);
      do {
        do {
          pOVar6 = (OSMetaClassBase *)(**(code **)(*piVar5 + 0x9c))(piVar5);
          pMVar7 = (MaudioShDrTransitUsbStream *)
                   OSMetaClassBase::safeMetaCast
                             (pOVar6,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
          if (pMVar7 == (MaudioShDrTransitUsbStream *)0x0) goto LAB_0000117c;
          cVar1 = (**(code **)(*(int *)pMVar7 + 0x5c4))(pMVar7);
        } while (cVar1 == '\0');
        iVar8 = MaudioShDrTransitUsbStream::SetExternalSampleRateMode
                          (pMVar7,*(undefined4 *)(this + 200));
        if (iVar8 != 0) break;
        iVar8 = (**(code **)(*(int *)pMVar7 + 0x634))(pMVar7,param_1);
        if (iVar8 != 0) break;
        iVar8 = (**(code **)(*(int *)pMVar7 + 0x628))(pMVar7,uVar2);
      } while (iVar8 == 0);
LAB_0000117c:
      (**(code **)(*piVar5 + 0x1c))(piVar5);
      if (iVar8 == 0) {
        MaudioShDrTransitUsbEngine::setSampleRate((MaudioShDrTransitUsbEngine *)this,param_1);
      }
    }
  }
  return iVar8;
}



// MaudioUsbTransitEngine::GetMaxSampleRateFromPrefSettings(_IOAudioSampleRate*, bool) const

undefined4 __thiscall
MaudioUsbTransitEngine::GetMaxSampleRateFromPrefSettings
          (MaudioUsbTransitEngine *this,_IOAudioSampleRate *param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  MaudioUsbTransitPrefData *this_00;
  
  uVar3 = 0xe00002c2;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    *(undefined4 *)param_1 = 48000;
    *(undefined4 *)(param_1 + 4) = 0;
    this_00 = (MaudioUsbTransitPrefData *)(this + 0xf8);
    cVar1 = MaudioUsbTransitPrefData::IsBitDepth24(this_00);
    if (cVar1 != '\0') {
      cVar1 = MaudioUsbTransitPrefData::GetEnabledInterfaceCount(this_00);
      if (cVar1 == '\x01') {
        *(undefined ***)param_1 = &PTR_getBusyState_00017700;
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    cVar1 = MaudioUsbTransitPrefData::IsEnabledForInput(this_00);
    cVar2 = MaudioUsbTransitPrefData::IsEnabledForOutput(this_00);
    if ((cVar1 == '\0') || (cVar2 != '\0')) {
      if ((!param_2) &&
         ((*(int *)(this + 200) == 2 && (*(int *)(this + 0xcc) + *(int *)(this + 0xd0) != 0)))) {
        uVar3 = *(undefined4 *)(this + 0xd0);
        *(undefined4 *)param_1 = *(undefined4 *)(this + 0xcc);
        *(undefined4 *)(param_1 + 4) = uVar3;
      }
    }
    else {
      cVar1 = MaudioUsbTransitPrefData::IsBitDepth24(this_00);
      *(uint *)param_1 = (int)&PTR_getBusyState_00017700 + (-(uint)(cVar1 == '\0') & 0xffff4480);
    }
    cVar1 = MaudioUsbTransitPrefData::IsOutputAc3(this_00);
    uVar3 = 0;
    if (cVar1 != '\0') {
      *(undefined4 *)param_1 = 48000;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return uVar3;
}



// MaudioUsbTransitEngine::GetMinSampleRateFromPrefSettings(_IOAudioSampleRate*, bool) const

undefined4 __thiscall
MaudioUsbTransitEngine::GetMinSampleRateFromPrefSettings
          (MaudioUsbTransitEngine *this,_IOAudioSampleRate *param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  MaudioUsbTransitPrefData *this_00;
  
  uVar3 = 0xe00002c2;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    *(undefined4 *)param_1 = 0x2b11;
    *(undefined4 *)(param_1 + 4) = 0;
    this_00 = (MaudioUsbTransitPrefData *)(this + 0xf8);
    cVar1 = MaudioUsbTransitPrefData::IsEnabledForInput(this_00);
    cVar2 = MaudioUsbTransitPrefData::IsEnabledForOutput(this_00);
    if ((cVar1 == '\0') || (cVar2 != '\0')) {
      if ((!param_2) &&
         ((*(int *)(this + 200) == 2 && (*(int *)(this + 0xcc) + *(int *)(this + 0xd0) != 0)))) {
        uVar3 = *(undefined4 *)(this + 0xd0);
        *(undefined4 *)param_1 = *(undefined4 *)(this + 0xcc);
        *(undefined4 *)(param_1 + 4) = uVar3;
      }
    }
    else {
      cVar1 = MaudioUsbTransitPrefData::IsBitDepth24(this_00);
      *(uint *)param_1 = (int)&PTR_getBusyState_00017700 + (-(uint)(cVar1 == '\0') & 0xffff4480);
    }
    cVar1 = MaudioUsbTransitPrefData::IsOutputAc3(this_00);
    uVar3 = 0;
    if (cVar1 != '\0') {
      *(undefined4 *)param_1 = 48000;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return uVar3;
}



// MaudioUsbTransitEngine::CreateStreams()

int __thiscall MaudioUsbTransitEngine::CreateStreams(MaudioUsbTransitEngine *this)

{
  char cVar1;
  MaudioUsbTransitStream *this_00;
  MaudioUsbTransitStream *this_01;
  MaudioUsbTransitStream *pMVar2;
  int iVar3;
  int *piVar4;
  MaudioUsbTransitEngine *in_stack_ffffffc8;
  
  iVar3 = -0x1ffffd43;
  this_00 = OSObject::operator_new((OSObject *)0x134,(ulong)in_stack_ffffffc8);
  if (this_00 != (MaudioUsbTransitStream *)0x0) {
    iVar3 = -0x1ffffd44;
    MaudioUsbTransitStream::MaudioUsbTransitStream(this_00);
    in_stack_ffffffc8 = this;
    cVar1 = (**(code **)(*(int *)this_00 + 0x654))(this_00,this,0);
    if (cVar1 != '\0') {
      in_stack_ffffffc8 = (MaudioUsbTransitEngine *)this_00;
      iVar3 = (**(code **)(*(int *)this + 0x6a0))(this);
      if (iVar3 == 0) {
        in_stack_ffffffc8 = (MaudioUsbTransitEngine *)this_00;
        (**(code **)(**(int **)(this + 0xb8) + 0xe4))(*(int **)(this + 0xb8));
      }
    }
  }
  this_01 = OSObject::operator_new((OSObject *)0x134,(ulong)in_stack_ffffffc8);
  if (this_01 == (MaudioUsbTransitStream *)0x0) {
    iVar3 = -0x1ffffd43;
  }
  else {
    MaudioUsbTransitStream::MaudioUsbTransitStream(this_01);
    cVar1 = (**(code **)(*(int *)this_01 + 0x654))(this_01,this,1);
    if (cVar1 == '\0') {
LAB_000014e6:
      iVar3 = -0x1ffffd44;
    }
    else if (iVar3 == 0) {
      iVar3 = (**(code **)(*(int *)this + 0x6a0))(this,this_01);
      if (iVar3 == 0) {
        piVar4 = &DAT_00016cf0;
        (**(code **)(**(int **)(this + 0xb8) + 0xe4))(*(int **)(this + 0xb8),this_01);
        do {
          pMVar2 = this_00;
          if (*piVar4 != 0) {
            pMVar2 = this_01;
          }
          iVar3 = (**(code **)(*(int *)this + 0x70c))(this,(char)piVar4[-1]);
          if (iVar3 == 0) goto LAB_000014e6;
          cVar1 = (**(code **)(*(int *)pMVar2 + 0x608))(pMVar2,iVar3);
          if (cVar1 == '\0') goto LAB_000014e6;
          piVar4 = piVar4 + 3;
        } while (piVar4 != (int *)&UNK_00016d08);
        iVar3 = (**(code **)(*(int *)this + 0x57c))(this,this_00);
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*(int *)this + 0x57c))(this,this_01);
        }
      }
    }
  }
  if (this_00 != (MaudioUsbTransitStream *)0x0) {
    (**(code **)(*(int *)this_00 + 0x1c))(this_00);
  }
  if (this_01 != (MaudioUsbTransitStream *)0x0) {
    (**(code **)(*(int *)this_01 + 0x1c))(this_01);
  }
  return iVar3;
}



// MaudioUsbTransitEngine::initHardware(IOService*)

bool __thiscall
MaudioUsbTransitEngine::initHardware(MaudioUsbTransitEngine *this,IOService *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  OSMetaClassBase *pOVar4;
  int iVar5;
  undefined1 local_74 [40];
  undefined1 local_4c [40];
  undefined1 local_24 [20];
  
  cVar2 = MaudioShDrTransitUsbEngine::initHardware((MaudioShDrTransitUsbEngine *)this,param_1);
  if (cVar2 == '\0') {
    return false;
  }
  (**(code **)(*(int *)this + 0x578))(this,"M-Audio Transit USB");
  (**(code **)(*(int *)this + 0x128))(this,"IOAudioStreamSampleFormatByteOrder","Little Endian");
  iVar3 = (**(code **)(*(int *)this + 0x704))(this);
  if (iVar3 == 0) {
    iVar3 = CreateStreams(this);
  }
  (**(code **)(*(int *)this + 0x5a4))(this);
  (**(code **)(*(int *)this + 0x5fc))(this);
  piVar1 = *(int **)(this + 0x8c);
  if (piVar1 != (int *)0x0) {
    if (iVar3 != 0) goto LAB_00001602;
    pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x104))(piVar1,0);
    iVar3 = OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)&MaudioUsbTransitStream::gMetaClass)
    ;
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)this + 0x694))(this,0,local_4c);
      goto LAB_00001602;
    }
  }
  iVar3 = -0x1ffffd44;
LAB_00001602:
  piVar1 = *(int **)(this + 0x84);
  if (piVar1 == (int *)0x0) {
    iVar3 = -0x1ffffd44;
  }
  else if (iVar3 == 0) {
    iVar3 = -0x1ffffd44;
    pOVar4 = (OSMetaClassBase *)(**(code **)(*piVar1 + 0x104))(piVar1,0);
    iVar5 = OSMetaClassBase::safeMetaCast(pOVar4,(OSMetaClass *)&MaudioUsbTransitStream::gMetaClass)
    ;
    if (iVar5 != 0) {
      iVar3 = (**(code **)(*(int *)this + 0x694))(this,1,local_74);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*(int *)this + 0x6d4))(this,local_24);
        if ((iVar3 == 0) &&
           (iVar3 = (**(code **)(*(int *)this + 0x6d0))(this,local_4c,local_74,local_24), iVar3 == 0
           )) {
          iVar3 = (**(code **)(*(int *)this + 0x684))(this);
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x600))(this);
  (**(code **)(*(int *)this + 0x5a8))(this);
  return iVar3 == 0;
}



// MaudioUsbTransitEngine::GetInitialFormat(_IOAudioStreamDirection, AudioStreamFormat*) const

undefined4 __thiscall
MaudioUsbTransitEngine::GetInitialFormat(MaudioUsbTransitEngine *this,int param_2,int *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  MaudioUsbTransitPrefData *this_00;
  byte local_1d;
  
  if (param_3 == (int *)0x0) {
    return 0xe00002c2;
  }
  param_3[2] = 0x73696e74;
  *(undefined1 *)((int)param_3 + 0xe) = 0;
  *(undefined1 *)((int)param_3 + 0xf) = 1;
  param_3[5] = 0;
  this_00 = (MaudioUsbTransitPrefData *)(this + 0xf8);
  cVar1 = MaudioUsbTransitPrefData::IsOutputAc3(this_00);
  if ((cVar1 == '\0') || (param_2 != 0)) {
    cVar1 = MaudioUsbTransitPrefData::GetBitDepth(this_00);
    uVar2 = 0x18;
    if (cVar1 != '\0') goto LAB_00001739;
  }
  uVar2 = 0x10;
LAB_00001739:
  *(undefined1 *)(param_3 + 3) = uVar2;
  piVar4 = &DAT_00016cf0;
  *(undefined1 *)((int)param_3 + 0xd) = uVar2;
  local_1d = 0;
  do {
    if (*piVar4 == param_2) {
      cVar1 = MaudioUsbTransitPrefData::IsInterfaceEnabled(this_00,(uchar)piVar4[-1]);
      local_1d = (local_1d + 1) - (cVar1 == '\0');
    }
    piVar4 = piVar4 + 3;
  } while (piVar4 != (int *)&UNK_00016d08);
  param_3[1] = 0x6c70636d;
  *(undefined1 *)(param_3 + 4) = 1;
  param_3[6] = 1;
  iVar3 = 2;
  if (local_1d != 0) {
    iVar3 = (uint)local_1d * 2;
  }
  *param_3 = iVar3;
  param_3[7] = 0;
  param_3[8] = 1;
  param_3[9] = (uint)(*(byte *)((int)param_3 + 0xd) >> 3) * *param_3;
  return 0;
}



// MaudioUsbTransitEngine::AddAc3Format(IOAudioStream*, AudioStreamFormat*, _IOAudioSampleRate*)

void __thiscall
MaudioUsbTransitEngine::AddAc3Format
          (MaudioUsbTransitEngine *this,IOAudioStream *param_1,AudioStreamFormat *param_2,
          _IOAudioSampleRate *param_3)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_2c = *(undefined4 *)(param_2 + 8);
  local_28 = *(undefined4 *)(param_2 + 0xc);
  local_20 = *(undefined4 *)(param_2 + 0x14);
  local_30 = 0x63616333;
  local_24 = *(uint *)(param_2 + 0x10) & 0xffffff00;
  local_34 = 2;
  local_1c = 1;
  local_18 = 0;
  local_14 = 0x600;
  local_10 = 0x1800;
  (**(code **)(*(int *)param_1 + 0x4b0))(param_1,&local_34,&local_1c,param_3,param_3,0,0);
  return;
}



// MaudioUsbTransitEngine::GetAlternateSetting(AudioStreamFormat const*, AudioStreamFormat const*,
// _IOAudioSampleRate const*) const

undefined4 __thiscall
MaudioUsbTransitEngine::GetAlternateSetting
          (MaudioUsbTransitEngine *this,AudioStreamFormat *param_1,AudioStreamFormat *param_2,
          _IOAudioSampleRate *param_3)

{
  AudioStreamFormat AVar1;
  char cVar2;
  
  if (param_3 == (_IOAudioSampleRate *)0x0 ||
      param_2 == (AudioStreamFormat *)0x0 && param_1 == (AudioStreamFormat *)0x0) {
    return 0;
  }
  if (param_2 == (AudioStreamFormat *)0x0) {
    if (param_1 == (AudioStreamFormat *)0x0) goto LAB_000018bf;
    AVar1 = param_1[0xc];
  }
  else {
    AVar1 = param_2[0xc];
  }
  if (AVar1 == (AudioStreamFormat)0x10) {
    if ((param_1 != (AudioStreamFormat *)0x0) && (*(int *)(param_1 + 4) == 0x63616333)) {
      return 5;
    }
    return 3;
  }
LAB_000018bf:
  if (((uint)(*(int *)param_3 + *(int *)(param_3 + 4)) < 0xbb81) &&
     (cVar2 = MaudioUsbTransitPrefData::GetEnabledInterfaceCount
                        ((MaudioUsbTransitPrefData *)(this + 0xf8)), cVar2 != '\x01')) {
    return 2;
  }
  return 1;
}



// MaudioUsbTransitEngine::SetAlternateSetting(unsigned short)

int __thiscall
MaudioUsbTransitEngine::SetAlternateSetting(MaudioUsbTransitEngine *this,ushort param_1)

{
  uchar uVar1;
  char cVar2;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  
  uVar5 = 0;
  while( true ) {
    iVar3 = 0;
    puVar4 = &MaudioShDrTransitUsbEngine::kStreamInterface;
    while ((byte)puVar4[8] != uVar5) {
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0xc;
      if (iVar3 == 2) {
        return -0x1ffffd44;
      }
    }
    uVar1 = (&MaudioShDrTransitUsbEngine::kStreamInterface)[iVar3 * 0xc];
    this_00 = (MaudioShDrTransitUsbInterfaceService *)
              (**(code **)(*(int *)this + 0x70c))(this,uVar1);
    if (this_00 == (MaudioShDrTransitUsbInterfaceService *)0x0) break;
    cVar2 = MaudioUsbTransitPrefData::IsInterfaceEnabled
                      ((MaudioUsbTransitPrefData *)(this + 0xf8),uVar1);
    uVar6 = param_1;
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    iVar3 = MaudioShDrTransitUsbInterfaceService::SetAlternateSetting(this_00,uVar6);
    if (iVar3 != 0) {
      return iVar3;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 2) {
      return 0;
    }
  }
  return -0x1ffffd44;
}



// MaudioUsbTransitEngine::GetAlternateSettingInfo(unsigned char, unsigned short,
// MaudioUsbTransitEngine::GetConfigurationSampleRate(MaudioShDrTransitUsbPrefData*) const

undefined8 __thiscall
MaudioUsbTransitEngine::GetConfigurationSampleRate
          (MaudioUsbTransitEngine *this,MaudioShDrTransitUsbPrefData *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  
  uVar7 = (**(code **)(*(int *)this + 0x6d8))(this);
  if (param_1 == (MaudioShDrTransitUsbPrefData *)0x0) {
    return uVar7;
  }
  cVar1 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
  cVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
  cVar3 = (**(code **)(*(int *)param_1 + 0x18))(param_1);
  cVar4 = (**(code **)(*(int *)param_1 + 0x1c))(param_1);
  cVar5 = (**(code **)(*(int *)param_1 + 0x28))(param_1);
  cVar6 = (**(code **)(*(int *)param_1 + 0x2c))(param_1);
  if (cVar6 == '\0') {
    (**(code **)(*(int *)param_1 + 0x30))(param_1,1);
    if (cVar5 != '\0') {
      uVar7 = 48000;
      goto LAB_00001adf;
    }
    if (cVar1 != '\0') {
      if (cVar2 != '\0') goto LAB_00001af7;
      uVar7 = 48000;
      if (cVar4 != '\0') {
        uVar7 = 96000;
      }
    }
  }
  else {
LAB_00001adf:
    if ((cVar1 != '\0') && (cVar2 != '\0')) goto LAB_00001af7;
  }
  if (cVar3 == '\0') {
    return uVar7;
  }
  if (cVar5 != '\0') {
    return uVar7;
  }
LAB_00001af7:
  if (48000 < (uint)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20))) {
    uVar7 = 48000;
  }
  return uVar7;
}



// MaudioUsbTransitEngine::GetFramesPerBuffer() const

undefined4 MaudioUsbTransitEngine::GetFramesPerBuffer(void)

{
  return 400;
}



// MaudioUsbTransitEngine::ForceReset()

void __thiscall MaudioUsbTransitEngine::ForceReset(MaudioUsbTransitEngine *this)

{
  int iVar1;
  
  iVar1 = _OSIncrementAtomic(this + 0xc4);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x6e4))(this,this + 0xf8,0,0,0);
  }
  _OSDecrementAtomic();
  return;
}



// MaudioUsbTransitEngine::GetNumberOfAvailableStreams() const

int __thiscall MaudioUsbTransitEngine::GetNumberOfAvailableStreams(MaudioUsbTransitEngine *this)

{
  char cVar1;
  int *piVar2;
  OSMetaClassBase *pOVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar2 = (int *)OSCollectionIterator::withCollection(*(OSCollection **)(this + 0xb8));
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x94))(piVar2);
    while( true ) {
      pOVar3 = (OSMetaClassBase *)(**(code **)(*piVar2 + 0x9c))(piVar2);
      piVar4 = (int *)OSMetaClassBase::safeMetaCast
                                (pOVar3,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
      if (piVar4 == (int *)0x0) break;
      cVar1 = (**(code **)(*piVar4 + 0x5c4))(piVar4);
      iVar5 = (iVar5 + 1) - (uint)(cVar1 == '\0');
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  return iVar5;
}



// MaudioUsbTransitEngine::EnableDisableStreams()

undefined4 __thiscall MaudioUsbTransitEngine::EnableDisableStreams(MaudioUsbTransitEngine *this)

{
  char cVar1;
  OSMetaClassBase *pOVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uchar *puVar6;
  undefined1 local_1e;
  undefined1 local_1d;
  
  pOVar2 = (OSMetaClassBase *)
           (**(code **)(**(int **)(this + 0x8c) + 0x104))(*(int **)(this + 0x8c),0);
  piVar3 = (int *)OSMetaClassBase::safeMetaCast
                            (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  pOVar2 = (OSMetaClassBase *)
           (**(code **)(**(int **)(this + 0x84) + 0x104))(*(int **)(this + 0x84),0);
  piVar4 = (int *)OSMetaClassBase::safeMetaCast
                            (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbStream::gMetaClass);
  uVar5 = 0xe00002bc;
  if (piVar3 != (int *)0x0 && piVar4 != (int *)0x0) {
    puVar6 = "\x01";
    local_1e = 0;
    local_1d = 0;
    do {
      cVar1 = MaudioUsbTransitPrefData::IsInterfaceEnabled
                        ((MaudioUsbTransitPrefData *)(this + 0xf8),*puVar6);
      if (cVar1 != '\0') {
        if (*(int *)(puVar6 + 4) == 0) {
          local_1d = 1;
        }
        else {
          local_1e = 1;
        }
      }
      puVar6 = puVar6 + 0xc;
    } while (puVar6 != "\x18\x10");
    (**(code **)(*piVar3 + 0x5c0))(piVar3,local_1d);
    (**(code **)(*piVar4 + 0x5c0))(piVar4,local_1e);
    uVar5 = 0;
  }
  return uVar5;
}



// MaudioUsbTransitEngine::GetPreferenceObjectPtr()

MaudioUsbTransitEngine * __thiscall
MaudioUsbTransitEngine::GetPreferenceObjectPtr(MaudioUsbTransitEngine *this)

{
  return this + 0xf8;
}



// MaudioUsbTransitEngine::SetFeatureConfiguration()

undefined4 __thiscall MaudioUsbTransitEngine::SetFeatureConfiguration(MaudioUsbTransitEngine *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  piVar1 = *(int **)(this + 0xb0);
  iVar3 = MaudioUsbTransitPrefData::GetPreferenceDataPtr((MaudioUsbTransitPrefData *)(this + 0xf8));
  if ((iVar3 != 0 && piVar1 != (int *)0x0) &&
     (cVar2 = (**(code **)(*piVar1 + 0x614))(piVar1,iVar3), cVar2 != '\0')) {
    return 0;
  }
  return 0xe00002bc;
}



// MaudioUsbTransitEngine::GetExternalSampleRateController()

undefined4 __thiscall
MaudioUsbTransitEngine::GetExternalSampleRateController(MaudioUsbTransitEngine *this)

{
  char cVar1;
  char cVar2;
  MaudioUsbTransitPrefData *this_00;
  
  this_00 = (MaudioUsbTransitPrefData *)(this + 0xf8);
  cVar1 = MaudioUsbTransitPrefData::IsEnabledForInput(this_00);
  cVar2 = MaudioUsbTransitPrefData::IsEnabledForOutput(this_00);
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      return 0;
    }
    cVar1 = MaudioUsbTransitPrefData::IsOutputAc3(this_00);
    cVar2 = MaudioUsbTransitPrefData::IsBitDepth16(this_00);
    if ((cVar2 == '\0') || (cVar1 != '\0')) {
      return 1;
    }
  }
  else if (cVar2 == '\0') {
    return 2;
  }
  return 3;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioUsbTransitEngine::MetaClass::MetaClass((MetaClass *)&MaudioUsbTransitEngine::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioUsbTransitEngine::MetaClass::~MetaClass((MetaClass *)&MaudioUsbTransitEngine::gMetaClass);
  }
  return;
}



// MaudioUsbTransitEngine::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitEngine::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitEngine::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitEngine::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitEngine::SetPrimaryInterfaceForExternalSampleRateChanges()

undefined4 __thiscall
MaudioUsbTransitEngine::SetPrimaryInterfaceForExternalSampleRateChanges
          (MaudioUsbTransitEngine *this)

{
  char cVar1;
  OSMetaClassBase *pOVar2;
  MaudioShDrTransitUsbInterfaceService *this_00;
  int iVar3;
  uchar *puVar4;
  undefined4 local_24;
  MaudioShDrTransitUsbInterfaceService local_1d;
  
  local_24 = 0xe00002bc;
  if (*(int *)(this + 0xb4) != 0) {
    local_1d = (MaudioShDrTransitUsbInterfaceService)0x1;
    iVar3 = 0;
    puVar4 = "\x01";
    do {
      pOVar2 = (OSMetaClassBase *)
               (**(code **)(**(int **)(this + 0xb4) + 0xfc))(*(int **)(this + 0xb4),iVar3);
      this_00 = (MaudioShDrTransitUsbInterfaceService *)
                OSMetaClassBase::safeMetaCast
                          (pOVar2,(OSMetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
      if (this_00 != (MaudioShDrTransitUsbInterfaceService *)0x0) {
        cVar1 = MaudioUsbTransitPrefData::IsInterfaceEnabled
                          ((MaudioUsbTransitPrefData *)(this + 0xf8),*puVar4);
        if (cVar1 == '\0') {
LAB_00001f0f:
          this_00[0x40] = (MaudioShDrTransitUsbInterfaceService)0x0;
          local_24 = 0;
        }
        else {
          cVar1 = MaudioShDrTransitUsbInterfaceService::IsAsynchronousWrite(this_00);
          if (cVar1 == '\0') {
            cVar1 = MaudioShDrTransitUsbInterfaceService::IsAdaptiveRead(this_00);
            if (cVar1 == '\0') goto LAB_00001f0f;
          }
          this_00[0x40] = local_1d;
          local_24 = 0;
          local_1d = (MaudioShDrTransitUsbInterfaceService)0x0;
        }
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0xc;
    } while (iVar3 != 2);
  }
  return local_24;
}



// MaudioUsbTransitEngine::performAudioEngineStart()

int __thiscall MaudioUsbTransitEngine::performAudioEngineStart(MaudioUsbTransitEngine *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint local_24;
  int local_20;
  
  iVar2 = (**(code **)(*(int *)this + 0x5b4))(this);
  if (((iVar2 == 1) || (*(int *)(this + 0xb8) == 0)) ||
     (*(MaudioShDrTransitUsbDevice **)(this + 0xb0) == (MaudioShDrTransitUsbDevice *)0x0)) {
    return -0x1ffffd44;
  }
  iVar2 = MaudioShDrTransitUsbDevice::UsbGetFrameNumber
                    (*(MaudioShDrTransitUsbDevice **)(this + 0xb0),(ulonglong *)&local_24);
  if (iVar2 != 0) {
    return iVar2;
  }
  cVar1 = IsAsynchronous(this);
  if (cVar1 == '\0') {
    bVar5 = 0xfffffffa < local_24;
    uVar4 = local_24 + 5;
  }
  else {
    uVar4 = local_24 + 5;
    local_20 = local_20 + (uint)(0xfffffffa < local_24);
    uVar3 = uVar4 & 3;
    if (uVar3 == 0) goto LAB_00001fb9;
    local_20 = local_20 - (uint)(uVar4 < uVar3);
    bVar5 = 0xfffffffb < uVar4 - uVar3;
    uVar4 = (uVar4 - uVar3) + 4;
  }
  local_20 = local_20 + (uint)bVar5;
LAB_00001fb9:
  *(undefined4 *)(this + 0x104) = 0;
  iVar2 = (**(code **)(*(int *)this + 0x700))(this,uVar4,local_20);
  return iVar2;
}



