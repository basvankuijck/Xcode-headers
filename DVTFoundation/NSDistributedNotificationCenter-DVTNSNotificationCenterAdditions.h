//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDistributedNotificationCenter.h>

@interface NSDistributedNotificationCenter (DVTNSNotificationCenterAdditions)
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end

