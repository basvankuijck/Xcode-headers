//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArrayBuilder {
    id _field1[62];
    id *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct CC_MD5state_st {
    unsigned int A;
    unsigned int B;
    unsigned int C;
    unsigned int D;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct CC_SHA256state_st {
    unsigned int count[2];
    unsigned int hash[8];
    unsigned int wbuf[16];
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct DVTBitSet {
    unsigned long long _field1;
    unsigned long long _field2[0];
};

struct DVTMacroNameLookupCursor {
    id _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
    struct DVTMacroValueAssignment *_field5;
    id _field6;
};

struct DVTMacroValueAssignment;

struct DVTMacroValueAssignmentMapTable {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
    void *_field6;
};

struct DVTNestedMacroExpansionState {
    id _field1;
    unsigned int _field2;
    struct DVTMacroNameLookupCursor _field3;
    id _field4;
    struct DVTNestedMacroExpansionState *_field5;
};

struct DVTStringBuilder {
    unsigned short _field1[512];
    unsigned short *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct NSSet {
    Class _field1;
};

struct UParseError {
    int _field1;
    int _field2;
    unsigned short _field3[16];
    unsigned short _field4[16];
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _DVTDiffContextFlags {
    unsigned int ignoresCase:1;
    unsigned int ignoresWhitespace:1;
    unsigned int ignoresLineEnds:1;
    unsigned int ignoresCommon:1;
    unsigned int RESERVED:28;
};

struct _DVTTextLineOffsetTable {
    unsigned long long capacity;
    unsigned long long count;
    unsigned long long *offsets;
    unsigned long long deferredAdjustmentIndex;
    long long deferredAdjustment;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*> *__next_;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct fastsimplearray {
    unsigned long long _field1;
    unsigned long long _field2;
    void **_field3;
};

struct fsid {
    int _field1[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_storage {
    unsigned char ss_len;
    unsigned char ss_family;
    char __ss_pad1[6];
    long long __ss_align;
    char __ss_pad2[112];
};

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct statfs {
    unsigned int _field1;
    int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    struct fsid _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    char _field13[16];
    char _field14[1024];
    char _field15[1024];
    unsigned int _field16[8];
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<DVTFuture *, long, (anonymous namespace)::objc_pointer_hasher, std::__1::equal_to<DVTFuture *>, std::__1::allocator<std::__1::pair<DVTFuture *const, long>>> {
    struct __hash_table<std::__1::__hash_value_type<DVTFuture *, long>, std::__1::__unordered_map_hasher<DVTFuture *, std::__1::__hash_value_type<DVTFuture *, long>, (anonymous namespace)::objc_pointer_hasher, true>, std::__1::__unordered_map_equal<DVTFuture *, std::__1::__hash_value_type<DVTFuture *, long>, std::__1::equal_to<DVTFuture *>, true>, std::__1::allocator<std::__1::__hash_value_type<DVTFuture *, long>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<DVTFuture *, long>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<DVTFuture *, std::__1::__hash_value_type<DVTFuture *, long>, (anonymous namespace)::objc_pointer_hasher, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<DVTFuture *, std::__1::__hash_value_type<DVTFuture *, long>, std::__1::equal_to<DVTFuture *>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<void (^)(DVTFutureState, id, NSError *), std::__1::allocator<void (^)(DVTFutureState, id, NSError *)>> {
    CDUnknownBlockType *__begin_;
    CDUnknownBlockType *__end_;
    struct __compressed_pair<void (^__strong *)(DVTFutureState, id, NSError *), std::__1::allocator<void (^)(DVTFutureState, id, NSError *)>> {
        CDUnknownBlockType *__value_;
    } __end_cap_;
};

struct vector<void (^)(long, signed char *), std::__1::allocator<void (^)(long, signed char *)>> {
    CDUnknownBlockType *__begin_;
    CDUnknownBlockType *__end_;
    struct __compressed_pair<void (^__strong *)(long, signed char *), std::__1::allocator<void (^)(long, signed char *)>> {
        CDUnknownBlockType *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    int tokenType;
    int tokenAltType;
    CDStruct_627e0f85 charRange;
    char *lexeme;
    int lexemeLength;
    int outOfBand;
} CDStruct_341fcc3f;

typedef struct {
    struct _NSRange range;
    unsigned long long hash;
    unsigned long long type;
} CDStruct_3dd9eb72;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;

