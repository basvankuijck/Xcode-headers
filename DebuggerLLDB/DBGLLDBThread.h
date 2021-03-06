//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEThread.h>

#import <DebuggerLLDB/IDEThreadSuspendProtocol-Protocol.h>

@class DBGLLDBSession, DVTDispatchLock, NSArray, NSMutableArray, NSString;
@protocol DBGSBQueueItem, DBGSBThread;

@interface DBGLLDBThread : IDEThread <IDEThreadSuspendProtocol>
{
    id <DBGSBThread> _lldbThread;
    id <DBGSBQueueItem> _lldbQueueItem;
    BOOL _derivedRecordedThread;
    BOOL _hasFetchedFullListOfStackFrames;
    NSMutableArray *_backingStackFrames;
    NSMutableArray *_delayedInvalidationStackFrames;
    DVTDispatchLock *_delayedInvalidationStackFramesLock;
    unsigned long long _reuseGeneration;
    DVTDispatchLock *_reuseGenerationLock;
    BOOL _currentThread;
    BOOL _delayToAllowFastPCDrawing;
}

+ (id)createPendingBlockThreadWithParentProcess:(id)arg1 queueItem:(id)arg2 name:(id)arg3;
+ (id)queryRecordedStackFramesForThread:(id)arg1 withParentProcess:(id)arg2 queue:(id)arg3 lldbThread:(id)arg4;
+ (BOOL)_isLookingForNSOperationInStackFrames:(id)arg1;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property BOOL delayToAllowFastPCDrawing; // @synthesize delayToAllowFastPCDrawing=_delayToAllowFastPCDrawing;
@property(getter=isCurrentThread) BOOL currentThread; // @synthesize currentThread=_currentThread;
@property(readonly) NSArray *backingStackFrames; // @synthesize backingStackFrames=_backingStackFrames;
- (void).cxx_destruct;
- (void)_invalidateAndClearBackingStackFrames:(id)arg1;
- (void)primitiveInvalidate;
- (void)invalidateUnusedStackFramesAfterCallToSetStackFrames:(id)arg1;
- (void)requestUnsuspend;
- (void)requestSuspend;
- (void)setStackFramesWithAddresses:(id)arg1;
- (void)requestStackFrames:(unsigned long long)arg1 handleOnMainQueue:(BOOL)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_setStackFramesOnMainThread:(id)arg1;
- (void)setStackFrames:(id)arg1;
- (void)willReuse:(BOOL)arg1;
- (void)refreshStackFrames;
- (id)_frameNameForSBFrame:(id)arg1;
- (id)fetchBackingStackFramesIfNecessary:(unsigned long long)arg1 markRecorded:(BOOL)arg2;
- (id)recordedThread;
- (id)compressedStackFramesIncludingRecorded:(long long)arg1;
@property(readonly) DBGLLDBSession *lldbSession;
- (void)_assertOnSessionThread;
- (void)_setLLDBQueueItem:(id)arg1;
- (id)lldbThread;
- (id)initWithParentProcess:(id)arg1 uniqueID:(id)arg2 lldbThread:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

