//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCBuild/_TtP7XCBuild25XCBBuildOperationDelegate_-Protocol.h>
#import <XCBuild/_TtP7XCBuild27XCBTaskConstructionDelegate_-Protocol.h>

@interface _TtC7XCBuildP33_6CECE755ED53AF512ED231D3C8C0D19020ActiveBuildOperation : NSObject <_TtP7XCBuild25XCBBuildOperationDelegate_, _TtP7XCBuild27XCBTaskConstructionDelegate_>
{
    // Error parsing type: , name: completionHandler
    // Error parsing type: , name: stdoutHandler
    // Error parsing type: , name: stderrHandler
    // Error parsing type: , name: outputQueue
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)buildOperationDidEnd:(id)arg1 metricsData:(id)arg2;
- (void)buildOperationPreparationComplete:(id)arg1;
- (void)buildOperation:(id)arg1 didUpdateProgressMessage:(id)arg2 forTargetName:(id)arg3 percentComplete:(double)arg4 showInLog:(BOOL)arg5;
- (void)buildOperation:(id)arg1 didUpdateProgressMessage:(id)arg2 percentComplete:(double)arg3 showInLog:(BOOL)arg4;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 forTask:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 forTarget:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 didEmitDiagnosticMessage:(id)arg2 ofType:(id)arg3 info:(id)arg4;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2 forTask:(id)arg3;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2 forTarget:(id)arg3;
- (void)buildOperation:(id)arg1 didEmitConsoleOutput:(id)arg2;
- (void)buildOperation:(id)arg1 didEndTask:(id)arg2 result:(long long)arg3 signalled:(BOOL)arg4;
- (void)buildOperation:(id)arg1 didStartTask:(id)arg2 forTarget:(id)arg3 subtaskOf:(id)arg4 info:(id)arg5;
- (void)buildOperation:(id)arg1 taskWasUpToDate:(id)arg2 forTarget:(id)arg3 subtaskOf:(id)arg4;
- (void)buildOperation:(id)arg1 didEndTarget:(id)arg2;
- (void)buildOperation:(id)arg1 targetWasUpToDate:(id)arg2;
- (void)buildOperation:(id)arg1 didStartTarget:(id)arg2 guid:(id)arg3 info:(id)arg4;
- (void)conservativeSupersetOfAssetTagCombinations:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateEmbeddedBinaryWithInputPath:(id)arg1 certSHA1Hash:(id)arg2 parentInfoPlistPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateIntentDefinitionFilesWithInputPath:(id)arg1 outputDirPath:(id)arg2 languageToGenerate:(id)arg3 classPrefix:(id)arg4 swiftVersion:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)intentDefinitionGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 languageToGenerate:(id)arg3 classPrefix:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)coreMLModelGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)generateCoreDataModelFilesWithInputPath:(id)arg1 outputDirPath:(id)arg2 deploymentTargets:(id)arg3 swiftVersion:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)coreDataModelGeneratedFilePathsWithInputPath:(id)arg1 outputDirPath:(id)arg2 swiftVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)provisioningTaskInputsWithTargetGUID:(id)arg1 provisioningSourceData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildOperation:(id)arg1 didReportCopiedPathMap:(id)arg2 generatedFilesPathMap:(id)arg3;
- (void)buildOperation:(id)arg1 didFinishPlanningOperation:(id)arg2;
- (void)buildOperation:(id)arg1 willStartPlanningOperation:(id)arg2;
- (void)buildOperationDidStart:(id)arg1;

@end

