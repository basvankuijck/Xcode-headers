//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTSysmonCPUUsageEntry, NSArray;

@interface DTSysmonCPUUsageRecord : NSObject
{
    unsigned int _cpuCount;
    unsigned int _enabledCPUs;
    DTSysmonCPUUsageEntry *_averageCPUUsage;
    NSArray *_perCPUUsage;
}

@property(retain, nonatomic) NSArray *perCPUUsage; // @synthesize perCPUUsage=_perCPUUsage;
@property(retain, nonatomic) DTSysmonCPUUsageEntry *averageCPUUsage; // @synthesize averageCPUUsage=_averageCPUUsage;
@property(nonatomic) unsigned int enabledCPUs; // @synthesize enabledCPUs=_enabledCPUs;
@property(nonatomic) unsigned int cpuCount; // @synthesize cpuCount=_cpuCount;
- (void).cxx_destruct;

@end

