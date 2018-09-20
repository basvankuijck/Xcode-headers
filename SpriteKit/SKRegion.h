//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class PKRegion;

@interface SKRegion : NSObject <NSCopying, NSSecureCoding>
{
    PKRegion *_region;
}

+ (id)infiniteRegion;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (BOOL)isEmpty;
- (BOOL)isInfinite;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithPath:(struct CGPath *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithRadius:(float)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToRegion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) const struct CGPath *path;

@end

