//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@interface SCNTransformConstraint : SCNConstraint
{
}

+ (BOOL)supportsSecureCoding;
+ (id)orientationConstraintInWorldSpace:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)positionConstraintInWorldSpace:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)transformConstraintInWorldSpace:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initOrientationInWorldSpace:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initPositionInWorld:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initTransformInWorld:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

