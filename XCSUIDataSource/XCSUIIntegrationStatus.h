//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUIDataSource/XCSUISnapshot-Protocol.h>

@class NSDate, NSString, XCSBuildResultSummary, XCSService;

@interface XCSUIIntegrationStatus : NSObject <XCSUISnapshot>
{
    XCSService *_service;
    NSString *_identifier;
    NSString *_integrationID;
    NSString *_botID;
    long long _step;
    long long _result;
    NSString *_currentAdvisoryMessage;
    double _currentProgress;
    XCSBuildResultSummary *_buildResultSummary;
    NSDate *_endedTime;
}

+ (id)snapshotWithIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3 step:(long long)arg4 result:(long long)arg5 advisoryMessage:(id)arg6 currentProgress:(double)arg7 buildResultSummary:(id)arg8 integrationEndedTime:(id)arg9;
@property(readonly, nonatomic) NSDate *endedTime; // @synthesize endedTime=_endedTime;
@property(readonly, nonatomic) XCSBuildResultSummary *buildResultSummary; // @synthesize buildResultSummary=_buildResultSummary;
@property(readonly, nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(readonly, copy, nonatomic) NSString *currentAdvisoryMessage; // @synthesize currentAdvisoryMessage=_currentAdvisoryMessage;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) long long step; // @synthesize step=_step;
@property(readonly, copy, nonatomic) NSString *botID; // @synthesize botID=_botID;
@property(readonly, copy, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isPending;
@property(readonly, nonatomic) BOOL isFinished;
@property(readonly, nonatomic) BOOL isRunning;
@property(readonly, copy, nonatomic) NSString *resultString;
@property(readonly, copy, nonatomic) NSString *stepTypeString;
- (id)initWithIntegrationID:(id)arg1 botID:(id)arg2 service:(id)arg3 step:(long long)arg4 result:(long long)arg5 advisoryMessage:(id)arg6 currentProgress:(double)arg7 buildResultSummary:(id)arg8 integrationEndedTime:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

