#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAsyncFeedback::GetFeedbackFrequency()

char __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::GetFeedbackFrequency
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = 0;
  cVar4 = '\0';
  piVar1 = *(int **)(*(int *)(this + 0x90) + 0x50);
  while( true ) {
    iVar3 = (**(code **)(*piVar1 + 0x4c0))(piVar1,iVar3,5);
    if (iVar3 == 0) break;
    if (cVar4 == '\0') {
      cVar4 = *(char *)(iVar3 + 7);
    }
  }
  cVar2 = '\x04';
  if (cVar4 != '\0') {
    cVar2 = cVar4;
  }
  return cVar2;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::MaudioShDrTransitUsbInterfaceAsyncFeedback(MaudioShDrTransitUsbInterfaceAsyncFeedback::Callback
// const&)

MaudioShDrTransitUsbInterfaceAsyncFeedback * __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::MaudioShDrTransitUsbInterfaceAsyncFeedback
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,Callback *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 8) != 0)) &&
     ((*(int *)(param_1 + 0xc) != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    this[0x70] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x4;
    *(undefined4 *)(this + 0xa0) = uVar1;
    iVar2 = IOSyncer::create(false);
    this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
    *(int *)(this + 0xb4) = iVar2;
    if (iVar2 != 0) {
      _memset(this,0,0x28);
      _memset(this + 0x28,0,8);
      _memset(this + 0x30,0,8);
      *(undefined4 *)(this + 0x38) = 0;
      _memset(this + 0x3c,0,8);
      _memset(this + 0x44,0,8);
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x78) = 0;
      *(undefined4 *)(this + 0x7c) = 0;
      this[0x80] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
      *(undefined4 *)(this + 0xa4) = 0;
      this[0xa8] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x4;
    }
  }
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::MaudioShDrTransitUsbInterfaceAsyncFeedback(MaudioShDrTransitUsbInterfaceAsyncFeedback::Callback
// const&)

MaudioShDrTransitUsbInterfaceAsyncFeedback * __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::MaudioShDrTransitUsbInterfaceAsyncFeedback
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,Callback *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*(int *)param_1 != 0) && (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 8) != 0)) &&
     ((*(int *)(param_1 + 0xc) != 0 && (*(int *)(param_1 + 0x10) != 0)))) {
    *(undefined4 *)(this + 0x90) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    this[0x70] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x4;
    *(undefined4 *)(this + 0xa0) = uVar1;
    iVar2 = IOSyncer::create(false);
    this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
    *(int *)(this + 0xb4) = iVar2;
    if (iVar2 != 0) {
      _memset(this,0,0x28);
      _memset(this + 0x28,0,8);
      _memset(this + 0x30,0,8);
      *(undefined4 *)(this + 0x38) = 0;
      _memset(this + 0x3c,0,8);
      _memset(this + 0x44,0,8);
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x78) = 0;
      *(undefined4 *)(this + 0x7c) = 0;
      this[0x80] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
      *(undefined4 *)(this + 0xa4) = 0;
      this[0xa8] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x4;
    }
  }
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::FreeBuffers()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::FreeBuffers
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  MaudioShDrTransitUsbInterface::IsocCompletionsFree((UsbIsocCompletions *)(this + 0x28));
  MaudioShDrTransitUsbInterface::IsocFramesFree((UsbIsocFrames *)(this + 0x30));
  MaudioShDrTransitUsbInterface::UsbBufferFree((UsbBuffer *)this);
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRelease
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformStopHandler()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformStopHandler
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  if (*(code **)(this + 0xa0) != GetControlInterfaceClass) {
                    // WARNING: Could not recover jumptable at 0x000074c4. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(this + 0xa0))();
    return;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::SetExternalSampleRate(ExternalSampleRate const*)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::SetExternalSampleRate
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,ExternalSampleRate *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != (ExternalSampleRate *)0x0) {
    *(undefined4 *)(this + 0x74) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 4);
    uVar1 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x7c) = uVar1;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    this[0x5c] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x80) = uVar2;
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x78);
    *(undefined4 *)(this + 100) = uVar1;
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x68) = uVar1;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListSubmit()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListSubmit
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  MaudioShDrTransitUsbInterfaceAsyncFeedback *pMVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_20 [4];
  
  iVar5 = *(int *)(this + 0x20);
  if ((((*(int *)(this + 0x38) != 0) && (*(int *)(this + 4) != 0)) && (*(int *)(this + 0x30) != 0))
     && ((*(int *)(this + 0x28) != 0 && (*(int *)(this + 0x10) != 0)))) {
    iVar2 = *(int *)(this + 0x28) + iVar5 * 0xc;
    iVar8 = iVar5 * 0x10;
    puVar7 = (undefined4 *)(*(int *)(this + 0x30) + iVar8);
    piVar4 = *(int **)(*(int *)(this + 0x10) + iVar5 * 4);
    if ((puVar7 != (undefined4 *)0x0) && ((iVar2 != 0 && (piVar4 != (int *)0x0)))) {
      *puVar7 = 0;
      *(undefined2 *)(iVar8 + 4 + *(int *)(this + 0x30)) = 3;
      *(undefined2 *)(iVar8 + 6 + *(int *)(this + 0x30)) = 0;
      local_20[0] = 0;
      (**(code **)(*piVar4 + 0xfc))(piVar4,0,local_20,4);
      *(int *)(iVar2 + 8) = iVar5;
      iVar5 = (**(code **)(**(int **)(this + 0x38) + 0x104))
                        (*(int **)(this + 0x38),piVar4,*(undefined4 *)(this + 0x18),
                         *(undefined4 *)(this + 0x1c),1,puVar7,iVar2,0);
      if (iVar5 != 0) {
        return iVar5;
      }
      _OSIncrementAtomic(this + 0x24);
      uVar6 = 1 << ((byte)this[0xa8] & 0x1f);
      pMVar1 = this + 0x18;
      uVar3 = *(uint *)pMVar1;
      *(uint *)pMVar1 = *(uint *)pMVar1 + uVar6;
      *(uint *)(this + 0x1c) =
           *(int *)(this + 0x1c) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar3,uVar6);
      *(uint *)(this + 0x20) = (*(int *)(this + 0x20) + 1U) % 0x19;
      return 0;
    }
  }
  return -0x1ffffd44;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListSubmitStart()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListSubmitStart
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  undefined4 uVar1;
  
  if (*(uint *)(this + 0x20) < 5) {
    uVar1 = UsbFrameListSubmit(this);
    return uVar1;
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::ProcessFeedbackData(unsigned char*)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::ProcessFeedbackData
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,uchar *param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)param_1 & 0xffffff) << 2;
  if ((*(uint *)param_1 & 0xffffff) == 0) {
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
  }
  else {
    *(uint *)(this + 0x84) = uVar1;
    *(int *)(this + 0x88) = ((int)uVar1 >> 0x10) * 1000;
    *(int *)(this + 0x8c) = (int)((ulonglong)((longlong)(int)(uVar1 & 0xffff) * 0x3e80000) >> 0x20);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformGetClosestValidSampleRateHandler(_IOAudioSampleRate
// const&, _IOAudioSampleRate*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformGetClosestValidSampleRateHandler
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,_IOAudioSampleRate *param_1,
          _IOAudioSampleRate *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (_IOAudioSampleRate *)0x0 && *(code **)(this + 0x98) != GetControlInterfaceClass) {
                    // WARNING: Could not recover jumptable at 0x0000774c. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar1 = (**(code **)(this + 0x98))();
    return uVar1;
  }
  return 0xe00002c2;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformSampleRateChangeHandler()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformSampleRateChangeHandler
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  if (*(code **)(this + 0x9c) != GetControlInterfaceClass) {
    (**(code **)(this + 0x9c))(*(undefined4 *)(this + 0x90),this + 0x74);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformFeedbackHandler()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::PerformFeedbackHandler
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  if (*(code **)(this + 0x94) != GetControlInterfaceClass) {
    (**(code **)(this + 0x94))(*(undefined4 *)(this + 0x90),this + 0x84);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::FinalizeBuffers()

int __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::FinalizeBuffers
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int iVar1;
  
  iVar1 = -0x1ffffd44;
  if (*(int *)(this + 0x90) != 0) {
    *(undefined4 *)(this + 0x3c) = 0x19;
    *(uint *)(this + 0x40) = (uint)(byte)this[0x70];
    FreeBuffers(this);
    iVar1 = MaudioShDrTransitUsbInterface::UsbBufferAllocate
                      ((FrameList *)(this + 0x3c),(UsbBuffer *)this);
    if (iVar1 == 0) {
      iVar1 = MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
                        (*(ulong *)(this + 0x3c),UsbFrameListHandler,this,
                         (UsbIsocCompletions *)(this + 0x28));
      if (iVar1 == 0) {
        iVar1 = MaudioShDrTransitUsbInterface::IsocFramesAllocate
                          (*(ulong *)(this + 0x3c),(UsbIsocFrames *)(this + 0x30));
      }
    }
  }
  return iVar1;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::Stop()

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::Stop(MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  
  this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)(*(int *)(this + 0x24) != 0);
  if (*(int *)(this + 0x24) != 0) {
    piVar1 = *(int **)(this + 0x38);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x9c))(piVar1);
    }
    (**(code **)(**(int **)(this + 0xb4) + 0xa0))(*(int **)(this + 0xb4),0);
    (**(code **)(**(int **)(this + 0xb4) + 0x9c))(*(int **)(this + 0xb4));
    this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
  }
  if (*(code **)(this + 0xa0) != GetControlInterfaceClass) {
    (**(code **)(this + 0xa0))(*(undefined4 *)(this + 0x90));
  }
  return 0;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::CheckForSampleRateChange()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::CheckForSampleRateChange
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  bool bVar1;
  int iVar2;
  int local_30;
  int local_24;
  int local_20;
  
  iVar2 = -0x1ffffd3e;
  local_24 = 0;
  local_20 = 0;
  if (*(code **)(this + 0x98) != GetControlInterfaceClass) {
    iVar2 = (**(code **)(this + 0x98))(*(undefined4 *)(this + 0x90),this + 0x88,&local_24);
  }
  if ((iVar2 == 0 || iVar2 == -0x1ffffd14) && (*(int *)(this + 0x90) != 0)) {
    local_30 = 2;
    if (iVar2 == -0x1ffffd14) {
      if (*(int *)(this + 0x88) + *(int *)(this + 0x8c) == 0) {
        local_24 = *(int *)(this + 0x4c);
        local_20 = *(int *)(this + 0x50);
        local_30 = 3;
      }
      else {
        local_24 = *(int *)(this + 0x4c);
        local_20 = *(int *)(this + 0x50);
        local_30 = 4;
      }
    }
    if (*(int *)(this + 0x4c) + *(int *)(this + 0x50) == local_24 + local_20) {
      this[0x5c] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
      *(undefined4 *)(this + 0x60) = 0;
      if (local_30 == *(int *)(this + 100)) {
        *(int *)(this + 0x68) = local_30;
        *(undefined4 *)(this + 0x6c) = 0;
      }
      if (local_30 == *(int *)(this + 0x68)) {
        if (((*(int *)(this + 0x6c) != 0) &&
            (iVar2 = *(int *)(this + 0x6c) + -1, *(int *)(this + 0x6c) = iVar2, iVar2 == 0)) &&
           ((local_30 == 3 || ((local_30 == 2 || (local_30 == 4)))))) {
          *(int *)(this + 0x54) = local_24;
          *(int *)(this + 0x58) = local_20;
          this[0x5c] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x1;
          *(undefined4 *)(this + 0x60) = 0;
          this[0x80] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x1;
          *(int *)(this + 0x68) = local_30;
        }
      }
      else {
        *(int *)(this + 0x68) = local_30;
        *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0xac);
      }
    }
    else if ((this[0x5c] == (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0) ||
            (local_24 + local_20 != *(int *)(this + 0x54) + *(int *)(this + 0x58))) {
      this[0x5c] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x1;
      *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0xac);
      *(int *)(this + 0x54) = local_24;
      *(int *)(this + 0x58) = local_20;
    }
    else if (*(int *)(this + 0x60) != 0) {
      *(int *)(this + 0x60) = *(int *)(this + 0x60) + -1;
    }
    if ((*(int *)(this + 0x74) + *(int *)(this + 0x78) != local_24 + local_20) ||
       (bVar1 = false, local_30 != *(int *)(this + 0x7c))) {
      bVar1 = true;
    }
    if (((this[0x5c] != (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0) &&
        (*(int *)(this + 0x60) == 0)) ||
       ((bVar1 && (this[0x80] != (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0)))) {
      this[0x5c] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
      *(int *)(this + 0x78) = local_20;
      *(int *)(this + 0x74) = local_24;
      *(int *)(this + 0x50) = local_20;
      *(int *)(this + 0x4c) = local_24;
      *(int *)(this + 0x7c) = local_30;
      if (*(code **)(this + 0x9c) != GetControlInterfaceClass) {
        (**(code **)(this + 0x9c))(*(undefined4 *)(this + 0x90),this + 0x74);
      }
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListHandler(void*, void*, int,
// IOUSBLowLatencyIsocFrame*)

void MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbFrameListHandler
               (void *param_1,void *param_2,int param_3,IOUSBLowLatencyIsocFrame *param_4)

{
  if (param_1 != (void *)0x0) {
    _OSDecrementAtomic((int)param_1 + 0x24);
    if (*(char *)((int)param_1 + 0xb0) == '\0') {
      UsbFrameListSubmit(param_1);
      ProcessFeedbackData(param_1,(uchar *)((int)param_2 * (uint)*(byte *)((int)param_1 + 0x70) +
                                           *(int *)((int)param_1 + 4)));
      if (*(code **)((int)param_1 + 0x94) != GetControlInterfaceClass) {
        (**(code **)((int)param_1 + 0x94))(*(undefined4 *)((int)param_1 + 0x90),(int)param_1 + 0x84)
        ;
      }
      CheckForSampleRateChange(param_1);
      return;
    }
    if ((*(int *)((int)param_1 + 0x24) == 0) && (*(int **)((int)param_1 + 0xb4) != (int *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00007b4b. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(**(int **)((int)param_1 + 0xb4) + 0xa4))();
      return;
    }
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::free()

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::free(MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  
  FreeBuffers(this);
  piVar1 = *(int **)(this + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x38) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::~MaudioShDrTransitUsbInterfaceAsyncFeedback()

MaudioShDrTransitUsbInterfaceAsyncFeedback * __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::~MaudioShDrTransitUsbInterfaceAsyncFeedback
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  
  free(this);
  piVar1 = *(int **)(this + 0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0xb4) = 0;
    this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
  }
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::~MaudioShDrTransitUsbInterfaceAsyncFeedback()

MaudioShDrTransitUsbInterfaceAsyncFeedback * __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::~MaudioShDrTransitUsbInterfaceAsyncFeedback
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this)

{
  int *piVar1;
  
  free(this);
  piVar1 = *(int **)(this + 0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0xb4) = 0;
    this[0xb0] = (MaudioShDrTransitUsbInterfaceAsyncFeedback)0x0;
  }
  return this;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRetain(IOUSBPipe*)

void __thiscall
MaudioShDrTransitUsbInterfaceAsyncFeedback::UsbPipeRetain
          (MaudioShDrTransitUsbInterfaceAsyncFeedback *this,IOUSBPipe *param_1)

{
  int *piVar1;
  
  if (param_1 != (IOUSBPipe *)0x0) {
    (**(code **)(*(int *)param_1 + 0x18))(param_1);
  }
  piVar1 = *(int **)(this + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (param_1 != (IOUSBPipe *)0x0) {
    *(IOUSBPipe **)(this + 0x38) = param_1;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAsyncFeedback::Start(unsigned long long)

undefined4 MaudioShDrTransitUsbInterfaceAsyncFeedback::Start(ulonglong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_stack_0000000c;
  
  if (((*(int *)((int)param_1 + 0x90) == 0) || (*(int *)((int)param_1 + 0x94) == 0)) ||
     (*(int *)((int)param_1 + 0xa0) == 0)) {
    uVar3 = 0xe00002bc;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x18) = param_1._4_4_;
    bVar5 = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = in_stack_0000000c;
    iVar4 = 0;
    *(undefined1 *)((int)param_1 + 0xb0) = 0;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined1 *)((int)param_1 + 0x80) = 0;
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x90) + 0x50);
    while( true ) {
      iVar4 = (**(code **)(*piVar1 + 0x4c0))(piVar1,iVar4,5);
      if (iVar4 == 0) break;
      if (bVar5 == 0) {
        bVar5 = *(byte *)(iVar4 + 7);
      }
    }
    uVar2 = 4;
    if (bVar5 != 0) {
      uVar2 = (uint)bVar5;
    }
    *(char *)((int)param_1 + 0xa8) = (char)uVar2;
    *(int *)((int)param_1 + 0xac) = (int)(0x100 / (ulonglong)(longlong)(int)uVar2);
    uVar3 = 0;
  }
  return uVar3;
}



