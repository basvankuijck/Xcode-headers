//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSSet, NSURL, XCSBot, XCSBotSCMBlueprint, XCSBuildResultSummary, XCSIntegrationAssets, XCSIntegrationChanges;

@interface XCSIntegration : XCSObject
{
    BOOL _running;
    BOOL _codeCoverageDataAvailable;
    struct NSArray *_devices;
    NSArray *_perfMetricNames;
    XCSIntegrationChanges *_controlledChanges;
    NSDictionary *_testHierarchy;
    NSArray *_perfMetricKeyPaths;
    NSMutableArray *_internalTargets;
}

+ (id)sortIntegrations:(id)arg1 newestFirst:(BOOL)arg2;
+ (id)integrationWithBot:(id)arg1 shouldClean:(BOOL)arg2 devices:(struct NSArray *)arg3 error:(id *)arg4;
+ (id)integrationWithBot:(id)arg1 shouldClean:(BOOL)arg2 error:(id *)arg3;
+ (id)integrationWithBot:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSMutableArray *internalTargets; // @synthesize internalTargets=_internalTargets;
@property(retain, nonatomic) NSArray *perfMetricKeyPaths; // @synthesize perfMetricKeyPaths=_perfMetricKeyPaths;
@property(retain, nonatomic) NSDictionary *testHierarchy; // @synthesize testHierarchy=_testHierarchy;
@property(retain, nonatomic) XCSIntegrationChanges *controlledChanges; // @synthesize controlledChanges=_controlledChanges;
@property(nonatomic, getter=hasCodeCoverageDataAvailable) BOOL codeCoverageDataAvailable; // @synthesize codeCoverageDataAvailable=_codeCoverageDataAvailable;
@property(retain, nonatomic) NSArray *perfMetricNames; // @synthesize perfMetricNames=_perfMetricNames;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void).cxx_destruct;
- (id)triggersToExecuteForPhase:(unsigned long long)arg1;
- (BOOL)_hasResolvedIssues;
- (BOOL)_hasTestWithKeyPathPerfMetrics:(id)arg1;
- (id)_testedDeviceWithIdentifier:(id)arg1;
- (void)_instantiateTestClassFamily;
- (BOOL)_validateWithValue:(id)arg1 forProperty:(id)arg2 withDevice:(id)arg3 atKeyPath:(id)arg4 error:(id *)arg5;
- (BOOL)_validateIntegrationWithBot:(id)arg1 testedDevices:(struct NSArray *)arg2 number:(id)arg3 queuedDate:(id)arg4 startedTime:(id)arg5 endedTime:(id)arg6 currentStep:(long long)arg7 result:(long long)arg8 revisionBlueprint:(id)arg9 tags:(id)arg10 testHierarchy:(id)arg11 perfMetricNames:(id)arg12 perfMetricKeyPaths:(id)arg13 anID:(id)arg14 aTinyID:(id)arg15 docType:(id)arg16 error:(id *)arg17;
- (id)patchRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithBot:(id)arg1 shouldClean:(BOOL)arg2 devices:(struct NSArray *)arg3 number:(id)arg4 queuedDate:(id)arg5 startedTime:(id)arg6 endedTime:(id)arg7 currentStep:(long long)arg8 result:(long long)arg9 successStreak:(unsigned long long)arg10 buildResultSummary:(id)arg11 revisionBlueprint:(id)arg12 assets:(id)arg13 assetsPruned:(BOOL)arg14 tags:(id)arg15 testHierarchy:(id)arg16 perfMetricNames:(id)arg17 perfMetricKeyPaths:(id)arg18 controlledChanges:(id)arg19 anID:(id)arg20 aRev:(id)arg21 aTinyID:(id)arg22 docType:(id)arg23 service:(id)arg24 error:(id *)arg25;
- (id)initWithBot:(id)arg1 shouldClean:(BOOL)arg2 devices:(struct NSArray *)arg3 number:(id)arg4 queuedDate:(id)arg5 startedTime:(id)arg6 endedTime:(id)arg7 currentStep:(long long)arg8 result:(long long)arg9 successStreak:(unsigned long long)arg10 buildResultSummary:(id)arg11 revisionBlueprint:(id)arg12 assets:(id)arg13 assetsPruned:(BOOL)arg14 tags:(id)arg15 testHierarchy:(id)arg16 perfMetricNames:(id)arg17 perfMetricKeyPaths:(id)arg18 anID:(id)arg19 aRev:(id)arg20 aTinyID:(id)arg21 docType:(id)arg22 service:(id)arg23 error:(id *)arg24;
@property(readonly, nonatomic) NSURL *productInstallationURL;
@property(readonly, nonatomic, getter=isImported) BOOL imported;
@property(readonly, nonatomic, getter=isControl) BOOL control;
- (BOOL)isFlagged;
@property(retain, nonatomic) NSSet *tags; // @dynamic tags;
- (long long)statusForDeviceIdentifier:(id)arg1;
- (void)setDeviceFilter:(id)arg1;
@property(readonly, nonatomic) NSArray *targets;

// Remaining properties
@property(retain, nonatomic) XCSIntegrationAssets *assets; // @dynamic assets;
@property(nonatomic) BOOL assetsPruned; // @dynamic assetsPruned;
@property(retain, nonatomic) XCSBot *bot; // @dynamic bot;
@property(retain, nonatomic) XCSBuildResultSummary *buildResultSummary; // @dynamic buildResultSummary;
@property(nonatomic) long long currentStep; // @dynamic currentStep;
@property(retain, nonatomic) NSDate *endedTime; // @dynamic endedTime;
@property(nonatomic) unsigned long long number; // @dynamic number;
@property(retain, nonatomic) NSDate *queuedDate; // @dynamic queuedDate;
@property(nonatomic) long long result; // @dynamic result;
@property(retain, nonatomic) XCSBotSCMBlueprint *revisionBlueprint; // @dynamic revisionBlueprint;
@property(nonatomic) BOOL shouldClean; // @dynamic shouldClean;
@property(retain, nonatomic) NSDate *startedTime; // @dynamic startedTime;
@property(nonatomic) unsigned long long successStreak; // @dynamic successStreak;

@end

