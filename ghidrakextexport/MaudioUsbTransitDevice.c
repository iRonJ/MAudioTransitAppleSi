#include "kext_defs.h"

// MaudioUsbTransitDevice::MaudioUsbTransitDevice(OSMetaClass const*)

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::MaudioUsbTransitDevice(MaudioUsbTransitDevice *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbDevice::MaudioShDrTransitUsbDevice((MaudioShDrTransitUsbDevice *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitDevice::MaudioUsbTransitDevice(OSMetaClass const*)

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::MaudioUsbTransitDevice(MaudioUsbTransitDevice *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbDevice::MaudioShDrTransitUsbDevice((MaudioShDrTransitUsbDevice *)this,param_1)
  ;
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitDevice::~MaudioUsbTransitDevice()

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::~MaudioUsbTransitDevice(MaudioUsbTransitDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDevice::~MaudioShDrTransitUsbDevice((MaudioShDrTransitUsbDevice *)this);
  return this;
}



// MaudioUsbTransitDevice::~MaudioUsbTransitDevice()

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::~MaudioUsbTransitDevice(MaudioUsbTransitDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDevice::~MaudioShDrTransitUsbDevice((MaudioShDrTransitUsbDevice *)this);
  return this;
}



// MaudioUsbTransitDevice::~MaudioUsbTransitDevice()

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::~MaudioUsbTransitDevice(MaudioUsbTransitDevice *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbDevice::~MaudioShDrTransitUsbDevice((MaudioShDrTransitUsbDevice *)this);
  OSObject::operator_delete(this,0x100);
  return this;
}



// MaudioUsbTransitDevice::getMetaClass() const

undefined1 * MaudioUsbTransitDevice::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioUsbTransitDevice::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitDevice::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitDevice",
             (OSMetaClass *)&MaudioShDrTransitUsbDevice::gMetaClass,0x100);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitDevice::MetaClass::MetaClass()

MetaClass * __thiscall MaudioUsbTransitDevice::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioUsbTransitDevice",
             (OSMetaClass *)&MaudioShDrTransitUsbDevice::gMetaClass,0x100);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioUsbTransitDevice::MaudioUsbTransitDevice()

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::MaudioUsbTransitDevice(MaudioUsbTransitDevice *this)

{
  MaudioShDrTransitUsbDevice::MaudioShDrTransitUsbDevice
            ((MaudioShDrTransitUsbDevice *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitDevice::MetaClass::alloc() const

MaudioUsbTransitDevice * MaudioUsbTransitDevice::MetaClass::alloc(void)

{
  MaudioUsbTransitDevice *this;
  MaudioUsbTransitDevice *pMVar1;
  ulong in_stack_ffffffe8;
  
  this = OSObject::operator_new((OSObject *)0x100,in_stack_ffffffe8);
  pMVar1 = (MaudioUsbTransitDevice *)0x0;
  if (this != (MaudioUsbTransitDevice *)0x0) {
    MaudioUsbTransitDevice(this);
    pMVar1 = this;
  }
  return pMVar1;
}



// MaudioUsbTransitDevice::MaudioUsbTransitDevice()

MaudioUsbTransitDevice * __thiscall
MaudioUsbTransitDevice::MaudioUsbTransitDevice(MaudioUsbTransitDevice *this)

{
  MaudioShDrTransitUsbDevice::MaudioShDrTransitUsbDevice
            ((MaudioShDrTransitUsbDevice *)this,(OSMetaClass *)&gMetaClass);
  *(undefined **)this = &vtable;
  OSMetaClass::instanceConstructed();
  return this;
}



// MaudioUsbTransitDevice::init(OSDictionary*)

undefined4 __thiscall
MaudioUsbTransitDevice::init(MaudioUsbTransitDevice *this,OSDictionary *param_1)

{
  char cVar1;
  
  *(undefined4 *)(this + 0xb8) = 0;
  if ((param_1 != (OSDictionary *)0x0) &&
     (cVar1 = MaudioShDrTransitUsbDevice::init((MaudioShDrTransitUsbDevice *)this,param_1),
     cVar1 != '\0')) {
    *(OSDictionary **)(this + 0xb8) = param_1;
    (**(code **)(*(int *)this + 0x128))(this,"DriverVersion","1.8");
    (**(code **)(*(int *)this + 0x4a4))(this,0x75736220);
    return 1;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// MaudioUsbTransitDevice::free()

void __thiscall MaudioUsbTransitDevice::free(MaudioUsbTransitDevice *this)

{
  int *piVar1;
  
  MaudioShDrTransitUsbDevice::SignalDeviceError((MaudioShDrTransitUsbDevice *)this,0xe00002c0);
  piVar1 = *(int **)(this + 0xb4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb4))(piVar1);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    _IORecursiveLockFree(*(int *)(this + 0x94));
    *(undefined4 *)(this + 0x94) = 0;
  }
  piVar1 = *(int **)(this + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
    *(undefined4 *)(this + 0x90) = 0;
  }
                    // WARNING: Could not recover jumptable at 0x0000bd09. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_vtable)();
  return;
}



// MaudioUsbTransitDevice::start(IOService*)

undefined4 __thiscall MaudioUsbTransitDevice::start(MaudioUsbTransitDevice *this,IOService *param_1)

{
  char cVar1;
  
  (**(code **)(*(int *)this + 0x128))(this,"MAudioDriverType","Primary");
  (**(code **)(*(int *)this + 0x4a4))(this,0x75736220);
  cVar1 = MaudioShDrTransitUsbDevice::start((MaudioShDrTransitUsbDevice *)this,param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = MaudioShDrTransitUsbDevice::IsRealMaudioDevice
                        ((MaudioShDrTransitUsbDevice *)this,0x763,0x2006), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// MaudioUsbTransitDevice::stop(IOService*)

void MaudioUsbTransitDevice::stop(IOService *param_1)

{
  IOAudioDevice::stop(param_1);
  return;
}



// MaudioUsbTransitDevice::setProperties(OSObject*)

undefined4 __thiscall
MaudioUsbTransitDevice::setProperties(MaudioUsbTransitDevice *this,OSObject *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_1 == (OSObject *)0x0) {
    return 0xe00002c2;
  }
  piVar1 = (int *)OSMetaClassBase::safeMetaCast((OSMetaClassBase *)param_1,OSDictionary::metaClass);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x10c))(piVar1,"MessageId"), iVar2 != 0)) {
    piVar3 = (int *)(**(code **)(*(int *)this + 0x534))(this);
    if (piVar3 == (int *)0x0) {
      return 0xe00002c2;
    }
    uVar4 = (**(code **)(*piVar3 + 0xec))(piVar3,0x41e,piVar1,0,0,0);
    return uVar4;
  }
  uVar4 = IORegistryEntry::setProperties((OSObject *)this);
  return uVar4;
}



// MaudioUsbTransitDevice::ProcessMessageAction(OSObject*, void*, void*, void*, void*)

undefined4
MaudioUsbTransitDevice::ProcessMessageAction
          (OSObject *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 != (OSObject *)0x0) {
    piVar1 = (int *)OSMetaClassBase::safeMetaCast
                              ((OSMetaClassBase *)param_1,(OSMetaClass *)&gMetaClass);
    if (piVar1 != (int *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00000459. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)(*piVar1 + 0x618))();
      return uVar2;
    }
  }
  return 0xe00002c2;
}



// MaudioUsbTransitDevice::ProcessMessage(OSDictionary*)

undefined4 __thiscall
MaudioUsbTransitDevice::ProcessMessage(MaudioUsbTransitDevice *this,OSDictionary *param_1)

{
  OSMetaClassBase *pOVar1;
  int *piVar2;
  
  pOVar1 = (OSMetaClassBase *)(**(code **)(*(int *)param_1 + 0x10c))(param_1,"MessageId");
  if (pOVar1 != (OSMetaClassBase *)0x0) {
    piVar2 = (int *)OSMetaClassBase::safeMetaCast(pOVar1,OSNumber::metaClass);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xac))(piVar2);
    }
  }
  return 0xe00002bc;
}



// MaudioUsbTransitDevice::CreateControls(MaudioUsbTransitEngine*)

undefined4 __thiscall
MaudioUsbTransitDevice::CreateControls(MaudioUsbTransitDevice *this,MaudioUsbTransitEngine *param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  MaudioUsbTransitDevice *local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  code *local_54;
  MaudioUsbTransitDevice *local_50;
  undefined *local_4c;
  undefined *local_48;
  undefined *local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  
  iVar2 = OSArray::withCapacity(7);
  *(int *)(this + 0xb4) = iVar2;
  if (iVar2 != 0) {
    ppuVar4 = (undefined **)&MaudioShDrTransitUsbDevice::kVolumeControls;
    do {
      _memset((ControlInit *)&local_60,0,0x44);
      puVar1 = ppuVar4[1];
      local_5c = 0;
      local_60 = this;
      local_50 = this;
      local_4c = *ppuVar4;
      local_5b = 2;
      local_54 = MaudioShDrTransitUsbDevice::DeviceRequest;
      local_44 = ppuVar4[2];
      local_40 = ppuVar4[3];
      local_3c = ppuVar4[4];
      local_38 = ppuVar4[5];
      local_34 = ppuVar4[6];
      local_30 = ppuVar4[7];
      local_2c = ppuVar4[10];
      local_28 = ppuVar4[0xb];
      local_24 = ppuVar4[0xc];
      local_20 = ppuVar4[0xd];
      local_48 = puVar1;
      piVar3 = (int *)MaudioShDrTransitUsbLevelControl::Create((ControlInit *)&local_60);
      if (piVar3 != (int *)0x0) {
        if (puVar1 == (undefined *)0x0) {
          (**(code **)(*(int *)param_1 + 0x608))(param_1,piVar3);
        }
        (**(code **)(**(int **)(this + 0xb4) + 0xe4))(*(int **)(this + 0xb4),piVar3);
        (**(code **)(*piVar3 + 0x1c))(piVar3);
      }
      ppuVar4 = ppuVar4 + 0xe;
    } while (ppuVar4 != &_kKeyNameMessageId);
    puVar5 = &MaudioShDrTransitUsbDevice::kMuteControls;
    do {
      _memset((ControlInit *)&local_60,0,0x34);
      puVar1 = (undefined *)puVar5[1];
      local_5c = 0;
      local_60 = this;
      local_50 = this;
      local_4c = (undefined *)*puVar5;
      local_5b = 1;
      local_54 = MaudioShDrTransitUsbDevice::DeviceRequest;
      local_44 = (undefined *)puVar5[2];
      local_40 = (undefined *)puVar5[3];
      local_3c = (undefined *)puVar5[4];
      local_38 = (undefined *)puVar5[5];
      local_34 = (undefined *)puVar5[6];
      local_30 = (undefined *)puVar5[7];
      local_48 = puVar1;
      piVar3 = (int *)MaudioShDrTransitUsbMuteControl::Create((ControlInit *)&local_60);
      if (piVar3 != (int *)0x0) {
        if (puVar1 == (undefined *)0x0) {
          (**(code **)(*(int *)param_1 + 0x608))(param_1,piVar3);
        }
        (**(code **)(**(int **)(this + 0xb4) + 0xe4))(*(int **)(this + 0xb4),piVar3);
        (**(code **)(*piVar3 + 0x1c))(piVar3);
      }
      puVar5 = puVar5 + 9;
    } while (puVar5 != (undefined4 *)&MaudioShDrTransitUsbDevice::kVolumeControlCount);
  }
  return 0;
}



// MaudioUsbTransitDevice::CreateAudioEngines()

undefined4 __thiscall MaudioUsbTransitDevice::CreateAudioEngines(MaudioUsbTransitDevice *this)

{
  char cVar1;
  MaudioUsbTransitEngine *this_00;
  undefined4 uVar2;
  ulong in_stack_ffffffd8;
  
  if ((*(int *)(this + 0xb8) != 0) &&
     (this_00 = OSObject::operator_new((OSObject *)0x108,in_stack_ffffffd8),
     this_00 != (MaudioUsbTransitEngine *)0x0)) {
    uVar2 = 0xe00002bc;
    MaudioUsbTransitEngine::MaudioUsbTransitEngine(this_00);
    cVar1 = (**(code **)(*(int *)this_00 + 0x718))(this_00,*(undefined4 *)(this + 0xb8),this + 0xe4)
    ;
    if (cVar1 != '\0') {
      CreateControls(this,this_00);
      uVar2 = (**(code **)(*(int *)this + 0x53c))(this,this_00,1);
    }
    (**(code **)(*(int *)this_00 + 0x1c))(this_00);
    return uVar2;
  }
  return 0xe00002bc;
}



// MaudioUsbTransitDevice::SetPrefVolume(unsigned short, short)

undefined4 __thiscall
MaudioUsbTransitDevice::SetPrefVolume(MaudioUsbTransitDevice *this,ushort param_1,short param_2)

{
  if (param_1 == 5) {
    *(short *)(this + 0xf8) = param_2;
  }
  else {
    if (3 < param_1) {
      return 0xe00002c2;
    }
    *(short *)(this + (uint)param_1 * 2 + 0xea) = param_2;
  }
  return 0;
}



// MaudioUsbTransitDevice::UpdatePrefIsLinkedFromUsb(unsigned short)

undefined4 __thiscall
MaudioUsbTransitDevice::UpdatePrefIsLinkedFromUsb(MaudioUsbTransitDevice *this,ushort param_1)

{
  uint uVar1;
  
  if (param_1 != 5) {
    if (1 < (param_1 & 1)) {
      return 0xe00002c2;
    }
    uVar1 = (uint)(param_1 & 1);
    if (*(short *)(this + uVar1 * 2 + 0xea) != *(short *)(this + uVar1 * 2 + 0xee)) {
      this[uVar1 + 0xf6] = (MaudioUsbTransitDevice)0x0;
    }
  }
  return 0;
}



// MaudioUsbTransitDevice::SetPrefMute(unsigned short, bool)

undefined4 __thiscall
MaudioUsbTransitDevice::SetPrefMute(MaudioUsbTransitDevice *this,ushort param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xe00002c2;
  if (param_1 < 2) {
    this[param_1 + 0xf4] = (MaudioUsbTransitDevice)param_2;
    uVar1 = 0;
  }
  return uVar1;
}



// MaudioUsbTransitDevice::SetFeatureConfiguration(PreferenceData*)

bool __thiscall
MaudioUsbTransitDevice::SetFeatureConfiguration
          (MaudioUsbTransitDevice *this,PreferenceData *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = true;
  if (param_1 != (PreferenceData *)0x0) {
    iVar2 = (**(code **)(*(int *)this + 0x608))(this,5,param_1[0x10] != (PreferenceData)0x0,1);
    iVar3 = (**(code **)(*(int *)this + 0x5f0))(this,3,(int)*(short *)(param_1 + 6),1);
    iVar4 = (**(code **)(*(int *)this + 0x5f0))(this,4,(int)*(short *)(param_1 + 10),1);
    iVar5 = (**(code **)(*(int *)this + 0x5f0))(this,6,(int)*(short *)(param_1 + 0x14),1);
    iVar6 = (**(code **)(*(int *)this + 0x608))(this,2,param_1[0x11] != (PreferenceData)0x0,1);
    iVar7 = (**(code **)(*(int *)this + 0x5f0))(this,0,(int)*(short *)(param_1 + 8),1);
    iVar8 = (**(code **)(*(int *)this + 0x5f0))(this,1,(int)*(short *)(param_1 + 0xc),1);
    bVar1 = iVar8 == 0 &&
            (iVar7 == 0 &&
            (iVar6 == 0 && (iVar5 == 0 && (iVar4 == 0 && (iVar3 == 0 && iVar2 == 0)))));
  }
  return bVar1;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioUsbTransitDevice::MetaClass::MetaClass((MetaClass *)&MaudioUsbTransitDevice::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioUsbTransitDevice::MetaClass::~MetaClass((MetaClass *)&MaudioUsbTransitDevice::gMetaClass);
  }
  return;
}



// MaudioUsbTransitDevice::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitDevice::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioUsbTransitDevice::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioUsbTransitDevice::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



