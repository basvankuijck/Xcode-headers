//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSBot;

@interface XCSUIBotSummaryStatsFetcher : NSObject
{
    XCSBot *_bot;
    CDUnknownBlockType _statsFetcherCallback;
}

@property(copy, nonatomic) CDUnknownBlockType statsFetcherCallback; // @synthesize statsFetcherCallback=_statsFetcherCallback;
@property(retain) XCSBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
- (void)fetchStatsForTimePeriod:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchStatsSinceDate:(id)arg1;

@end

