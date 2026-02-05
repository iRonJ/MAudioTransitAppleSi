#include "maudio_defs.h"
// MM::SmartPtr::SmartPtr(long, unsigned long)

void __thiscall MM::SmartPtr::SmartPtr(SmartPtr *this,long param_1,ulong param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  *(undefined ***)this = &PTR__SmartPtr_00012068;
  if ((param_2 & 2) == 0) {
    uVar2 = _NewPtr(param_1);
  }
  else {
    uVar2 = _NewPtrClear(param_1);
  }
  *(undefined4 *)(this + 4) = uVar2;
  if (*(int *)(this + 4) == 0) {
    sVar1 = _MemError();
    ThrowErrorFunc((int)sVar1);
    return;
  }
  return;
}



// MM::SmartPtr::SmartPtr(long, unsigned long)

void __thiscall MM::SmartPtr::SmartPtr(SmartPtr *this,long param_1,ulong param_2)

{
  SmartPtr(this,param_1,param_2);
  return;
}



// MM::SmartPtr::~SmartPtr()

void __thiscall MM::SmartPtr::~SmartPtr(SmartPtr *this)

{
  *(undefined ***)this = &PTR__SmartPtr_00012068;
  if (*(int *)(this + 4) != 0) {
    _DisposePtr();
    return;
  }
  return;
}



// MM::SmartPtr::~SmartPtr()

void __thiscall MM::SmartPtr::~SmartPtr(SmartPtr *this)

{
  ~SmartPtr(this);
  return;
}



// MM::SmartPtr::~SmartPtr()

void __thiscall MM::SmartPtr::~SmartPtr(SmartPtr *this)

{
  *(undefined ***)this = &PTR__SmartPtr_00012068;
  if (*(int *)(this + 4) != 0) {
    _DisposePtr(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::SmartPtr::Steal()

undefined4 __thiscall MM::SmartPtr::Steal(SmartPtr *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = 0;
  return uVar1;
}



// MM::SmartPtr::GetSize()

void MM::SmartPtr::GetSize(void)

{
  _GetPtrSize();
  return;
}



// MM::SmartPtr::operator char*()

char * __thiscall MM::SmartPtr::operator_cast_to_char_(SmartPtr *this)

{
  return *(char **)(this + 4);
}



// MM::ThrowErrorFunc(long)

void __regparm3 MM::ThrowErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)___cxa_allocate_exception(4);
  puVar1 = PTR_00015014;
  *plVar2 = param_1;
                    // WARNING: Subroutine does not return
  ___cxa_throw(plVar2,puVar1,0);
}



// MM::String::FinishConstructing(MM::String*, void const*, unsigned char, unsigned long)

void MM::String::FinishConstructing(String *param_1,void *param_2,uchar param_3,ulong param_4)

{
  uchar *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  puVar1 = operator_new__(uVar2 + 2);
  if ((param_3 != '\0') && (uVar2 != 0)) {
    _memmove(puVar1 + 1,param_2,uVar2);
  }
  puVar1[param_3 + 1] = '\0';
  *puVar1 = param_3;
  *(uchar **)(param_1 + 0xc) = puVar1;
  *(ulong *)(param_1 + 0x10) = param_4;
  return;
}



// MM::String::FinishConstructing(MM::String*, unsigned short, bool)

void MM::String::FinishConstructing(String *param_1,ushort param_2,bool param_3)

{
  uchar local_1c;
  undefined1 local_1b [23];
  
  if (param_3) {
    UIntToHexString(param_2,&local_1c);
  }
  else {
    UInt32ToString((uint)param_2,&local_1c);
  }
  FinishConstructing(param_1,local_1b,local_1c,0x8000100);
  return;
}



// MM::String::operator unsigned char const*() const

uchar * __thiscall MM::String::operator_cast_to_unsigned_char_(String *this)

{
  return *(uchar **)(this + 0xc);
}



// MM::String::operator char const*() const

char * __thiscall MM::String::operator_cast_to_char_(String *this)

{
  return (char *)(*(int *)(this + 0xc) + 1);
}



// MM::String::Length() const

undefined1 __thiscall MM::String::Length(String *this)

{
  return **(undefined1 **)(this + 0xc);
}



// MM::String::Trim(MM::String const&)

void __thiscall MM::String::Trim(String *this,String *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  for (bVar1 = (**(code **)(*(int *)this + 0x14))(this); bVar1 != 0; bVar1 = bVar1 - 1) {
    iVar3 = PL::strchr(*(uchar **)(param_1 + 0xc),
                       (ushort)*(byte *)(*(int *)(this + 0xc) + (uint)bVar1));
    if (iVar3 == 0) break;
  }
  bVar2 = (**(code **)(*(int *)this + 0x14))(this);
  if (bVar1 < bVar2) {
                    // WARNING: Could not recover jumptable at 0x00004702. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int *)this + 0x18))();
    return;
  }
  return;
}



// MM::String::Truncate(unsigned char)

void __thiscall MM::String::Truncate(String *this,uchar param_1)

{
  byte bVar1;
  ulong uVar2;
  uchar *puVar3;
  
  bVar1 = (**(code **)(*(int *)this + 0x14))(this);
  if (param_1 < bVar1) {
    uVar2 = 1;
    if (param_1 != '\0') {
      uVar2 = param_1 + 2;
    }
    puVar3 = operator_new__(uVar2);
    if (param_1 == '\0') {
      *puVar3 = '\0';
    }
    else {
      PL::strncpy(puVar3,*(uchar **)(this + 0xc),(ushort)param_1);
      puVar3[param_1 + 1] = '\0';
    }
    operator_delete(*(void **)(this + 0xc));
    *(uchar **)(this + 0xc) = puVar3;
  }
  return;
}



// MM::String::TEMPNAMEPLACEHOLDERVALUE(MM::String const&)

String * __thiscall MM::String::operator=(String *this,String *param_1)

{
  if (this != param_1) {
    if ((*(int *)(*(int *)(this + 8) + 4) == 1) && (*(void **)(this + 0xc) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0xc));
    }
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    RefCounter<>::operator=((RefCounter<> *)(this + 4),(RefCounter *)(param_1 + 4));
  }
  return this;
}



// MM::String::String(unsigned short, bool)

void __thiscall MM::String::String(String *this,ushort param_1,bool param_2)

{
  RefCount *this_00;
  
  *(undefined ***)this = &PTR__String_00012088;
  this_00 = operator_new(8);
  RefCount::RefCount(this_00);
  *(undefined **)(this + 4) = PTR_vtable_0001501c + 8;
  *(RefCount **)(this + 8) = this_00;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  FinishConstructing(this,param_1,param_2);
  return;
}



// MM::String::String(unsigned short, bool)

void __thiscall MM::String::String(String *this,ushort param_1,bool param_2)

{
  String(this,param_1,param_2);
  return;
}



// MM::String::String(char const*, unsigned long)

void __thiscall MM::String::String(String *this,char *param_1,ulong param_2)

{
  RefCount *this_00;
  char *pcVar1;
  
  *(undefined ***)this = &PTR__String_00012088;
  this_00 = operator_new(8);
  RefCount::RefCount(this_00);
  *(undefined **)(this + 4) = PTR_vtable_0001501c + 8;
  *(RefCount **)(this + 8) = this_00;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  for (pcVar1 = param_1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
  }
  if (0xff < (uint)((int)pcVar1 - (int)param_1)) {
    ThrowErrorFunc(0x3f2);
  }
  FinishConstructing(this,param_1,(uchar)((int)pcVar1 - (int)param_1),param_2);
  return;
}



// MM::String::String(char const*, unsigned long)

void __thiscall MM::String::String(String *this,char *param_1,ulong param_2)

{
  String(this,param_1,param_2);
  return;
}



// MM::String::String(unsigned char const*, unsigned long)

void __thiscall MM::String::String(String *this,uchar *param_1,ulong param_2)

{
  RefCount *this_00;
  
  *(undefined ***)this = &PTR__String_00012088;
  this_00 = operator_new(8);
  RefCount::RefCount(this_00);
  *(undefined **)(this + 4) = PTR_vtable_0001501c + 8;
  *(RefCount **)(this + 8) = this_00;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  FinishConstructing(this,param_1 + 1,*param_1,param_2);
  return;
}



// MM::String::String(unsigned char const*, unsigned long)

void __thiscall MM::String::String(String *this,uchar *param_1,ulong param_2)

{
  String(this,param_1,param_2);
  return;
}



// MM::String::String(MM::String const&, MM::String const&)

void __thiscall MM::String::String(String *this,String *param_1,String *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  RefCount *this_00;
  uchar *puVar4;
  int iVar5;
  ulong uVar6;
  uchar local_11c;
  undefined1 local_11b [267];
  
  *(undefined ***)this = &PTR__String_00012088;
  this_00 = operator_new(8);
  RefCount::RefCount(this_00);
  *(undefined **)(this + 4) = PTR_vtable_0001501c + 8;
  *(RefCount **)(this + 8) = this_00;
  *(int *)(this_00 + 4) = *(int *)(this_00 + 4) + 1;
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    uVar2 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
    uVar3 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    uVar2 = (uVar2 & 0xff) + (uVar3 & 0xff);
    if (0xff < uVar2) {
      ThrowErrorFunc(0x3f2);
    }
    puVar4 = operator_new__(uVar2 + 2);
    *(uchar **)(this + 0xc) = puVar4;
    PL::strcpy(puVar4,*(uchar **)(param_1 + 0xc));
    PL::strcat(*(uchar **)(this + 0xc),*(uchar **)(param_2 + 0xc));
    *(undefined1 *)(*(int *)(this + 0xc) + 1 + (uint)uVar2) = 0;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    iVar5 = _CFStringCreateMutable(0,0);
    if (iVar5 == 0) {
      ThrowErrorFunc(-0x1360);
    }
    _CFStringAppendPascalString
              (iVar5,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    _CFStringAppendPascalString
              (iVar5,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
    uVar6 = _CFStringGetSmallestEncoding(iVar5);
    cVar1 = _CFStringGetPascalString(iVar5,&local_11c,0x100,uVar6);
    _CFRelease(iVar5);
    if (cVar1 == '\0') {
      ThrowErrorFunc(-0x1360);
    }
    FinishConstructing(this,local_11b,local_11c,uVar6);
  }
  return;
}



// MM::TEMPNAMEPLACEHOLDERVALUE(MM::String const&, MM::String const&)

MM * __thiscall MM::operator+(MM *this,String *param_1,String *param_2)

{
  String::String((String *)this,param_1,param_2);
  return this;
}



// MM::String::~String()

void __thiscall MM::String::~String(String *this)

{
  *(undefined ***)this = &PTR__String_00012088;
  if ((*(int *)(*(int *)(this + 8) + 4) == 1) && (*(void **)(this + 0xc) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0xc));
  }
  RefCounter<>::~RefCounter((RefCounter<> *)(this + 4));
  return;
}



// MM::String::~String()

void __thiscall MM::String::~String(String *this)

{
  ~String(this);
  return;
}



// MM::String::~String()

void __thiscall MM::String::~String(String *this)

{
  *(undefined ***)this = &PTR__String_00012088;
  if ((*(int *)(*(int *)(this + 8) + 4) == 1) && (*(void **)(this + 0xc) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0xc));
  }
  RefCounter<>::~RefCounter((RefCounter<> *)(this + 4));
  operator_delete(this);
  return;
}



// MM::RefCount::RefCount()

void __thiscall MM::RefCount::RefCount(RefCount *this)

{
  *(undefined **)this = PTR_vtable_00015018 + 8;
  *(undefined4 *)(this + 4) = 0;
  return;
}



// MM::RefCounter<MM::RefCount>::~RefCounter()

void __thiscall MM::RefCounter<>::~RefCounter(RefCounter<> *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined **)this = PTR_vtable_0001501c + 8;
  iVar2 = *(int *)(*(int *)(this + 4) + 4) + -1;
  *(int *)(*(int *)(this + 4) + 4) = iVar2;
  if ((iVar2 == 0) && (piVar1 = *(int **)(this + 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  operator_delete(this);
  return;
}



// MM::RefCounter<MM::RefCount>::~RefCounter()

void __thiscall MM::RefCounter<>::~RefCounter(RefCounter<> *this)

{
  int *piVar1;
  int iVar2;
  
  *(undefined **)this = PTR_vtable_0001501c + 8;
  iVar2 = *(int *)(*(int *)(this + 4) + 4) + -1;
  *(int *)(*(int *)(this + 4) + 4) = iVar2;
  if ((iVar2 == 0) && (piVar1 = *(int **)(this + 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}



// MM::RefCounter<MM::RefCount>::~RefCounter()

void __thiscall MM::RefCounter<>::~RefCounter(RefCounter<> *this)

{
  ~RefCounter(this);
  return;
}



// MM::RefCounter<MM::RefCount>::TEMPNAMEPLACEHOLDERVALUE(MM::RefCounter<MM::RefCount> const&)

RefCounter<> * __thiscall MM::RefCounter<>::operator=(RefCounter<> *this,RefCounter *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((this != (RefCounter<> *)param_1) && (*(int *)(this + 4) != *(int *)(param_1 + 4))) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 4);
    *piVar1 = *piVar1 + 1;
    iVar2 = *(int *)(*(int *)(this + 4) + 4) + -1;
    *(int *)(*(int *)(this + 4) + 4) = iVar2;
    if ((iVar2 == 0) && (piVar1 = *(int **)(this + 4), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  return this;
}



// MM::RefCount::~RefCount()

void __thiscall MM::RefCount::~RefCount(RefCount *this)

{
  *(undefined **)this = PTR_vtable_00015018 + 8;
  return;
}



// MM::RefCount::~RefCount()

void __thiscall MM::RefCount::~RefCount(RefCount *this)

{
  ~RefCount(this);
  return;
}



// MM::RefCount::~RefCount()

void __thiscall MM::RefCount::~RefCount(RefCount *this)

{
  *(undefined **)this = PTR_vtable_00015018 + 8;
  operator_delete(this);
  return;
}



// MM::HandleLocker::HandleLocker(void*)

void __thiscall MM::HandleLocker::HandleLocker(HandleLocker *this,void *param_1)

{
  char cVar1;
  
  *(undefined ***)this = &PTR__HandleLocker_000120d0;
  *(undefined4 *)(this + 4) = 0;
  cVar1 = _HGetState(param_1);
  if (-1 < cVar1) {
    _HLock(param_1);
    *(void **)(this + 4) = param_1;
  }
  return;
}



// MM::HandleLocker::HandleLocker(void*)

void __thiscall MM::HandleLocker::HandleLocker(HandleLocker *this,void *param_1)

{
  HandleLocker(this,param_1);
  return;
}



// MM::HandleLocker::~HandleLocker()

void __thiscall MM::HandleLocker::~HandleLocker(HandleLocker *this)

{
  *(undefined ***)this = &PTR__HandleLocker_000120d0;
  if (*(int *)(this + 4) != 0) {
    _HUnlock();
    return;
  }
  return;
}



// MM::HandleLocker::~HandleLocker()

void __thiscall MM::HandleLocker::~HandleLocker(HandleLocker *this)

{
  ~HandleLocker(this);
  return;
}



// MM::HandleLocker::~HandleLocker()

void __thiscall MM::HandleLocker::~HandleLocker(HandleLocker *this)

{
  *(undefined ***)this = &PTR__HandleLocker_000120d0;
  if (*(int *)(this + 4) != 0) {
    _HUnlock(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::DeduceHandleAllocator(char**)

code * MM::DeduceHandleAllocator(char **param_1)

{
  return NewHandleInDefaultHeap;
}



// MM::NewHandleInDefaultHeap(long, bool)

void MM::NewHandleInDefaultHeap(long param_1,bool param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2) {
    iVar2 = _NewHandleClear(param_1);
  }
  else {
    iVar2 = _NewHandle(param_1);
  }
  if (iVar2 == 0) {
    sVar1 = _MemError();
    piVar3 = (int *)___cxa_allocate_exception(4);
    *piVar3 = (int)sVar1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(piVar3,PTR_00015014,0);
  }
  return;
}



// MM::ThrowErrorFunc(long)

void __regparm3 MM::ThrowErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)___cxa_allocate_exception(4);
  puVar1 = PTR_00015014;
  *plVar2 = param_1;
                    // WARNING: Subroutine does not return
  ___cxa_throw(plVar2,puVar1,0);
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// MM::RunLoopSource::Schedule(__CFRunLoop*, __CFString const*)

void __thiscall
MM::RunLoopSource::Schedule(RunLoopSource *this,__CFRunLoop *param_1,__CFString *param_2)

{
  undefined4 local_18;
  __CFRunLoop *local_14;
  __CFString *local_10;
  
  local_18 = 0;
  local_14 = param_1;
  local_10 = param_2;
  (**(code **)(*(int *)(this + 0xc) + 0x1c))(this + 0xc,&local_18,0,0);
  return;
}



// MM::RunLoopSource::Cancel(__CFRunLoop*, __CFString const*)

void __thiscall
MM::RunLoopSource::Cancel(RunLoopSource *this,__CFRunLoop *param_1,__CFString *param_2)

{
  undefined4 local_18;
  __CFRunLoop *local_14;
  __CFString *local_10;
  
  local_18 = 1;
  local_14 = param_1;
  local_10 = param_2;
  (**(code **)(*(int *)(this + 0xc) + 0x1c))(this + 0xc,&local_18,0,0);
  return;
}



// MM::RunLoopSource::Perform()

void __thiscall MM::RunLoopSource::Perform(RunLoopSource *this)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = 0;
  local_18 = 2;
  (**(code **)(*(int *)(this + 0xc) + 0x1c))(this + 0xc,&local_18,0,0);
  return;
}



// MM::RunLoopAndSource::RunLoopAndSource(__CFRunLoopSource*, __CFString const*, __CFRunLoop*)

void __thiscall
MM::RunLoopAndSource::RunLoopAndSource
          (RunLoopAndSource *this,__CFRunLoopSource *param_1,__CFString *param_2,
          __CFRunLoop *param_3)

{
  __CFRunLoop *p_Var1;
  __CFRunLoopSource *p_Var2;
  __CFString *p_Var3;
  
  *(undefined ***)this = &PTR_operator_cast_to___CFRunLoop__00012148;
  if (param_3 == (__CFRunLoop *)0x0) {
    param_3 = (__CFRunLoop *)_CFRunLoopGetCurrent();
  }
  p_Var1 = (__CFRunLoop *)_CFRetain(param_3);
  RunLoop::RunLoop((RunLoop *)(this + 4),p_Var1,true);
  p_Var2 = (__CFRunLoopSource *)_CFRetain(param_1);
  RunLoopSource::RunLoopSource((RunLoopSource *)(this + 0x10),p_Var2,true);
  p_Var3 = (__CFString *)_CFRetain(param_2);
  CoreFoundationString::CoreFoundationString((CoreFoundationString *)(this + 0x30),p_Var3);
  _CFRunLoopAddSource(*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),
                      *(undefined4 *)(this + 0x34));
  return;
}



// MM::RunLoopAndSource::RunLoopAndSource(__CFRunLoopSource*, __CFString const*, __CFRunLoop*)

void __thiscall
MM::RunLoopAndSource::RunLoopAndSource
          (RunLoopAndSource *this,__CFRunLoopSource *param_1,__CFString *param_2,
          __CFRunLoop *param_3)

{
  RunLoopAndSource(this,param_1,param_2,param_3);
  return;
}



// MM::RunLoopAndSource::~RunLoopAndSource()

void __thiscall MM::RunLoopAndSource::~RunLoopAndSource(RunLoopAndSource *this)

{
  *(undefined ***)this = &PTR_operator_cast_to___CFRunLoop__00012148;
  _CFRunLoopRemoveSource
            (*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x34));
  CoreFoundationString::~CoreFoundationString((CoreFoundationString *)(this + 0x30));
  RunLoopSource::~RunLoopSource((RunLoopSource *)(this + 0x10));
  RunLoop::~RunLoop((RunLoop *)(this + 4));
  return;
}



// MM::RunLoopAndSource::~RunLoopAndSource()

void __thiscall MM::RunLoopAndSource::~RunLoopAndSource(RunLoopAndSource *this)

{
  ~RunLoopAndSource(this);
  return;
}



// MM::RunLoopAndSource::~RunLoopAndSource()

void __thiscall MM::RunLoopAndSource::~RunLoopAndSource(RunLoopAndSource *this)

{
  *(undefined ***)this = &PTR_operator_cast_to___CFRunLoop__00012148;
  _CFRunLoopRemoveSource
            (*(undefined4 *)(this + 8),*(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x34));
  CoreFoundationString::~CoreFoundationString((CoreFoundationString *)(this + 0x30));
  RunLoopSource::~RunLoopSource((RunLoopSource *)(this + 0x10));
  RunLoop::~RunLoop((RunLoop *)(this + 4));
  operator_delete(this);
  return;
}



// MM::RunLoopAndSource::operator __CFRunLoop*()

__CFRunLoop * __thiscall MM::RunLoopAndSource::operator_cast_to___CFRunLoop_(RunLoopAndSource *this)

{
  return *(__CFRunLoop **)(this + 8);
}



// MM::RunLoopAndSource::operator __CFRunLoopSource*()

__CFRunLoopSource * __thiscall
MM::RunLoopAndSource::operator_cast_to___CFRunLoopSource_(RunLoopAndSource *this)

{
  return *(__CFRunLoopSource **)(this + 0x14);
}



// MM::RunLoopAndSource::operator __CFString const*()

__CFString * __thiscall MM::RunLoopAndSource::operator_cast_to___CFString_(RunLoopAndSource *this)

{
  return *(__CFString **)(this + 0x34);
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::operator[](unsigned long) const

undefined4 __thiscall MM::Array<>::operator[](Array<> *this,ulong param_1)

{
  undefined4 uVar1;
  HandleLocker local_14 [8];
  
  HandleLocker::HandleLocker(local_14,*(void **)this);
  uVar1 = *(undefined4 *)(**(int **)this + 8 + param_1 * 4);
  HandleLocker::~HandleLocker(local_14);
  return uVar1;
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::~Array()

void __thiscall MM::Array<>::~Array(Array<> *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HandleLocker local_14 [8];
  
  puVar3 = *(undefined4 **)this;
  iVar1 = *(int *)*puVar3;
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_14,puVar3);
      iVar1 = *(int *)(this + 4);
      for (iVar2 = 0; iVar1 != iVar2; iVar2 = iVar2 + 1) {
        *(int *)(this + 4) = *(int *)(this + 4) + -1;
      }
      HandleLocker::~HandleLocker(local_14);
      puVar3 = *(undefined4 **)this;
    }
    _DisposeHandle(puVar3);
    *(undefined4 *)this = 0x68f168f1;
  }
  else {
    *(int *)*puVar3 = iVar1 + -1;
  }
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::CountRecipients()

undefined4 __thiscall MM::MessageCenter<>::CountRecipients(MessageCenter<> *this)

{
  return *(undefined4 *)(this + 8);
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::GetNextMessageID(unsigned long long&)

void __thiscall MM::MessageCenter<>::GetNextMessageID(MessageCenter<> *this,ulonglong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)param_1 = uVar1;
  return;
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::Contains(MM::MessageRecipient<MM::RunLoopSourceMessage>*
// const&) const

undefined4 __thiscall MM::Array<>::Contains(Array<> *this,MessageRecipient **param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  HandleLocker local_24 [20];
  
  HandleLocker::HandleLocker(local_24,*(void **)this);
  iVar1 = 0;
  iVar2 = *(int *)(this + 4);
  do {
    iVar2 = iVar2 + -1;
    if (*(int *)(this + 4) == iVar1) {
      uVar3 = 0;
      goto LAB_00005337;
    }
    iVar1 = iVar1 + 1;
  } while (*(MessageRecipient **)(**(int **)this + 8 + iVar2 * 4) != *param_1);
  uVar3 = 1;
LAB_00005337:
  HandleLocker::~HandleLocker(local_24);
  return uVar3;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::IsRegistered(MM::MessageRecipient<MM::RunLoopSourceMessage>*)

undefined1 MM::MessageCenter<>::IsRegistered(MessageRecipient *param_1)

{
  undefined1 uVar1;
  
  uVar1 = Array<>::Contains((Array<> *)(param_1 + 4),(MessageRecipient **)&stack0x00000008);
  return uVar1;
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::CloneStorageIfNecessary()

void __thiscall MM::Array<>::CloneStorageIfNecessary(Array<> *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  HandleLocker local_2c [8];
  HandleLocker local_24 [20];
  
  if (*(int *)**(char ***)this != 0) {
    pcVar1 = (code *)DeduceHandleAllocator(*(char ***)this);
    piVar2 = (int *)(*pcVar1)(8,0);
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_24,*(void **)this);
      HandleLocker::HandleLocker(local_2c,piVar2);
      iVar3 = *(int *)(this + 4) + -1;
      do {
        *(undefined4 *)(*piVar2 + 8 + iVar3 * 4) = *(undefined4 *)(**(int **)this + 8 + iVar3 * 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
      HandleLocker::~HandleLocker(local_2c);
      HandleLocker::~HandleLocker(local_24);
    }
    *(undefined4 *)*piVar2 = 0;
    *(undefined4 *)(*piVar2 + 4) = 0;
    *(int **)this = piVar2;
  }
  return;
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::Delete(unsigned long)

void __thiscall MM::Array<>::Delete(Array<> *this,ulong param_1)

{
  short sVar1;
  HandleLocker local_14 [8];
  
  CloneStorageIfNecessary(this);
  HandleLocker::HandleLocker(local_14,*(void **)this);
  sVar1 = _Munger(*(undefined4 *)this,param_1 * 4 + 8,0,4,0,0);
  if (0 < sVar1) {
    sVar1 = 0;
  }
  ThrowIfErrorFunc((int)sVar1);
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  HandleLocker::~HandleLocker(local_14);
  return;
}



// MM::SystemWrapper<__CFRunLoop*>::SystemWrapper(__CFRunLoop* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFRunLoop **param_1)

{
  *(__CFRunLoop **)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoop*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015020 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::RunLoop::~RunLoop()

void __thiscall MM::RunLoop::~RunLoop(RunLoop *this)

{
  *(undefined **)this = PTR_vtable_00015028 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::RunLoop::~RunLoop()

void __thiscall MM::RunLoop::~RunLoop(RunLoop *this)

{
  ~RunLoop(this);
  return;
}



// MM::RunLoop::~RunLoop()

void __thiscall MM::RunLoop::~RunLoop(RunLoop *this)

{
  *(undefined **)this = PTR_vtable_00015028 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoop*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationWrapper<__CFString const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015038 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationString::~CoreFoundationString()

void __thiscall MM::CoreFoundationString::~CoreFoundationString(CoreFoundationString *this)

{
  *(undefined **)this = PTR_vtable_0001502c + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::CoreFoundationString::~CoreFoundationString()

void __thiscall MM::CoreFoundationString::~CoreFoundationString(CoreFoundationString *this)

{
  ~CoreFoundationString(this);
  return;
}



// MM::CoreFoundationString::~CoreFoundationString()

void __thiscall MM::CoreFoundationString::~CoreFoundationString(CoreFoundationString *this)

{
  *(undefined **)this = PTR_vtable_0001502c + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFString const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoopSource*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015034 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoopSource*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined **)this = PTR_vtable_00015024 + 8;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  for (uVar4 = 0; uVar3 = uVar3 - 1, uVar1 != uVar4; uVar4 = uVar4 + 1) {
    piVar2 = (int *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
    (**(code **)(*piVar2 + 4))(piVar2,this);
  }
  Array<>::~Array((Array<> *)(this + 4));
  return;
}



// non-virtual thunk to MM::RunLoopSource::~RunLoopSource()

void __thiscall MM::RunLoopSource::~RunLoopSource(RunLoopSource *this)

{
  ~RunLoopSource(this + -0xc);
  return;
}



// MM::RunLoopSource::~RunLoopSource()

void __thiscall MM::RunLoopSource::~RunLoopSource(RunLoopSource *this)

{
  *(undefined ***)this = &PTR__RunLoopSource_000120e8;
  *(undefined ***)(this + 0xc) = &PTR__RunLoopSource_00012104;
  MessageCenter<>::~MessageCenter((MessageCenter<> *)(this + 0xc));
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ~MessageCenter(this);
  return;
}



// MM::RunLoopSource::~RunLoopSource()

void __thiscall MM::RunLoopSource::~RunLoopSource(RunLoopSource *this)

{
  *(undefined ***)this = &PTR__RunLoopSource_000120e8;
  *(undefined ***)(this + 0xc) = &PTR__RunLoopSource_00012104;
  MessageCenter<>::~MessageCenter((MessageCenter<> *)(this + 0xc));
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// non-virtual thunk to MM::RunLoopSource::~RunLoopSource()

void __thiscall MM::RunLoopSource::~RunLoopSource(RunLoopSource *this)

{
  ~RunLoopSource(this + -0xc);
  return;
}



// MM::RunLoopSource::~RunLoopSource()

void __thiscall MM::RunLoopSource::~RunLoopSource(RunLoopSource *this)

{
  ~RunLoopSource(this);
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::DistributeMessage(MM::RunLoopSourceMessage const&,
// unsigned long long)

void MM::MessageCenter<>::DistributeMessage(RunLoopSourceMessage *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 in_stack_00000010;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0xc) = uVar1 + 1;
  *(uint *)(param_1 + 0x10) = iVar2 + (uint)(0xfffffffe < uVar1);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar5 = uVar3;
  for (uVar6 = 0; uVar5 = uVar5 - 1, uVar3 != uVar6; uVar6 = uVar6 + 1) {
    piVar4 = (int *)Array<>::operator[]((Array<> *)(param_1 + 4),uVar5);
    (**(code **)(*piVar4 + 8))
              (piVar4,(undefined4)param_2,param_1,uVar1,iVar2,param_2._4_4_,in_stack_00000010);
  }
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::UnregisterRecipient(MM::MessageRecipient<MM::RunLoopSourceMessage>*)

void __thiscall
MM::MessageCenter<>::UnregisterRecipient(MessageCenter<> *this,MessageRecipient *param_1)

{
  ulong uVar1;
  MessageRecipient *pMVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = 0;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  do {
    uVar3 = uVar3 - 1;
    if (uVar1 == uVar4) {
      return;
    }
    uVar4 = uVar4 + 1;
    pMVar2 = (MessageRecipient *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
  } while (pMVar2 != param_1);
  (**(code **)(*(int *)param_1 + 4))(param_1,this);
  Array<>::Delete((Array<> *)(this + 4),uVar3);
  return;
}



// MM::SystemWrapper<__CFString const*>::SystemWrapper(__CFString const* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFString **param_1)

{
  *(__CFString **)this = *param_1;
  return;
}



// MM::SystemWrapper<__CFRunLoopSource*>::SystemWrapper(__CFRunLoopSource* const&)

void __thiscall
MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFRunLoopSource **param_1)

{
  *(__CFRunLoopSource **)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoopSource*>::CoreFoundationWrapper(__CFRunLoopSource*, bool,
// bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFRunLoopSource *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015034 + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoopSource*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015034 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoop*>::CoreFoundationWrapper(__CFRunLoop*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFRunLoop *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015020 + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::RunLoop::RunLoop(__CFRunLoop*, bool)

void __thiscall MM::RunLoop::RunLoop(RunLoop *this,__CFRunLoop *param_1,bool param_2)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,false);
  *(undefined **)this = PTR_vtable_00015028 + 8;
  return;
}



// MM::CoreFoundationWrapper<__CFRunLoop*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015020 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFString const*>::CoreFoundationWrapper(__CFString const*, bool,
// bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFString *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  bool bVar2;
  undefined3 in_stack_0000000d;
  
  bVar2 = param_3;
  bVar1 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_00015038 + 8;
  this[8] = (CoreFoundationWrapper<>)bVar1;
  if ((*(int *)(this + 4) == 0) && (!bVar2)) {
    ThrowErrorFunc(-0x1360);
  }
  return;
}



// MM::CoreFoundationString::CoreFoundationString(__CFString const*)

void __thiscall
MM::CoreFoundationString::CoreFoundationString(CoreFoundationString *this,__CFString *param_1)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper((CoreFoundationWrapper<> *)this,param_1,true,false)
  ;
  *(undefined **)this = PTR_vtable_0001502c + 8;
  return;
}



// MM::CoreFoundationWrapper<__CFString const*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_00015038 + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>::Append(MM::MessageRecipient<MM::RunLoopSourceMessage>*
// const&)

int __thiscall MM::Array<>::Append(Array<> *this,MessageRecipient **param_1)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  HandleLocker local_24 [20];
  
  CloneStorageIfNecessary(this);
  _SetHandleSize(*(undefined4 *)this,*(int *)(this + 4) * 4 + 0xc);
  sVar2 = _MemError();
  ThrowIfErrorFunc((int)sVar2);
  HandleLocker::HandleLocker(local_24,*(void **)this);
  iVar3 = *(int *)(this + 4);
  puVar1 = (undefined4 *)(**(int **)this + 8 + iVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    iVar3 = *(int *)(this + 4);
  }
  *(int *)(this + 4) = iVar3 + 1;
  HandleLocker::~HandleLocker(local_24);
  return iVar3;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::RegisterRecipient(MM::MessageRecipient<MM::RunLoopSourceMessage>*)

void __thiscall
MM::MessageCenter<>::RegisterRecipient(MessageCenter<> *this,MessageRecipient *param_1)

{
  Array<>::Append((Array<> *)(this + 4),&param_1);
  (*(code *)**(undefined4 **)param_1)(param_1,this);
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::MessageCenter()

void __thiscall MM::MessageCenter<>::MessageCenter(MessageCenter<> *this)

{
  undefined4 uVar1;
  
  *(undefined **)this = PTR_vtable_00015024 + 8;
  uVar1 = NewHandleInDefaultHeap(8,true);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}



// MM::RunLoopSource::RunLoopSource(__CFRunLoopSource*, bool)

void __thiscall
MM::RunLoopSource::RunLoopSource(RunLoopSource *this,__CFRunLoopSource *param_1,bool param_2)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,false);
  MessageCenter<>::MessageCenter((MessageCenter<> *)(this + 0xc));
  *(undefined ***)this = &PTR__RunLoopSource_000120e8;
  *(undefined ***)(this + 0xc) = &PTR__RunLoopSource_00012104;
  return;
}



// MM::MessageCenter<MM::RunLoopSourceMessage>::~MessageCenter()

void __thiscall MM::MessageCenter<>::~MessageCenter(MessageCenter<> *this)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined **)this = PTR_vtable_00015024 + 8;
  uVar1 = *(ulong *)(this + 8);
  uVar3 = uVar1;
  for (uVar4 = 0; uVar3 = uVar3 - 1, uVar1 != uVar4; uVar4 = uVar4 + 1) {
    piVar2 = (int *)Array<>::operator[]((Array<> *)(this + 4),uVar3);
    (**(code **)(*piVar2 + 4))(piVar2,this);
  }
  Array<>::~Array((Array<> *)(this + 4));
  operator_delete(this);
  return;
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// MM::FileStream::Read(void*, long, bool)

long __thiscall MM::FileStream::Read(FileStream *this,void *param_1,long param_2,bool param_3)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = param_3;
  sVar2 = _FSRead((int)*(short *)(this + 4),&param_2,param_1);
  if ((bVar1) || (sVar2 != -0x27)) {
    ThrowIfErrorFunc((int)sVar2);
  }
  return param_2;
}



// MM::FileStream::GetFSSpec(FSSpec&)

void __thiscall MM::FileStream::GetFSSpec(FileStream *this,FSSpec *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4a [4];
  FSSpec *local_38;
  undefined2 local_32;
  undefined2 local_16;
  undefined4 local_10;
  
  puVar3 = local_4a;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_38 = param_1 + 6;
  *(undefined2 *)puVar3 = 0;
  local_32 = *(undefined2 *)(this + 4);
  sVar1 = _PBGetFCBInfoSync(local_4a);
  ThrowIfErrorFunc((int)sVar1);
  *(undefined2 *)param_1 = local_16;
  *(undefined4 *)(param_1 + 2) = local_10;
  return;
}



// OpenFile(FSSpec const&, signed char, bool)

int __regparm3 OpenFile(undefined4 param_1,char param_2,char param_3)

{
  short sVar1;
  short local_e [3];
  
  if (param_3 == '\0') {
    sVar1 = _FSpOpenRF(param_1,(int)param_2,local_e);
  }
  else {
    sVar1 = _FSpOpenDF(param_1,(int)param_2,local_e);
  }
  MM::ThrowIfErrorFunc((int)sVar1);
  return (int)local_e[0];
}



// MM::FileStream::FileStream(FSSpec const&, signed char, bool)

void __thiscall
MM::FileStream::FileStream(FileStream *this,undefined4 param_1,char param_3,undefined1 param_4)

{
  undefined2 uVar1;
  
  *(undefined ***)this = &PTR_GetFSSpec_000121e8;
  uVar1 = OpenFile(param_1,(int)param_3,param_4);
  *(undefined2 *)(this + 4) = uVar1;
  return;
}



// MM::FileStream::~FileStream()

void __thiscall MM::FileStream::~FileStream(FileStream *this)

{
  short sVar1;
  
  *(undefined ***)this = &PTR_GetFSSpec_000121e8;
  sVar1 = _FSClose((int)*(short *)(this + 4));
  ThrowIfErrorFunc((int)sVar1);
  return;
}



// MM::FileStream::~FileStream()

void __thiscall MM::FileStream::~FileStream(FileStream *this)

{
  ~FileStream(this);
  return;
}



// MM::FileStream::~FileStream()

void __thiscall MM::FileStream::~FileStream(FileStream *this)

{
  short sVar1;
  
  *(undefined ***)this = &PTR_GetFSSpec_000121e8;
  sVar1 = _FSClose((int)*(short *)(this + 4));
  ThrowIfErrorFunc((int)sVar1);
  operator_delete(this);
  return;
}



// MM::FileStream::Write(void const*, long)

void MM::FileStream::Write(void *param_1,long param_2)

{
  short sVar1;
  
  sVar1 = _FSWrite((int)*(short *)((int)param_1 + 4),&stack0x0000000c,param_2);
  ThrowIfErrorFunc((int)sVar1);
  return;
}



// MM::FileStream::GetSize()

undefined4 __thiscall MM::FileStream::GetSize(FileStream *this)

{
  short sVar1;
  undefined4 local_10 [3];
  
  sVar1 = _GetEOF((int)*(short *)(this + 4),local_10);
  ThrowIfErrorFunc((int)sVar1);
  return local_10[0];
}



// MM::FileStream::SetSize(long)

void __thiscall MM::FileStream::SetSize(FileStream *this,long param_1)

{
  short sVar1;
  
  sVar1 = _SetEOF((int)*(short *)(this + 4),param_1);
  ThrowIfErrorFunc((int)sVar1);
  return;
}



void _IOObjectGetKernelRetainCount(mach_port_name_t param_1,mach_port_urefs_t *param_2)

{
  _mach_port_get_refs(*(ipc_space_t *)PTR_0001503c,param_1,0,param_2);
  return;
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// MM::ResourceMap::~ResourceMap()

void __thiscall MM::ResourceMap::~ResourceMap(ResourceMap *this)

{
  short sVar1;
  
  *(undefined ***)this = &PTR__ResourceMap_00012210;
  _CloseResFile((int)*(short *)(this + 4));
  sVar1 = _ResError();
  ThrowIfErrorFunc((int)sVar1);
  operator_delete(this);
  return;
}



// OpenEitherFork(FSRef const&, signed char)

int __regparm3 OpenEitherFork(undefined4 param_1,char param_2)

{
  undefined *puVar1;
  short sVar2;
  int *piVar3;
  short local_1e [7];
  
  local_1e[0] = _FSOpenResFile(param_1,(int)param_2);
  if (local_1e[0] == -1) {
    sVar2 = _ResError();
    if (sVar2 != -0x27) {
      piVar3 = (int *)___cxa_allocate_exception(4);
      puVar1 = PTR_00015014;
      *piVar3 = (int)sVar2;
                    // WARNING: Subroutine does not return
      ___cxa_throw(piVar3,puVar1,0);
    }
    sVar2 = _FSOpenResourceFile(param_1,0,0,(int)param_2,local_1e);
    MM::ThrowIfErrorFunc((int)sVar2);
  }
  return (int)local_1e[0];
}



// MM::ResourceMap::ResourceMap(char const*, signed char)

void __thiscall MM::ResourceMap::ResourceMap(ResourceMap *this,undefined4 param_1,char param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined1 local_6c [92];
  
  *(undefined ***)this = &PTR__ResourceMap_00012210;
  lVar2 = _FSPathMakeRef(param_1,local_6c,0);
  ThrowIfErrorFunc(lVar2);
  uVar1 = OpenEitherFork(local_6c,(int)param_3);
  *(undefined2 *)(this + 4) = uVar1;
  return;
}



// MM::ResourceMap::ResourceMap(char const*, signed char)

void __thiscall MM::ResourceMap::ResourceMap(void)

{
  ResourceMap();
  return;
}



// MM::ResourceMap::~ResourceMap()

void __thiscall MM::ResourceMap::~ResourceMap(ResourceMap *this)

{
  short sVar1;
  
  *(undefined ***)this = &PTR__ResourceMap_00012210;
  _CloseResFile((int)*(short *)(this + 4));
  sVar1 = _ResError();
  ThrowIfErrorFunc((int)sVar1);
  return;
}



// MM::ResourceMap::~ResourceMap()

void __thiscall MM::ResourceMap::~ResourceMap(ResourceMap *this)

{
  ~ResourceMap(this);
  return;
}



// MM::ThrowIfErrorFunc(int)

void __regparm3 MM::ThrowIfErrorFunc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015040;
    *piVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(piVar2,puVar1,0);
  }
  return;
}



// MM::ThrowIfErrorFunc(long)

void __regparm3 MM::ThrowIfErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    plVar2 = (long *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *plVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(plVar2,puVar1,0);
  }
  return;
}



// MM::USB::OpenDevice::OpenDevice(unsigned int, IOUSBDeviceStruct187**,
// MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall
MM::USB::OpenDevice::OpenDevice
          (OpenDevice *this,uint param_1,IOUSBDeviceStruct187 **param_2,MessageCenter *param_3)

{
  int iVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__OpenDevice_00012220;
  *(IOUSBDeviceStruct187 ***)(this + 4) = param_2;
  IOServiceGoneDeadMessageRecipient::IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)(this + 8),param_1,param_3);
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x20))(param_2);
  if (iVar1 == -0x1ffffd3b) {
    cVar2 = '\n';
    do {
      _sleep(1);
      iVar1 = (**(code **)(**(int **)(this + 4) + 0x20))(param_2);
      if (iVar1 != -0x1ffffd3b) break;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  ThrowIfErrorFunc(iVar1);
  return;
}



// MM::USB::OpenDevice::OpenDevice(unsigned int, IOUSBDeviceStruct187**,
// MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall
MM::USB::OpenDevice::OpenDevice
          (OpenDevice *this,uint param_1,IOUSBDeviceStruct187 **param_2,MessageCenter *param_3)

{
  OpenDevice(this,param_1,param_2,param_3);
  return;
}



// MM::USB::OpenDevice::~OpenDevice()

void __thiscall MM::USB::OpenDevice::~OpenDevice(OpenDevice *this)

{
  *(undefined ***)this = &PTR__OpenDevice_00012220;
  if (*(int *)(this + 0x14) != 0) {
    (**(code **)(**(int **)(this + 4) + 0x24))(*(int **)(this + 4));
  }
  IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)(this + 8));
  return;
}



// MM::USB::OpenDevice::~OpenDevice()

void __thiscall MM::USB::OpenDevice::~OpenDevice(OpenDevice *this)

{
  ~OpenDevice(this);
  return;
}



// MM::USB::OpenDevice::~OpenDevice()

void __thiscall MM::USB::OpenDevice::~OpenDevice(OpenDevice *this)

{
  *(undefined ***)this = &PTR__OpenDevice_00012220;
  if (*(int *)(this + 0x14) != 0) {
    (**(code **)(**(int **)(this + 4) + 0x24))(*(int **)(this + 4));
  }
  IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
            ((IOServiceGoneDeadMessageRecipient *)(this + 8));
  operator_delete(this);
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::ReceiveMessage(MM::IOServiceGoneDeadMessage const&)

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::ReceiveMessage
          (IOServiceGoneDeadMessageRecipient *this,IOServiceGoneDeadMessage *param_1)

{
  if (*(int *)param_1 == *(int *)(this + 0xc)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::AcquireNewService(unsigned int)

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::AcquireNewService
          (IOServiceGoneDeadMessageRecipient *this,uint param_1)

{
  *(uint *)(this + 0xc) = param_1;
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::ServiceIsAlive()

bool __thiscall
MM::IOServiceGoneDeadMessageRecipient::ServiceIsAlive(IOServiceGoneDeadMessageRecipient *this)

{
  return *(int *)(this + 0xc) != 0;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::operator[](unsigned
// long) const

ulong MM::Array<>::operator[](ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  HandleLocker local_24 [20];
  
  iVar2 = in_stack_0000000c * 0xc;
  HandleLocker::HandleLocker(local_24,(void *)*in_stack_00000008);
  iVar1 = *(int *)*in_stack_00000008;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 8 + iVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 0xc + iVar1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0x10 + iVar1);
  HandleLocker::~HandleLocker(local_24);
  return param_1;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::ForEach(bool
// (*)(MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>&,
// unsigned long, MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker&,
// unsigned long), unsigned long)

void __thiscall
MM::Array<>::ForEach
          (Array<> *this,_func_bool_Array_ptr_ulong_MessageCenterTracker_ptr_ulong *param_1,
          ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  ulong local_34;
  HandleLocker local_24 [20];
  
  if (param_2 == 0) {
    param_2 = (ulong)this;
  }
  HandleLocker::HandleLocker(local_24,*(void **)this);
  uVar1 = *(ulong *)(this + 4);
  local_34 = 0;
  iVar4 = uVar1 * 0xc;
  uVar3 = uVar1;
  do {
    uVar3 = uVar3 - 1;
    iVar4 = iVar4 + -0xc;
    if (uVar1 == local_34) break;
    *(ulong *)(**(int **)this + 4) = uVar3;
    bVar2 = (*param_1)((Array *)this,uVar3,(MessageCenterTracker *)(iVar4 + **(int **)this + 8),
                       param_2);
    *(undefined4 *)(**(int **)this + 4) = 0;
    local_34 = local_34 + 1;
  } while (bVar2);
  HandleLocker::~HandleLocker(local_24);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::ReceiveMessageIf(MM::IOServiceGoneDeadMessage
// const&, MM::MessageCenter<MM::IOServiceGoneDeadMessage>*, unsigned long long, unsigned long long)

void MM::MessageRecipient<>::ReceiveMessageIf
               (IOServiceGoneDeadMessage *param_1,MessageCenter *param_2,ulonglong param_3,
               ulonglong param_4)

{
  uint in_stack_0000001c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  
  local_20 = (undefined4)param_3;
  local_28 = 0;
  local_24 = 0;
  Array<>::ForEach((Array<> *)(param_1 + 4),
                   (_func_bool_Array_ptr_ulong_MessageCenterTracker_ptr_ulong *)
                   PTR_FindTrackerByCenter_00015050,(ulong)&local_28);
  if ((in_stack_0000001c <= local_24) &&
     ((local_24 != in_stack_0000001c || (param_4._4_4_ <= local_28)))) {
    (**(code **)(*(int *)param_1 + 0x14))(param_1,param_2);
    local_28 = param_3._4_4_;
    local_24 = (undefined4)param_4;
    Array<>::ForEach((Array<> *)(param_1 + 4),
                     (_func_bool_Array_ptr_ulong_MessageCenterTracker_ptr_ulong *)
                     PTR_SetTrackerIDByCenter_00015048,(ulong)&local_28);
  }
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::CloneStorageIfNecessary()

void __thiscall MM::Array<>::CloneStorageIfNecessary(Array<> *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  HandleLocker local_2c [8];
  HandleLocker local_24 [20];
  
  if (*(int *)**(char ***)this != 0) {
    pcVar3 = (code *)DeduceHandleAllocator(*(char ***)this);
    piVar4 = (int *)(*pcVar3)(8,0);
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_24,*(void **)this);
      HandleLocker::HandleLocker(local_2c,piVar4);
      iVar6 = *(int *)(this + 4) + -1;
      iVar5 = iVar6 * 0xc;
      do {
        iVar6 = iVar6 + -1;
        iVar1 = *piVar4;
        iVar2 = **(int **)this;
        *(undefined4 *)(iVar5 + 8 + iVar1) = *(undefined4 *)(iVar5 + 8 + iVar2);
        *(undefined4 *)(iVar5 + 0xc + iVar1) = *(undefined4 *)(iVar5 + 0xc + iVar2);
        *(undefined4 *)(iVar5 + 0x10 + iVar1) = *(undefined4 *)(iVar5 + 0x10 + iVar2);
        iVar5 = iVar5 + -0xc;
      } while (iVar6 != -1);
      HandleLocker::~HandleLocker(local_2c);
      HandleLocker::~HandleLocker(local_24);
    }
    *(undefined4 *)*piVar4 = 0;
    *(undefined4 *)(*piVar4 + 4) = 0;
    *(int **)this = piVar4;
  }
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::Delete(unsigned
// long)

void __thiscall MM::Array<>::Delete(Array<> *this,ulong param_1)

{
  short sVar1;
  HandleLocker local_24 [20];
  
  CloneStorageIfNecessary(this);
  HandleLocker::HandleLocker(local_24,*(void **)this);
  sVar1 = _Munger(*(undefined4 *)this,param_1 * 0xc + 8,0,0xc,0,0);
  if (0 < sVar1) {
    sVar1 = 0;
  }
  ThrowIfErrorFunc((int)sVar1);
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  HandleLocker::~HandleLocker(local_24);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::ForgetMessageCenter(MM::MessageCenter<MM::IOServiceGoneDeadMessage>
// const*)

void __thiscall
MM::MessageRecipient<>::ForgetMessageCenter(MessageRecipient<> *this,MessageCenter *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  MessageCenter *local_34;
  undefined4 local_28;
  undefined4 local_24;
  MessageCenter *local_20;
  
  uVar3 = 0;
  uVar1 = *(ulong *)(this + 8);
  uVar2 = uVar1;
  do {
    uVar2 = uVar2 - 1;
    if (uVar1 == uVar3) {
      return;
    }
    uVar3 = uVar3 + 1;
    Array<>::operator[]((ulong)&local_3c);
    local_28 = local_3c;
    local_24 = local_38;
    local_20 = local_34;
  } while (local_34 != param_1);
  Array<>::Delete((Array<> *)(this + 4),uVar2);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::FindTrackerByCenter(MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>&,
// unsigned long, MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker&,
// unsigned long)

bool MM::MessageRecipient<>::FindTrackerByCenter
               (Array *param_1,ulong param_2,MessageCenterTracker *param_3,ulong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_4 + 8) != *(int *)(param_3 + 8);
  if (!bVar2) {
    uVar1 = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)param_4 = *(undefined4 *)param_3;
    *(undefined4 *)(param_4 + 4) = uVar1;
  }
  return bVar2;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::SetTrackerIDByCenter(MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>&,
// unsigned long, MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker&,
// unsigned long)

bool MM::MessageRecipient<>::SetTrackerIDByCenter
               (Array *param_1,ulong param_2,MessageCenterTracker *param_3,ulong param_4)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_4 + 8) != *(int *)(param_3 + 8);
  if (!bVar2) {
    uVar1 = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)param_3 = *(undefined4 *)param_4;
    *(undefined4 *)(param_3 + 4) = uVar1;
  }
  return bVar2;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::~Array()

void __thiscall MM::Array<>::~Array(Array<> *this)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  HandleLocker local_14 [8];
  
  puVar3 = *(undefined4 **)this;
  iVar1 = *(int *)*puVar3;
  if (iVar1 == 0) {
    if (*(int *)(this + 4) != 0) {
      HandleLocker::HandleLocker(local_14,puVar3);
      iVar1 = *(int *)(this + 4);
      for (iVar2 = 0; iVar1 != iVar2; iVar2 = iVar2 + 1) {
        *(int *)(this + 4) = *(int *)(this + 4) + -1;
      }
      HandleLocker::~HandleLocker(local_14);
      puVar3 = *(undefined4 **)this;
    }
    _DisposeHandle(puVar3);
    *(undefined4 *)this = 0x68f168f1;
  }
  else {
    *(int *)*puVar3 = iVar1 + -1;
  }
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::~MessageRecipient()

void __thiscall MM::MessageRecipient<>::~MessageRecipient(MessageRecipient<> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  
  *(undefined **)this = PTR_vtable_00015044 + 8;
  iVar1 = *(int *)(this + 8);
  iVar2 = iVar1;
  for (iVar3 = 0; iVar2 = iVar2 + -1, iVar1 != iVar3; iVar3 = iVar3 + 1) {
    iVar4 = iVar2;
    Array<>::operator[]((ulong)&local_3c);
    local_28 = local_3c;
    local_24 = local_38;
    local_20 = local_34;
    (**(code **)(*local_34 + 0xc))(local_34,this,iVar4);
  }
  Array<>::~Array((Array<> *)(this + 4));
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient()

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
          (IOServiceGoneDeadMessageRecipient *this)

{
  *(undefined **)this = PTR_vtable_0001504c + 8;
  MessageRecipient<>::~MessageRecipient((MessageRecipient<> *)this);
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient()

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
          (IOServiceGoneDeadMessageRecipient *this)

{
  ~IOServiceGoneDeadMessageRecipient(this);
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient()

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::~IOServiceGoneDeadMessageRecipient
          (IOServiceGoneDeadMessageRecipient *this)

{
  *(undefined **)this = PTR_vtable_0001504c + 8;
  MessageRecipient<>::~MessageRecipient((MessageRecipient<> *)this);
  operator_delete(this);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::~MessageRecipient()

void __thiscall MM::MessageRecipient<>::~MessageRecipient(MessageRecipient<> *this)

{
  ~MessageRecipient(this);
  return;
}



// MM::Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>::Append(MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker
// const&)

int __thiscall MM::Array<>::Append(Array<> *this,MessageCenterTracker *param_1)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  HandleLocker local_24 [20];
  
  CloneStorageIfNecessary(this);
  _SetHandleSize(*(undefined4 *)this,*(int *)(this + 4) * 0xc + 0x14);
  sVar2 = _MemError();
  ThrowIfErrorFunc((int)sVar2);
  HandleLocker::HandleLocker(local_24,*(void **)this);
  iVar3 = *(int *)(this + 4);
  puVar1 = (undefined4 *)(**(int **)this + 8 + iVar3 * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)param_1;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    puVar1[2] = *(undefined4 *)(param_1 + 8);
    iVar3 = *(int *)(this + 4);
  }
  *(int *)(this + 4) = iVar3 + 1;
  HandleLocker::~HandleLocker(local_24);
  return iVar3;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::RememberMessageCenter(MM::MessageCenter<MM::IOServiceGoneDeadMessage>*)

void __thiscall
MM::MessageRecipient<>::RememberMessageCenter(MessageRecipient<> *this,MessageCenter *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  MessageCenter *local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = param_1;
  Array<>::Append((Array<> *)(this + 4),(MessageCenterTracker *)&local_18);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageRecipient()

void __thiscall MM::MessageRecipient<>::MessageRecipient(MessageRecipient<> *this)

{
  undefined4 uVar1;
  
  *(undefined **)this = PTR_vtable_00015044 + 8;
  uVar1 = NewHandleInDefaultHeap(8,true);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}



// MM::IOServiceGoneDeadMessageRecipient::IOServiceGoneDeadMessageRecipient(unsigned int,
// MM::MessageCenter<MM::IOServiceGoneDeadMessage>&)

void __thiscall
MM::IOServiceGoneDeadMessageRecipient::IOServiceGoneDeadMessageRecipient
          (IOServiceGoneDeadMessageRecipient *this,uint param_1,MessageCenter *param_2)

{
  MessageRecipient<>::MessageRecipient((MessageRecipient<> *)this);
  *(undefined **)this = PTR_vtable_0001504c + 8;
  *(uint *)(this + 0xc) = param_1;
  (**(code **)(*(int *)param_2 + 8))(param_2,this);
  return;
}



// MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::~MessageRecipient()

void __thiscall MM::MessageRecipient<>::~MessageRecipient(MessageRecipient<> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_3c;
  undefined4 local_38;
  int *local_34;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  
  *(undefined **)this = PTR_vtable_00015044 + 8;
  iVar1 = *(int *)(this + 8);
  iVar2 = iVar1;
  for (iVar3 = 0; iVar2 = iVar2 + -1, iVar1 != iVar3; iVar3 = iVar3 + 1) {
    iVar4 = iVar2;
    Array<>::operator[]((ulong)&local_3c);
    local_28 = local_3c;
    local_24 = local_38;
    local_20 = local_34;
    (**(code **)(*local_34 + 0xc))(local_34,this,iVar4);
  }
  Array<>::~Array((Array<> *)(this + 4));
  operator_delete(this);
  return;
}



// MM::CoreFoundationLocalMessagePort::CallCFMessagePortCreateLocal(MM::CoreFoundationLocalMessagePort*,
// __CFString const*, __CFAllocator const*)

void MM::CoreFoundationLocalMessagePort::CallCFMessagePortCreateLocal
               (CoreFoundationLocalMessagePort *param_1,__CFString *param_2,__CFAllocator *param_3)

{
  undefined4 local_24;
  CoreFoundationLocalMessagePort *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d [9];
  
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_20 = param_1;
  local_14 = 0;
  local_d[0] = 0;
  _CFMessagePortCreateLocal(param_3,param_2,PortListener,&local_24,local_d);
  return;
}



// MM::CoreFoundationLocalMessagePort::PortListener(__CFMessagePort*, long, __CFData const*, void*)

void MM::CoreFoundationLocalMessagePort::PortListener
               (__CFMessagePort *param_1,long param_2,__CFData *param_3,void *param_4)

{
  (**(code **)(*(int *)param_4 + 8))(param_4,param_2,param_3);
  return;
}



// MM::CoreFoundationLocalMessagePort::CoreFoundationLocalMessagePort(__CFString const*,
// __CFAllocator const*)

void __thiscall
MM::CoreFoundationLocalMessagePort::CoreFoundationLocalMessagePort
          (CoreFoundationLocalMessagePort *this,__CFString *param_1,__CFAllocator *param_2)

{
  __CFMessagePort *p_Var1;
  
  p_Var1 = (__CFMessagePort *)CallCFMessagePortCreateLocal(this,param_1,param_2);
  CoreFoundationMessagePort::CoreFoundationMessagePort
            ((CoreFoundationMessagePort *)this,p_Var1,true,false);
  *(undefined **)this = PTR_vtable_00015054 + 8;
  return;
}



// MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort(__CFString const*,
// __CFAllocator const*)

void __thiscall
MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort
          (CoreFoundationRemoteMessagePort *this,__CFString *param_1,__CFAllocator *param_2)

{
  __CFMessagePort *p_Var1;
  
  p_Var1 = (__CFMessagePort *)_CFMessagePortCreateRemote(param_2,param_1);
  CoreFoundationMessagePort::CoreFoundationMessagePort
            ((CoreFoundationMessagePort *)this,p_Var1,true,true);
  *(undefined **)this = PTR_vtable_00015060 + 8;
  return;
}



// MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort(__CFString const*,
// __CFAllocator const*)

void __thiscall
MM::CoreFoundationRemoteMessagePort::CoreFoundationRemoteMessagePort
          (CoreFoundationRemoteMessagePort *this,__CFString *param_1,__CFAllocator *param_2)

{
  CoreFoundationRemoteMessagePort(this,param_1,param_2);
  return;
}



// MM::SystemWrapper<__CFMessagePort*>::SystemWrapper(__CFMessagePort* const&)

void __thiscall MM::SystemWrapper<>::SystemWrapper(SystemWrapper<> *this,__CFMessagePort **param_1)

{
  *(__CFMessagePort **)this = *param_1;
  return;
}



// MM::CoreFoundationWrapper<__CFMessagePort*>::CoreFoundationWrapper(__CFMessagePort*, bool, bool)

void __thiscall
MM::CoreFoundationWrapper<>::CoreFoundationWrapper
          (CoreFoundationWrapper<> *this,__CFMessagePort *param_1,bool param_2,bool param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined3 in_stack_0000000d;
  
  bVar3 = param_3;
  bVar2 = param_2;
  SystemWrapper<>::SystemWrapper((SystemWrapper<> *)(this + 4),&param_1);
  *(undefined **)this = PTR_vtable_0001505c + 8;
  this[8] = (CoreFoundationWrapper<>)bVar2;
  if ((*(int *)(this + 4) == 0) && (!bVar3)) {
    puVar4 = (undefined4 *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015014;
    *puVar4 = 0xffffeca0;
                    // WARNING: Subroutine does not return
    ___cxa_throw(puVar4,puVar1,0);
  }
  return;
}



// MM::CoreFoundationWrapper<__CFMessagePort*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_0001505c + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  return;
}



// MM::CoreFoundationMessagePort::CoreFoundationMessagePort(__CFMessagePort*, bool, bool)

void __thiscall
MM::CoreFoundationMessagePort::CoreFoundationMessagePort
          (CoreFoundationMessagePort *this,__CFMessagePort *param_1,bool param_2,bool param_3)

{
  CoreFoundationWrapper<>::CoreFoundationWrapper
            ((CoreFoundationWrapper<> *)this,param_1,param_2,param_3);
  *(undefined **)this = PTR_vtable_00015058 + 8;
  return;
}



// MM::CoreFoundationMessagePort::~CoreFoundationMessagePort()

void __thiscall
MM::CoreFoundationMessagePort::~CoreFoundationMessagePort(CoreFoundationMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015058 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationWrapper<__CFMessagePort*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  ~CoreFoundationWrapper(this);
  return;
}



// MM::CoreFoundationMessagePort::~CoreFoundationMessagePort()

void __thiscall
MM::CoreFoundationMessagePort::~CoreFoundationMessagePort(CoreFoundationMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015058 + 8;
  CoreFoundationWrapper<>::~CoreFoundationWrapper((CoreFoundationWrapper<> *)this);
  return;
}



// MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort()

void __thiscall
MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort
          (CoreFoundationLocalMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015054 + 8;
  CoreFoundationMessagePort::~CoreFoundationMessagePort((CoreFoundationMessagePort *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort()

void __thiscall
MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort
          (CoreFoundationLocalMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015054 + 8;
  CoreFoundationMessagePort::~CoreFoundationMessagePort((CoreFoundationMessagePort *)this);
  return;
}



// MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort()

void __thiscall
MM::CoreFoundationLocalMessagePort::~CoreFoundationLocalMessagePort
          (CoreFoundationLocalMessagePort *this)

{
  ~CoreFoundationLocalMessagePort(this);
  return;
}



// MM::CoreFoundationMessagePort::~CoreFoundationMessagePort()

void __thiscall
MM::CoreFoundationMessagePort::~CoreFoundationMessagePort(CoreFoundationMessagePort *this)

{
  ~CoreFoundationMessagePort(this);
  return;
}



// MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort()

void __thiscall
MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort
          (CoreFoundationRemoteMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015060 + 8;
  CoreFoundationMessagePort::~CoreFoundationMessagePort((CoreFoundationMessagePort *)this);
  operator_delete(this);
  return;
}



// MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort()

void __thiscall
MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort
          (CoreFoundationRemoteMessagePort *this)

{
  *(undefined **)this = PTR_vtable_00015060 + 8;
  CoreFoundationMessagePort::~CoreFoundationMessagePort((CoreFoundationMessagePort *)this);
  return;
}



// MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort()

void __thiscall
MM::CoreFoundationRemoteMessagePort::~CoreFoundationRemoteMessagePort
          (CoreFoundationRemoteMessagePort *this)

{
  ~CoreFoundationRemoteMessagePort(this);
  return;
}



// MM::CoreFoundationWrapper<__CFMessagePort*>::~CoreFoundationWrapper()

void __thiscall MM::CoreFoundationWrapper<>::~CoreFoundationWrapper(CoreFoundationWrapper<> *this)

{
  *(undefined **)this = PTR_vtable_0001505c + 8;
  if ((this[8] != (CoreFoundationWrapper<>)0x0) && (*(int *)(this + 4) != 0)) {
    _CFRelease(*(int *)(this + 4));
  }
  operator_delete(this);
  return;
}



// MM::ThrowErrorFunc(int)

void __regparm3 MM::ThrowErrorFunc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  piVar2 = (int *)___cxa_allocate_exception(4);
  puVar1 = PTR_00015040;
  *piVar2 = param_1;
                    // WARNING: Subroutine does not return
  ___cxa_throw(piVar2,puVar1,0);
}



// MM::ThrowIfErrorFunc(int)

void __regparm3 MM::ThrowIfErrorFunc(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)___cxa_allocate_exception(4);
    puVar1 = PTR_00015040;
    *piVar2 = param_1;
                    // WARNING: Subroutine does not return
    ___cxa_throw(piVar2,puVar1,0);
  }
  return;
}



// MM::ThrowErrorFunc(long)

void __regparm3 MM::ThrowErrorFunc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)___cxa_allocate_exception(4);
  puVar1 = PTR_00015014;
  *plVar2 = param_1;
                    // WARNING: Subroutine does not return
  ___cxa_throw(plVar2,puVar1,0);
}



