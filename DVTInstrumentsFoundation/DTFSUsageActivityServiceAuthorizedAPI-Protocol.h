//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

@protocol DTFSUsageActivityServiceAuthorizedAPI <DTXAllowedRPC>
- (NSMutableDictionary *)initialSwitches;
- (void)setValue:(NSNumber *)arg1 forSwitchName:(NSString *)arg2;
- (NSNumber *)valueForSwitch:(NSString *)arg1;
- (void)stopSampling;
- (void)startSamplingWithPid:(int)arg1;
- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
@end

