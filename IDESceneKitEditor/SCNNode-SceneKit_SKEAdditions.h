//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNNode.h>

@class NSIndexPath, NSString, SCNParticleSystem, SCNReferenceNode;

@interface SCNNode (SceneKit_SKEAdditions)
+ (id)keyPathsForValuesAffectingSke_hasNotMorpher;
+ (id)keyPathsForValuesAffectingSke_isMaterialEditable;
+ (id)keyPathsForValuesAffectingSke_materialOverrideButtonTitle;
+ (id)keyPathsForValuesAffectingSke_isMaterialNotOverriden;
+ (id)keyPathsForValuesAffectingSke_isMaterialOverriden;
+ (id)keyPathsForValuesAffectingSke_eulerAngles;
+ (id)keyPathsForValuesAffectingSke_worldPosition;
@property(readonly) NSIndexPath *ske_indexPath;
- (void)removeComponentOperation:(id)arg1;
- (void)addComponentOperation:(id)arg1;
- (id)inspectedComponent;
- (void)setInspectedComponent:(id)arg1;
@property BOOL ske_movable;
- (BOOL)ske_hasMovabilityHint;
- (struct SCNVector3)ske_worldBoundingBoxDimensions;
- (struct SCNVector3)ske_localBoundingBoxDimensions;
@property(nonatomic) long long ske_referenceLoadingPolicy;
- (id)ske_nodeReferenceExpectedFilePath;
@property(retain) NSString *ske_referenceName;
@property(readonly) BOOL ske_hasNotMorpher;
@property(readonly) BOOL ske_hasMorpher;
@property(readonly) BOOL ske_isNotReferenceOrUnderAReference;
@property(readonly) BOOL ske_isMaterialEditable;
@property(readonly) NSString *ske_materialOverrideButtonTitle;
@property(readonly) BOOL ske_isMaterialNotOverriden;
@property(readonly) BOOL ske_isMaterialOverriden;
@property(readonly) SCNReferenceNode *ske_parentReferenceNode;
@property(readonly) BOOL ske_isReferenceOrUnderAReference;
- (BOOL)ske_isNotReference;
@property(readonly) BOOL ske_isReference;
- (id)ske_copyAndAutoUnshareAttributes;
- (void)ske_autoUnshareAttributes;
@property unsigned long long ske_physicsFieldType;
- (BOOL)ske_hasPhysics;
@property unsigned long long ske_physicsType;
@property(readonly) BOOL ide_canBenefitFromFlattening;
- (BOOL)ide_hasNodeAttributes;
@property(readonly) BOOL hasPotentialPointOfView;
@property(readonly, getter=isPotentialPointOfView) BOOL potentialPointOfView;
@property(readonly) BOOL ide_shouldBeRemovedFromSceneGraphUponSave;
@property double ide_rotationAngle;
@property struct SCNVector3 ske_eulerAngles;
@property struct SCNVector3 ide_rotationAxis;
@property struct SCNVector3 ske_worldPosition;
@property(retain) NSString *ide_visualizedParticleSystemFileName;
@property(retain) SCNParticleSystem *ide_visualizedParticleSystem;
@property(retain) SCNParticleSystem *ide_firstParticleSystem;
@property(readonly) long long polygonCount;
@property long long ide_renderingOrder;
@end

