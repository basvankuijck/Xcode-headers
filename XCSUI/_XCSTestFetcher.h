//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface _XCSTestFetcher : NSObject
{
    NSOperationQueue *_fetchQueue;
    NSObject<OS_dispatch_semaphore> *_fetchSemaphore;
}

+ (id)sharedTestFetcher;
- (void).cxx_destruct;
- (void)fetchTestsForPlaceholder:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

