//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LoggingSupportHost/OSActivityEvent.h>

@interface OSActivityTransitionEvent : OSActivityEvent
{
    unsigned long long _transitionToActivityID;
}

@property(readonly, nonatomic) unsigned long long transitionToActivityID; // @synthesize transitionToActivityID=_transitionToActivityID;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

