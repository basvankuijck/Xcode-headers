//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGLLDBMemoryManager : NSObject
{
    id _workspaceClosedNotificationObserver;
    id _memoryPressureNotificationObserver;
}

+ (void)stop;
+ (void)start;
- (void).cxx_destruct;
- (void)_invalidate;
- (id)_initInternal;
- (void)_memoryPressureDetected;
- (id)init;

@end

