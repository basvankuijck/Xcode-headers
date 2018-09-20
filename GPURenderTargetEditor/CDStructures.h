//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSNumber, NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct DYRangeValue {
    double value;
    double range;
};

struct DrawCallStatistics {
    NSString *drawcallTypeName;
    NSNumber *maximum;
    NSArray *types;
    NSArray *total;
    NSArray *diffTotal;
    NSArray *base;
    NSArray *current;
    NSArray *apiItems;
};

struct GVOptimizeNode {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    unsigned long long _field5;
    struct GVOptimizeNode **_field6;
    unsigned long long _field7;
    struct GVOptimizeNode **_field8;
};

struct NSDictionary {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct vector<CGPoint, std::__1::allocator<CGPoint>> {
    struct CGPoint *__begin_;
    struct CGPoint *__end_;
    struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint>> {
        struct CGPoint *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

