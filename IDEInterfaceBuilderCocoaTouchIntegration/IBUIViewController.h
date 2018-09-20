//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractViewController.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBIDEUIViewControllerAutolayoutGuideDelegate-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSceneUpdateRequestConfiguring-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsIntegratedObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetricsObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerAutolayoutGuideDelegate-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBPlaceholderDrawingAttributes, IBUIEditorMetrics, IBUINavigationItem, IBUISimulatedBarMetrics, IBUISimulatedMetricsContainer, IBUISimulatedOrientationMetrics, IBUISimulatedSizeMetrics, IBUISimulatedStatusBarMetrics, IBUITabBarItem, IBUIView, NSArray, NSMutableSet, NSNumber, NSString, NSValue;

@interface IBUIViewController : IBAbstractViewController <IBUISimulatedMetricsIntegratedObject, IBIDEUIViewControllerAutolayoutGuideDelegate, IBDocumentArchiving, IBUISimulatedMetricsObject, IBUIViewControllerAutolayoutGuideDelegate, IBSceneUpdateRequestConfiguring>
{
    NSNumber *_cachedTopLayoutGuideOffsetFromTop;
    NSNumber *_cachedBottomLayoutGuideOffsetFromBottom;
    BOOL _extendedLayoutIncludesOpaqueBars;
    BOOL _automaticallyAdjustsScrollViewInsets;
    BOOL _autoresizesArchivedViewToFullSize;
    BOOL _wantsFullScreenLayout;
    BOOL _definesPresentationContext;
    BOOL _providesPresentationContextTransitionStyle;
    BOOL _useStoryboardIdentifierAsRestorationIdentifier;
    BOOL _hidesBottomBarWhenPushed;
    IBUISimulatedSizeMetrics *_simulatedDestinationMetrics;
    IBUISimulatedOrientationMetrics *_simulatedOrientationMetrics;
    IBUISimulatedStatusBarMetrics *_simulatedStatusBarMetrics;
    IBUISimulatedBarMetrics *_simulatedBottomBarMetrics;
    IBUISimulatedBarMetrics *_simulatedTopBarMetrics;
    NSString *_explicitStoryboardIdentifier;
    IBUISimulatedMetricsContainer *_inheritedSimulatedMetrics;
    NSArray *_storyboardSegueTemplates;
    IBUIView *_view;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    NSString *_title;
    NSString *_restorationIdentifier;
    long long _edgesForExtendedLayout;
    NSString *_nibName;
    IBUITabBarItem *_tabBarItem;
    IBUINavigationItem *_navigationItem;
    NSArray *_toolbarItems;
    NSArray *_topLevelObjectsToKeepAliveFromStoryboard;
    long long _modalTransitionStyle;
    long long _modalPresentationStyle;
    NSValue *_contentSizeForViewInPopover;
    NSArray *_keyCommands;
    NSValue *_freeformSize;
    IBPlaceholderDrawingAttributes *_placeholderDrawingAttributes;
    IBUIViewController *_parentViewController;
    NSArray *_layoutGuides;
    IBUIEditorMetrics *_editorMetrics;
    NSArray *_storyboardPreviewSegueTemplates;
    NSArray *_storyboardCommitSegueTemplates;
    NSArray *_storyboardPreviewingRegistrants;
    NSMutableSet *_viewsWithPreviewingRegistrants;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedSelectorNamesForKeyCommands;
+ (id)keyPathsForValuesAffectingIbInspectedNonNilValueForContentSizeForViewInPopover;
+ (id)keyPathsForValuesAffectingIbInspectedFreeformSize;
+ (id)keyPathsForValuesAffectingIbInspectedHasFreeformScreenSizeMetrics;
+ (id)keyPathsForValuesAffectingIbInspectedRestorationIdentifierPlaceholder;
+ (id)keyPathsForValuesAffectingIbInspectedUseStoryboardIdentifierAsRestorationIdentifier;
+ (id)keyPathsForValuesAffectingIbRestorationIdentifier;
+ (id)keyPathsForValuesAffectingIbInspectedExtendsLayoutUnderBottomBars;
+ (id)keyPathsForValuesAffectingIbInspectedExtendsLayoutUnderTopBars;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)keyPathsForValuesAffectingIbInspectedPresentsSimulatedMetrics;
+ (id)ibViewPasteboardType;
+ (Class)ibViewClass;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(retain) NSMutableSet *viewsWithPreviewingRegistrants; // @synthesize viewsWithPreviewingRegistrants=_viewsWithPreviewingRegistrants;
@property(retain) NSArray *storyboardPreviewingRegistrants; // @synthesize storyboardPreviewingRegistrants=_storyboardPreviewingRegistrants;
@property(retain) NSArray *storyboardCommitSegueTemplates; // @synthesize storyboardCommitSegueTemplates=_storyboardCommitSegueTemplates;
@property(retain) NSArray *storyboardPreviewSegueTemplates; // @synthesize storyboardPreviewSegueTemplates=_storyboardPreviewSegueTemplates;
@property(retain, nonatomic) IBUIEditorMetrics *editorMetrics; // @synthesize editorMetrics=_editorMetrics;
@property(copy, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides=_layoutGuides;
@property IBUIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain) IBPlaceholderDrawingAttributes *placeholderDrawingAttributes; // @synthesize placeholderDrawingAttributes=_placeholderDrawingAttributes;
@property(copy) NSValue *freeformSize; // @synthesize freeformSize=_freeformSize;
@property(copy) NSArray *keyCommands; // @synthesize keyCommands=_keyCommands;
@property(copy) NSValue *contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover=_contentSizeForViewInPopover;
@property BOOL hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed=_hidesBottomBarWhenPushed;
@property long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property BOOL useStoryboardIdentifierAsRestorationIdentifier; // @synthesize useStoryboardIdentifierAsRestorationIdentifier=_useStoryboardIdentifierAsRestorationIdentifier;
@property BOOL providesPresentationContextTransitionStyle; // @synthesize providesPresentationContextTransitionStyle=_providesPresentationContextTransitionStyle;
@property BOOL definesPresentationContext; // @synthesize definesPresentationContext=_definesPresentationContext;
@property BOOL wantsFullScreenLayout; // @synthesize wantsFullScreenLayout=_wantsFullScreenLayout;
@property(copy) NSArray *topLevelObjectsToKeepAliveFromStoryboard; // @synthesize topLevelObjectsToKeepAliveFromStoryboard=_topLevelObjectsToKeepAliveFromStoryboard;
@property(copy) NSArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(retain) IBUINavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(retain) IBUITabBarItem *tabBarItem; // @synthesize tabBarItem=_tabBarItem;
@property(copy) NSString *nibName; // @synthesize nibName=_nibName;
@property(nonatomic) BOOL autoresizesArchivedViewToFullSize; // @synthesize autoresizesArchivedViewToFullSize=_autoresizesArchivedViewToFullSize;
@property(nonatomic) BOOL automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property(nonatomic) BOOL extendedLayoutIncludesOpaqueBars; // @synthesize extendedLayoutIncludesOpaqueBars=_extendedLayoutIncludesOpaqueBars;
@property(nonatomic) long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(copy) NSString *restorationIdentifier; // @synthesize restorationIdentifier=_restorationIdentifier;
@property(copy) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(retain, nonatomic) IBUIView *view; // @synthesize view=_view;
@property(retain) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates=_storyboardSegueTemplates;
@property(copy, nonatomic) IBUISimulatedMetricsContainer *inheritedSimulatedMetrics; // @synthesize inheritedSimulatedMetrics=_inheritedSimulatedMetrics;
- (void)setExplicitStoryboardIdentifier:(id)arg1;
- (id)explicitStoryboardIdentifier;
@property(copy) IBUISimulatedBarMetrics *simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(copy) IBUISimulatedBarMetrics *simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *simulatedStatusBarMetrics; // @synthesize simulatedStatusBarMetrics=_simulatedStatusBarMetrics;
@property(copy) IBUISimulatedOrientationMetrics *simulatedOrientationMetrics; // @synthesize simulatedOrientationMetrics=_simulatedOrientationMetrics;
@property(copy) IBUISimulatedSizeMetrics *simulatedDestinationMetrics; // @synthesize simulatedDestinationMetrics=_simulatedDestinationMetrics;
- (void).cxx_destruct;
- (id)layoutGuideForAttribute:(unsigned long long)arg1;
- (id)ibEffectiveParentItemForReferencingConstraintTraversalOfAutolayoutGuide:(id)arg1;
- (struct CGRect)drawableFrameForAutolayoutGuide:(id)arg1;
- (struct CGRect)ibFrameForAutolayoutGuide:(id)arg1;
- (id)ibContainingItemForAutolayoutGuide:(id)arg1;
- (double)ibBottomLayoutGuideOffsetFromBottom;
- (double)ibTopLayoutGuideOffsetFromTop;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (BOOL)isChildViewController:(id)arg1;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)insertViewController:(id)arg1 atIndex:(long long)arg2;
@property(copy) NSArray *viewControllers;
- (id)descendantViewControllers;
- (id)contentViewDisplayingViewController;
- (id)displayedViewController;
- (id)displayedChildViewController;
- (BOOL)displaysContentView;
- (id)containingSplitViewController;
- (id)containingNavigationController;
- (id)containingTabBarController;
- (id)containingViewControllerOfClass:(Class)arg1;
- (id)firstAncestorChildOfSplitViewController;
- (id)firstAncestorChildOfViewControllerOfClass:(Class)arg1;
- (id)bottomBarOwningController;
- (id)topBarOwningController;
- (BOOL)ownsBottomBar;
- (BOOL)ownsTopBar;
- (void)configureIncrementalSceneUpdateRequest:(id)arg1;
- (void)configureFullSceneUpdateRequest:(id)arg1;
- (id)rootController;
- (id)effectiveView;
- (id)effectiveSimulatedScreenMetrics;
- (id)effectiveSimulatedDestinationMetrics;
- (id)effectiveSimulatedOrientationMetrics;
- (id)effectiveSimulatedBottomBarMetrics;
- (id)effectiveSimulatedTopBarMetrics;
- (id)effectiveSimulatedStatusBarMetrics;
- (id)effectiveSimulatedMetrics;
- (id)effectiveSimulatedMetricsCalculationPipeline;
- (id)innateSimulatedMetricsForPipeline;
- (id)simulatedMetricsFromParentChainForPipeline;
- (id)simulatedMetricsForPipeline;
- (void)resetAllSimulatedMetricsToNone;
- (void)resetAllSimulatedMetricsToInferred;
- (BOOL)usesHonestUIEra;
- (void)decodeContentSizeForViewInPopoverWithCoder:(id)arg1;
- (void)encodeContentSizeForViewInPopoverWithCoder:(id)arg1;
- (void)encodeSynthesizedHorizontalForCoder:(id)arg1;
- (void)synchronizeOrientationWithDecoder:(id)arg1;
- (void)synchronizeView:(id)arg1;
- (void)decodeFreeformSize:(id)arg1;
- (void)encodeFreeformSize:(id)arg1;
- (void)unarchiveFreeformSize:(id)arg1;
- (void)archiveFreeformSize:(id)arg1;
- (void)decodeSimulatedMetrics:(id)arg1;
- (void)encodeSimulatedMetrics:(id)arg1;
- (void)unarchiveSimulatedMetrics:(id)arg1;
- (void)archiveSimulatedMetrics:(id)arg1;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesStatusBars;
@property(readonly, nonatomic) BOOL simulatedMetricsExtendedLayoutIncludesOpaqueBars;
@property(readonly, nonatomic) long long simulatedMetricsExtendedEdges;
- (id)simulatedMetricsContainerForSizing;
- (struct CGSize)effectiveFreeformSize;
- (struct CGSize)effectiveSimulatedEditorViewSize;
- (struct CGSize)effectiveSimulatedViewSize;
- (struct CGSize)effectiveSimulatedContentSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibAddStoryboardCommitSegueTemplate:(id)arg1 inDocument:(id)arg2;
- (void)ibAddStoryboardPreviewSegueTemplate:(id)arg1 inDocument:(id)arg2;
- (void)ibAddStoryboardPreviewingRegistrantIfNecessaryForView:(id)arg1 inDocument:(id)arg2;
- (void)ibConfigureDiagnosticsHandler:(id)arg1 afterSceneUpdateDidFailWithRoot:(id)arg2;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (id)ibMarshalledRepresentationForRendering;
- (id)ibMarshallingContextForRendering;
- (void)ibUpdatePlaceholderDrawingAttributes;
- (id)ibEffectiveConfigurationFromConfiguration:(id)arg1;
- (BOOL)ibIsValidTraitStorageListContainer;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (id)ibPrefersMarginRelativeConstraintsToChildItem:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsEqualSizeConstraints:(id)arg1;
- (id)ibDefaultImageForAutolayoutGuide:(id)arg1;
- (id)ibDefaultLabelForAutolayoutGuide:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (void)ibDisableAutolayoutInDocument:(id)arg1;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibVerifyXcode5LayoutGuidesWithDocument:(id)arg1 shouldRemoveDuplicateLayoutGuides:(BOOL)arg2 addingVerificationMessagesToArray:(id)arg3;
- (void)ibAddTopLayoutGuide:(BOOL)arg1 bottomLayoutGuide:(BOOL)arg2 andRegisterLayoutGuidesWithDocument:(id)arg3;
- (void)ibDowngradeConstraintsFromSafeAreaLayoutGuideWithDocument:(id)arg1;
- (void)ibUpgradeConstraintsToSafeAreaLayoutGuideWithDocument:(id)arg1;
- (BOOL)ibBackwardsDeployConstraintsFromSafeAreaOnChild:(id)arg1 osVersion:(id)arg2 forDocument:(id)arg3;
- (void)ibConvertConstraintsToSafeAreaLayoutGuide:(BOOL)arg1 forDocument:(id)arg2;
- (id)ibRemoveAutolayoutGuide:(id)arg1 document:(id)arg2;
- (void)ibDocumentDidChangeDevelopmentTarget:(id)arg1;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (BOOL)ibPresentsSimulatedMetricsInDocument:(id)arg1;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (id)effectiveSimulatedMetricsForTargetRuntimeConversion;
- (BOOL)ibEffectiveHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedMetrics;
- (BOOL)ibHasSimulatedSizeMetricsAffectingFixedSize;
- (BOOL)ibHasSimulatedSizeMetrics;
- (BOOL)ibHasSimulatedBarMetrics;
- (id)ibInspectedSelectorNamesForKeyCommands;
- (void)setIbInspectedSelectorNamesForKeyCommands:(id)arg1;
- (id)ibInspectedModalPresentationOverStyleValues;
- (id)ibInspectedModalPresentationOverStyleTitles;
- (struct CGSize)ibInspectedNonNilValueForContentSizeForViewInPopover;
@property struct CGSize ibInspectedFreeformSize;
- (void)setIbInspectedHasFreeformScreenSizeMetrics:(BOOL)arg1;
- (BOOL)ibInspectedHasFreeformScreenSizeMetrics;
@property(copy) IBUISimulatedSizeMetrics *ibInspectedSimulatedDestinationMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedBottomBarMetrics;
@property(copy) IBUISimulatedBarMetrics *ibInspectedSimulatedTopBarMetrics;
@property(copy) IBUISimulatedStatusBarMetrics *ibInspectedSimulatedStatusBarMetrics;
- (BOOL)ibInspectedSupportsDestinationMetrics;
- (BOOL)ibSupportsSimulatedMetrics;
- (id)ibInspectedRestorationIdentifierPlaceholder;
- (void)setIbInspectedUseStoryboardIdentifierAsRestorationIdentifier:(BOOL)arg1;
- (BOOL)ibInspectedUseStoryboardIdentifierAsRestorationIdentifier;
- (void)setIbInspectedRestorationIdentifier:(id)arg1;
- (id)ibInspectedRestorationIdentifier;
@property BOOL ibInspectedExtendsLayoutUnderBottomBars;
@property BOOL ibInspectedExtendsLayoutUnderTopBars;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateIssuesAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (void)ibInheritedTintColorDidChange;
- (void)ibInheritedTintColorWillChange;
- (void)ibCustomizeForInsertionIntoIBUITabBarController:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibClipsChild:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (Class)ibEditorViewClass;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (BOOL)isChildViewSizable:(id)arg1;
- (BOOL)isChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)ibWillCopyChild:(id)arg1 forCompilationUnitLeaderOfUnitDownstreamFromUnit:(id)arg2;
- (void)ibPopulateCompilationMarshallingContext:(id)arg1 forDocument:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibAcceptedToolbarItemPasteboardTypes;
- (void)ibEstablishViewOutletsInDocument:(id)arg1;
- (void)ibDidAcceptView:(id)arg1 fromPasteboard:(id)arg2 inDocument:(id)arg3;
- (struct CGSize)ibViewControllerContentSizeForTargetRuntime:(id)arg1 context:(id)arg2;
- (void)ibDidBecomeControllerForCompilationGroup;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (BOOL)ibRequiresOutletToStoryboard;
- (void)ibUpstreamController:(id)arg1 didBecomeDestinationOfSegue:(id)arg2;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (BOOL)ibWantsSceneMaskOrBezel;
- (void)ibSwizzledIBUIViewControllerSetView:(id)arg1;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibImageForOwnedScene;
- (CDStruct_c519178c)ibExtendedEdgeInsets;
- (BOOL)ibShouldInsetScrollViewForBarMetrics:(id)arg1 inDirection:(long long)arg2;
- (void)ibSizeViewToFit;
- (void)ibPerformInspectorInstigatedSimulatedMetricsMutationBlock:(CDUnknownBlockType)arg1;
- (void)ibUpdateInheritedSimulatedMetrics:(id)arg1;
- (void)ibEffectiveSimulatedMetricsDidChange;
- (void)setViewFrameSize:(struct CGSize)arg1;
- (id)ibViewControllersWithSizedToFitViews;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (id)ibToManyRelationshipNameForSubgroupWithIdentifier:(id)arg1;
- (id)ibSubgroupIdentifiers;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibLeafMetricForValidationWithPrecedingMetric:(id)arg1;
- (BOOL)ibIsRequiredToHaveNavigationItem;
- (BOOL)ibIsRequiredToHaveToolbarItem;
- (BOOL)ibIsRequiredToHaveTabBarItem;
- (BOOL)ibRequiresNavigationItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresNavigationItemForChildViewController:(id)arg1;
- (BOOL)ibRequiresToolbarItemForChildViewController:(id)arg1;
- (BOOL)ibRequiresTabBarItemForViewController:(id)arg1 connectedViaSegue:(id)arg2;
- (BOOL)ibRequiresTabBarItemForChildViewController:(id)arg1;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (void)ibDidRefactorIntoStoryboard:(id)arg1 withContext:(id)arg2;
- (void)ibWillRefactorOutOfStoryboard:(id)arg1 withContext:(id)arg2;
- (BOOL)ibSupportsInferredMetrics;
- (id)_ibOldInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)ibNavigationItemMetrics;
- (void)ibSynchronouslyForceSceneUpdateWithFallbackMetrics:(id)arg1 requestConfigurationBlock:(CDUnknownBlockType)arg2;
- (id)ibMetricChainForDownstreamController:(id)arg1 viaSegue:(id)arg2 succeedingMetric:(id)arg3;
- (id)ibSimulatedMetricsContainerForEditorView;
- (id)ibUserHostableDocumentClasses;
- (id)ibSubtitleForEditor;
- (BOOL)ibContainsResizableContent;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
- (BOOL)ibInspectedPresentsSimulatedMetrics;
- (id)ibEditorClass;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalAutoNullifyingNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

