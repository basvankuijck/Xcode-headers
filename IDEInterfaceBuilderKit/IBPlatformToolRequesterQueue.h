//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IBPlatformToolRequesterQueue : NSObject
{
    NSMutableArray *_requesterList;
    unsigned long long _nextAvailableIndex;
    long long _maximumQueueSize;
}

- (void).cxx_destruct;
- (id)description;
- (id)nextRequesterCreatingIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
- (id)firstRequesterCreatingIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) long long count;
- (id)initWithMaximumSize:(long long)arg1;

@end

