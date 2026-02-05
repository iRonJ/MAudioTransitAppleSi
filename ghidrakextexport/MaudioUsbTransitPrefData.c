#include "kext_defs.h"

// MaudioUsbTransitPrefData::MaudioUsbTransitPrefData()

MaudioUsbTransitPrefData * __thiscall
MaudioUsbTransitPrefData::MaudioUsbTransitPrefData(MaudioUsbTransitPrefData *this)

{
  MaudioShDrTransitUsbPrefData::MaudioShDrTransitUsbPrefData((MaudioShDrTransitUsbPrefData *)this);
  *(undefined **)this = &vtable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}



// MaudioUsbTransitPrefData::MaudioUsbTransitPrefData()

MaudioUsbTransitPrefData * __thiscall
MaudioUsbTransitPrefData::MaudioUsbTransitPrefData(MaudioUsbTransitPrefData *this)

{
  MaudioShDrTransitUsbPrefData::MaudioShDrTransitUsbPrefData((MaudioShDrTransitUsbPrefData *)this);
  *(undefined **)this = &vtable;
  *(undefined4 *)(this + 8) = 0;
  return this;
}



// MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData()

MaudioUsbTransitPrefData * __thiscall
MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData(MaudioUsbTransitPrefData *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbPrefData::~MaudioShDrTransitUsbPrefData((MaudioShDrTransitUsbPrefData *)this);
  return this;
}



// MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData()

MaudioUsbTransitPrefData * __thiscall
MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData(MaudioUsbTransitPrefData *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbPrefData::~MaudioShDrTransitUsbPrefData((MaudioShDrTransitUsbPrefData *)this);
  return this;
}



// MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData()

MaudioUsbTransitPrefData * __thiscall
MaudioUsbTransitPrefData::~MaudioUsbTransitPrefData(MaudioUsbTransitPrefData *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbPrefData::~MaudioShDrTransitUsbPrefData((MaudioShDrTransitUsbPrefData *)this);
  operator_delete(this);
  return this;
}



// MaudioUsbTransitPrefData::GetPreferenceDataPtr() const

undefined4 __thiscall MaudioUsbTransitPrefData::GetPreferenceDataPtr(MaudioUsbTransitPrefData *this)

{
  return *(undefined4 *)(this + 8);
}



// MaudioUsbTransitPrefData::ValidateAndFixConfiguration()

void MaudioUsbTransitPrefData::ValidateAndFixConfiguration(void)

{
  return;
}



// MaudioUsbTransitPrefData::GetLatencySetting() const

undefined1 __thiscall MaudioUsbTransitPrefData::GetLatencySetting(MaudioUsbTransitPrefData *this)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*(int *)(this + 8) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(this + 8) + 0x19);
  }
  return uVar1;
}



// MaudioUsbTransitPrefData::GetBitDepth() const

undefined1 __thiscall MaudioUsbTransitPrefData::GetBitDepth(MaudioUsbTransitPrefData *this)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 8) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(this + 8) + 0x18);
  }
  return uVar1;
}



// MaudioUsbTransitPrefData::GetEnabledInterfaceCount() const

char __thiscall MaudioUsbTransitPrefData::GetEnabledInterfaceCount(MaudioUsbTransitPrefData *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(this + 8);
  cVar1 = '\0';
  if (pcVar3 != (char *)0x0) {
    iVar2 = 2;
    do {
      cVar1 = (cVar1 + '\x01') - (*pcVar3 == '\0');
      pcVar3 = pcVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return cVar1;
}



// MaudioUsbTransitPrefData::IsEnabledForInput() const

bool __thiscall MaudioUsbTransitPrefData::IsEnabledForInput(MaudioUsbTransitPrefData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 8) != 0) {
    bVar1 = *(char *)(*(int *)(this + 8) + 1) != '\0';
  }
  return bVar1;
}



// MaudioUsbTransitPrefData::IsEnabledForOutput() const

bool __thiscall MaudioUsbTransitPrefData::IsEnabledForOutput(MaudioUsbTransitPrefData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char **)(this + 8) != (char *)0x0) {
    bVar1 = **(char **)(this + 8) != '\0';
  }
  return bVar1;
}



// MaudioUsbTransitPrefData::IsBitDepth16() const

bool __thiscall MaudioUsbTransitPrefData::IsBitDepth16(MaudioUsbTransitPrefData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 8) != 0) {
    bVar1 = *(char *)(*(int *)(this + 8) + 0x18) == '\0';
  }
  return bVar1;
}



// MaudioUsbTransitPrefData::IsBitDepth24() const

bool __thiscall MaudioUsbTransitPrefData::IsBitDepth24(MaudioUsbTransitPrefData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 8) != 0) {
    bVar1 = *(char *)(*(int *)(this + 8) + 0x18) == '\x01';
  }
  return bVar1;
}



// MaudioUsbTransitPrefData::IsOutputAc3() const

bool __thiscall MaudioUsbTransitPrefData::IsOutputAc3(MaudioUsbTransitPrefData *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 8) != 0) {
    bVar1 = *(char *)(*(int *)(this + 8) + 4) != '\0';
  }
  return bVar1;
}



// MaudioUsbTransitPrefData::IsInterfaceEnabled(unsigned char) const

bool __thiscall
MaudioUsbTransitPrefData::IsInterfaceEnabled(MaudioUsbTransitPrefData *this,uchar param_1)

{
  int iVar1;
  
  if (*(int *)(this + 8) != 0) {
    iVar1 = 0;
    do {
      if ((&kInterfaceToKeyNameMap)[iVar1] == (uint)param_1) {
        return *(char *)(*(int *)(this + 8) + iVar1) != '\0';
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 2);
  }
  return false;
}



// MaudioUsbTransitPrefData::DetermineAvailability()

void __thiscall MaudioUsbTransitPrefData::DetermineAvailability(MaudioUsbTransitPrefData *this)

{
  int iVar1;
  
  if (*(int *)(this + 8) != 0) {
    iVar1 = 0;
    do {
      *(undefined1 *)(*(int *)(this + 8) + 2 + iVar1) = 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 2);
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + 0x16 + *(int *)(this + 8)) = 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 2);
  }
  return;
}



// MaudioUsbTransitPrefData::ValidateConfiguration()

bool __thiscall MaudioUsbTransitPrefData::ValidateConfiguration(MaudioUsbTransitPrefData *this)

{
  return *(int *)(this + 8) != 0;
}



// MaudioUsbTransitPrefData::SetPreferenceDataPtr(PreferenceData*)

void __thiscall
MaudioUsbTransitPrefData::SetPreferenceDataPtr
          (MaudioUsbTransitPrefData *this,PreferenceData *param_1)

{
  *(PreferenceData **)(this + 8) = param_1;
                    // WARNING: Could not recover jumptable at 0x000036c8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)this + 0x30))();
  return;
}



// MaudioUsbTransitPrefData::init(PreferenceData*)

bool __thiscall
MaudioUsbTransitPrefData::init(MaudioUsbTransitPrefData *this,PreferenceData *param_1)

{
  if (param_1 != (PreferenceData *)0x0) {
    SetPreferenceDataPtr(this,param_1);
  }
  return param_1 != (PreferenceData *)0x0;
}



