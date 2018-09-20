//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface XRRecentArray : NSObject
{
    NSMutableArray *_entries;
    unsigned long long _maximumRecentCount;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (BOOL)containsEntry:(id)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entries;
- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (void)removeEntry:(id)arg1;
- (void)addEntry:(id)arg1;
@property(nonatomic) unsigned long long maximumRecentCount;
- (id)initWithMaximumRecentCount:(unsigned long long)arg1;
- (id)init;

@end

