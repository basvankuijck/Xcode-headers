//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESpriteKitParticleEditor/SKTileSetEditorGroupOverviewViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKTileSetEditorOutlineViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKTileSetEditorRuleDetailViewDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKTileSetEditorViewDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTReplacementView, NSArray, NSString, SKDocumentSplitView, SKInputView, SKTileSetDocument, SKTileSetEditorGroupOverviewView, SKTileSetEditorOutlineViewController, SKTileSetEditorRuleDetailView, SKTileSetEditorScene, SKTileSetEditorView, SKTileSetNavigableContainer;

@interface SKTileSetEditor : IDEEditor <SKTileSetEditorViewDelegate, SKTileSetEditorOutlineViewDelegate, SKTileSetEditorRuleDetailViewDelegate, SKTileSetEditorGroupOverviewViewDelegate>
{
    DVTNotificationToken *_windowOcclusionToken;
    NSArray *_selectionKVOTokens;
    SKDocumentSplitView *_splitView;
    DVTReplacementView *_outlinePanelReplacementView;
    SKTileSetEditorOutlineViewController *_outlinePanelView;
    SKInputView *_skView;
    SKTileSetEditorView *_editorView;
    SKTileSetEditorScene *_editorScene;
    BOOL _oldIsScenePaused;
    SKTileSetEditorGroupOverviewView *_groupOverviewView;
    SKTileSetEditorRuleDetailView *_ruleDetailView;
    DVTObservingToken *_documentTileSetContainerKVOToken;
    SKTileSetNavigableContainer *_tileSetContainer;
    NSArray *_currentSelectedItems;
}

@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) SKTileSetNavigableContainer *tileSetContainer; // @synthesize tileSetContainer=_tileSetContainer;
- (void).cxx_destruct;
- (void)selectionObserversTriggered;
- (void)skViewFrameDidChange:(id)arg1;
- (void)updateRuleDetailView;
- (void)updateGroupOverview;
- (void)tileSetEditorGroupOverviewView:(id)arg1 addTileDefinitions:(id)arg2 toRule:(id)arg3;
- (void)tileSetEditorGroupOverviewView:(id)arg1 addRule:(id)arg2 toGroup:(id)arg3;
- (void)tileSetEditorGroupOverviewView:(id)arg1 updateDefaultTileSizeWithSize:(struct CGSize)arg2;
- (void)tileSetEditorGroupOverviewView:(id)arg1 selectTileIndex:(unsigned long long)arg2;
- (BOOL)tileSetEditorGroupOverviewView:(id)arg1 ruleSelected:(id)arg2;
- (void)tileSetEditorGroupOverviewViewRemoveSelectedItems:(id)arg1;
- (void)tileSetEditorGroupOverviewViewUpdateRuleDetailView:(id)arg1;
- (void)tileSetEditorGroupOverviewViewUpdateOutline:(id)arg1;
- (unsigned long long)tileSetEditorGroupOverviewViewCurrentTileSetType:(id)arg1;
- (unsigned long long)tileSetEditorGroupOverviewViewSelectedTileDefinitionIndex:(id)arg1;
- (void)tileSetEditorRuleDetailView:(id)arg1 addTileDefinitions:(id)arg2 toRule:(id)arg3;
- (void)tileSetEditorRuleDetailView:(id)arg1 updateDefaultTileSizeWithSize:(struct CGSize)arg2;
- (void)tileSetEditorRuleDetailViewUpdateGroupOverviewView:(id)arg1;
- (void)tileSetEditorRuleDetailViewUpdateOutline:(id)arg1;
- (void)tileSetEditorRuleDetailViewRemoveSelectedItems:(id)arg1;
- (void)tileSetEditorRuleDetailView:(id)arg1 selectDefinitionIndex:(unsigned long long)arg2;
- (void)tileSetEditorOutlineViewCreateNewGroupOfType:(unsigned long long)arg1;
- (void)tileSetEditorOutlineViewCreateNewTileSetOfType:(unsigned long long)arg1;
- (void)tileSetEditorOutlineViewUpdateSelection:(id)arg1;
- (void)tileSetEditorOutlineViewUpdatePreview:(id)arg1;
- (void)tileSetEditorOutlineViewHidePreview:(id)arg1;
- (void)editorMenuNewHexPointyTileSet:(id)arg1;
- (void)editorMenuNewHexFlatTileSet:(id)arg1;
- (void)editorMenuNewIsoTileSet:(id)arg1;
- (void)editorMenuNewGridTileSet:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)updateTables;
- (void)updateSelection;
- (void)setupTileGroup:(id)arg1 withTileGroupType:(unsigned long long)arg2;
- (void)createNewTileGroupWithName:(id)arg1 type:(unsigned long long)arg2;
- (void)createNewTileSetWithType:(unsigned long long)arg1;
- (void)removeSelectedItems;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)getSelectedTileDefinition;
- (id)getSelectedTileGroupRule;
- (id)getSelectedTileGroup;
- (id)getSelectedTileSet;
- (void)selectTileWithTileIndex:(unsigned long long)arg1;
- (void)updateSelectionTokens;
- (void)selectDocumentLocations:(id)arg1;
- (void)tileSetEditorView:(id)arg1 touchEnded:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)tileSetEditorView:(id)arg1 touchMoved:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)tileSetEditorView:(id)arg1 touchBegan:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (BOOL)tileSetEditorViewNoSelection:(id)arg1;
- (void)tileSetEditorView:(id)arg1 didPerformDragOperation:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)processInputTextures:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)tileSetEditorView:(id)arg1 draggingEntered:(id)arg2;
- (id)tileSetEditorViewAcceptedDraggedTypes:(id)arg1;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (void)clearSelectionTokens;
- (void)saveDefaultSelection;
- (unsigned long long)selectedObjectIndex;
- (id)selectedObjectForIndex:(unsigned long long)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)takeFocus;
- (id)currentSelectedDocumentLocations;
- (void)setDefaultSelection;
- (void)_createEditorScene;
- (void)_registerDocumentObservers;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
@property(readonly, nonatomic) SKTileSetDocument *tileSetDocument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

