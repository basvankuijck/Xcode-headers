//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/_TtC12DVTAnalytics37ProcessorUsagePointConsolidatedSource.h>

@class DVTAnalyticsAppIdentifier, DVTAnalyticsAppStoreSourceUserDefaultsKey, NSArray, NSString;

@interface _TtC12DVTAnalytics37ProcessorUsagePointConsolidatedSource (DVTAnalytics1)
- (id)copyWithZone:(void *)arg1;
- (BOOL)updateFromNetworkWithSession:(id)arg1 error:(id *)arg2;
- (void)cacheAnalyticsPoints:(id)arg1;
- (void)fetchFromDisk;
- (id)cachedPathForAnalyticsPoint:(id)arg1;
@property(nonatomic, readonly) DVTAnalyticsAppStoreSourceUserDefaultsKey *userDefaultsKey;
@property(nonatomic, readonly) DVTAnalyticsAppIdentifier *appIdentifier;
@property(nonatomic, readonly) BOOL isBeta;
@property(nonatomic, readonly) NSString *buildNumber;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSArray *analyticsPoints;
@property(nonatomic, readonly) long long type;
@end

