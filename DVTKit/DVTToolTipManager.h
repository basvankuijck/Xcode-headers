//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTimer;

@interface DVTToolTipManager : NSObject
{
    NSMapTable *registeredViews;
    id eventMonitor;
    NSTimer *timer;
    long long enabledBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)mouseRested:(id)arg1;
- (void)unregisterViewForToolTips:(id)arg1;
- (void)registerViewForToolTips:(id)arg1 delegate:(id)arg2;
- (id)allViews;
- (id)delegateForView:(id)arg1;
- (void)monitorEvent:(id)arg1;
- (void)scheduleMouseRested;
- (void)unscheduleMouseRested;
- (void)enableTooltips;
- (void)disableTooltips;
- (BOOL)tooltipsAreEnabled;
- (id)init;

@end

