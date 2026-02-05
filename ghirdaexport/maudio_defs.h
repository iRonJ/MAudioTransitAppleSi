typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct thread_state_hdr thread_state_hdr, *Pthread_state_hdr;

struct thread_state_hdr {
    dword flavor;
    dword count;
};

typedef struct MM MM, *PMM;

struct MM { // PlaceHolder Class Structure
};

typedef struct cfstringStruct cfstringStruct, *PcfstringStruct;

struct cfstringStruct {
    dword field0_0x0;
    dword field1_0x4;
    pointer field2_0x8;
    int field3_0xc;
};

typedef struct SystemWrapper<__SCDynamicStore_const*> SystemWrapper<__SCDynamicStore_const*>, *PSystemWrapper<__SCDynamicStore_const*>;

struct SystemWrapper<__SCDynamicStore_const*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<IOUSBDeviceStruct187**> SystemWrapper<IOUSBDeviceStruct187**>, *PSystemWrapper<IOUSBDeviceStruct187**>;

struct SystemWrapper<IOUSBDeviceStruct187**> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFArray*> SystemWrapper<__CFArray*>, *PSystemWrapper<__CFArray*>;

struct SystemWrapper<__CFArray*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<unsigned_int> SystemWrapper<unsigned_int>, *PSystemWrapper<unsigned_int>;

struct SystemWrapper<unsigned_int> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<IONotificationPort*> SystemWrapper<IONotificationPort*>, *PSystemWrapper<IONotificationPort*>;

struct SystemWrapper<IONotificationPort*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<IOUSBInterfaceStruct183**> SystemWrapper<IOUSBInterfaceStruct183**>, *PSystemWrapper<IOUSBInterfaceStruct183**>;

struct SystemWrapper<IOUSBInterfaceStruct183**> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFRunLoop*> SystemWrapper<__CFRunLoop*>, *PSystemWrapper<__CFRunLoop*>;

struct SystemWrapper<__CFRunLoop*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFRunLoopSource*> SystemWrapper<__CFRunLoopSource*>, *PSystemWrapper<__CFRunLoopSource*>;

struct SystemWrapper<__CFRunLoopSource*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFData_const*> SystemWrapper<__CFData_const*>, *PSystemWrapper<__CFData_const*>;

struct SystemWrapper<__CFData_const*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFDictionary*> SystemWrapper<__CFDictionary*>, *PSystemWrapper<__CFDictionary*>;

struct SystemWrapper<__CFDictionary*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFString_const*> SystemWrapper<__CFString_const*>, *PSystemWrapper<__CFString_const*>;

struct SystemWrapper<__CFString_const*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<IOCFPlugInInterfaceStruct**> SystemWrapper<IOCFPlugInInterfaceStruct**>, *PSystemWrapper<IOCFPlugInInterfaceStruct**>;

struct SystemWrapper<IOCFPlugInInterfaceStruct**> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<__CFMessagePort*> SystemWrapper<__CFMessagePort*>, *PSystemWrapper<__CFMessagePort*>;

struct SystemWrapper<__CFMessagePort*> { // PlaceHolder Class Structure
};

typedef struct SystemWrapper<void_const*> SystemWrapper<void_const*>, *PSystemWrapper<void_const*>;

struct SystemWrapper<void_const*> { // PlaceHolder Class Structure
};

typedef ulonglong uint64_t;

typedef uint __darwin_natural_t;

typedef __darwin_natural_t __darwin_mach_port_name_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef long __darwin_time_t;

typedef ulong __darwin_size_t;

typedef __darwin_mach_port_name_t __darwin_mach_port_t;

typedef struct timespec timespec, *Ptimespec;

struct timespec {
    __darwin_time_t tv_sec;
    long tv_nsec;
};

typedef ulong uintptr_t;

typedef __darwin_size_t size_t;

typedef int kern_return_t;

typedef __darwin_natural_t natural_t;

typedef natural_t mach_port_name_t;

typedef natural_t mach_port_right_t;

typedef natural_t mach_port_urefs_t;

typedef uint uint32_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar *_base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar *_p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void *_cookie;
    int (*_close)(void *);
    int (*_read)(void *, char *, int);
    fpos_t (*_seek)(void *, fpos_t, int);
    int (*_write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX *_extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef __darwin_mach_port_t mach_port_t;

typedef mach_port_t ipc_space_t;

typedef struct _Unwind_Exception _Unwind_Exception, *P_Unwind_Exception;

typedef enum enum_4370 {
    _URC_NO_REASON=0,
    _URC_FOREIGN_EXCEPTION_CAUGHT=1,
    _URC_FATAL_PHASE2_ERROR=2,
    _URC_FATAL_PHASE1_ERROR=3,
    _URC_NORMAL_STOP=4,
    _URC_END_OF_STACK=5,
    _URC_HANDLER_FOUND=6,
    _URC_INSTALL_CONTEXT=7,
    _URC_CONTINUE_UNWIND=8
} enum_4370;

typedef enum enum_4370 _Unwind_Reason_Code;

struct _Unwind_Exception {
    uint64_t exception_class;
    void (*exception_cleanup)(_Unwind_Reason_Code, struct _Unwind_Exception *);
    uintptr_t private_1;
    uintptr_t private_2;
    uint32_t reserved[3];
};

typedef struct FSSpec FSSpec, *PFSSpec;

struct FSSpec { // PlaceHolder Structure
};

typedef struct __CFRunLoop __CFRunLoop, *P__CFRunLoop;

struct __CFRunLoop { // PlaceHolder Structure
};

typedef struct __CFRunLoopSource __CFRunLoopSource, *P__CFRunLoopSource;

struct __CFRunLoopSource { // PlaceHolder Structure
};

typedef struct IONotificationPort IONotificationPort, *PIONotificationPort;

struct IONotificationPort { // PlaceHolder Structure
};

typedef struct FSRef FSRef, *PFSRef;

struct FSRef { // PlaceHolder Structure
};

typedef struct __CFMessagePort __CFMessagePort, *P__CFMessagePort;

struct __CFMessagePort { // PlaceHolder Structure
};

typedef struct __CFArray __CFArray, *P__CFArray;

struct __CFArray { // PlaceHolder Structure
};

typedef struct FirmwareLoader_DFU_AppMode FirmwareLoader_DFU_AppMode, *PFirmwareLoader_DFU_AppMode;

struct FirmwareLoader_DFU_AppMode { // PlaceHolder Structure
};

typedef struct ErrorQueueHeader ErrorQueueHeader, *PErrorQueueHeader;

struct ErrorQueueHeader { // PlaceHolder Structure
};

typedef struct DynamicStoreKeyConsoleUser DynamicStoreKeyConsoleUser, *PDynamicStoreKeyConsoleUser;

struct DynamicStoreKeyConsoleUser { // PlaceHolder Structure
};

typedef struct __CFAllocator __CFAllocator, *P__CFAllocator;

struct __CFAllocator { // PlaceHolder Structure
};

typedef struct __CFDictionary __CFDictionary, *P__CFDictionary;

struct __CFDictionary { // PlaceHolder Structure
};

typedef struct ErrorQueue ErrorQueue, *PErrorQueue;

struct ErrorQueue { // PlaceHolder Structure
};

typedef struct IOUSBInterfaceStruct183 IOUSBInterfaceStruct183, *PIOUSBInterfaceStruct183;

struct IOUSBInterfaceStruct183 { // PlaceHolder Structure
};

typedef struct IOCFPlugInInterfaceStruct IOCFPlugInInterfaceStruct, *PIOCFPlugInInterfaceStruct;

struct IOCFPlugInInterfaceStruct { // PlaceHolder Structure
};

typedef struct IOUSBDeviceStruct187 IOUSBDeviceStruct187, *PIOUSBDeviceStruct187;

struct IOUSBDeviceStruct187 { // PlaceHolder Structure
};

typedef struct __CFString __CFString, *P__CFString;

struct __CFString { // PlaceHolder Structure
};

typedef struct NumVersion NumVersion, *PNumVersion;

struct NumVersion { // PlaceHolder Structure
};

typedef struct __CFUUID __CFUUID, *P__CFUUID;

struct __CFUUID { // PlaceHolder Structure
};

typedef struct IOUSBFindInterfaceRequest IOUSBFindInterfaceRequest, *PIOUSBFindInterfaceRequest;

struct IOUSBFindInterfaceRequest { // PlaceHolder Structure
};

typedef undefined signed;

typedef struct SCDynamicStore SCDynamicStore, *PSCDynamicStore;

struct SCDynamicStore { // PlaceHolder Structure
};

typedef struct FirmwareLoader_DFU FirmwareLoader_DFU, *PFirmwareLoader_DFU;

struct FirmwareLoader_DFU { // PlaceHolder Structure
};

typedef struct __SCDynamicStore __SCDynamicStore, *P__SCDynamicStore;

struct __SCDynamicStore { // PlaceHolder Structure
};

typedef struct FirmwareLoaderImplementation FirmwareLoaderImplementation, *PFirmwareLoaderImplementation;

struct FirmwareLoaderImplementation { // PlaceHolder Structure
};

typedef struct __CFData __CFData, *P__CFData;

struct __CFData { // PlaceHolder Structure
};

typedef struct FirmwareLoaderLocalMessagePort FirmwareLoaderLocalMessagePort, *PFirmwareLoaderLocalMessagePort;

struct FirmwareLoaderLocalMessagePort { // PlaceHolder Structure
};

typedef struct PowerCycleDynamicStore PowerCycleDynamicStore, *PPowerCycleDynamicStore;

struct PowerCycleDynamicStore { // PlaceHolder Structure
};

typedef struct FirstMatchingNotification FirstMatchingNotification, *PFirstMatchingNotification;

struct FirstMatchingNotification { // PlaceHolder Structure
};

typedef struct FirmwareLoader_Cypress FirmwareLoader_Cypress, *PFirmwareLoader_Cypress;

struct FirmwareLoader_Cypress { // PlaceHolder Structure
};

typedef struct FirmwareLoaderApp FirmwareLoaderApp, *PFirmwareLoaderApp;

struct FirmwareLoaderApp { // PlaceHolder Structure
};

typedef struct CoreFoundationLocalMessagePort CoreFoundationLocalMessagePort, *PCoreFoundationLocalMessagePort;

struct CoreFoundationLocalMessagePort { // PlaceHolder Structure
};

typedef struct ServiceInterface<IOUSBInterfaceStruct183> ServiceInterface<IOUSBInterfaceStruct183>, *PServiceInterface<IOUSBInterfaceStruct183>;

struct ServiceInterface<IOUSBInterfaceStruct183> { // PlaceHolder Structure
};

typedef struct RefCounter RefCounter, *PRefCounter;

struct RefCounter { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFArray*> CoreFoundationWrapper<__CFArray*>, *PCoreFoundationWrapper<__CFArray*>;

struct CoreFoundationWrapper<__CFArray*> { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFDictionary*> CoreFoundationWrapper<__CFDictionary*>, *PCoreFoundationWrapper<__CFDictionary*>;

struct CoreFoundationWrapper<__CFDictionary*> { // PlaceHolder Structure
};

typedef struct MessageRecipient<MM::IOServiceGoneDeadMessage> MessageRecipient<MM::IOServiceGoneDeadMessage>, *PMessageRecipient<MM::IOServiceGoneDeadMessage>;

struct MessageRecipient<MM::IOServiceGoneDeadMessage> { // PlaceHolder Structure
};

typedef struct IOServiceGoneDeadMessageRecipient IOServiceGoneDeadMessageRecipient, *PIOServiceGoneDeadMessageRecipient;

struct IOServiceGoneDeadMessageRecipient { // PlaceHolder Structure
};

typedef struct FileStream FileStream, *PFileStream;

struct FileStream { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFMessagePort*> CoreFoundationWrapper<__CFMessagePort*>, *PCoreFoundationWrapper<__CFMessagePort*>;

struct CoreFoundationWrapper<__CFMessagePort*> { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFString_const*> CoreFoundationWrapper<__CFString_const*>, *PCoreFoundationWrapper<__CFString_const*>;

struct CoreFoundationWrapper<__CFString_const*> { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFData_const*> CoreFoundationWrapper<__CFData_const*>, *PCoreFoundationWrapper<__CFData_const*>;

struct CoreFoundationWrapper<__CFData_const*> { // PlaceHolder Structure
};

typedef struct String String, *PString;

struct String { // PlaceHolder Structure
};

typedef struct SmartPtr SmartPtr, *PSmartPtr;

struct SmartPtr { // PlaceHolder Structure
};

typedef struct MessageCenter<MM::RunLoopSourceMessage> MessageCenter<MM::RunLoopSourceMessage>, *PMessageCenter<MM::RunLoopSourceMessage>;

struct MessageCenter<MM::RunLoopSourceMessage> { // PlaceHolder Structure
};

typedef struct RunLoopSource RunLoopSource, *PRunLoopSource;

struct RunLoopSource { // PlaceHolder Structure
};

typedef struct RunLoopSourceMessage RunLoopSourceMessage, *PRunLoopSourceMessage;

struct RunLoopSourceMessage { // PlaceHolder Structure
};

typedef struct CoreFoundationString CoreFoundationString, *PCoreFoundationString;

struct CoreFoundationString { // PlaceHolder Structure
};

typedef struct Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker> Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>, *PArray<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker>;

struct Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>::MessageCenterTracker> { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<void_const*> CoreFoundationWrapper<void_const*>, *PCoreFoundationWrapper<void_const*>;

struct CoreFoundationWrapper<void_const*> { // PlaceHolder Structure
};

typedef struct IOObject IOObject, *PIOObject;

struct IOObject { // PlaceHolder Structure
};

typedef struct RegistryEntryProperty RegistryEntryProperty, *PRegistryEntryProperty;

struct RegistryEntryProperty { // PlaceHolder Structure
};

typedef struct Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*> Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*>, *PArray<MM::MessageRecipient<MM::RunLoopSourceMessage>*>;

struct Array<MM::MessageRecipient<MM::RunLoopSourceMessage>*> { // PlaceHolder Structure
};

typedef struct IOServiceGoneDeadMessage IOServiceGoneDeadMessage, *PIOServiceGoneDeadMessage;

struct IOServiceGoneDeadMessage { // PlaceHolder Structure
};

typedef struct ResourceMap ResourceMap, *PResourceMap;

struct ResourceMap { // PlaceHolder Structure
};

typedef struct MessageCenter MessageCenter, *PMessageCenter;

struct MessageCenter { // PlaceHolder Structure
};

typedef struct RefCount RefCount, *PRefCount;

struct RefCount { // PlaceHolder Structure
};

typedef struct MessageRecipient MessageRecipient, *PMessageRecipient;

struct MessageRecipient { // PlaceHolder Structure
};

typedef struct RunLoop RunLoop, *PRunLoop;

struct RunLoop { // PlaceHolder Structure
};

typedef struct HandleLocker HandleLocker, *PHandleLocker;

struct HandleLocker { // PlaceHolder Structure
};

typedef struct Resource<char> Resource<char>, *PResource<char>;

struct Resource<char> { // PlaceHolder Structure
};

typedef struct MatchingNotification MatchingNotification, *PMatchingNotification;

struct MatchingNotification { // PlaceHolder Structure
};

typedef struct CoreFoundationMessagePort CoreFoundationMessagePort, *PCoreFoundationMessagePort;

struct CoreFoundationMessagePort { // PlaceHolder Structure
};

typedef struct RefCounter<MM::RefCount> RefCounter<MM::RefCount>, *PRefCounter<MM::RefCount>;

struct RefCounter<MM::RefCount> { // PlaceHolder Structure
};

typedef struct IOIterator IOIterator, *PIOIterator;

struct IOIterator { // PlaceHolder Structure
};

typedef struct IOService IOService, *PIOService;

struct IOService { // PlaceHolder Structure
};

typedef struct Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*> Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>, *PArray<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*>;

struct Array<MM::MessageRecipient<MM::IOServiceGoneDeadMessage>*> { // PlaceHolder Structure
};

typedef struct IOPort IOPort, *PIOPort;

struct IOPort { // PlaceHolder Structure
};

typedef struct CoreFoundationType CoreFoundationType, *PCoreFoundationType;

struct CoreFoundationType { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFRunLoopSource*> CoreFoundationWrapper<__CFRunLoopSource*>, *PCoreFoundationWrapper<__CFRunLoopSource*>;

struct CoreFoundationWrapper<__CFRunLoopSource*> { // PlaceHolder Structure
};

typedef struct MessageCenter<MM::IOServiceGoneDeadMessage> MessageCenter<MM::IOServiceGoneDeadMessage>, *PMessageCenter<MM::IOServiceGoneDeadMessage>;

struct MessageCenter<MM::IOServiceGoneDeadMessage> { // PlaceHolder Structure
};

typedef struct ServicePlugInInterface ServicePlugInInterface, *PServicePlugInInterface;

struct ServicePlugInInterface { // PlaceHolder Structure
};

typedef struct CoreFoundationMutableDictionary CoreFoundationMutableDictionary, *PCoreFoundationMutableDictionary;

struct CoreFoundationMutableDictionary { // PlaceHolder Structure
};

typedef struct MatchingServiceDictionary MatchingServiceDictionary, *PMatchingServiceDictionary;

struct MatchingServiceDictionary { // PlaceHolder Structure
};

typedef struct MasterPort MasterPort, *PMasterPort;

struct MasterPort { // PlaceHolder Structure
};

typedef struct RunLoopAndSource RunLoopAndSource, *PRunLoopAndSource;

struct RunLoopAndSource { // PlaceHolder Structure
};

typedef struct ServiceInterface<IOUSBDeviceStruct187> ServiceInterface<IOUSBDeviceStruct187>, *PServiceInterface<IOUSBDeviceStruct187>;

struct ServiceInterface<IOUSBDeviceStruct187> { // PlaceHolder Structure
};

typedef struct CoreFoundationMutableArray CoreFoundationMutableArray, *PCoreFoundationMutableArray;

struct CoreFoundationMutableArray { // PlaceHolder Structure
};

typedef struct CoreFoundationData CoreFoundationData, *PCoreFoundationData;

struct CoreFoundationData { // PlaceHolder Structure
};

typedef struct Array Array, *PArray;

struct Array { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__SCDynamicStore_const*> CoreFoundationWrapper<__SCDynamicStore_const*>, *PCoreFoundationWrapper<__SCDynamicStore_const*>;

struct CoreFoundationWrapper<__SCDynamicStore_const*> { // PlaceHolder Structure
};

typedef struct IOCFPlugInInterfaceWrapper IOCFPlugInInterfaceWrapper, *PIOCFPlugInInterfaceWrapper;

struct IOCFPlugInInterfaceWrapper { // PlaceHolder Structure
};

typedef struct CoreFoundationWrapper<__CFRunLoop*> CoreFoundationWrapper<__CFRunLoop*>, *PCoreFoundationWrapper<__CFRunLoop*>;

struct CoreFoundationWrapper<__CFRunLoop*> { // PlaceHolder Structure
};

typedef struct CoreFoundationRemoteMessagePort CoreFoundationRemoteMessagePort, *PCoreFoundationRemoteMessagePort;

struct CoreFoundationRemoteMessagePort { // PlaceHolder Structure
};

typedef struct NotificationPort NotificationPort, *PNotificationPort;

struct NotificationPort { // PlaceHolder Structure
};

typedef struct MessageCenterTracker MessageCenterTracker, *PMessageCenterTracker;

struct MessageCenterTracker { // PlaceHolder Structure
};

typedef struct CallBackMessage CallBackMessage, *PCallBackMessage;

struct CallBackMessage { // PlaceHolder Structure
};

typedef struct DFUFunctionalDescriptor1dot1 DFUFunctionalDescriptor1dot1, *PDFUFunctionalDescriptor1dot1;

struct DFUFunctionalDescriptor1dot1 { // PlaceHolder Structure
};

typedef undefined What;

typedef struct InterfaceInterface InterfaceInterface, *PInterfaceInterface;

struct InterfaceInterface { // PlaceHolder Structure
};

typedef struct OpenDevice OpenDevice, *POpenDevice;

struct OpenDevice { // PlaceHolder Structure
};

typedef struct USBInterfaceIterator USBInterfaceIterator, *PUSBInterfaceIterator;

struct USBInterfaceIterator { // PlaceHolder Structure
};

typedef struct DeviceInterface DeviceInterface, *PDeviceInterface;

struct DeviceInterface { // PlaceHolder Structure
};

typedef struct allocator allocator, *Pallocator;

struct allocator { // PlaceHolder Structure
};

typedef struct vector<void_const*,std::allocator<void_const*>> vector<void_const*,std::allocator<void_const*>>, *Pvector<void_const*,std::allocator<void_const*>>;

struct vector<void_const*,std::allocator<void_const*>> { // PlaceHolder Structure
};

typedef struct _Vector_base<void_const*,std::allocator<void_const*>> _Vector_base<void_const*,std::allocator<void_const*>>, *P_Vector_base<void_const*,std::allocator<void_const*>>;

struct _Vector_base<void_const*,std::allocator<void_const*>> { // PlaceHolder Structure
};

typedef struct allocator<unsigned_char> allocator<unsigned_char>, *Pallocator<unsigned_char>;

struct allocator<unsigned_char> { // PlaceHolder Structure
};

typedef struct vector<unsigned_char,std::allocator<unsigned_char>> vector<unsigned_char,std::allocator<unsigned_char>>, *Pvector<unsigned_char,std::allocator<unsigned_char>>;

struct vector<unsigned_char,std::allocator<unsigned_char>> { // PlaceHolder Structure
};

typedef struct _Vector_base<unsigned_char,std::allocator<unsigned_char>> _Vector_base<unsigned_char,std::allocator<unsigned_char>>, *P_Vector_base<unsigned_char,std::allocator<unsigned_char>>;

struct _Vector_base<unsigned_char,std::allocator<unsigned_char>> { // PlaceHolder Structure
};

typedef struct allocator<void_const*> allocator<void_const*>, *Pallocator<void_const*>;

struct allocator<void_const*> { // PlaceHolder Structure
};

typedef struct _Vector_impl _Vector_impl, *P_Vector_impl;

struct _Vector_impl { // PlaceHolder Structure
};

typedef struct __normal_iterator __normal_iterator, *P__normal_iterator;

struct __normal_iterator { // PlaceHolder Structure
};

typedef undefined difference_type;

typedef struct new_allocator<void_const*> new_allocator<void_const*>, *Pnew_allocator<void_const*>;

struct new_allocator<void_const*> { // PlaceHolder Class Structure
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct thread_command thread_command, *Pthread_command;

typedef struct x86_THREAD_STATE32 x86_THREAD_STATE32, *Px86_THREAD_STATE32;

struct x86_THREAD_STATE32 {
    dword eax;
    dword ebx;
    dword ecx;
    dword edx;
    dword edi;
    dword esi;
    dword ebp;
    dword esp;
    dword ss;
    dword eflags;
    dword eip;
    dword cs;
    dword ds;
    dword es;
    dword fs;
    dword gs;
};

struct thread_command {
    dword cmd;
    dword cmdsize;
    struct thread_state_hdr threadStateHeader;
    struct x86_THREAD_STATE32 threadState;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    dword addr;
    dword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
};

typedef struct nlist nlist, *Pnlist;

struct nlist {
    dword n_strx;
    byte n_type;
    byte n_sect;
    word n_desc;
    dword n_value;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    dword vmaddr;
    dword vmsize;
    dword fileoff;
    dword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
};

typedef struct dylinker_command dylinker_command, *Pdylinker_command;

struct dylinker_command {
    dword cmd;
    dword cmdsize;
    struct lc_str name;
};

typedef uchar *ConstStr255Param;



undefined4 kUSBInterfaceInterfaceUUID;
undefined4 kUSBDeviceInterfaceUUID;
undefined1 kUSBDeviceInterfaceUUID;
undefined *PTR_00015014;
undefined _gErrorQueue;
undefined *PTR_00015000;
undefined *PTR_00015008;
undefined *PTR_00015004;
undefined _NXArgc;
undefined _environ;
undefined _NXArgv;
undefined ___progname;
undefined DAT_00012004;
undefined _cxa_atexit_check_2;
undefined _cxa_atexit_check_1;
undefined _cxa_atexit_wrapper;
undefined *PTR_MACH_HEADER_0001500c;
pointer PTR_~SmartPtr_00012068;
undefined *PTR_vtable_0001501c;
pointer PTR_~String_00012088;
undefined *PTR_vtable_00015018;
pointer PTR_~HandleLocker_000120d0;
undefined NewHandleInDefaultHeap;
pointer PTR_operator.cast.to.__CFRunLoop*_00012148;
undefined *PTR_vtable_00015020;
undefined *PTR_vtable_00015028;
undefined *PTR_vtable_00015038;
undefined *PTR_vtable_0001502c;
undefined *PTR_vtable_00015034;
undefined *PTR_vtable_00015024;
pointer PTR_~RunLoopSource_000120e8;
undefined *PTR_~RunLoopSource_00012104;
pointer PTR_GetFSSpec_000121e8;
undefined *PTR_0001503c;
pointer PTR_~ResourceMap_00012210;
undefined *PTR_00015040;
pointer PTR_~OpenDevice_00012220;
undefined *PTR_FindTrackerByCenter_00015050;
undefined *PTR_SetTrackerIDByCenter_00015048;
undefined *PTR_vtable_00015044;
undefined *PTR_vtable_0001504c;
undefined PortListener;
undefined *PTR_vtable_00015054;
undefined *PTR_vtable_00015060;
undefined *PTR_vtable_0001505c;
undefined *PTR_vtable_00015058;
undefined *PTR_00015030;
pointer PTR_~FirmwareLoaderLocalMessagePort_00012308;
cfstringStruct cf_com.midiman.driver.usb.firmware.loader;
cfstringStruct cf_YourM-AudioUSBdevice'sfirmwarehasbeenupdated.Turnoffthedevice,waitfiveseconds,andturnthedeviceontousethenewfirmware.;
cfstringStruct cf_Firmwareupdatedsuccessfully.;
undefined1 _gFirmwareHasBeenUpdated;
cfstringStruct cf_idVendor;
undefined *PTR_000150c0;
undefined *PTR_00015064;
undefined *PTR_NotifyCallBack_000150b8;
undefined *PTR_CallBack_000150a4;
undefined *PTR_vtable_0001507c;
undefined *PTR_vtable_0001509c;
undefined *PTR_vtable_00015084;
undefined *PTR_vtable_00015094;
undefined *PTR_vtable_00015090;
undefined *PTR_vtable_00015070;
undefined *PTR_vtable_000150ac;
undefined *PTR_vtable_00015078;
pointer PTR_~PowerCycleDynamicStore_000122d8;
undefined *PTR_vtable_00015074;
undefined *PTR_vtable_00015068;
undefined *PTR_vtable_0001506c;
undefined *PTR_vtable_00015098;
undefined *PTR_vtable_000150b0;
undefined *PTR_vtable_00015080;
undefined *PTR_vtable_000150a8;
cfstringStruct cf_firmwareloaderpowercyclenotice;
undefined *PTR_000150a0;
undefined *PTR_vtable_00015088;
undefined *PTR_vtable_000150c4;
undefined *PTR_vtable_000150bc;
undefined *PTR_vtable_000150b4;
undefined *PTR_vtable_0001508c;
pointer PTR_Notify_000122f0;
cfstringStruct cf_bInterfaceNumber;
cfstringStruct cf_bcdDevice;
pointer PTR_IsFirmwareFileAvailable_000124c8;
undefined *PTR_vtable_000150cc;
undefined *PTR_vtable_000150c8;
pointer PTR_IsFirmwareFileAvailable_00012588;
pointer PTR_IsFirmwareFileAvailable_00012548;
pointer PTR_IsFirmwareFileAvailable_00012508;
undefined _gTable;
undefined ___tcf_0;
undefined1 center;
undefined *PTR_vtable_000150d0;

