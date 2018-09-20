//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEExecutionEnvironment, IDERunDestination, IDESchemeActionsInvocationRecord, IDESchemeCommand, NSArray, NSDictionary, NSNumber, NSString;

@interface IDESchemeOperationParameters : NSObject
{
    BOOL _collectBuildTimeStatistics;
    long long _schemeTask;
    long long _buildCommand;
    IDEExecutionEnvironment *_executionEnvironment;
    IDERunDestination *_runDestination;
    IDESchemeCommand *_schemeCommand;
    NSString *_commandName;
    IDESchemeActionsInvocationRecord *_invocationRecord;
    DVTFilePath *_filePathForSingleFileAction;
    NSArray *_overridingTestingSpecifiers;
    NSArray *_additionalLaunchCommandLineArguments;
    NSDictionary *_overridingLaunchEnvironmentVariables;
    NSNumber *_parallelTestingEnabledOverride;
    NSNumber *_parallelTestingWorkerCountOverride;
    NSNumber *_parallelTestingMaximumWorkerCount;
}

+ (id)operationParametersWithSchemeTask:(long long)arg1 buildCommand:(long long)arg2 executionEnvironment:(id)arg3 runDestination:(id)arg4 schemeCommand:(id)arg5 commandName:(id)arg6 invocationRecord:(id)arg7;
@property BOOL collectBuildTimeStatistics; // @synthesize collectBuildTimeStatistics=_collectBuildTimeStatistics;
@property(copy) NSNumber *parallelTestingMaximumWorkerCount; // @synthesize parallelTestingMaximumWorkerCount=_parallelTestingMaximumWorkerCount;
@property(copy) NSNumber *parallelTestingWorkerCountOverride; // @synthesize parallelTestingWorkerCountOverride=_parallelTestingWorkerCountOverride;
@property(copy) NSNumber *parallelTestingEnabledOverride; // @synthesize parallelTestingEnabledOverride=_parallelTestingEnabledOverride;
@property(copy) NSDictionary *overridingLaunchEnvironmentVariables; // @synthesize overridingLaunchEnvironmentVariables=_overridingLaunchEnvironmentVariables;
@property(copy) NSArray *additionalLaunchCommandLineArguments; // @synthesize additionalLaunchCommandLineArguments=_additionalLaunchCommandLineArguments;
@property(copy) NSArray *overridingTestingSpecifiers; // @synthesize overridingTestingSpecifiers=_overridingTestingSpecifiers;
@property(copy) DVTFilePath *filePathForSingleFileAction; // @synthesize filePathForSingleFileAction=_filePathForSingleFileAction;
@property(retain) IDESchemeActionsInvocationRecord *invocationRecord; // @synthesize invocationRecord=_invocationRecord;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(retain) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property long long buildCommand; // @synthesize buildCommand=_buildCommand;
@property long long schemeTask; // @synthesize schemeTask=_schemeTask;
- (void).cxx_destruct;

@end

