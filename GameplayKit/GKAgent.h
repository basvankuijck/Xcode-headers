//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKComponent.h>

#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKBehavior;
@protocol GKAgentDelegate;

@interface GKAgent : GKComponent <NSSecureCoding>
{
    struct GKSimpleVehicle _vehicle;
    id <GKAgentDelegate> _delegate;
    GKBehavior *_behavior;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) GKBehavior *behavior; // @synthesize behavior=_behavior;
@property(nonatomic) __weak id <GKAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: 32@0:8@16d24, name: steerToStayOnPath:maxPredictionTime:
-     // Error parsing type: 36@0:8@16d24c32, name: steerToFollowPath:maxPredictionTime:forward:
-     // Error parsing type: 32@0:8@16d24, name: steerForIntercept:maxPredictionTime:
-     // Error parsing type: 28@0:8d16f24, name: steerForWander:speed:
-     // Error parsing type: 20@0:8f16, name: steerForTargetSpeed:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForCohesion:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForAlignment:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16f24f28, name: steerForSeparation:maxDistance:maxAngle:
-     // Error parsing type: 32@0:8@16d24, name: steerToAvoidAgents:timeBeforeCollisionToAvoid:
-     // Error parsing type: 32@0:8@16d24, name: steerToAvoidObstacles:timeBeforeCollisionToAvoid:
-     // Error parsing type: 32@0:816, name: steerForFlee:
-     // Error parsing type: 32@0:816, name: steerForSeek:
-     // Error parsing type: 16@0:8, name: velocity3
-     // Error parsing type: 16@0:8, name: position3
@property(nonatomic) float maxSpeed;
@property(nonatomic) float maxAcceleration;
@property(nonatomic) float speed;
@property(nonatomic) float radius;
@property(nonatomic) float mass;
- (struct GKSimpleVehicle *)vehicle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

