//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

@class DVTBorderView, DVTBorderedView, DVTChoice, DVTChooserView, DVTDocumentLocation, DVTScopeBarView, IDENavigatorOutlineView, IDENavigatorSearchFilterControlBar, NSArray, NSMenu, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString, NSTabView, NSTableColumn;
@protocol IDEReviewFilesDataSource;

@interface IDEReviewFilesNavigator : IDENavigator
{
    DVTChooserView *_chooserView;
    DVTBorderView *_dividerLine;
    DVTBorderView *_secondDividerLine;
    DVTScopeBarView *_scopeBarView;
    NSTabView *_tabView;
    NSTabView *_hierarchyTabView;
    IDENavigatorOutlineView *_fileSystemOutlineView;
    IDENavigatorOutlineView *_flatOutlineView;
    IDENavigatorOutlineView *_workspaceOutlineView;
    IDENavigatorOutlineView *_issuesOutlineView;
    NSArray *_initialSelectedFilePaths;
    NSTableColumn *_fileSystemOutlineCheckboxColumn;
    NSTableColumn *_flatOutlineCheckboxColumn;
    NSTableColumn *_workspaceOutlineCheckboxColumn;
    DVTBorderedView *_outerBorderedView;
    NSMutableArray *_checkedFilePaths;
    NSMutableArray *_completedFilePaths;
    NSMutableSet *_mixedStateFilePaths;
    NSMutableArray *_disabledFilePaths;
    NSArray *_viewChoices;
    DVTChoice *_selectedViewChoice;
    unsigned long long _selectedNavigator;
    NSString *_userDefaultKeyForSelectedState;
    NSArray *_selectedFilePaths;
    DVTDocumentLocation *_selectedDocumentLocation;
    id <IDEReviewFilesDataSource> _workspaceDataSource;
    id <IDEReviewFilesDataSource> _fileSystemDataSource;
    id <IDEReviewFilesDataSource> _flatDataSource;
    id <IDEReviewFilesDataSource> _issueDataSource;
    int _activity;
    NSMutableIndexSet *_lastSelectedIndexes;
    IDENavigatorSearchFilterControlBar *_filterControlBar;
    NSString *_filterString;
    BOOL _showFilter;
    BOOL _showCheckboxes;
    BOOL _showVibrancy;
    BOOL _showHierarchy;
    unsigned long long _supportedNavigators;
    unsigned long long _supportedStatusBadges;
}

+ (id)keyPathsForValuesAffectingSelectedNavigator;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCheckedFilePaths;
@property unsigned long long supportedStatusBadges; // @synthesize supportedStatusBadges=_supportedStatusBadges;
@property unsigned long long supportedNavigators; // @synthesize supportedNavigators=_supportedNavigators;
@property(nonatomic) BOOL showHierarchy; // @synthesize showHierarchy=_showHierarchy;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) NSMutableSet *mixedStateFilePaths; // @synthesize mixedStateFilePaths=_mixedStateFilePaths;
@property BOOL showCheckboxes; // @synthesize showCheckboxes=_showCheckboxes;
@property(copy) NSString *userDefaultKeyForSelectedState; // @synthesize userDefaultKeyForSelectedState=_userDefaultKeyForSelectedState;
@property BOOL showFilter; // @synthesize showFilter=_showFilter;
@property(readonly) DVTDocumentLocation *selectedDocumentLocation; // @synthesize selectedDocumentLocation=_selectedDocumentLocation;
@property(copy, nonatomic) DVTChoice *selectedViewChoice; // @synthesize selectedViewChoice=_selectedViewChoice;
@property(readonly) NSArray *viewChoices; // @synthesize viewChoices=_viewChoices;
@property(retain) NSMutableArray *disabledFilePaths; // @synthesize disabledFilePaths=_disabledFilePaths;
@property(retain) NSMutableArray *completedFilePaths; // @synthesize completedFilePaths=_completedFilePaths;
@property(retain) id <IDEReviewFilesDataSource> issueDataSource; // @synthesize issueDataSource=_issueDataSource;
@property(retain) id <IDEReviewFilesDataSource> flatDataSource; // @synthesize flatDataSource=_flatDataSource;
@property(retain) id <IDEReviewFilesDataSource> fileSystemDataSource; // @synthesize fileSystemDataSource=_fileSystemDataSource;
@property(retain) id <IDEReviewFilesDataSource> workspaceDataSource; // @synthesize workspaceDataSource=_workspaceDataSource;
- (void).cxx_destruct;
- (void)reloadData;
- (void)reloadCheckboxesForFilePaths:(id)arg1;
- (void)_reloadCheckboxes;
- (BOOL)canBecomeMainViewController;
- (id)outlineView:(id)arg1 rowIndexesForItems:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (void)_outlineView:(id)arg1 updateScmStatusTextFieldBindingsForExistingItemInOutlineView:(id)arg2;
- (id)successImage;
- (id)_outlineView:(id)arg1 tableCellViewForDefaultNavItem:(id)arg2;
- (void)_outlineView:(id)arg1 updateSCMConflictStatusViewBindings:(id)arg2;
- (void)_outlineView:(id)arg1 updateSCMStatusViewBindings:(id)arg2;
- (id)_outlineView:(id)arg1 imageTableCellViewForDefaultNavItem:(id)arg2;
- (id)_outlineView:(id)arg1 checkboxTableCellViewForDefaultNavItem:(id)arg2;
- (void)_checkBoxAction:(id)arg1;
- (id)navigableItemsInOutlineView:(id)arg1 forFilePaths:(id)arg2;
- (id)navigableChildItemOfItem:(id)arg1 matchingFilePath:(id)arg2;
- (void)addFilePathToMixedState:(id)arg1;
- (void)removeFilePathFromMixedState:(id)arg1;
- (void)uncheckItemsAtFilePaths:(id)arg1;
- (void)checkItemsAtFilePaths:(id)arg1;
- (void)refreshItemsAtFilePaths:(id)arg1;
- (id)contextMenuSelection;
@property(retain) NSMenu *contextMenu;
- (void)updateSelectedDocumentLocation;
@property int activity; // @synthesize activity=_activity;
@property(retain) NSArray *checkedFilePaths; // @synthesize checkedFilePaths=_checkedFilePaths;
@property(readonly) IDENavigatorOutlineView *currentOutlineView;
- (void)setupViewChoices;
- (void)reloadAvailableNavigators;
@property unsigned long long selectedNavigator;
- (void)setSelectedNavigableItems:(id)arg1 forOutlineView:(id)arg2;
- (id)selectedNavigableItemsOfOutlineView:(id)arg1;
- (void)setSelectedFilePaths:(id)arg1 forOutlineView:(id)arg2;
- (void)setInitialSelectedFilePaths:(id)arg1;
- (id)selectedFilePathsOfOutlineView:(id)arg1;
@property(retain) NSArray *selectedFilePaths;
- (id)domainIdentifier;
@property(readonly) IDENavigatorOutlineView *issuesOutlineView;
@property(readonly) IDENavigatorOutlineView *flatOutlineView;
@property(readonly) IDENavigatorOutlineView *fileSystemOutlineView;
@property(readonly) IDENavigatorOutlineView *workspaceOutlineView;
- (BOOL)supportsIssueNavigator;
- (BOOL)supportsWorkspaceNavigator;
- (BOOL)supportsRepositoryNavigator;
- (BOOL)supportsFlatNavigator;
- (BOOL)supportsFileNavigator;
@property BOOL showVibrancy; // @synthesize showVibrancy=_showVibrancy;
- (void)vibrancyUpdate;
- (void)_layoutViewSubviews;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)filterDefinitionIdentifier;

@end

