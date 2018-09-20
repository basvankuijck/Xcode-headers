//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEInterfaceBuilderKit/IBPreviewDocumentBackgroundViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBPreviewResultViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionOwnerDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSUserInterfaceValidations-Protocol.h>

@class DVTDelayedInvocation, IBAbstractDocumentEditor, IBAccessorizedScrollView, IBDocument, IBPreviewDocumentBackgroundView, IBSelectionOwner, NSArray, NSMutableArray, NSSet, NSString, NSView;
@protocol DVTCancellable, DVTInvalidation;

@interface IBAbstractPreviewDocumentEditor : IDEEditor <IBSelectionOwnerDelegate, IBPreviewDocumentBackgroundViewDelegate, NSUserInterfaceValidations, NSMenuDelegate, IBPreviewResultViewDelegate>
{
    id <DVTInvalidation> _installedControlsToken;
    id <DVTInvalidation> _installedCounterpartObservationToken;
    id <DVTCancellable> _editorContextObservingToken;
    id <DVTCancellable> _scaleFactorObservingToken;
    id _previewedObject;
    DVTDelayedInvocation *_batchInvocation;
    BOOL _controlsNeedRebuild;
    NSMutableArray *_recipes;
    NSMutableArray *_resultViews;
    NSMutableArray *_resultImages;
    double _lastNon100PercentZoom;
    NSSet *_observedRemoteViews;
    IBAbstractDocumentEditor *_observedEditor;
    IBSelectionOwner *_selection;
    double _scale;
    IBAccessorizedScrollView *_scrollView;
    NSView *_centeredDocumentView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property NSView *centeredDocumentView; // @synthesize centeredDocumentView=_centeredDocumentView;
@property IBAccessorizedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSArray *recipes; // @synthesize recipes=_recipes;
@property(readonly) IBSelectionOwner *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) IBAbstractDocumentEditor *observedEditor; // @synthesize observedEditor=_observedEditor;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateRecipes:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)displayNameForApplyingRecipe:(id)arg1 toObject:(id)arg2;
- (BOOL)isValidRecipe:(id)arg1;
- (void)refreshImmediately;
- (void)refreshImmediatelyIfNeeded;
- (void)removeRecipe:(id)arg1;
- (void)addRecipe:(id)arg1;
- (void)didChangeRecipes;
- (void)menuNeedsUpdate:(id)arg1;
- (id)addRightView:(id)arg1;
- (id)addLeftView:(id)arg1;
- (void)applySettingsToDocument:(id)arg1 forPreviewRecipe:(id)arg2 withPasteboardCloningContext:(id)arg3;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)preparePreviewResultView:(id)arg1;
- (void)previewResultView:(id)arg1 userDidSelectWithEvent:(id)arg2;
- (void)backgroundView:(id)arg1 userDidRequestRemoval:(id)arg2;
- (void)backgroundView:(id)arg1 updateSelectionWithBandIntersectingObjects:(id)arg2 withEvent:(id)arg3 initialSelection:(id)arg4;
- (id)backgroundViewBandSelectionCandidates:(id)arg1;
- (id)backgroundViewInitialBandSelectionContent:(id)arg1;
- (id)recipesForResultViews:(id)arg1;
- (id)resultViewsForRecipes:(id)arg1;
- (id)resultViewForRecipe:(id)arg1;
- (void)backgroundView:(id)arg1 userDidDoubleClickInEmptyAreaWithEvent:(id)arg2;
- (void)backgroundView:(id)arg1 userDidClickInEmptyAreaWithEvent:(id)arg2;
- (void)reschedulAfterDragComplete:(id)arg1;
- (void)update:(id)arg1;
- (id)imageOfObject:(id)arg1 previewRecipe:(id)arg2 fromDocument:(id)arg3;
- (id)effectivePreviewAppearanceForRecipe:(id)arg1;
- (void)refreshControlState;
- (void)refreshScaleState;
- (void)applyScale:(double)arg1 toPreviewResultView:(id)arg2 withOriginalImage:(id)arg3;
- (void)refreshSelectionState;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)destroyControls;
- (void)resetControls;
- (void)noteNeedsRebuild;
- (void)noteNeedsRefresh;
- (void)remoteViewDidInvalidateImageBecauseOfLiveViewBundleChange:(id)arg1;
- (id)installControls;
- (id)installEditorObservations;
- (void)refreshInputObject;
- (id)previewedObjectForSelectedMemberWrappers:(id)arg1 inDocument:(id)arg2;
- (void)setPreviewedObject:(id)arg1;
- (id)clipView;
- (void)backgroundView:(id)arg1 didChangeShowingFirstResponderToValue:(BOOL)arg2;
- (void)backgroundView:(id)arg1 userDidMagnifyWithEvent:(id)arg2;
@property(readonly) IBPreviewDocumentBackgroundView *backgroundView;
@property(readonly, nonatomic) IBDocument *observedDocument;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (id)initialRecipe;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

