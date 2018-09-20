//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESceneKitEditor/DVTReplacementViewDelegate-Protocol.h>
#import <IDESceneKitEditor/DVTSplitViewDelegate-Protocol.h>

@class DVTGradientImageButton, DVTReplacementView, DVTSplitView, NSArray, NSString, SKESceneDocument, SKESceneEditor, SKESceneSubEditor;

@interface SKESceneEditorArea : IDEEditor <DVTReplacementViewDelegate, DVTSplitViewDelegate>
{
    DVTSplitView *_splitView;
    DVTReplacementView *_primaryReplacementView;
    DVTReplacementView *_secondaryReplacementView;
    BOOL _initWithLoadedDocument;
    NSArray *_stateTokenSelectedItems;
    SKESceneEditor *_sceneEditor;
    SKESceneSubEditor *_subEditor;
    DVTGradientImageButton *_showSecondaryEditorButton;
    NSArray *_currentSelectedItems;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (BOOL)canProvideCurrentSelectedItems;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (id)actionableMembersAndState:(unsigned long long *)arg1;
- (id)shadableMembersAndState:(unsigned long long *)arg1;
- (id)shadableMembersIncludingSubShadableMembersAndState:(unsigned long long *)arg1;
- (id)currentSelectedItemsWithFilter:(CDUnknownBlockType)arg1 state:(unsigned long long *)arg2;
- (id)subEditor;
- (void)setSubEditor:(id)arg1;
- (id)sceneEditor;
- (void)setSceneEditor:(id)arg1;
- (void)toggleShowsSubEditor;
- (void)setShowsSubEditor:(BOOL)arg1;
- (void)setShowsSubEditor:(BOOL)arg1 isRestoringState:(BOOL)arg2;
- (BOOL)showsSubEditor;
- (void)refreshViewSwitchingControlsStates;
- (void)userDidPressSecondaryEditorViewSwitchingControl:(id)arg1;
- (id)toolTipForHideSecondaryEditorButton;
- (id)toolTipForShowSecondaryEditorButton;
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
@property(readonly) NSArray *selectedNodes;
- (id)currentSelectedDocumentLocations;
@property(copy) NSArray *currentSelectedItems;
- (void)selectDocumentLocations:(id)arg1;
- (void)primitiveInvalidate;
- (void)takeFocus;
- (BOOL)canBecomeMainViewController;
- (void)viewDidInstall;
- (void)loadView;
- (void)didFinishLoading:(id)arg1;
- (void)restoreSelectionWithItems:(id)arg1;
- (void)didSetupEditor;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) SKESceneDocument *document; // @dynamic document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

