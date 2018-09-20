//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTap.h>

@class NSObject;
@protocol DTTapLocalDelegate, OS_dispatch_source;

@interface DTTapLocal : DTTap
{
    CDUnknownBlockType _nextTaskForPid;
    NSObject<OS_dispatch_source> *_pollTimer;
    BOOL _validConfig;
    id <DTTapLocalDelegate> _delegate;
}

@property(readonly, retain) id <DTTapLocalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleStatusMemo:(id)arg1;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (BOOL)_canFetchWhileArchiving;
- (void)_unpause;
- (void)_pause;
- (void)_stop;
- (void)_start;
- (void)setTaskForPidBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 delegate:(id)arg3;

@end

