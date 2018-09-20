//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSNumber, NSString;

@interface IBUISplitViewController : IBUIViewController <IBDocumentArchiving>
{
    BOOL _presentsWithGesture;
    IBUIViewController *_masterViewController;
    IBUIViewController *_detailViewController;
    NSNumber *_maximumPrimaryColumnWidth;
    NSNumber *_minimumPrimaryColumnWidth;
    NSNumber *_preferredPrimaryColumnWidthFraction;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)orderedChildViewControllerKeyPaths;
+ (double)defaultGutterWidth;
+ (double)defaultMasterColumnWidth;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL presentsWithGesture; // @synthesize presentsWithGesture=_presentsWithGesture;
@property(retain, nonatomic) NSNumber *preferredPrimaryColumnWidthFraction; // @synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction;
@property(retain, nonatomic) NSNumber *minimumPrimaryColumnWidth; // @synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth;
@property(retain, nonatomic) NSNumber *maximumPrimaryColumnWidth; // @synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth;
@property(retain, nonatomic) IBUIViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) IBUIViewController *masterViewController; // @synthesize masterViewController=_masterViewController;
- (void).cxx_destruct;
- (void)decodeLegacyViewControllers:(id)arg1;
- (id)effectiveSimulatedBottomBarMetrics;
- (id)effectiveSimulatedTopBarMetrics;
- (BOOL)displaysContentView;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)removeViewController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibInspectedSupportsDestinationMetrics;
- (BOOL)ibInspectedSupportsTopBarMetrics;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (void)ibWillAcceptPastedObject:(id)arg1 intoToOneRelation:(id)arg2 inDocument:(id)arg3 insertionContext:(id)arg4;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibSizeView:(id)arg1 toFitViewController:(id)arg2;
- (struct CGSize)ibContentSizeForChildViewController:(id)arg1 idiom:(id)arg2;
- (struct CGSize)sizeForDetailViewControllerContent;
- (struct CGSize)sizeForMasterViewControllerContent;
- (struct CGSize)sizeForDetailViewController;
- (struct CGSize)sizeForMasterViewController;
- (struct CGSize)containerScaleFactor;
- (struct CGSize)sizeForDetailViewControllerWithInterfaceOrientation:(long long)arg1;
- (struct CGSize)sizeForMasterViewControllerWithInterfaceOrientation:(long long)arg1;
@property(readonly) double gutterWidth;
@property(readonly) double masterColumnWidth;
- (id)ibImageForOwnedScene;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)simulatedMetricsContainerForDetailEditorView;
- (id)simulatedMetricsContainerForMasterEditorView;
- (id)ibMetricChainForDownstreamController:(id)arg1 viaSegue:(id)arg2 succeedingMetric:(id)arg3;
- (Class)ibEditorViewClass;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibLeafMetricForValidationWithPrecedingMetric:(id)arg1;
- (id)ibEditorClass;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

