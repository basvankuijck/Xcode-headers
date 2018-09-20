//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapConfig.h>

@class NSArray;

@interface DTSysmonTapConfig : DTTapConfig
{
    CDUnknownBlockType _sessionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (void).cxx_destruct;
- (void)addPid:(int)arg1;
- (void)setPids:(id)arg1;
- (id)pids;
@property BOOL sampleCPUUsage;
@property(retain) NSArray *coalitionAttributes;
@property(retain) NSArray *systemAttributes;
@property(retain) NSArray *processAttributes;
@property(nonatomic) unsigned long long sampleInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

