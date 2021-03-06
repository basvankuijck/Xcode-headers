//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNParticleSystem.h>

@class NSGradient, SCNParticlePropertyController;

@interface SCNParticleSystem (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingSke_orientationModeIsFree;
+ (id)keyPathsForValuesAffectingIde_hasNullStretchFactor;
+ (id)keyPathsForValuesAffectingIde_spreadingAngleHasAnEffect;
+ (id)keyPathsForValuesAffectingIde_emittingDirectionHasAnEffect;
@property(readonly) BOOL ske_orientationModeIsFree;
@property(retain) SCNParticlePropertyController *ide_particleSizeController;
@property(retain) NSGradient *ide_particleColorController;
@property(retain) SCNParticlePropertyController *ide_latestNonNilParticleColorController;
@property BOOL ide_hasParticleColorController;
@property(readonly) BOOL ide_doesNotHaveParticleColorController;
@property(retain) id ide_particleImage;
@property(readonly) BOOL ide_hasNullStretchFactor;
@property float ide_emitterShapeSphereRadius;
@property float ide_emitterShapePlaneHeight;
@property float ide_emitterShapePlaneWidth;
@property float ide_emitterShapeCylinderRadius;
@property float ide_emitterShapeCylinderHeight;
@property float ide_emitterShapeBoxLength;
@property float ide_emitterShapeBoxHeight;
@property float ide_emitterShapeBoxWidth;
@property(readonly) BOOL ide_emitterShapeTypeIsSphere;
@property(readonly) BOOL ide_emitterShapeTypeIsPlane;
@property(readonly) BOOL ide_emitterShapeTypeIsCylinder;
@property(readonly) BOOL ide_hasCustomEmitter;
@property(readonly) BOOL ide_emitterShapeTypeIsBox;
@property unsigned long long ide_emitterShapeType;
@property(readonly) BOOL ide_spreadingAngleHasAnEffect;
@property(readonly) BOOL ide_emittingDirectionHasAnEffect;
@end

