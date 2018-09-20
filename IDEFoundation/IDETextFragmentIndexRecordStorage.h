//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IDETextFragmentIndexRecordStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_locks[32];
    NSMutableDictionary *_entriesByFilePath[32];
}

- (void).cxx_destruct;
- (void)trimToEntriesForFilePaths:(id)arg1;
- (id)snapshotOfEntries;
- (void)resetToEntries:(id)arg1;
- (void)removeAllEntries;
- (void)removeAllEntriesWithAllLocksAlreadyHeld;
- (void)withAllLocks:(CDUnknownBlockType)arg1;
- (void)withAllLocksBeginingAt:(long long)arg1 invoke:(CDUnknownBlockType)arg2;
- (void)removeEntryForFilePath:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)entryForFilePath:(id)arg1;
- (void)withAcessToStorageForFilePath:(id)arg1 storage:(CDUnknownBlockType)arg2;
- (id)init;

@end

