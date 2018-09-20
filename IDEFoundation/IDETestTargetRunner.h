//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDETestRunnerEvents-Protocol.h>
#import <IDEFoundation/IDETestTargetLoadBalancerDelegate-Protocol.h>
#import <IDEFoundation/IDETestTargetRunner-Protocol.h>
#import <IDEFoundation/XCTTestSchedulerDelegate-Protocol.h>

@class DVTDisallowFinishToken, DVTOperationGroup, DVTStackBacktrace, IDETestDestination, IDETestRunSpecification, NSMutableArray, NSMutableSet, NSOutputStream, NSString, NSURL;
@protocol IDETestMetadataDatabase, IDETestTargetLoadBalancer, IDETestTargetRunnerEvents, IDETestWorkerProvider, OS_dispatch_queue, XCTTestScheduler;

@interface IDETestTargetRunner : NSObject <XCTTestSchedulerDelegate, IDETestTargetLoadBalancerDelegate, IDETestTargetRunner, IDETestRunnerEvents>
{
    BOOL _hasNotifiedObserverOfStart;
    id <IDETestTargetRunnerEvents> _testEventsObserver;
    IDETestRunSpecification *_testRunSpecification;
    id <XCTTestScheduler> _scheduler;
    NSMutableArray *_testResults;
    unsigned long long _state;
    DVTOperationGroup *_operation;
    NSMutableSet *_workerProxies;
    DVTDisallowFinishToken *_disallowFinishToken;
    IDETestDestination *_testDestination;
    id <IDETestWorkerProvider> _workerProvider;
    id <IDETestTargetLoadBalancer> _loadBalancer;
    NSURL *_artifactsDirectory;
    NSOutputStream *_logStream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    id <IDETestMetadataDatabase> _testDatabase;
}

+ (id)logFileURLForArtifactsDirectory:(id)arg1;
+ (id)artifactsDirectoryURLForTestRunSpecification:(id)arg1 testSessionDirectory:(id)arg2;
+ (id)keyPathsForValuesAffectingFinished;
+ (BOOL)supportsInvalidationPrevention;
+ (void)initialize;
@property(readonly) id <IDETestMetadataDatabase> testDatabase; // @synthesize testDatabase=_testDatabase;
@property(retain) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain) NSOutputStream *logStream; // @synthesize logStream=_logStream;
@property(retain) NSURL *artifactsDirectory; // @synthesize artifactsDirectory=_artifactsDirectory;
@property(retain) id <IDETestTargetLoadBalancer> loadBalancer; // @synthesize loadBalancer=_loadBalancer;
@property(retain) id <IDETestWorkerProvider> workerProvider; // @synthesize workerProvider=_workerProvider;
@property(retain) IDETestDestination *testDestination; // @synthesize testDestination=_testDestination;
@property(retain) DVTDisallowFinishToken *disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
@property(retain) NSMutableSet *workerProxies; // @synthesize workerProxies=_workerProxies;
@property(retain) DVTOperationGroup *operation; // @synthesize operation=_operation;
@property BOOL hasNotifiedObserverOfStart; // @synthesize hasNotifiedObserverOfStart=_hasNotifiedObserverOfStart;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSMutableArray *testResults; // @synthesize testResults=_testResults;
@property(retain) id <XCTTestScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain) IDETestRunSpecification *testRunSpecification; // @synthesize testRunSpecification=_testRunSpecification;
@property __weak id <IDETestTargetRunnerEvents> testEventsObserver; // @synthesize testEventsObserver=_testEventsObserver;
- (void).cxx_destruct;
- (void)testRunner:(id)arg1 didFinishTestWithIdentifier:(id)arg2 withTestResult:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 didFailTestWithIdentifier:(id)arg2 withTestResultMessage:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 didMeasurePerformanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 didOutput:(id)arg2;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 didFinishActivity:(id)arg3;
- (void)testRunner:(id)arg1 testWithIdentifier:(id)arg2 willStartActivity:(id)arg3;
- (void)testRunner:(id)arg1 didStartTestWithIdentifier:(id)arg2 rawOutput:(id)arg3;
- (void)testRunner:(id)arg1 testSuiteDidFinish:(unsigned long long)arg2 withFailures:(unsigned long long)arg3 unexpected:(unsigned long long)arg4 testDuration:(double)arg5 totalDuration:(double)arg6 rawOutput:(id)arg7;
- (void)testRunner:(id)arg1 testSuite:(id)arg2 willFinishAt:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 testSuite:(id)arg2 didStartAt:(id)arg3 rawOutput:(id)arg4;
- (void)testRunner:(id)arg1 willFinishWithError:(id)arg2 didCancel:(BOOL)arg3;
- (void)testRunner:(id)arg1 didLaunchWithDiagnosticLogPath:(id)arg2;
- (void)testRunnerDidBecomeReadyForWork:(id)arg1;
- (void)bringUpAdditionalWorkerForLoadBalancer:(id)arg1;
- (void)testScheduler:(id)arg1 queueDidChange:(id)arg2;
- (void)finishLogging;
- (void)logMessage:(id)arg1;
- (void)initializeLogging;
- (void)purgeStaleClassesInTestDatabase:(id)arg1;
- (void)startWithTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)requestTestPlanUsingWorker:(id)arg1;
- (void)handleCancellation;
- (void)observeOperationCancellation;
- (void)considerFinishingWithCancellation:(BOOL)arg1;
- (void)failWithError:(id)arg1;
- (void)workerWasProvided:(id)arg1;
- (void)requestNewWorker;
- (void)setupOperation;
- (id)proxyForWorker:(id)arg1;
@property(readonly) BOOL finished;
- (void)primitiveInvalidate;
- (id)initWithTestRunSpecification:(id)arg1 testDestination:(id)arg2 workerProvider:(id)arg3 loadBalancer:(id)arg4 scheduler:(id)arg5 testDatabase:(id)arg6 artifactsDirectory:(id)arg7;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
