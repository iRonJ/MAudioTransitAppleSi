#include "kext_defs.h"

// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface(OSMetaClass const*)

MaudioShDrTransitUsbInterface * __thiscall
MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
          (MaudioShDrTransitUsbInterface *this,OSMetaClass *param_1)

{
  IOService::IOService((IOService *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface(OSMetaClass const*)

MaudioShDrTransitUsbInterface * __thiscall
MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
          (MaudioShDrTransitUsbInterface *this,OSMetaClass *param_1)

{
  IOService::IOService((IOService *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface()

MaudioShDrTransitUsbInterface * __thiscall
MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface(MaudioShDrTransitUsbInterface *this)

{
  *(undefined **)this = &vtable;
  IOService::~IOService((IOService *)this);
  return this;
}



// MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface()

MaudioShDrTransitUsbInterface * __thiscall
MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface(MaudioShDrTransitUsbInterface *this)

{
  *(undefined **)this = &vtable;
  IOService::~IOService((IOService *)this);
  return this;
}



// MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface()

MaudioShDrTransitUsbInterface * __thiscall
MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface(MaudioShDrTransitUsbInterface *this)

{
  *(undefined **)this = &vtable;
  IOService::~IOService((IOService *)this);
  OSObject::operator_delete(this,0x150);
  return this;
}



// MaudioShDrTransitUsbInterface::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterface::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterface::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterface::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterface",
             (OSMetaClass *)&IOService::gMetaClass,0x150);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterface::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterface::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterface",
             (OSMetaClass *)&IOService::gMetaClass,0x150);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterface::MetaClass::alloc() const

undefined4 MaudioShDrTransitUsbInterface::MetaClass::alloc(void)

{
  return 0;
}



// MaudioShDrTransitUsbInterface::SetState(State)

void __thiscall
MaudioShDrTransitUsbInterface::SetState(MaudioShDrTransitUsbInterface *this,int param_2)

{
  int *piVar1;
  
  if (*(int *)(this + 0x140) != param_2) {
    *(int *)(this + 0x140) = param_2;
    if (param_2 == 1) {
      piVar1 = *(int **)(this + 0x13c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xa4))(piVar1,0,0);
      }
    }
    else if (param_2 == 2) {
      piVar1 = *(int **)(this + 0x13c);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x9c))(piVar1);
      }
      *(undefined4 *)(this + 0xd0) = 0;
    }
  }
  return;
}



// MaudioShDrTransitUsbInterface::CollectPeakValues(bool)

void __thiscall
MaudioShDrTransitUsbInterface::CollectPeakValues(MaudioShDrTransitUsbInterface *this,bool param_1)

{
  this[0x126] = (MaudioShDrTransitUsbInterface)param_1;
  return;
}



// MaudioShDrTransitUsbInterface::ClearPeakValuesForAll()

void __thiscall
MaudioShDrTransitUsbInterface::ClearPeakValuesForAll(MaudioShDrTransitUsbInterface *this)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    *(undefined4 *)(this + 0xe4) = 0;
    this = this + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// MaudioShDrTransitUsbInterface::FreeInitStruct()

void __thiscall MaudioShDrTransitUsbInterface::FreeInitStruct(MaudioShDrTransitUsbInterface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x50);
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x50) = 0;
  }
  _memset(this + 0x50,0,0x1c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbInterface::terminate(unsigned long)

undefined1 __thiscall
MaudioShDrTransitUsbInterface::terminate(MaudioShDrTransitUsbInterface *this,ulong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  uVar2 = (*_vtable)(this,param_1);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbInterface::free()

void __thiscall MaudioShDrTransitUsbInterface::free(MaudioShDrTransitUsbInterface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x13c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x13c) = 0;
  }
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  (**(code **)(*(int *)this + 0x4a8))(this);
                    // WARNING: Could not recover jumptable at 0x000039df. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioShDrTransitUsbInterface::StopUsingEngine()

void __thiscall MaudioShDrTransitUsbInterface::StopUsingEngine(MaudioShDrTransitUsbInterface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x6c);
  *(undefined4 *)(this + 0x5c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::WaitUntilStopped()

void __thiscall MaudioShDrTransitUsbInterface::WaitUntilStopped(MaudioShDrTransitUsbInterface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x13c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa0))(piVar1,0);
  }
  return;
}



// MaudioShDrTransitUsbInterface::CalculateEngineBufferSizeInBytes(_IOAudioSampleRate, unsigned
// long, unsigned long)

void MaudioShDrTransitUsbInterface::CalculateEngineBufferSizeInBytes
               (int param_1,int param_2,int param_3,ulong param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  
  iVar1 = param_5;
  uVar3 = (uint)(param_2 + param_3) / 1000;
  uVar5 = (uint)(param_2 + param_3) % 1000;
  if ((param_5 != 0 && param_4 != 0) && (uVar3 != 0)) {
    sVar4 = (short)uVar3 * (short)param_5;
    *(short *)(param_1 + 200) = sVar4;
    *(short *)(param_1 + 0xca) = sVar4;
    if (uVar5 != 0) {
      *(short *)(param_1 + 0xca) = sVar4 + (short)param_5;
      *(short *)(param_1 + 0xc6) = (short)(1000 / (ulonglong)uVar5);
    }
    iVar2 = MaudioShDrTransitUsbEngine::CalculateBufferSizeInSampleFrames
                      ((_IOAudioSampleRate *)&param_2,param_4);
    *(int *)(param_1 + 0xbc) = iVar1 * iVar2;
  }
  return;
}



// MaudioShDrTransitUsbInterface::GetSampleRateFromInterface(unsigned long*)

int __thiscall
MaudioShDrTransitUsbInterface::GetSampleRateFromInterface
          (MaudioShDrTransitUsbInterface *this,ulong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  ushort local_1c;
  undefined2 local_1a;
  ulong *local_18;
  ulong local_10 [2];
  
  iVar2 = -0x1ffffd3e;
  if (param_1 != (ulong *)0x0) {
    *param_1 = 0;
    piVar1 = *(int **)(this + 0x6c);
    if ((((piVar1 != (int *)0x0) && (*(int *)(this + 0x50) != 0)) &&
        (iVar2 = (**(code **)(*piVar1 + 0xc4))(piVar1), iVar2 != 0)) &&
       ((*(byte *)(iVar2 + 3) & 1) != 0)) {
      local_20 = 0xa2;
      local_1f = 0x81;
      local_1e = 0x100;
      local_1a = 3;
      local_10[0] = 0;
      local_1c = (ushort)*(byte *)(iVar2 + 2);
      local_18 = local_10;
      iVar2 = (**(code **)(**(int **)(this + 0x50) + 0x4f0))(*(int **)(this + 0x50),&local_20,0);
      if (iVar2 != 0) {
        return iVar2;
      }
      *param_1 = local_10[0];
      return 0;
    }
    iVar2 = -0x1ffffd44;
  }
  return iVar2;
}



// MaudioShDrTransitUsbInterface::SetBufferSize(unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SetBufferSize(MaudioShDrTransitUsbInterface *this,ulong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xe00002c2;
  if (param_1 != 0) {
    if (*(int *)(this + 0x140) == 2) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Can\'t Interface::SetBufferSize while streaming.\n");
      _IOSleep(3);
      uVar1 = 0xe00002bc;
    }
    else {
      *(ulong *)(this + 0xc0) = param_1;
      (**(code **)(*(int *)this + 0x4f0))
                (this,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x9c),param_1,
                 *(undefined2 *)(this + 0xcc));
      SetState(this,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterface::BufferAllocate(unsigned long*, IOBufferMemoryDescriptor**,
// unsigned char**)

undefined4
MaudioShDrTransitUsbInterface::BufferAllocate
          (ulong *param_1,IOBufferMemoryDescriptor **param_2,uchar **param_3)

{
  uint uVar1;
  IOBufferMemoryDescriptor *pIVar2;
  uchar *puVar3;
  
  if ((((param_2 != (IOBufferMemoryDescriptor **)0x0) &&
       (*param_2 == (IOBufferMemoryDescriptor *)0x0)) && (param_3 != (uchar **)0x0)) &&
     (((*param_3 == (uchar *)0x0 && (param_1 != (ulong *)0x0)) && (uVar1 = *param_1, uVar1 != 0))))
  {
    *param_1 = 0;
    pIVar2 = (IOBufferMemoryDescriptor *)IOBufferMemoryDescriptor::withOptions(3,uVar1,0x1000);
    *param_2 = pIVar2;
    if (pIVar2 == (IOBufferMemoryDescriptor *)0x0) {
      return 0xe00002bd;
    }
    puVar3 = (uchar *)(**(code **)(*(int *)pIVar2 + 400))(pIVar2);
    *param_3 = puVar3;
    *param_1 = uVar1;
    return 0;
  }
  return 0xe00002c2;
}



// MaudioShDrTransitUsbInterface::BufferFree(unsigned long*, IOBufferMemoryDescriptor**, unsigned
// char**)

void MaudioShDrTransitUsbInterface::BufferFree
               (ulong *param_1,IOBufferMemoryDescriptor **param_2,uchar **param_3)

{
  IOBufferMemoryDescriptor *pIVar1;
  
  if (((param_2 != (IOBufferMemoryDescriptor **)0x0) && (param_3 != (uchar **)0x0)) &&
     (param_1 != (ulong *)0x0)) {
    pIVar1 = *param_2;
    if (pIVar1 != (IOBufferMemoryDescriptor *)0x0) {
      (**(code **)(*(int *)pIVar1 + 0x1c))(pIVar1);
      *param_2 = (IOBufferMemoryDescriptor *)0x0;
    }
    *param_3 = (uchar *)0x0;
    *param_1 = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::UsbBufferFreeDesc(MaudioShDrTransitUsbInterface::UsbBuffer*)

void MaudioShDrTransitUsbInterface::UsbBufferFreeDesc(UsbBuffer *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (UsbBuffer *)0x0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        for (; uVar2 < *(uint *)(param_1 + 0x14); uVar2 = uVar2 + 1) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar2 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x1c))(piVar1);
            *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 4) = 0;
          }
        }
      }
      (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))(*(int **)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::UsbBufferFree(MaudioShDrTransitUsbInterface::UsbBuffer*)

void MaudioShDrTransitUsbInterface::UsbBufferFree(UsbBuffer *param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)param_1 != 0)) {
    UsbBufferFreeDesc(param_1);
    (**(code **)(**(int **)param_1 + 0x1c))(*(int **)param_1);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::UsbBufferAllocateDesc(unsigned long, unsigned long,
// MaudioShDrTransitUsbInterface::UsbBuffer*)

undefined4
MaudioShDrTransitUsbInterface::UsbBufferAllocateDesc(ulong param_1,ulong param_2,UsbBuffer *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  
  if ((((param_3 == (UsbBuffer *)0x0) || (*(int *)(param_3 + 0x10) != 0)) ||
      (*(int *)(param_3 + 0xc) != 0)) || ((param_1 == 0 || (param_2 == 0)))) {
    uVar2 = 0xe00002c2;
  }
  else {
    piVar1 = (int *)IOBufferMemoryDescriptor::withOptions(3,param_1 << 2,0x1000);
    *(int **)(param_3 + 0xc) = piVar1;
    uVar2 = 0xe00002bd;
    if (piVar1 != (int *)0x0) {
      uVar3 = 0;
      iVar4 = 0;
      uVar2 = (**(code **)(*piVar1 + 400))(piVar1);
      *(undefined4 *)(param_3 + 0x10) = uVar2;
      *(ulong *)(param_3 + 0x14) = param_1;
      do {
        uVar2 = IOMemoryDescriptor::withSubRange(*(undefined4 *)param_3,iVar4,param_2,0);
        *(undefined4 *)(*(int *)(param_3 + 0x10) + uVar3 * 4) = uVar2;
        if (*(int *)(*(int *)(param_3 + 0x10) + uVar3 * 4) == 0) {
          UsbBufferFreeDesc(param_3);
          return 0xe00002bd;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + param_2;
      } while (param_1 != uVar3);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterface::UsbBufferAllocate(MaudioShDrTransitUsbInterface::FrameList const&,
// MaudioShDrTransitUsbInterface::UsbBuffer*)

int MaudioShDrTransitUsbInterface::UsbBufferAllocate(FrameList *param_1,UsbBuffer *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 == (UsbBuffer *)0x0) || (iVar4 = *(int *)param_1 * *(int *)(param_1 + 4), iVar4 == 0)
     ) {
    iVar3 = -0x1ffffd3e;
  }
  else {
    iVar3 = -0x1ffffd43;
    piVar1 = (int *)IOBufferMemoryDescriptor::withCapacity(iVar4,3,1);
    *(int **)param_2 = piVar1;
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 400))(piVar1);
      *(int *)(param_2 + 8) = iVar4;
      *(undefined4 *)(param_2 + 4) = uVar2;
      iVar3 = UsbBufferAllocateDesc(*(ulong *)param_1,*(ulong *)(param_1 + 4),param_2);
      if (iVar3 != 0) {
        UsbBufferFree(param_2);
      }
    }
  }
  return iVar3;
}



// MaudioShDrTransitUsbInterface::SampleBufferAllocate(unsigned long, _IOAudioSampleRate const&,
// MaudioShDrTransitUsbInterface::SampleBufferFree(MaudioShDrTransitUsbInterface::OldSampleBuffer*)

void __thiscall
MaudioShDrTransitUsbInterface::SampleBufferFree
          (MaudioShDrTransitUsbInterface *this,OldSampleBuffer *param_1)

{
  if ((param_1 != (OldSampleBuffer *)0x0) && (*(int *)param_1 != 0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::IsocCompletionsAllocate(unsigned long, void (*)(void*, void*, int,
// MaudioShDrTransitUsbInterface::IsocCompletionsFree(MaudioShDrTransitUsbInterface::UsbIsocCompletions*)

void MaudioShDrTransitUsbInterface::IsocCompletionsFree(UsbIsocCompletions *param_1)

{
  if (param_1 != (UsbIsocCompletions *)0x0) {
    if (*(int *)param_1 != 0) {
      _IOFree(*(int *)param_1,*(int *)(param_1 + 4) * 0xc);
      *(undefined4 *)param_1 = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::IsocFramesAllocate(unsigned long,
// MaudioShDrTransitUsbInterface::UsbIsocFrames*)

undefined4 MaudioShDrTransitUsbInterface::IsocFramesAllocate(ulong param_1,UsbIsocFrames *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 == 0) || (param_2 == (UsbIsocFrames *)0x0)) || (*(int *)param_2 != 0)) {
    uVar2 = 0xe00002c2;
  }
  else {
    iVar1 = _IOMalloc(param_1 << 4);
    *(int *)param_2 = iVar1;
    uVar2 = 0xe00002bd;
    if (iVar1 != 0) {
      uVar2 = 0;
      *(ulong *)(param_2 + 4) = param_1;
    }
  }
  return uVar2;
}



// MaudioShDrTransitUsbInterface::IsocFramesFree(MaudioShDrTransitUsbInterface::UsbIsocFrames*)

void MaudioShDrTransitUsbInterface::IsocFramesFree(UsbIsocFrames *param_1)

{
  if (param_1 != (UsbIsocFrames *)0x0) {
    if (*(int *)param_1 != 0) {
      _IOFree(*(int *)param_1,*(int *)(param_1 + 4) << 4);
      *(undefined4 *)param_1 = 0;
    }
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterface::GetInterface() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetInterface(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0x50);
}



// MaudioShDrTransitUsbInterface::SetInterface(IOUSBInterface*)

void __thiscall
MaudioShDrTransitUsbInterface::SetInterface
          (MaudioShDrTransitUsbInterface *this,IOUSBInterface *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(IOUSBInterface **)(this + 0x50) != param_1) {
    if (param_1 != (IOUSBInterface *)0x0) {
      (**(code **)(*(int *)param_1 + 0x18))(param_1);
    }
    piVar1 = *(int **)(this + 0x50);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1);
    }
    *(IOUSBInterface **)(this + 0x50) = param_1;
  }
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = (MaudioShDrTransitUsbInterface)0x0;
  *(undefined2 *)(this + 200) = 0;
  *(undefined2 *)(this + 0xca) = 0;
  *(undefined2 *)(this + 0xcc) = 0;
  *(undefined2 *)(this + 0xc6) = 0;
  return;
}



// MaudioShDrTransitUsbInterface::IsVirtual() const

bool __thiscall MaudioShDrTransitUsbInterface::IsVirtual(MaudioShDrTransitUsbInterface *this)

{
  return (ushort)(*(short *)(this + 0xd8) - 0xfeU) < 2;
}



// MaudioShDrTransitUsbInterface::IsActive() const

bool __thiscall MaudioShDrTransitUsbInterface::IsActive(MaudioShDrTransitUsbInterface *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x4d0))(this);
  bVar2 = true;
  if ((cVar1 == '\0') && (bVar2 = *(short *)(this + 0xd8) != 0, *(int *)(this + 0x6c) == 0)) {
    bVar2 = false;
  }
  return bVar2;
}



// MaudioShDrTransitUsbInterface::GetUsbFrameNumber(unsigned long long*)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetUsbFrameNumber
          (MaudioShDrTransitUsbInterface *this,ulonglong *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar1 = 0xe00002c2;
  if (param_1 != (ulonglong *)0x0) {
    piVar2 = *(int **)(this + 0x50);
    if (((piVar2 != (int *)0x0) &&
        (piVar2 = (int *)(**(code **)(*piVar2 + 0x4d0))(piVar2), piVar2 != (int *)0x0)) &&
       (piVar2 = (int *)(**(code **)(*piVar2 + 0x4e8))(piVar2), piVar2 != (int *)0x0)) {
      uVar3 = (**(code **)(*piVar2 + 0x548))(piVar2);
      *param_1 = uVar3;
      return 0;
    }
    uVar1 = 0xe00002bc;
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterface::ActivateExternalSampleRateController(ExternalSampleRateController)

void __thiscall
MaudioShDrTransitUsbInterface::ActivateExternalSampleRateController
          (MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb4) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::SetAlternateInterface(unsigned long)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SetAlternateInterface
          (MaudioShDrTransitUsbInterface *this,ulong param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(this + 0x6c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x6c) = 0;
  }
  piVar1 = *(int **)(this + 0x50);
  if ((piVar1 != (int *)0x0) &&
     (cVar2 = (**(code **)(*piVar1 + 0x2d4))(piVar1,this,0,0), cVar2 != '\0')) {
    uVar3 = (**(code **)(**(int **)(this + 0x50) + 0x4c4))
                      (*(int **)(this + 0x50),this,param_1 & 0xffff);
    (**(code **)(**(int **)(this + 0x50) + 0x2d8))(*(int **)(this + 0x50),this,0);
    return uVar3;
  }
  return 0xe00002bc;
}



// MaudioShDrTransitUsbInterface::GetSampleFrameCount(unsigned long*) const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetSampleFrameCount
          (MaudioShDrTransitUsbInterface *this,ulong *param_1)

{
  char cVar1;
  
  if ((param_1 != (ulong *)0x0) &&
     (cVar1 = (**(code **)(*(int *)this + 0x4d4))(this), cVar1 != '\0')) {
    *param_1 = *(ulong *)(this + 0x148);
    return 1;
  }
  return 0;
}



// MaudioShDrTransitUsbInterface::InitSampleFrameCount(unsigned long long)

void MaudioShDrTransitUsbInterface::InitSampleFrameCount(ulonglong param_1)

{
  *(undefined4 *)((int)param_1 + 0x148) = 0;
  *(undefined4 *)((int)param_1 + 0x14c) = 0;
  return;
}



// MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes(unsigned long)

uint __thiscall
MaudioShDrTransitUsbInterface::IncrementSampleFrameCountUsingBytes
          (MaudioShDrTransitUsbInterface *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(ushort *)(this + 0xcc);
  if ((*(ushort *)(this + 0xcc) != 0) && (*(int *)(this + 0x138) != 0)) {
    uVar2 = param_1 / uVar1 + *(int *)(this + 0x148);
    uVar1 = uVar2 / *(uint *)(this + 0x138);
    *(uint *)(this + 0x148) = uVar2 % *(uint *)(this + 0x138);
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterface::BufferWrapped(UnsignedWide, unsigned long, unsigned long)

void MaudioShDrTransitUsbInterface::BufferWrapped
               (int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  uint local_14;
  int local_10;
  
  *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + 1;
  if (param_5 != 0 && param_4 != 0) {
    _nanoseconds_to_absolutetime((uint)(param_4 * 1000000) / param_5,0,&local_14);
    bVar1 = param_2 < local_14;
    param_2 = param_2 - local_14;
    param_3 = (param_3 - local_10) - (uint)bVar1;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    MaudioShDrTransitUsbEngine::TakeTimeStamp
              (*(int *)(param_1 + 0x5c),param_2,param_3,*(undefined4 *)(param_1 + 0x14c),
               *(int *)(param_1 + 0xb0) == 1);
  }
  return;
}



// MaudioShDrTransitUsbInterface::StartTimerCallback(IOUSBLowLatencyIsocFrame*, unsigned long long)

void MaudioShDrTransitUsbInterface::StartTimerCallback
               (IOUSBLowLatencyIsocFrame *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  uint in_stack_00000010;
  uint local_24;
  uint local_20;
  
  iVar2 = GetUsbFrameNumber((MaudioShDrTransitUsbInterface *)param_1,(ulonglong *)&local_24);
  if (iVar2 == 0) {
    if ((local_20 <= in_stack_00000010) &&
       ((in_stack_00000010 != local_20 || (local_24 < param_2._4_4_)))) {
      uVar3 = param_2._4_4_ - local_24;
      goto LAB_000044b1;
    }
  }
  uVar3 = 0;
LAB_000044b1:
  *(undefined4 *)(param_1 + 0x130) = 0x3c;
  *(int *)(param_1 + 0x134) = (int)param_2;
  *(undefined4 *)((int)param_2 + 0xc) = 0xffffffff;
  if (*(int *)(param_1 + 0x5c) != 0) {
    (**(code **)(*(int *)param_1 + 0x18))(param_1);
    cVar1 = MaudioShDrTransitUsbEngine::SetStartTimerCallback
                      (*(MaudioShDrTransitUsbEngine **)(param_1 + 0x5c),StartTimerCallbackProc,
                       (OSObject *)param_1,*(int *)(param_1 + 0xb0) == 1,uVar3);
    if (cVar1 == '\0') {
      (**(code **)(*(int *)param_1 + 0x1c))(param_1);
    }
  }
  return;
}



// MaudioShDrTransitUsbInterface::TakeFirstTimeStamp(UnsignedWide)

void MaudioShDrTransitUsbInterface::TakeFirstTimeStamp(int param_1,uint param_2,int param_3)

{
  uint local_14;
  int local_10;
  
  _nanoseconds_to_absolutetime(1000000,0,&local_14);
  if (*(int *)(param_1 + 0x5c) != 0) {
    MaudioShDrTransitUsbEngine::TakeTimeStamp
              (*(int *)(param_1 + 0x5c),param_2 - local_14,
               (param_3 - local_10) - (uint)(param_2 < local_14),0,*(int *)(param_1 + 0xb0) == 1);
  }
  return;
}



// MaudioShDrTransitUsbInterface::StartTimerCallbackProc(OSObject*)

undefined4 MaudioShDrTransitUsbInterface::StartTimerCallbackProc(OSObject *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar2 = (int *)OSMetaClassBase::safeMetaCast
                            ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[0x4d];
    if ((iVar1 != 0) && (piVar2[0x17] != 0)) {
      if (*(int *)(iVar1 + 0xc) == -1) {
        iVar1 = piVar2[0x4c];
        piVar2[0x4c] = iVar1 + -1;
        if (0 < iVar1) {
          return 0x32;
        }
        _clock_get_uptime(&local_14);
        MaudioShDrTransitUsbEngine::TakeTimeStamp
                  (piVar2[0x17],local_14,local_10,0,piVar2[0x2c] == 1);
      }
      else {
        TakeFirstTimeStamp(piVar2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      }
    }
    (**(code **)(*piVar2 + 0x1c))(piVar2);
  }
  return 0;
}



// MaudioShDrTransitUsbInterface::ApplyGainSettings(bool)

void __thiscall
MaudioShDrTransitUsbInterface::ApplyGainSettings(MaudioShDrTransitUsbInterface *this,bool param_1)

{
  if (this[0x125] != (MaudioShDrTransitUsbInterface)param_1) {
    this[0x125] = (MaudioShDrTransitUsbInterface)param_1;
  }
  return;
}



// MaudioShDrTransitUsbInterface::SetGainDbToLinearIndexForAll(unsigned short)

void __thiscall
MaudioShDrTransitUsbInterface::SetGainDbToLinearIndexForAll
          (MaudioShDrTransitUsbInterface *this,ushort param_1)

{
  int iVar1;
  
  if (param_1 < 0x81) {
    iVar1 = 8;
    do {
      *(ushort *)(this + 0xe2) = param_1;
      this = this + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



// MaudioShDrTransitUsbInterface::ApplyIsMuteSettings(bool)

void __thiscall
MaudioShDrTransitUsbInterface::ApplyIsMuteSettings(MaudioShDrTransitUsbInterface *this,bool param_1)

{
  this[0x124] = (MaudioShDrTransitUsbInterface)param_1;
  return;
}



// MaudioShDrTransitUsbInterface::SetIsMute(unsigned char, bool)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SetIsMute
          (MaudioShDrTransitUsbInterface *this,uchar param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xe00002c2;
  if (param_1 < 8 && param_1 < (byte)this[0x70]) {
    uVar1 = 0;
    this[(uint)param_1 * 8 + 0xe0] = (MaudioShDrTransitUsbInterface)param_2;
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterface::SetIsMuteForAll(bool)

void __thiscall
MaudioShDrTransitUsbInterface::SetIsMuteForAll(MaudioShDrTransitUsbInterface *this,bool param_1)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    this[0xe0] = (MaudioShDrTransitUsbInterface)param_1;
    this = this + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterface::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterface::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterface::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterface::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterface::PostFinalizeBuffersSetFormat(AudioStreamFormat const*)

undefined4 MaudioShDrTransitUsbInterface::PostFinalizeBuffersSetFormat(AudioStreamFormat *param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x140) != 2) {
    uVar1 = (**(code **)(*(int *)param_1 + 0x4c0))(param_1);
    *(uint *)(param_1 + 0x138) = uVar1 / *(ushort *)(param_1 + 0xcc);
  }
  return 0;
}



// MaudioShDrTransitUsbInterface::SetSampleRate(_IOAudioSampleRate const*)

int __thiscall
MaudioShDrTransitUsbInterface::SetSampleRate
          (MaudioShDrTransitUsbInterface *this,_IOAudioSampleRate *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_40;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  ushort local_2c;
  undefined2 local_2a;
  uint *local_28;
  uint local_20 [4];
  
  local_40 = -0x1ffffd3e;
  if (param_1 != (_IOAudioSampleRate *)0x0) {
    if (*(int *)(this + 0x140) == 2) {
      _IOLog("%s: ","M-Audio Transit USB");
      _IOLog("Can\'t Interface::SetSampleRate while streaming.\n");
      _IOSleep(3);
    }
    else {
      piVar1 = *(int **)(this + 0x6c);
      uVar6 = *(int *)param_1 + *(int *)(param_1 + 4);
      if ((((piVar1 != (int *)0x0) && (*(int *)(this + 0x50) != 0)) &&
          (iVar4 = (**(code **)(*piVar1 + 0xc4))(piVar1), iVar4 != 0)) &&
         ((*(byte *)(iVar4 + 3) & 1) != 0)) {
        local_30 = 0x22;
        local_2f = 1;
        local_2e = 0x100;
        local_2a = 3;
        local_2c = (ushort)*(byte *)(iVar4 + 2);
        local_28 = local_20;
        local_20[0] = uVar6;
        iVar4 = (**(code **)(**(int **)(this + 0x50) + 0x4f0))(*(int **)(this + 0x50),&local_30,0);
        if (iVar4 != 0) {
          return iVar4;
        }
        uVar2 = *(undefined4 *)param_1;
        uVar3 = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(this + 0x98) = uVar2;
        *(undefined4 *)(this + 0x9c) = uVar3;
        uVar5 = *(int *)(this + 0x98) + *(int *)(this + 0x9c);
        *(uint *)(this + 0xa0) = uVar5;
        *(uint *)(this + 0xa4) = uVar5 / 1000;
        *(uint *)(this + 0xa8) = (uVar5 / 1000) * 1000;
        *(uint *)(this + 0xac) = uVar5 % 1000;
        this[0xc4] = (MaudioShDrTransitUsbInterface)(uVar6 != (uVar6 / 1000) * 1000);
        (**(code **)(*(int *)this + 0x4f0))
                  (this,uVar2,uVar3,*(undefined4 *)(this + 0xc0),*(undefined2 *)(this + 0xcc));
        SetState(this,0);
        return 0;
      }
    }
    local_40 = -0x1ffffd44;
  }
  return local_40;
}



// MaudioShDrTransitUsbInterface::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterface::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterface::SetGainDbToLinearIndex(ChannelId, unsigned short)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SetGainDbToLinearIndex
          (MaudioShDrTransitUsbInterface *this,int param_2,short param_3)

{
  MaudioShDrTransitUsbInterface MVar1;
  int iVar2;
  
  if (param_3 != 0x40) {
    iVar2 = *(int *)this;
  }
  else {
    iVar2 = *(int *)this;
  }
  (**(code **)(iVar2 + 0x4f4))(this,param_3 != 0x40);
  if (param_2 == 0) {
    (**(code **)(*(int *)this + 0x4fc))(this,param_3);
  }
  else {
    if ((param_2 < 0) || (6 < param_2)) {
      return 0xe00002bc;
    }
    MVar1 = SUB41(param_2 - 1U,0);
    if (7 < (byte)MVar1 || (byte)this[0x70] <= (byte)MVar1) {
      return 0xe00002c2;
    }
    *(short *)(this + (param_2 - 1U & 0xff) * 8 + 0xe2) = param_3;
  }
  return 0;
}



// MaudioShDrTransitUsbInterface::InitInDriverStruct(unsigned long)

void __thiscall
MaudioShDrTransitUsbInterface::InitInDriverStruct(MaudioShDrTransitUsbInterface *this,ulong param_1)

{
  ulong uVar1;
  MaudioShDrTransitUsbInterface *pMVar2;
  int iVar3;
  
  _memset(this + 0xe0,0,0x48);
  uVar1 = 8;
  if (param_1 < 9) {
    uVar1 = param_1;
  }
  iVar3 = 8;
  *(ulong *)(this + 0x120) = uVar1;
  this[0x126] = (MaudioShDrTransitUsbInterface)0x0;
  pMVar2 = this;
  do {
    *(undefined4 *)(pMVar2 + 0xe4) = 0;
    pMVar2 = pMVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(*(int *)this + 0x4f4))(this,0);
  (**(code **)(*(int *)this + 0x4fc))(this,0x40);
  (**(code **)(*(int *)this + 0x500))(this,0);
                    // WARNING: Could not recover jumptable at 0x00004ad4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x508))();
  return;
}



// MaudioShDrTransitUsbInterface::SetFormat(AudioStreamFormat const*)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SetFormat
          (MaudioShDrTransitUsbInterface *this,AudioStreamFormat *param_1)

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
      InitInDriverStruct(this,*(ulong *)param_1);
      SetState(this,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioShDrTransitUsbInterface::initWithStruct(MaudioShDrTransitUsbInterface::InitStruct const&)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::initWithStruct
          (MaudioShDrTransitUsbInterface *this,InitStruct *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  this[0xc4] = (MaudioShDrTransitUsbInterface)0x0;
  *(undefined2 *)(this + 0xc6) = 0;
  *(undefined2 *)(this + 200) = 0;
  *(undefined2 *)(this + 0xca) = 0;
  *(undefined2 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined2 *)(this + 0xd4) = 0;
  *(undefined2 *)(this + 0xd6) = 0;
  *(undefined2 *)(this + 0xd8) = 0;
  this[0xda] = (MaudioShDrTransitUsbInterface)0x2;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0xffffffff;
  this[0xdb] = (MaudioShDrTransitUsbInterface)0x0;
  this[0xdc] = (MaudioShDrTransitUsbInterface)0x0;
  _memset(this + 0x148,0,8);
  _memset(this + 0x50,0,0x1c);
  InitInDriverStruct(this,0);
  *(undefined4 *)(this + 0xb4) = 0;
  if ((((*(int *)param_1 != 0) && (*(uint *)(param_1 + 4) < 2)) && (*(int *)(param_1 + 8) != 0)) &&
     (((*(int *)(param_1 + 0xc) != 0 && (*(int *)(param_1 + 0x10) != 0)) &&
      (*(int *)(param_1 + 0x14) != 0)))) {
    piVar1 = *(int **)param_1;
    *(int **)(this + 0x50) = piVar1;
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x18);
    (**(code **)(*piVar1 + 0x18))(piVar1);
    (**(code **)(*(int *)this + 0x4c8))(this,*(undefined4 *)(this + 0x50));
    cVar2 = (*_vtable)(this,0);
    if (cVar2 != '\0') {
      uVar4 = 1;
      iVar3 = IOSyncer::create(false);
      *(int *)(this + 0x13c) = iVar3;
      if (iVar3 != 0) goto LAB_00004d9f;
    }
  }
  uVar4 = 0;
LAB_00004d9f:
  SetState(this,0);
  return uVar4;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



// MaudioShDrTransitUsbInterface::GetDirection() const

undefined4 __thiscall
MaudioShDrTransitUsbInterface::GetDirection(MaudioShDrTransitUsbInterface *this)

{
  return *(undefined4 *)(this + 0xb0);
}



// MaudioShDrTransitUsbInterface::SetDirection(_IOAudioStreamDirection)

void __thiscall
MaudioShDrTransitUsbInterface::SetDirection(MaudioShDrTransitUsbInterface *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xb0) = param_2;
  return;
}



#include "kext_defs.h"

// AudioStreamFormat const&, MaudioShDrTransitUsbInterface::OldSampleBuffer*)

undefined4 __thiscall
MaudioShDrTransitUsbInterface::SampleBufferAllocate
          (MaudioShDrTransitUsbInterface *this,ulong param_1,_IOAudioSampleRate *param_2,
          AudioStreamFormat *param_3,OldSampleBuffer *param_4)

{
  AudioStreamFormat AVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((((uint)(*(int *)param_2 + *(int *)(param_2 + 4)) < 1000 || param_1 == 0) ||
       (*(int *)param_3 == 0)) ||
      (param_4 == (OldSampleBuffer *)0x0 || param_3[0xc] == (AudioStreamFormat)0x0)) ||
     ((*(int *)param_4 != 0 || (*(int *)(param_4 + 4) != 0)))) {
    uVar5 = 0xe00002c2;
  }
  else {
    iVar4 = MaudioShDrTransitUsbEngine::CalculateBufferSizeInSampleFrames(param_2,param_1);
    AVar1 = param_3[0xd];
    iVar2 = *(int *)param_3;
    iVar3 = *(int *)(this + 0x60);
    *(int *)param_4 = iVar3;
    uVar5 = 0xe00002bd;
    if (iVar3 != 0) {
      uVar5 = 0;
      *(uint *)(param_4 + 4) = iVar4 * (uint)((byte)AVar1 >> 3) * iVar2;
    }
  }
  return uVar5;
}



#include "kext_defs.h"

// IOUSBLowLatencyIsocFrame*), void*, MaudioShDrTransitUsbInterface::UsbIsocCompletions*)

undefined4
MaudioShDrTransitUsbInterface::IsocCompletionsAllocate
          (ulong param_1,_func_void_void_ptr_void_ptr_int_IOUSBLowLatencyIsocFrame_ptr *param_2,
          void *param_3,UsbIsocCompletions *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (((param_1 == 0) || (param_4 == (UsbIsocCompletions *)0x0)) || (*(int *)param_4 != 0)) {
    uVar4 = 0xe00002c2;
  }
  else {
    iVar1 = _IOMalloc(param_1 * 0xc);
    *(int *)param_4 = iVar1;
    uVar4 = 0xe00002bd;
    if (iVar1 != 0) {
      uVar3 = 0;
      *(ulong *)(param_4 + 4) = param_1;
      iVar1 = 0;
      do {
        puVar2 = (undefined4 *)(iVar1 + *(int *)param_4);
        puVar2[2] = uVar3;
        uVar3 = uVar3 + 1;
        *puVar2 = param_3;
        puVar2[1] = param_2;
        iVar1 = iVar1 + 0xc;
      } while (param_1 != uVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}



