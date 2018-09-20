//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    SCNNode *_node;
    double _mass;
    double _charge;
    double _friction;
    double _restitution;
    double _rollingFriction;
    double _continuousCollisionDetectionThreshold;
    SCNPhysicsShape *_physicsShape;
    long long _type;
    double _damping;
    struct SCNVector4 _angularVelocity;
    double _angularDamping;
    struct SCNVector3 _velocityFactor;
    struct SCNVector3 _angularVelocityFactor;
    struct SCNVector3 _velocity;
    BOOL _ignoreGravity;
    double _linearRestingThreshold;
    double _angularRestingThreshold;
    BOOL _explicitMomentOfInertia;
    struct SCNVector3 _momentOfInertia;
    struct SCNVector3 _centerOfMassOffset;
    unsigned long long _categoryBitMask;
    unsigned long long _collisionBitMask;
    unsigned long long _contactTestBitMask;
    BOOL _allowsResting;
    BOOL _isDefaultShape;
    struct btRigidBody *_body;
}

+ (BOOL)supportsSecureCoding;
+ (id)kinematicBody;
+ (id)dynamicBody;
+ (id)staticBody;
+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_creationOptions;
+ (id)SCNUID_enumForProperty:(id)arg1;
@property(nonatomic) double continuousCollisionDetectionThreshold; // @synthesize continuousCollisionDetectionThreshold=_continuousCollisionDetectionThreshold;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (id)_owner;
- (void)_setOwner:(id)arg1;
- (void)_removeOwner;
- (void)_ownerWillDie;
- (struct btRigidBody *)_createBody;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)moveToTransform:(struct CATransform3D)arg1;
- (void)rotateToAxisAngle:(struct SCNVector4)arg1;
- (void)moveToPosition:(struct SCNVector3)arg1;
- (void)resetTransform;
- (void)resetToTransform:(struct CATransform3D)arg1;
- (void)setResting:(BOOL)arg1;
- (void)clearAllForces;
- (void)_activate;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(BOOL)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(BOOL)arg3;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(BOOL)arg2;
@property(nonatomic) struct SCNVector3 angularVelocityFactor;
@property(nonatomic) struct SCNVector3 velocityFactor;
@property(nonatomic) struct SCNVector4 angularVelocity;
@property(nonatomic, getter=isAffectedByGravity) BOOL affectedByGravity;
@property(nonatomic) struct SCNVector3 velocity;
- (double)continuousCollisionDetection;
@property(nonatomic) unsigned long long contactTestBitMask;
@property(nonatomic) unsigned long long collisionBitMask;
@property(nonatomic) unsigned long long categoryBitMask;
@property(retain, nonatomic) SCNPhysicsShape *physicsShape;
- (struct btCollisionShape *)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;
- (double)angularSleepingThreshold;
- (void)setAngularSleepingThreshold:(double)arg1;
- (double)linearSleepingThreshold;
- (void)setLinearSleepingThreshold:(double)arg1;
@property(nonatomic) double angularRestingThreshold;
@property(nonatomic) double linearRestingThreshold;
@property(nonatomic) double angularDamping;
@property(nonatomic) double damping;
@property(nonatomic) double rollingFriction;
@property(nonatomic) double restitution;
@property(nonatomic) double friction;
@property(nonatomic) BOOL allowsResting;
@property(readonly, nonatomic) BOOL isResting;
@property(nonatomic) double charge;
@property(nonatomic) BOOL usesDefaultMomentOfInertia;
@property(nonatomic) struct SCNVector3 centerOfMassOffset;
@property(nonatomic) struct SCNVector3 momentOfInertia;
- (BOOL)respondsToCollision;
@property(nonatomic) double mass;
@property(nonatomic) long long type;
- (void)dealloc;
- (struct btRigidBody *)_handle;
- (struct __C3DScene *)sceneRef;
- (id)initWithType:(long long)arg1 shape:(id)arg2;

@end

