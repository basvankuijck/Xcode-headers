//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DFRVersionNavigationView, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEComparisonEditor, NSButton, NSPopoverTouchBarItem, NSSegmentedControl, NSString;

@interface IDEComparisonEditorDFRController : NSViewController <DVTInvalidation>
{
    BOOL _showsCommitToggle;
    IDEComparisonEditor *_comparisonEditor;
    DVTObservingToken *_runSheetContentObserver;
    DVTObservingToken *_comparisonEditorObserver;
    DVTObservingToken *_checkedFilePathsObserver;
    DVTObservingToken *_comparisonSubmodeObserver;
    DVTObservingToken *_pushToRemoteEnabledObserver;
    DVTNotificationToken *_sheetDidEndNotificationToken;
    DVTObservingToken *_modifiedSetObservingToken;
    DVTObservingToken *_selectedSetObservingToken;
    DVTObservingToken *_toggledSetObservingToken;
    NSSegmentedControl *_commitChoiceControl;
    DFRVersionNavigationView *_versionNavigationView;
    NSString *_identifierForPopoverItem;
    NSPopoverTouchBarItem *_popoverItem;
}

+ (void)initialize;
@property(retain) NSPopoverTouchBarItem *popoverItem; // @synthesize popoverItem=_popoverItem;
@property(retain) NSString *identifierForPopoverItem; // @synthesize identifierForPopoverItem=_identifierForPopoverItem;
@property(retain) DFRVersionNavigationView *versionNavigationView; // @synthesize versionNavigationView=_versionNavigationView;
@property(retain) NSSegmentedControl *commitChoiceControl; // @synthesize commitChoiceControl=_commitChoiceControl;
@property(retain) DVTObservingToken *toggledSetObservingToken; // @synthesize toggledSetObservingToken=_toggledSetObservingToken;
@property(retain) DVTObservingToken *selectedSetObservingToken; // @synthesize selectedSetObservingToken=_selectedSetObservingToken;
@property(retain) DVTObservingToken *modifiedSetObservingToken; // @synthesize modifiedSetObservingToken=_modifiedSetObservingToken;
@property(retain) DVTNotificationToken *sheetDidEndNotificationToken; // @synthesize sheetDidEndNotificationToken=_sheetDidEndNotificationToken;
@property(retain) DVTObservingToken *pushToRemoteEnabledObserver; // @synthesize pushToRemoteEnabledObserver=_pushToRemoteEnabledObserver;
@property(retain) DVTObservingToken *comparisonSubmodeObserver; // @synthesize comparisonSubmodeObserver=_comparisonSubmodeObserver;
@property(retain) DVTObservingToken *checkedFilePathsObserver; // @synthesize checkedFilePathsObserver=_checkedFilePathsObserver;
@property(retain) DVTObservingToken *comparisonEditorObserver; // @synthesize comparisonEditorObserver=_comparisonEditorObserver;
@property(retain) DVTObservingToken *runSheetContentObserver; // @synthesize runSheetContentObserver=_runSheetContentObserver;
@property BOOL showsCommitToggle; // @synthesize showsCommitToggle=_showsCommitToggle;
@property(retain, nonatomic) IDEComparisonEditor *comparisonEditor; // @synthesize comparisonEditor=_comparisonEditor;
- (void).cxx_destruct;
- (void)discardDiff:(id)arg1;
- (void)toggleDiffOff:(id)arg1;
- (void)keepDiff:(id)arg1;
- (void)commitChoiceValueChanged:(id)arg1;
- (void)_updateCommitChoiceControl;
- (id)_makeDiscardItemWithIdentifier:(id)arg1;
- (id)_makeCommitChoiceItemWithIdentifier:(id)arg1;
- (id)popoverItemForIdentifier:(id)arg1;
- (id)_itemForView:(id)arg1 identifier:(id)arg2;
- (id)_commitChoiceAccessibilityTitleForShouldNotCommit:(BOOL)arg1;
- (id)_commitChoiceImageForShouldNotCommit:(BOOL)arg1;
- (void)_navigateForward;
- (BOOL)_canNavigateForward;
- (BOOL)_canNavigateToModeActions;
- (void)_navigateBack;
- (BOOL)_canNavigateBack;
- (id)_comparisonEditorMode;
- (void)_updateNumbersView;
- (void)_updateForSelectionChanged;
- (void)_setupObservationsForComparisonEditor:(id)arg1;
- (id)_accessibilityTitleForSelectedDiff;
- (id)_modeImageForSelectedDiff;
- (BOOL)_selectedDiffIsMarkedDontCommit;
@property(readonly) NSButton *modeActionButton;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithComparisonEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

