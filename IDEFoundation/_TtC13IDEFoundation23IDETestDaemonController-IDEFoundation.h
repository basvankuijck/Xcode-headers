//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/_TtC13IDEFoundation23IDETestDaemonController.h>

#import <IDEFoundation/IDETestDaemonController-Protocol.h>

@interface _TtC13IDEFoundation23IDETestDaemonController (IDEFoundation) <IDETestDaemonController>
- (void)requestSpindumpWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) BOOL canRequestSpindumps;
- (void)collectLogArchiveFromDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) BOOL canRequestLogArchives;
- (void)addProcessNamesToMonitoredCrashReports:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) BOOL canRequestCrashReports;
- (void)authorizeProcessWithIdentifier:(int)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic, readonly) BOOL canAuthorizeProcesses;
- (void)activate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
@end

