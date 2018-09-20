//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class DBGDataValue, DVTBorderedView, DVTReplacementView, IDEHexEditorViewController, NSButton, NSData, NSProgressIndicator, NSSegmentedControl, NSString, NSTextField, NSURL, NSView;
@protocol DVTCancellable;

@interface DBGNSDataQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    DBGDataValue *_dataValue;
    unsigned long long _startAddressOfByteData;
    long long _numberOfBytesInNSData;
    unsigned long long _numberOfPagesOfByteData;
    NSData *_currentPageOfNSData;
    id <DVTCancellable> _cancellableMemoryReadToken;
    id <DVTCancellable> _cancellableMemoryReadForExportToken;
    int _loadedState;
    long long _currentPageIndexIntoByteData;
    DVTBorderedView *_borderedView;
    IDEHexEditorViewController *_hexEditorViewController;
    DVTReplacementView *_hexEditorReplacementView;
    NSSegmentedControl *_pageSegmentedControl;
    NSTextField *_statusLabel;
    NSButton *_exportButton;
    NSProgressIndicator *_spinner;
}

@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain) NSSegmentedControl *pageSegmentedControl; // @synthesize pageSegmentedControl=_pageSegmentedControl;
@property(retain) DVTReplacementView *hexEditorReplacementView; // @synthesize hexEditorReplacementView=_hexEditorReplacementView;
@property(retain) IDEHexEditorViewController *hexEditorViewController; // @synthesize hexEditorViewController=_hexEditorViewController;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic) long long currentPageIndexIntoByteData; // @synthesize currentPageIndexIntoByteData=_currentPageIndexIntoByteData;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)exportButtonPressed:(id)arg1;
- (void)nextOrPreviousPage:(id)arg1;
- (void)promptToSaveData:(id)arg1 withSuggestedFileName:(id)arg2;
- (BOOL)_stringIsAlphaNumeric:(id)arg1;
- (void)_retrieveDataForExport;
- (void)_failedToGetData;
- (void)_pageOfByteDataWasFetched:(id)arg1 startingAddressOfPage:(unsigned long long)arg2;
- (void)_retrievePage:(unsigned long long)arg1;
- (void)_startInitialRetrieval;
- (void)_startSwiftDataToNSDataConversion;
- (void)cancelLoading;
- (void)dealloc;
@property(readonly) NSView *quickLookView;
- (void)_updatePageControlEnablement;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

