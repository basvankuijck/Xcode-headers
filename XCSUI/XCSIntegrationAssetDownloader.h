//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDESchemeActionsInvocationRecord, NSMapTable, NSString, XCSIntegration;

@interface XCSIntegrationAssetDownloader : NSObject
{
    XCSIntegration *_integration;
    NSMapTable *_integrationsAndAssets;
    NSMapTable *_integrationCompletionBlocks;
    NSMapTable *_integrationAndSchemeActionRecord;
    NSMapTable *_schemeActionRecordAndCachePath;
    NSMapTable *_integrationsToDownloadHelpers;
    NSMapTable *_triggerCompletionBlocks;
    IDESchemeActionsInvocationRecord *_schemeActionsInvocationRecord;
    NSString *_internalBuildServiceDebugLog;
    NSString *_internalRawBuildLog;
}

+ (id)assetDownloader;
@property(copy) NSString *internalRawBuildLog; // @synthesize internalRawBuildLog=_internalRawBuildLog;
@property(copy) NSString *internalBuildServiceDebugLog; // @synthesize internalBuildServiceDebugLog=_internalBuildServiceDebugLog;
@property(retain) IDESchemeActionsInvocationRecord *schemeActionsInvocationRecord; // @synthesize schemeActionsInvocationRecord=_schemeActionsInvocationRecord;
- (void).cxx_destruct;
- (void)triggerLogsForIntegration:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)_fireTriggerCallbackBlockForIntegration:(id)arg1;
- (void)sourceControlLogForIntegration:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)buildLogForIntegration:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)buildServiceLogForIntegration:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)_cacheAssetDownloadHelper:(id)arg1 forIntegration:(id)arg2;
- (void)_purgeAssetDownloaderHelper:(id)arg1 forIntegration:(id)arg2;
- (void)cancelDownloadsForIntegration:(id)arg1;
- (void)schemeActionsInvocationRecordForIntegration:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)mapTableKeyForIntegration:(id)arg1;
- (id)triggerLogsForIntegration:(id)arg1 phase:(unsigned long long)arg2;
- (void)setTriggerLog:(id)arg1 withFileName:(id)arg2 triggerName:(id)arg3 forIntegration:(id)arg4;
- (void)setSCMLog:(id)arg1 forIntegration:(id)arg2;
- (void)setBuildLog:(id)arg1 forIntegration:(id)arg2;
- (void)setBuildServiceLog:(id)arg1 forIntegration:(id)arg2;
- (id)dictionaryForIntegration:(id)arg1;

@end

