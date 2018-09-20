//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEComparisonEditor.h>

#import <IDESourceCodeComparisonEditor/IDEJumpToLineDestination-Protocol.h>

@class DVTBorderedView, DVTSourceTextView, NSDictionary, NSString;

@interface IDESourceCodeComparisonEditor : IDEComparisonEditor <IDEJumpToLineDestination>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    DVTBorderedView *_borderedView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingKeyTextView;
+ (id)defaultViewNibName;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)performTextFinderAction:(id)arg1;
- (BOOL)providesOwnFindBar;
- (id)initialQueryForJumpToLine;
- (id)documentLocationForJumpToLineQuery:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)_stateDictionariesForDocuments;
- (id)_transientStateDictionaryForDocument:(id)arg1;
- (void)restoreInternalComparisonDocumentLocationWithStateDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)setEditorSubmode:(int)arg1;
@property(readonly) DVTSourceTextView *keyTextView;
- (void)_updateViewBasedOnSubmode;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (BOOL)canBecomeMainViewController;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

