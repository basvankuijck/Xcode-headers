//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTLozengeTextField, DVTObservingToken, DVTOutlineView, DVTReplacementView, IDETestReportAttachmentsSupport, IDETestReportRemoteAssetDownloader, IDETestReportSelectionDocumentLocation, IDETestReportStateSaving, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableIndexSet, NSPopover, NSScrollView, NSString, NSURL, NSView;
@protocol IDETestReport_RootObject;

@interface IDETestReportViewController : IDEViewController <NSOutlineViewDelegate, NSOutlineViewDataSource, NSPopoverDelegate, IDETestsInTestableObserver, NSMenuDelegate>
{
    NSMapTable *_filteredTestsAndGroupItems;
    NSPopover *_setBaselinePopover;
    BOOL _enableBaselineUpdatingUI;
    DVTObservingToken *_controllerContentViewLayoutObservingToken;
    BOOL _readyToReloadView;
    NSMutableArray *_testRunPickerRows;
    NSMapTable *_testRunPickerRowsAndSelectedTestRun;
    NSMutableArray *_remoteDownloadHelpers;
    NSMutableIndexSet *_multilineAssertionRowIndexes;
    NSMutableArray *_assertionOutlineObjects;
    NSMutableArray *_filteredGroupsWithNamesMatchingFilterPredicate;
    IDETestReportAttachmentsSupport *_attachmentsSupport;
    IDETestReportStateSaving *_stateSavingHelper;
    BOOL _disableStateSaving;
    IDETestReportRemoteAssetDownloader *_assetDownloader;
    BOOL _attachmentsHaveBeenPruned;
    id <IDETestReport_RootObject> _rootObject;
    CDUnknownBlockType _selectionChangedCallback;
    NSURL *_documentURL;
    NSArray *_outlineViewRootItems;
    DVTLozengeTextField *_lozengeTextField;
    DVTReplacementView *_scopeBarReplacementView;
    DVTOutlineView *_olv;
    NSScrollView *_testsScrollView;
    NSView *_testHostView;
    NSArray *_deviceColumns;
    NSArray *_perfMetricColumns;
    NSArray *_filteredTests;
    NSArray *_filteredOutlineViewRootItems;
    NSArray *_perfTestMetricNames;
    NSDictionary *_testItemsByIdentifier;
}

+ (id)testIdentifierForTestGroup:(id)arg1 test:(id)arg2;
@property(retain, nonatomic) NSDictionary *testItemsByIdentifier; // @synthesize testItemsByIdentifier=_testItemsByIdentifier;
@property(copy, nonatomic) NSArray *perfTestMetricNames; // @synthesize perfTestMetricNames=_perfTestMetricNames;
@property(copy, nonatomic) NSArray *filteredOutlineViewRootItems; // @synthesize filteredOutlineViewRootItems=_filteredOutlineViewRootItems;
@property(copy, nonatomic) NSArray *filteredTests; // @synthesize filteredTests=_filteredTests;
@property(retain, nonatomic) NSArray *perfMetricColumns; // @synthesize perfMetricColumns=_perfMetricColumns;
@property(retain, nonatomic) NSArray *deviceColumns; // @synthesize deviceColumns=_deviceColumns;
@property(nonatomic) __weak NSView *testHostView; // @synthesize testHostView=_testHostView;
@property(nonatomic) __weak NSScrollView *testsScrollView; // @synthesize testsScrollView=_testsScrollView;
@property(nonatomic) __weak DVTOutlineView *olv; // @synthesize olv=_olv;
@property(nonatomic) __weak DVTReplacementView *scopeBarReplacementView; // @synthesize scopeBarReplacementView=_scopeBarReplacementView;
@property(nonatomic) __weak DVTLozengeTextField *lozengeTextField; // @synthesize lozengeTextField=_lozengeTextField;
@property(copy, nonatomic) NSArray *outlineViewRootItems; // @synthesize outlineViewRootItems=_outlineViewRootItems;
@property(nonatomic) BOOL attachmentsHaveBeenPruned; // @synthesize attachmentsHaveBeenPruned=_attachmentsHaveBeenPruned;
@property(copy, nonatomic) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(copy, nonatomic) CDUnknownBlockType selectionChangedCallback; // @synthesize selectionChangedCallback=_selectionChangedCallback;
@property(retain, nonatomic) id <IDETestReport_RootObject> rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)parentTestOf:(id)arg1;
- (id)parentActivityOfAttachment:(id)arg1;
- (void)configureActivitiesCell:(id)arg1 activity:(id)arg2 isFirstActivity:(BOOL)arg3 startTime:(id)arg4 columnWidth:(double)arg5;
- (void)configureAttachmentsCell:(id)arg1 attachment:(id)arg2 activity:(id)arg3;
- (void)updateBaselineForPerfMetric:(id)arg1 inTestRun:(id)arg2 newBaseline:(double)arg3 newAllowedSTD:(id)arg4;
- (id)assertionsInTestRun:(id)arg1;
- (id)noBaselineWarningsInTestRun:(id)arg1;
- (BOOL)testRunHasMissingBaseline:(id)arg1;
- (void)showTestAssertionsForTestRun:(id)arg1 inTest:(id)arg2 button:(id)arg3;
- (void)_showBaselinePopoverForTest:(id)arg1 test:(id)arg2 relativeTo:(id)arg3;
- (void)performanceMetricBaselineRecordForTestIdentifier:(id)arg1 testRun:(id)arg2 testGroupName:(id)arg3 testName:(id)arg4 matchingPerfMetric:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)popoverDidClose:(id)arg1;
- (void)quickLookFirstAttachmentInActivity:(id)arg1 relativeToView:(id)arg2;
- (void)quickLookAttachmentsInActivity:(id)arg1 relativeToView:(id)arg2;
- (void)_quickLookAttachment:(id)arg1 activity:(id)arg2 relativeToView:(id)arg3;
- (void)quickLookRow:(id)arg1;
- (id)attachmentsSupport;
- (BOOL)outlineView:(id)arg1 insertText:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)indexPathForOutlineItem:(id)arg1;
- (id)indexPathForTestItem:(id)arg1 inGroup:(id)arg2;
- (id)indexPathForTestGroup:(id)arg1;
- (id)indexPathForTestActivity:(id)arg1 groupIndex:(unsigned long long)arg2 testIndex:(unsigned long long)arg3;
- (id)testForItem:(id)arg1;
- (id)testGroupForItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)outlineViewColumnDidResize:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)cellViewForAssertionItem:(id)arg1;
- (void)showResultsForTestRun:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)combinedAssertionsStringForFailureSummaries:(id)arg1;
- (struct CGSize)requiredSizeForAssertion:(id)arg1 itemLevel:(unsigned long long)arg2 activity:(id)arg3 failureSummary:(id)arg4;
- (id)attributedStringForTestName:(id)arg1 parentGroupName:(id)arg2 passFailString:(id)arg3;
- (void)copy:(id)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
@property(readonly, copy, nonatomic) IDETestReportSelectionDocumentLocation *selectedDocumentLocation;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)itemIsAssertionFailure:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)activityChildrenFor:(id)arg1;
- (void)openAttachment:(id)arg1;
- (void)contextMenu_exportResultBundle:(id)arg1;
- (void)contextMenu_openAttachment:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)openActivityPayloadInEditor:(id)arg1;
- (void)doubleClickTableRow:(id)arg1;
- (void)saveRemoteAttachments:(id)arg1 forActivity:(id)arg2 destinationDirectory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)testHasAssertions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showTestForClassName:(id)arg1 methodName:(id)arg2;
- (void)reloadAndFilterOutline;
- (id)filterString;
- (id)filteredActivitiesIn:(id)arg1 filter:(id)arg2;
- (id)filteredTestsIn:(id)arg1 filter:(id)arg2;
- (void)scopeBarChanged;
- (id)tableColumnIdentifierForDevice:(id)arg1;
- (void)configureColumns;
- (void)reloadAndExpandOutlineView;
- (void)_expandDefaultsOrRestoreState;
- (long long)traverseTestForActivitiesInPath:(id)arg1 parentGroup:(id)arg2 expandNodes:(BOOL)arg3;
- (id)_expandGroupAtIndexPosition:(long long)arg1;
- (void)_restoreSelectedPath;
- (void)_stashSelection:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedItems;
- (void)_refreshCachedItemIdentifiers;
@property(readonly, nonatomic) NSArray *allPerfTestGroups;
- (id)testClassesWithScopeBarFiltering;
- (id)scopeBarViewController;
- (BOOL)showOnlyPerformanceTests;
- (BOOL)showOnlyPassingTests;
- (BOOL)showOnlyFailingTests;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testablesChanged:(id)arg1;
- (void)viewDidInstall;
- (id)workspace;
- (id)workspaceTabController;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

