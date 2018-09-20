//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/XCTDaemonSession-Protocol.h>

@class NSArray, NSDate;
@protocol XCTDaemonControlSessionDelegate;

@protocol XCTDaemonControlSession <XCTDaemonSession>
@property(nonatomic) __weak id <XCTDaemonControlSessionDelegate> delegate;
- (void)requestSpindumpWithCompletion:(void (^)(NSData *, NSError *))arg1;
@property(nonatomic, readonly) BOOL canRequestSpindumps;
- (void)collectLogArchiveFromStartDate:(NSDate *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@property(nonatomic, readonly) BOOL canRequestLogArchives;
- (void)collectNewCrashReportsInDirectories:(NSArray *)arg1 matchingProcessNames:(NSArray *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@property(nonatomic, readonly) BOOL canRequestCrashReports;
- (void)authorizeProcessWithIdentifier:(int)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@property(nonatomic, readonly) BOOL canAuthorizeProcesses;
@end

