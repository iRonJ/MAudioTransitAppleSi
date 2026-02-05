#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this,OSMetaClass *param_1)

{
  OSObject::OSObject((OSObject *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this,OSMetaClass *param_1)

{
  OSObject::OSObject((OSObject *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService()

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this)

{
  *(undefined **)this = &vtable;
  OSObject::~OSObject((OSObject *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService()

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this)

{
  *(undefined **)this = &vtable;
  OSObject::~OSObject((OSObject *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService()

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::~MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this)

{
  *(undefined **)this = &vtable;
  OSObject::~OSObject((OSObject *)this);
  OSObject::operator_delete(this,0x48);
  return this;
}



// MaudioShDrTransitUsbInterfaceService::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceService::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceService::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceService::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceService",
             (OSMetaClass *)&OSObject::gMetaClass,0x48);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceService::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceService::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceService",
             (OSMetaClass *)&OSObject::gMetaClass,0x48);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService()

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this)

{
  OSObject::OSObject((OSObject *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceService::MetaClass::alloc() const

MaudioShDrTransitUsbInterfaceService * MaudioShDrTransitUsbInterfaceService::MetaClass::alloc(void)

{
  MaudioShDrTransitUsbInterfaceService *this;
  MaudioShDrTransitUsbInterfaceService *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x48,in_stack_ffffffe8);
  pMVar1 = (MaudioShDrTransitUsbInterfaceService *)0x0;
  if (this != (MaudioShDrTransitUsbInterfaceService *)0x0) {
    MaudioShDrTransitUsbInterfaceService(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService()

MaudioShDrTransitUsbInterfaceService * __thiscall
MaudioShDrTransitUsbInterfaceService::MaudioShDrTransitUsbInterfaceService
          (MaudioShDrTransitUsbInterfaceService *this)

{
  OSObject::OSObject((OSObject *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioShDrTransitUsbInterfaceService::SampleBufferFree(SampleBuffer*)

void __thiscall
MaudioShDrTransitUsbInterfaceService::SampleBufferFree
          (MaudioShDrTransitUsbInterfaceService *this,SampleBuffer *param_1)

{
  int *piVar1;
  
  if (param_1 != (SampleBuffer *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::withInterface(MaudioShDrTransitUsbEngine*, IOUSBInterface*)

MaudioShDrTransitUsbInterfaceService *
MaudioShDrTransitUsbInterfaceService::withInterface
          (MaudioShDrTransitUsbEngine *param_1,IOUSBInterface *param_2)

{
  char cVar1;
  MaudioShDrTransitUsbInterfaceService *this;
  MaudioShDrTransitUsbInterfaceService *pMVar2;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x48,in_stack_ffffffe8);
  pMVar2 = this;
  if (this != (MaudioShDrTransitUsbInterfaceService *)0x0) {
    MaudioShDrTransitUsbInterfaceService(this);
    cVar1 = (**(code **)(*(int *)this + 0x94))(this,param_1,param_2);
    if (cVar1 == '\0') {
      pMVar2 = (MaudioShDrTransitUsbInterfaceService *)0x0;
      (**(code **)(*(int *)this + 0x1c))(this);
    }
  }
  return pMVar2;
}



// MaudioShDrTransitUsbInterfaceService::SampleBufferAllocate(SampleBuffer*, unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::SampleBufferAllocate
          (MaudioShDrTransitUsbInterfaceService *this,SampleBuffer *param_1,ulong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xe00002c2;
  if (param_2 != 0 && param_1 != (SampleBuffer *)0x0) {
    piVar1 = (int *)IOBufferMemoryDescriptor::withCapacity(param_2,3,1);
    uVar3 = 0xe00002bd;
    *(int **)(param_1 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 400))(piVar1);
      uVar3 = 0;
      *(ulong *)(param_1 + 4) = param_2;
      *(undefined4 *)param_1 = uVar2;
    }
  }
  return uVar3;
}



// MaudioShDrTransitUsbInterfaceService::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceService::Start(ulonglong param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)param_1 + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000a915. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x10) + 0x4b0))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::Stop(MaudioShDrTransitUsbInterfaceService *this)

{
  undefined4 uVar1;
  
  if (*(int **)(this + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000a939. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(this + 0x10) + 0x4b4))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::StopUsingEngine()

void __thiscall
MaudioShDrTransitUsbInterfaceService::StopUsingEngine(MaudioShDrTransitUsbInterfaceService *this)

{
  *(undefined4 *)(this + 8) = 0;
  if (*(int **)(this + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000a962. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(this + 0x10) + 0x4ac))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::FinalizeBuffers()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::FinalizeBuffers(MaudioShDrTransitUsbInterfaceService *this)

{
  undefined4 uVar1;
  
  if (*(int **)(this + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000a97f. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(this + 0x10) + 0x4b8))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::TransferAudio(float*, unsigned long, unsigned long)

undefined4
MaudioShDrTransitUsbInterfaceService::TransferAudio(float *param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar1 + 0x4d4))(piVar1);
    if (cVar2 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0000a9e0. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(*(int *)param_1[4] + 0x4bc))();
      return uVar3;
    }
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::GetSampleBuffer()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::GetSampleBuffer(MaudioShDrTransitUsbInterfaceService *this)

{
  return *(undefined4 *)(this + 0x34);
}



// MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize()

int __thiscall
MaudioShDrTransitUsbInterfaceService::GetSampleBufferSize
          (MaudioShDrTransitUsbInterfaceService *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(this + 0x10);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x4c0))(piVar1), iVar2 != 0)) {
    return iVar2;
  }
  return *(int *)(this + 0x38);
}



// MaudioShDrTransitUsbInterfaceService::WaitUntilStopped()

void __thiscall
MaudioShDrTransitUsbInterfaceService::WaitUntilStopped(MaudioShDrTransitUsbInterfaceService *this)

{
  if (*(MaudioShDrTransitUsbInterface **)(this + 0x10) != (MaudioShDrTransitUsbInterface *)0x0) {
    MaudioShDrTransitUsbInterface::WaitUntilStopped
              (*(MaudioShDrTransitUsbInterface **)(this + 0x10));
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::SetBufferSize(unsigned long)

undefined4 MaudioShDrTransitUsbInterfaceService::SetBufferSize(ulong param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000aa59. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x4dc))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::SetLeadFrames(unsigned char)

void __thiscall
MaudioShDrTransitUsbInterfaceService::SetLeadFrames
          (MaudioShDrTransitUsbInterfaceService *this,uchar param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(uchar *)(*(int *)(this + 0x10) + 0xda) = param_1;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::SetFormat(AudioStreamFormat const*)

undefined4 MaudioShDrTransitUsbInterfaceService::SetFormat(AudioStreamFormat *param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000aa95. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x4e0))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::PostFinalizeBuffersSetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::PostFinalizeBuffersSetFormat
          (MaudioShDrTransitUsbInterfaceService *this,AudioStreamFormat *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x4e4))(piVar1,param_1);
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceService::SetSampleRate(_IOAudioSampleRate const*)

undefined4 MaudioShDrTransitUsbInterfaceService::SetSampleRate(_IOAudioSampleRate *param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000aadd. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x4e8))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::GetSampleRateFromInterface(unsigned long*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::GetSampleRateFromInterface
          (MaudioShDrTransitUsbInterfaceService *this,ulong *param_1)

{
  undefined4 uVar1;
  
  if (*(MaudioShDrTransitUsbInterface **)(this + 0x10) != (MaudioShDrTransitUsbInterface *)0x0) {
    uVar1 = MaudioShDrTransitUsbInterface::GetSampleRateFromInterface
                      (*(MaudioShDrTransitUsbInterface **)(this + 0x10),param_1);
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandlerThread(void*)

void MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandlerThread(void *param_1)

{
  int *piVar1;
  
  if (param_1 == (void *)0x0) goto LAB_0000ab5e;
  piVar1 = *(int **)((int)param_1 + 8);
  if (piVar1 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x564))(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xec))
                (piVar1,MaudioShDrTransitUsbEngine::SetSampleRateFromUsbFrameListHandlerAction,
                 (int)param_1 + 0x24,0,0,0);
    }
  }
  do {
    (**(code **)(*(int *)param_1 + 0x1c))(param_1);
LAB_0000ab5e:
    _IOExitThread();
  } while( true );
}



// MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler(ExternalSampleRate
// const&)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::SetSampleRateFromUsbFrameListHandler
          (MaudioShDrTransitUsbInterfaceService *this,ExternalSampleRate *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((this[0x40] != (MaudioShDrTransitUsbInterfaceService)0x0) || (*(int *)(param_1 + 8) == 1)) {
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) == 1) {
      *(undefined4 *)(this + 0x2c) = uVar1;
    }
    (**(code **)(*(int *)this + 0x18))(this);
    iVar2 = _IOCreateThread(SetSampleRateFromUsbFrameListHandlerThread,this);
    if (iVar2 == 0) {
      return 0xe00002bd;
    }
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceService::GetClosestValidSampleRate(_IOAudioSampleRate const&,
// _IOAudioSampleRate*) const

undefined4
MaudioShDrTransitUsbInterfaceService::GetClosestValidSampleRate
          (_IOAudioSampleRate *param_1,_IOAudioSampleRate *param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000abf1. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x690))();
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::SetAlternateSetting(unsigned short)

int __thiscall
MaudioShDrTransitUsbInterfaceService::SetAlternateSetting
          (MaudioShDrTransitUsbInterfaceService *this,ushort param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  if (param_1 == 0xfe) {
    if (*(int *)(this + 0x18) == 1) goto LAB_0000acc9;
    iVar3 = *(int *)this;
    local_30 = 1;
    local_2c = 1;
  }
  else if (param_1 == 0xff) {
    if (*(int *)(this + 0x18) == 2) goto LAB_0000acc9;
    iVar3 = *(int *)this;
    local_30 = 1;
    local_2c = 2;
  }
  else {
    piVar1 = *(int **)(this + 8);
    if ((piVar1 == (int *)0x0) ||
       (cVar2 = (**(code **)(*piVar1 + 0x710))(piVar1,this[0x14],param_1,local_38), cVar2 == '\0'))
    {
      return -0x1ffffd44;
    }
    if ((local_2c == *(int *)(this + 0x18)) && (local_30 == *(int *)(this + 0x1c)))
    goto LAB_0000acc9;
    iVar3 = *(int *)this;
  }
  iVar3 = (**(code **)(iVar3 + 0x98))(this,local_2c,local_30,this + 0x34);
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_0000acc9:
  iVar3 = (**(code **)(**(int **)(this + 0x10) + 0x4c4))(*(int **)(this + 0x10),param_1);
  return iVar3;
}



// MaudioShDrTransitUsbInterfaceService::IsActive() const

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceService::IsActive(MaudioShDrTransitUsbInterfaceService *this)

{
  int *piVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  piVar1 = *(int **)(this + 0x10);
  if ((piVar1 != (int *)0x0) && (uVar2 = 1, 1 < *(int *)(this + 0x18) - 1U)) {
    uVar2 = (**(code **)(*piVar1 + 0x4d4))(piVar1);
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterfaceService::SetInterface(IOUSBInterface*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::SetInterface
          (MaudioShDrTransitUsbInterfaceService *this,IOUSBInterface *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar1 = *(int **)(this + 8);
  *(IOUSBInterface **)(this + 0xc) = param_1;
  if ((piVar1 != (int *)0x0) &&
     (cVar2 = (**(code **)(*piVar1 + 0x710))(piVar1,this[0x14],0,local_28), cVar2 != '\0')) {
    uVar3 = (**(code **)(*(int *)this + 0x98))(this,local_1c,local_20,this + 0x34);
    return uVar3;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::CreateAudioInterface(InterfaceType, EndianType,
// SampleBuffer const&)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::CreateAudioInterface
          (MaudioShDrTransitUsbInterfaceService *this,undefined4 param_2,undefined4 param_3,
          int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  MaudioShDrTransitUsbInterfaceService *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0xc) == 0) {
    return 0xe00002bc;
  }
  if (*(int *)(this + 8) == 0) {
    return 0xe00002bc;
  }
  if (*param_4 == 0) {
    return 0xe00002bc;
  }
  if (param_4[1] == 0) {
    return 0xe00002bc;
  }
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2ec))(piVar1,0);
    (**(code **)(**(int **)(this + 0x10) + 0x1c))(*(int **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  local_1c = *(undefined4 *)(this + 8);
  local_28 = *(undefined4 *)(this + 0xc);
  local_24 = param_3;
  local_20 = this;
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  switch(param_2) {
  default:
    goto switchD_0000ae27_caseD_0;
  case 1:
    uVar2 = MaudioShDrTransitUsbInterfaceVirtRead::withInitStruct((InitStruct *)&local_28);
    break;
  case 2:
    uVar2 = MaudioShDrTransitUsbInterfaceVirtWrite::withInitStruct((InitStruct *)&local_28);
    break;
  case 3:
    uVar2 = MaudioShDrTransitUsbInterfaceAdaptiveRead::withInitStruct((InitStruct *)&local_28);
    break;
  case 4:
    uVar2 = MaudioShDrTransitUsbInterfaceAdaptiveWrite::withInitStruct((InitStruct *)&local_28);
    break;
  case 5:
    uVar2 = MaudioShDrTransitUsbInterfaceAsyncRead::withInitStruct((InitStruct *)&local_28);
    break;
  case 6:
    uVar2 = MaudioShDrTransitUsbInterfaceAsyncWrite::withInitStruct((InitStruct *)&local_28);
    break;
  case 8:
    uVar2 = MaudioShDrTransitUsbInterfaceAc3Write::withInitStruct((InitStruct *)&local_28);
  }
  *(undefined4 *)(this + 0x10) = uVar2;
switchD_0000ae27_caseD_0:
  if (*(int *)(this + 0x10) == 0) {
    return 0xe00002bc;
  }
  *(undefined4 *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x1c) = param_3;
  return 0;
}



// MaudioShDrTransitUsbInterfaceService::ActivateExternalSampleRateController(ExternalSampleRateController)

void MaudioShDrTransitUsbInterfaceService::ActivateExternalSampleRateController(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    MaudioShDrTransitUsbInterface::ActivateExternalSampleRateController();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::SetExternalSampleRateMode(ExternalSampleRateMode)

void __thiscall
MaudioShDrTransitUsbInterfaceService::SetExternalSampleRateMode
          (MaudioShDrTransitUsbInterfaceService *this,undefined4 param_2)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xb8) = param_2;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::IsAsynchronous() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsAsynchronous(MaudioShDrTransitUsbInterfaceService *this)

{
  return *(int *)(this + 0x18) - 5U < 2;
}



// MaudioShDrTransitUsbInterfaceService::IsAsynchronousWrite() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsAsynchronousWrite
          (MaudioShDrTransitUsbInterfaceService *this)

{
  return *(int *)(this + 0x18) == 6;
}



// MaudioShDrTransitUsbInterfaceService::IsAdaptiveRead() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsAdaptiveRead(MaudioShDrTransitUsbInterfaceService *this)

{
  return *(int *)(this + 0x18) == 3;
}



// MaudioShDrTransitUsbInterfaceService::IsVirtual() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsVirtual(MaudioShDrTransitUsbInterfaceService *this)

{
  return *(int *)(this + 0x18) - 1U < 2;
}



// MaudioShDrTransitUsbInterfaceService::GetSampleFrameCount(unsigned long*) const

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceService::GetSampleFrameCount
          (MaudioShDrTransitUsbInterfaceService *this,ulong *param_1)

{
  undefined1 uVar1;
  
  if ((param_1 == (ulong *)0x0) ||
     (*(MaudioShDrTransitUsbInterface **)(this + 0x10) == (MaudioShDrTransitUsbInterface *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = MaudioShDrTransitUsbInterface::GetSampleFrameCount
                      (*(MaudioShDrTransitUsbInterface **)(this + 0x10),param_1);
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceService::GetState() const

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::GetState(MaudioShDrTransitUsbInterfaceService *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x140);
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceService::SetState(State)

void MaudioShDrTransitUsbInterfaceService::SetState(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    MaudioShDrTransitUsbInterface::SetState();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::IsStreaming() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsStreaming(MaudioShDrTransitUsbInterfaceService *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 0x10) != 0) {
    bVar1 = *(int *)(*(int *)(this + 0x10) + 0x140) == 2;
  }
  return bVar1;
}



// MaudioShDrTransitUsbInterfaceService::IsConfigured() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsConfigured(MaudioShDrTransitUsbInterfaceService *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 0x10) != 0) {
    bVar1 = *(int *)(*(int *)(this + 0x10) + 0x140) != 0;
  }
  return bVar1;
}



// MaudioShDrTransitUsbInterfaceService::IsReady() const

bool __thiscall
MaudioShDrTransitUsbInterfaceService::IsReady(MaudioShDrTransitUsbInterfaceService *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 0x10) != 0) {
    bVar1 = *(int *)(*(int *)(this + 0x10) + 0x140) == 1;
  }
  return bVar1;
}



// MaudioShDrTransitUsbInterfaceService::GetUsbFrameNumber(unsigned long long*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceService::GetUsbFrameNumber
          (MaudioShDrTransitUsbInterfaceService *this,ulonglong *param_1)

{
  undefined4 uVar1;
  
  if (*(MaudioShDrTransitUsbInterface **)(this + 0x10) != (MaudioShDrTransitUsbInterface *)0x0) {
    uVar1 = MaudioShDrTransitUsbInterface::GetUsbFrameNumber
                      (*(MaudioShDrTransitUsbInterface **)(this + 0x10),param_1);
    return uVar1;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterfaceService::GetChannelCount() const

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceService::GetChannelCount(MaudioShDrTransitUsbInterfaceService *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x10) + 0x70);
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceService::SetGainDbToLinearIndex(ChannelId, unsigned short)

undefined4 MaudioShDrTransitUsbInterfaceService::SetGainDbToLinearIndex(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000b03f. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x4f8))();
    return uVar1;
  }
  return 0xe00002bc;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceService::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceService::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceService::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceService::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceService::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceService::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceService::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceService::FreeInternalStructures()

void __thiscall
MaudioShDrTransitUsbInterfaceService::FreeInternalStructures
          (MaudioShDrTransitUsbInterfaceService *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2ec))(piVar1,0);
    (**(code **)(**(int **)(this + 0x10) + 0x1c))(*(int **)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if ((*(int *)(this + 0x34) != 0) && (this != (MaudioShDrTransitUsbInterfaceService *)0xffffffcc))
  {
    piVar1 = *(int **)(this + 0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
      *(undefined4 *)(this + 0x3c) = 0;
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbInterfaceService::free()

void __thiscall
MaudioShDrTransitUsbInterfaceService::free(MaudioShDrTransitUsbInterfaceService *this)

{
  FreeInternalStructures(this);
                    // WARNING: Could not recover jumptable at 0x0000b192. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbInterfaceService::init(MaudioShDrTransitUsbEngine*, IOUSBInterface*)

undefined1 __thiscall
MaudioShDrTransitUsbInterfaceService::init
          (MaudioShDrTransitUsbInterfaceService *this,MaudioShDrTransitUsbEngine *param_1,
          IOUSBInterface *param_2)

{
  MaudioShDrTransitUsbInterfaceService MVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (MaudioShDrTransitUsbInterfaceService)0xff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (MaudioShDrTransitUsbInterfaceService)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x40] = (MaudioShDrTransitUsbInterfaceService)0x0;
  if (param_2 != (IOUSBInterface *)0x0 && param_1 != (MaudioShDrTransitUsbEngine *)0x0) {
    *(IOUSBInterface **)(this + 0xc) = param_2;
    MVar1 = (MaudioShDrTransitUsbInterfaceService)(**(code **)(*(int *)param_2 + 0x4d4))(param_2);
    *(MaudioShDrTransitUsbEngine **)(this + 8) = param_1;
    this[0x14] = MVar1;
    iVar4 = (**(code **)(*(int *)param_1 + 0x6b4))(param_1);
    if (iVar4 != 0) {
      iVar4 = SampleBufferAllocate(this,(SampleBuffer *)(this + 0x34),iVar4 * 600 + 0x960);
      if (((iVar4 == 0) &&
          (cVar2 = (**(code **)(*(int *)param_1 + 0x710))(param_1,this[0x14],0,local_38),
          cVar2 != '\0')) &&
         (iVar4 = (**(code **)(*(int *)this + 0x98))
                            (this,local_2c,local_30,(SampleBuffer *)(this + 0x34)), iVar4 == 0)) {
        uVar3 = (*_vtable)(this);
        return uVar3;
      }
    }
  }
  FreeInternalStructures(this);
  return 0;
}



