//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNReplicatorConstraint : SCNConstraint
{
    SCNNode *_target;
    BOOL _replicateOrientation;
    BOOL _replicatePosition;
    BOOL _replicateScale;
    struct SCNVector4 _orientationOffset;
    struct SCNVector3 _positionOffset;
    struct SCNVector3 _scaleOffset;
}

+ (BOOL)supportsSecureCoding;
+ (id)replicatorConstraintWithTarget:(id)arg1;
+ (id)replicatorConstraint;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNReplicatorConstraint:(id)arg1;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)arg1;
@property(nonatomic) struct SCNVector3 scaleOffset;
@property(nonatomic) struct SCNVector3 positionOffset;
@property(nonatomic) struct SCNVector4 orientationOffset;
@property(nonatomic) BOOL replicatesScale;
@property(nonatomic) BOOL replicatesPosition;
@property(nonatomic) BOOL replicatesOrientation;
@property(retain, nonatomic) SCNNode *target;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

