//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTTestPerformanceMetricOutput, IDETestIdentifier, IDETestResult, IDETestResultMessage, NSError, NSString, XCActivityRecord;
@protocol IDETestRunner;

@protocol IDETestRunnerEvents
- (void)testRunner:(id <IDETestRunner>)arg1 didFinishTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResult:(IDETestResult *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 didFailTestWithIdentifier:(IDETestIdentifier *)arg2 withTestResultMessage:(IDETestResultMessage *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didMeasurePerformanceMetric:(DVTTestPerformanceMetricOutput *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 didOutput:(NSString *)arg2;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 didFinishActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 testWithIdentifier:(IDETestIdentifier *)arg2 willStartActivity:(XCActivityRecord *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 didStartTestWithIdentifier:(IDETestIdentifier *)arg2 rawOutput:(NSString *)arg3;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuiteDidFinish:(unsigned long long)arg2 withFailures:(unsigned long long)arg3 unexpected:(unsigned long long)arg4 testDuration:(double)arg5 totalDuration:(double)arg6 rawOutput:(NSString *)arg7;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuite:(IDETestIdentifier *)arg2 willFinishAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 testSuite:(IDETestIdentifier *)arg2 didStartAt:(NSString *)arg3 rawOutput:(NSString *)arg4;
- (void)testRunner:(id <IDETestRunner>)arg1 willFinishWithError:(NSError *)arg2 didCancel:(BOOL)arg3;
- (void)testRunnerDidBecomeReadyForWork:(id <IDETestRunner>)arg1;
- (void)testRunner:(id <IDETestRunner>)arg1 didLaunchWithDiagnosticLogPath:(NSString *)arg2;
@end
