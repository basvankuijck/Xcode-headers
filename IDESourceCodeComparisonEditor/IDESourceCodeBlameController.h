//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceCodeComparisonEditor/DVTInvalidation-Protocol.h>

@class DVTNotificationToken, DVTSourceControlRevision, DVTSourceControlWorkingCopy, DVTStackBacktrace, IDEEditorDocument, IDESourceControlDocumentLocation, IDEWorkspace, NSArray, NSString;
@protocol DVTSourceControlCancellable, IDESourceCodeBlameControllerDelegate, OS_dispatch_queue;

@interface IDESourceCodeBlameController : NSObject <DVTInvalidation>
{
    IDESourceControlDocumentLocation *_sourceDocLocation;
    IDEWorkspace *_workspace;
    IDEEditorDocument *_editorDocument;
    NSString *_revision;
    NSArray *_blameItems;
    id <DVTSourceControlCancellable> _blameRequest;
    id <IDESourceCodeBlameControllerDelegate> _delegate;
    NSString *_specificUnavailabilityDescription;
    NSString *_genericUnavailabilityDescription;
    id <DVTSourceControlCancellable> _logLoadingToken;
    NSObject<OS_dispatch_queue> *_logLoadingQueue;
    BOOL _loading;
    BOOL _isBlameAvailableForRevision;
    BOOL _blameItemsAreValid;
    BOOL _editorTextViewBoundsChanged;
    DVTNotificationToken *_didScanWorkspaceToken;
    BOOL _didScanWorkspace;
    DVTSourceControlRevision *_selectedRevision;
}

+ (void)initialize;
@property(retain) DVTSourceControlRevision *selectedRevision; // @synthesize selectedRevision=_selectedRevision;
@property BOOL editorTextViewBoundsChanged; // @synthesize editorTextViewBoundsChanged=_editorTextViewBoundsChanged;
@property(readonly) NSString *genericUnavailabilityDescription; // @synthesize genericUnavailabilityDescription=_genericUnavailabilityDescription;
@property(readonly) NSString *specificUnavailabilityDescription; // @synthesize specificUnavailabilityDescription=_specificUnavailabilityDescription;
@property BOOL isBlameAvailableForRevision; // @synthesize isBlameAvailableForRevision=_isBlameAvailableForRevision;
@property(retain) id <IDESourceCodeBlameControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL loading; // @synthesize loading=_loading;
@property(retain) NSArray *blameItems; // @synthesize blameItems=_blameItems;
@property(readonly) NSString *revision; // @synthesize revision=_revision;
@property(readonly) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(readonly) __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) IDESourceControlDocumentLocation *sourceDocLocation; // @synthesize sourceDocLocation=_sourceDocLocation;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadLogItem:(id)arg1 fromAnnotationViewController:(id)arg2;
- (void)_retrieveBlameEntries;
- (id)resolvedFilePath:(id)arg1;
- (void)removeFromComparisonEditor;
@property(readonly) NSString *relativeFilePath;
@property(readonly) DVTSourceControlWorkingCopy *workingCopy;
- (void)updateSourceDocLocation:(id)arg1;
- (id)initWithSourceControlLocation:(id)arg1 workspace:(id)arg2 editorDocument:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

