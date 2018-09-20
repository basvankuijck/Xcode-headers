//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;
@protocol SCNAvoidOccluderConstraintDelegate;

@interface SCNAvoidOccluderConstraint : SCNConstraint
{
    SCNNode *_target;
    unsigned long long _categoryBitMask;
    float _offset;
    id _delegate;
}

+ (BOOL)supportsSecureCoding;
+ (id)avoidOccluderConstraintWithTarget:(id)arg1;
+ (id)avoidOccluderConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1;
@property(nonatomic) double bias;
@property(nonatomic) unsigned long long occluderCategoryBitMask;
@property(retain, nonatomic) SCNNode *target;
@property(nonatomic) id <SCNAvoidOccluderConstraintDelegate> delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

