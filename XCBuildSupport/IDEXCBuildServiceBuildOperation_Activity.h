//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityLogSectionRecorder, IDEBuildStatisticsSection, NSData, _TtC17IDEXCBuildSupport31IDEActivityLogSectionCacheEntry;

@interface IDEXCBuildServiceBuildOperation_Activity : NSObject
{
    NSData *_signature;
    IDEActivityLogSectionRecorder *_logRecorder;
    _TtC17IDEXCBuildSupport31IDEActivityLogSectionCacheEntry *_logCacheEntry;
    IDEBuildStatisticsSection *_statisticsSection;
}

@property(readonly) IDEBuildStatisticsSection *statisticsSection; // @synthesize statisticsSection=_statisticsSection;
@property(readonly) _TtC17IDEXCBuildSupport31IDEActivityLogSectionCacheEntry *logCacheEntry; // @synthesize logCacheEntry=_logCacheEntry;
@property(readonly) IDEActivityLogSectionRecorder *logRecorder; // @synthesize logRecorder=_logRecorder;
@property(readonly) NSData *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (id)initWithSignature:(id)arg1 logRecorder:(id)arg2 logCacheEntry:(id)arg3 statisticsSection:(id)arg4;

@end

