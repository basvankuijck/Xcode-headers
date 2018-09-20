//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>
#import <GPUToolsServices/NSSecureCoding-Protocol.h>

@class DYDeviceInfo, DYInvestigatorCaseConfigData, NSMapTable, NSMutableArray, NSString;

@interface DYInvestigatorCase : NSObject <NSSecureCoding, NSCopying>
{
    struct dispatch_queue_s *_observersMapQueue;
    NSMapTable *_observersMap;
    BOOL _invalid;
    int _invalidReason;
    int _dataAvailable;
    unsigned int _investigationProgress;
    int _investigatorResult;
    DYInvestigatorCaseConfigData *_configData;
    DYDeviceInfo *_playbackDeviceInfo;
    NSMutableArray *_redFlagAnalyzerFindings;
    NSMutableArray *_investigatorFindings;
    NSMutableArray *_additionalFindings;
    NSString *_timestamp;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSMutableArray *additionalFindings; // @synthesize additionalFindings=_additionalFindings;
@property(readonly, nonatomic) NSMutableArray *investigatorFindings; // @synthesize investigatorFindings=_investigatorFindings;
@property(readonly, nonatomic) NSMutableArray *redFlagAnalyzerFindings; // @synthesize redFlagAnalyzerFindings=_redFlagAnalyzerFindings;
@property(nonatomic) int investigatorResult; // @synthesize investigatorResult=_investigatorResult;
@property(nonatomic) unsigned int investigationProgress; // @synthesize investigationProgress=_investigationProgress;
@property(readonly, nonatomic) int dataAvailable; // @synthesize dataAvailable=_dataAvailable;
@property(nonatomic) int invalidReason; // @synthesize invalidReason=_invalidReason;
@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) DYDeviceInfo *playbackDeviceInfo; // @synthesize playbackDeviceInfo=_playbackDeviceInfo;
@property(retain, nonatomic) DYInvestigatorCaseConfigData *configData; // @synthesize configData=_configData;
- (void).cxx_destruct;
- (void)invalidateWithReason:(int)arg1;
- (id)investigatorResultBody;
- (id)investigatorResultString;
- (void)notifyDataAvailable:(int)arg1;
- (void)postEvent:(int)arg1;
- (void)removeObserver:(id)arg1;
- (id)observeEventsOnQueue:(struct dispatch_queue_s *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigData:(id)arg1 withPlaybackDeviceInfo:(id)arg2;
- (void)_initCommon;

@end

