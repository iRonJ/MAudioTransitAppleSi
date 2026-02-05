#include "kext_defs.h"

// MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceAdaptive * __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
          (MaudioShDrTransitUsbInterfaceAdaptive *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive(OSMetaClass const*)

MaudioShDrTransitUsbInterfaceAdaptive * __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::MaudioShDrTransitUsbInterfaceAdaptive
          (MaudioShDrTransitUsbInterfaceAdaptive *this,OSMetaClass *param_1)

{
  MaudioShDrTransitUsbInterface::MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this,param_1);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive()

MaudioShDrTransitUsbInterfaceAdaptive * __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
          (MaudioShDrTransitUsbInterfaceAdaptive *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive()

MaudioShDrTransitUsbInterfaceAdaptive * __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
          (MaudioShDrTransitUsbInterfaceAdaptive *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive()

MaudioShDrTransitUsbInterfaceAdaptive * __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::~MaudioShDrTransitUsbInterfaceAdaptive
          (MaudioShDrTransitUsbInterfaceAdaptive *this)

{
  *(undefined **)this = &vtable;
  MaudioShDrTransitUsbInterface::~MaudioShDrTransitUsbInterface
            ((MaudioShDrTransitUsbInterface *)this);
  OSObject::operator_delete(this,0x150);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::getMetaClass() const

undefined1 * MaudioShDrTransitUsbInterfaceAdaptive::getMetaClass(void)

{
  return &gMetaClass;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptive",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x150);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::MetaClass(MetaClass *this)

{
  OSMetaClass::OSMetaClass
            ((OSMetaClass *)this,"MaudioShDrTransitUsbInterfaceAdaptive",
             (OSMetaClass *)&MaudioShDrTransitUsbInterface::gMetaClass,0x150);
  *(undefined **)this = &vtable;
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::alloc() const

undefined4 MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::alloc(void)

{
  return 0;
}



// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAllocate(unsigned long,
// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAdaptive*)

undefined4 __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAllocate
          (MaudioShDrTransitUsbInterfaceAdaptive *this,ulong param_1,UsbBufferAdaptive *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (param_2 == (UsbBufferAdaptive *)0x0)) {
    uVar1 = 0xe00002c2;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x68);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x60);
    uVar1 = 0xe00002bd;
    if (*(int *)param_2 != 0) {
      uVar1 = 0;
      *(ulong *)(param_2 + 8) = param_1;
    }
  }
  return uVar1;
}



// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferFree(MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAdaptive*)

void __thiscall
MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferFree
          (MaudioShDrTransitUsbInterfaceAdaptive *this,UsbBufferAdaptive *param_1)

{
  if ((param_1 != (UsbBufferAdaptive *)0x0) && (*(int *)(param_1 + 4) != 0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescFree(MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAdaptive*)

void MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescFree(UsbBufferAdaptive *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (UsbBufferAdaptive *)0x0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar3 = 0;
      iVar2 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        for (; uVar3 < *(uint *)(param_1 + 0x14); uVar3 = uVar3 + 1) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x10) + iVar2);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 0x1c))(piVar1);
            *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2) = 0;
            *(undefined4 *)(iVar2 + 4 + *(int *)(param_1 + 0x10)) = 0;
          }
          iVar2 = iVar2 + 0xc;
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



// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescAllocate(unsigned long, unsigned long,
// MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferAdaptive*, bool, unsigned long, unsigned long,
// unsigned long)

undefined4
MaudioShDrTransitUsbInterfaceAdaptive::UsbBufferDescAllocate
          (ulong param_1,ulong param_2,UsbBufferAdaptive *param_3,bool param_4,ulong param_5,
          ulong param_6,ulong param_7)

{
  ulong uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_2c;
  uint local_20;
  
  if (((param_3 == (UsbBufferAdaptive *)0x0) || (*(int *)(param_3 + 0x10) != 0)) ||
     (param_1 == 0 || *(int *)(param_3 + 0xc) != 0)) {
    uVar4 = 0xe00002c2;
  }
  else {
    piVar3 = (int *)IOBufferMemoryDescriptor::withOptions(3,param_1 * 0xc,0x1000);
    *(int **)(param_3 + 0xc) = piVar3;
    uVar4 = 0xe00002bd;
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 400))(piVar3);
      *(undefined4 *)(param_3 + 0x10) = uVar4;
      *(ulong *)(param_3 + 0x14) = param_1;
      if (param_4) {
        local_38 = 0;
        local_34 = 0;
        local_2c = 0;
        for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
          iVar7 = 0;
          for (uVar6 = 0; uVar6 < param_2; uVar6 = uVar6 + 1) {
            uVar1 = param_5;
            if (local_38 % param_7 == 0) {
              uVar1 = param_6;
            }
            iVar7 = iVar7 + uVar1;
            local_38 = local_38 + 1;
          }
          iVar2 = *(int *)(param_3 + 0x10);
          uVar4 = (**(code **)(*IOSubMemoryDescriptor::metaClass + 0x4c))
                            (IOSubMemoryDescriptor::metaClass);
          *(undefined4 *)(local_2c + iVar2) = uVar4;
          piVar3 = *(int **)(local_2c + *(int *)(param_3 + 0x10));
          if (piVar3 == (int *)0x0) goto LAB_000051e0;
          (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)param_3,local_34,iVar7,0);
          *(int *)(local_2c + 4 + *(int *)(param_3 + 0x10)) = local_34;
          local_34 = local_34 + iVar7;
          local_2c = local_2c + 0xc;
        }
      }
      else {
        iVar7 = 0;
        for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
          iVar5 = local_20 * param_2 * param_5;
          iVar2 = *(int *)(param_3 + 0x10);
          uVar4 = (**(code **)(*IOSubMemoryDescriptor::metaClass + 0x4c))
                            (IOSubMemoryDescriptor::metaClass);
          *(undefined4 *)(iVar7 + iVar2) = uVar4;
          piVar3 = *(int **)(*(int *)(param_3 + 0x10) + iVar7);
          if (piVar3 == (int *)0x0) {
LAB_000051e0:
            UsbBufferDescFree(param_3);
            return 0xe00002bd;
          }
          (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)param_3,iVar5,param_2 * param_5,0);
          *(int *)(iVar7 + 4 + *(int *)(param_3 + 0x10)) = iVar5;
          iVar7 = iVar7 + 0xc;
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}



// __static_initialization_and_destruction_0(int, int)

void __regparm3 __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if (param_1 == 1 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass);
  }
  if (param_1 == 0 && param_2 == 0xffff) {
    MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::~MetaClass
              ((MetaClass *)&MaudioShDrTransitUsbInterfaceAdaptive::gMetaClass);
  }
  return;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



// MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::~MetaClass()

MetaClass * __thiscall MaudioShDrTransitUsbInterfaceAdaptive::MetaClass::~MetaClass(MetaClass *this)

{
  *(undefined **)this = &vtable;
  OSMetaClass::~OSMetaClass((OSMetaClass *)this);
  return this;
}



