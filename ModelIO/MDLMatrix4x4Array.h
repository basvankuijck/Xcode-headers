//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>

@interface MDLMatrix4x4Array : NSObject <NSCopying>
{
    struct VtValue _data;
    unsigned long long _elementCount;
}

@property(readonly, nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: getDouble4x4Array:maxCount:
-     // Error parsing type: Q32@0:8^{?=[4]}16Q24, name: getFloat4x4Array:maxCount:
-     // Error parsing type: v32@0:8r^{?=[4]}16Q24, name: setDouble4x4Array:count:
-     // Error parsing type: v32@0:8r^{?=[4]}16Q24, name: setFloat4x4Array:count:
- (id)initWithElementCount:(unsigned long long)arg1;
- (void)clear;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 time:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1;
- (struct VtValue)defaultVtValue;
@property(readonly, nonatomic) unsigned long long precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

