//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

#import <IDEKit/DVTTestDeviceClonePoolObserving-Protocol.h>

@class DVTObservingToken, DVTTestDeviceClonePool, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IDEDeviceActivityReporter : IDEActivityReporter <DVTTestDeviceClonePoolObserving>
{
    NSMutableDictionary *_deviceToObservers;
    NSMutableDictionary *_deviceToOperationReports;
    DVTObservingToken *_deviceObserver;
    NSObject<OS_dispatch_queue> *_observerQueue;
    DVTTestDeviceClonePool *_clonePool;
}

@property(readonly) DVTTestDeviceClonePool *clonePool; // @synthesize clonePool=_clonePool;
- (void).cxx_destruct;
- (void)clonePool:(id)arg1 didUpdate:(id)arg2;
- (void)_stopObservingDevices:(id)arg1;
- (void)_observeDevice:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;
- (id)initWithDeviceManager:(id)arg1 clonePool:(id)arg2 workspace:(id)arg3;

@end

