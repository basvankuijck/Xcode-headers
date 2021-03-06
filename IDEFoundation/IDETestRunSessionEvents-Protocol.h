//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTTestPerformanceMetricOutput, IDETest, IDETestResult, IDETestResultMessage, IDETestRunSession, NSError, NSString, XCActivityRecord;
@protocol IDETestRunner, IDETestTargetRunner;

@protocol IDETestRunSessionEvents <NSObject>
- (void)worker:(id <IDETestRunner>)arg1 didFinishTest:(IDETest *)arg2 withTestResult:(IDETestResult *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 didFailTest:(IDETest *)arg2 withTestResultMessage:(IDETestResultMessage *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 test:(IDETest *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (void)worker:(id <IDETestRunner>)arg1 test:(IDETest *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (void)worker:(id <IDETestRunner>)arg1 test:(IDETest *)arg2 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 testDidOutput:(NSString *)arg2;
- (void)worker:(id <IDETestRunner>)arg1 didStartTest:(IDETest *)arg2 withRawOutput:(NSString *)arg3;
- (void)worker:(id <IDETestRunner>)arg1 testSuiteDidFinish:(unsigned long long)arg2 withFailures:(unsigned long long)arg3 unexpected:(unsigned long long)arg4 testDuration:(double)arg5 totalDuration:(double)arg6 rawOutput:(NSString *)arg7;
- (void)worker:(id <IDETestRunner>)arg1 testSuite:(NSString *)arg2 willFinishAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 testSuite:(NSString *)arg2 didStartAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)worker:(id <IDETestRunner>)arg1 willFinishPrematurelyWithError:(NSError *)arg2;
- (void)worker:(id <IDETestRunner>)arg1 willFinishWithSuccess:(BOOL)arg2 withError:(NSError *)arg3;
- (void)worker:(id <IDETestRunner>)arg1 didLaunchWithDiagnosticLogPath:(NSString *)arg2;
- (void)testTargetRunner:(id <IDETestTargetRunner>)arg1 didEndWithCancellation:(BOOL)arg2;
- (void)testTargetRunnerDidStart:(id <IDETestTargetRunner>)arg1;
- (void)testRunSessionDidFinish:(IDETestRunSession *)arg1 withCancellation:(BOOL)arg2;
@end

