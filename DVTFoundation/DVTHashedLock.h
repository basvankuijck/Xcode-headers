//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTHashedLock : NSObject
{
    int _count;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } *_mutexes;
}

+ (id)sharedLock;
- (void)dealloc;
- (void)performWithHash:(unsigned long long)arg1 lockedBlock:(CDUnknownBlockType)arg2;
- (void)performWithObject:(id)arg1 lockedBlock:(CDUnknownBlockType)arg2;
- (id)initWithLockCount:(int)arg1;

@end

