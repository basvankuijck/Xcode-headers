//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DVTCancellableOwner : NSObject
{
    NSMutableArray *_objects;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelAndClear;
- (void)addObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)init;

@end

