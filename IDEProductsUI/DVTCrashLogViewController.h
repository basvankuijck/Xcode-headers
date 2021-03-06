//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTFindBarHostable-Protocol.h>
#import <IDEProductsUI/DVTScopeBarHost-Protocol.h>
#import <IDEProductsUI/IDEAnalyticsPointLogViewControllerProtocol-Protocol.h>
#import <IDEProductsUI/NSOutlineViewDataSource-Protocol.h>
#import <IDEProductsUI/NSOutlineViewDelegate-Protocol.h>

@class DVTBasicFindBar, DVTCrashLog, DVTCrashLogOutlineView, DVTCrashPoint, DVTDelayedInvocation, DVTNotificationToken, DVTScopeBarController, DVTScopeBarsManager, DVTUserDefaultsLeastRecentlyUsedCache, IDEAnalyticsPointLogViewController, NSArray, NSDictionary, NSScrollView, NSString, NSValue, NSView;

@interface DVTCrashLogViewController : IDEViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTFindBarHostable, DVTScopeBarHost, IDEAnalyticsPointLogViewControllerProtocol>
{
    DVTBasicFindBar *_findBar;
    DVTScopeBarController *_findBarScopeBarController;
    DVTScopeBarsManager *_scopeBarsManager;
    NSString *_findString;
    BOOL _findCaseSensitive;
    NSDictionary *_findBarHighlightedStackFrame;
    NSValue *_findBarHighlightedStackFrameRange;
    id _findStringChangedNotificationToken;
    BOOL _isFindBarInstalled;
    float _scrollViewTopContentInsetDefault;
    DVTDelayedInvocation *_saveCrashLogScrollPositionInvocation;
    DVTCrashLog *_crashLog;
    DVTCrashPoint *_crashPoint;
    NSArray *_findBarMatches;
    IDEAnalyticsPointLogViewController *_analyticsPointLogViewController;
    NSView *_scopeBarsBaseView;
    NSArray *_findBarMatchingFrames;
    NSScrollView *_scrollView;
    DVTNotificationToken *_scrollViewBoundsChangeObserver;
    DVTUserDefaultsLeastRecentlyUsedCache *_scrollPositionCache;
    DVTCrashLogOutlineView *_outlineView;
}

+ (id)_colorForStackFrameWithoutSymbols;
+ (id)keyPathsForValuesAffectingIsSymbolicating;
+ (void)initialize;
@property(retain) NSString *findString; // @synthesize findString=_findString;
@property __weak DVTCrashLogOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property float scrollViewTopContentInsetDefault; // @synthesize scrollViewTopContentInsetDefault=_scrollViewTopContentInsetDefault;
@property(retain, nonatomic) DVTUserDefaultsLeastRecentlyUsedCache *scrollPositionCache; // @synthesize scrollPositionCache=_scrollPositionCache;
@property(retain, nonatomic) DVTNotificationToken *scrollViewBoundsChangeObserver; // @synthesize scrollViewBoundsChangeObserver=_scrollViewBoundsChangeObserver;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy) NSArray *findBarMatchingFrames; // @synthesize findBarMatchingFrames=_findBarMatchingFrames;
@property(retain) NSView *scopeBarsBaseView; // @synthesize scopeBarsBaseView=_scopeBarsBaseView;
@property(nonatomic) BOOL isFindBarInstalled; // @synthesize isFindBarInstalled=_isFindBarInstalled;
@property(nonatomic) __weak IDEAnalyticsPointLogViewController *analyticsPointLogViewController; // @synthesize analyticsPointLogViewController=_analyticsPointLogViewController;
@property(copy) NSArray *findBarMatches; // @synthesize findBarMatches=_findBarMatches;
@property(retain, nonatomic) DVTCrashPoint *crashPoint; // @synthesize crashPoint=_crashPoint;
@property(retain, nonatomic) DVTCrashLog *crashLog; // @synthesize crashLog=_crashLog;
@property(retain, nonatomic) DVTDelayedInvocation *saveCrashLogScrollPositionInvocation; // @synthesize saveCrashLogScrollPositionInvocation=_saveCrashLogScrollPositionInvocation;
- (void).cxx_destruct;
- (void)_updateFindBar:(id)arg1;
- (id)findBar;
- (id)scopeBarsManager;
- (void)basicFindBarLostFocus:(id)arg1;
- (BOOL)basicFindBar:(id)arg1 findPreviousByWrapping:(BOOL)arg2;
- (BOOL)basicFindBar:(id)arg1 findNextByWrapping:(BOOL)arg2;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (BOOL)_findPreviousByWrapping:(BOOL)arg1;
- (BOOL)_findNextByWrapping:(BOOL)arg1;
- (long long)findMatchingFramesAndThreads;
- (void)clearFindMatches;
- (long long)basicFindBar:(id)arg1 findString:(id)arg2 caseSensitive:(BOOL)arg3 withFindType:(unsigned long long)arg4 andMatchStyle:(unsigned long long)arg5;
- (BOOL)basicFindBar:(id)arg1 supportsMatchStyle:(unsigned long long)arg2;
- (BOOL)basicFindBar:(id)arg1 supportsFindType:(unsigned long long)arg2;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (void)dismissFindBar;
- (void)showContentFindView;
- (void)find:(id)arg1;
- (void)symbolicateAnalyticsLog:(id)arg1;
- (void)showAnalyticsLogInFinder:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)_frameAndImageAttributes;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)_stackFramesWereCompressedBetweenFrame:(id)arg1 andFrame:(id)arg2;
- (BOOL)stackFrameIsLastChildOfThread:(id)arg1;
- (id)framesForThreadRespectingCompression:(id)arg1;
- (id)threadsRespectingCompression;
- (void)toggleLibraryFrameCompression;
- (id)stackFrameImage:(id)arg1;
- (id)stackFrameFont:(id)arg1;
- (id)stackFrameColor:(id)arg1;
- (BOOL)stackFrameHasSymbols:(id)arg1;
- (BOOL)stackFrameIsCrashedFrame:(id)arg1;
- (BOOL)isCrashingThread:(id)arg1;
- (id)_presumedBundleIdentifier;
- (id)_presumedAppName;
- (unsigned long long)compressionPadding;
- (void)scrollViewBoundsDidChange:(id)arg1;
- (void)_restoreCrashLogScrollPosition;
@property BOOL compressLibraryFrames;
- (void)_restoreDefaultExpansion;
- (BOOL)wantsAutomaticSymbolication;
- (void)refreshCrashLogView;
- (void)symbolicateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isSymbolicating;
- (id)crashLogProvider;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly) BOOL compressLowSampleCountFrames;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;

@end

