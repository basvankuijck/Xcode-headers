//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (DVTNSRunLoopAdditions)
+ (void)dvt_initializeRunLoopAdditions;
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForGroup:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 waitingForSemaphore:(id)arg2;
- (void)dvt_spinRunLoopInMode:(id)arg1 whileBlockExecutesConcurrently:(CDUnknownBlockType)arg2;
- (id)dvt_performInModes:(id)arg1 withOrder:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end

