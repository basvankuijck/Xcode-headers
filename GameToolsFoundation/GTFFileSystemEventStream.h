//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameToolsFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;
@protocol GTFFileSystemEventStreamDelegate;

@interface GTFFileSystemEventStream : NSObject <DVTInvalidation>
{
    struct __FSEventStream *_eventStream;
    struct FSEventStreamContext _context;
    id <GTFFileSystemEventStreamDelegate> _delegate;
    unsigned long long _lastEventProcessed;
    struct {
        unsigned int _notedChangeAtPath:1;
        unsigned int _notedChangeOfRootPath:1;
        unsigned int _notedVolumeMount:1;
        unsigned int _notedVolumeUnmount:1;
        unsigned int _historyComplete:1;
        unsigned int _historyWrapped:1;
        unsigned int _reserved:26;
    } _delegateFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (unsigned long long)lastEventProcessed;
@property __weak id <GTFFileSystemEventStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)flushSync;
- (void)flush;
- (void)stop;
- (void)start;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithPaths:(id)arg1 watchRoot:(BOOL)arg2;
- (id)initWithPaths:(id)arg1 startingWithEvent:(unsigned long long)arg2 latency:(double)arg3 defer:(BOOL)arg4 watchRoot:(BOOL)arg5;
- (void)_processEvent:(unsigned long long)arg1 withFlags:(unsigned int)arg2 forPath:(id)arg3;
- (void)_processEvents:(const unsigned long long *)arg1 count:(unsigned long long)arg2 withFlags:(const unsigned int *)arg3 forPaths:(id)arg4;
- (struct __CFString *)_createCFRunLoopModeFromNSRunLoopMode:(id)arg1;
- (struct __CFRunLoop *)_getCFRunLoopFromNSRunLoop:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

