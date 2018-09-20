//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDENavigableItem, NSIndexSet, NSSet;

@protocol IDEStructureEditingGroupingTarget <NSObject>
- (IDENavigableItem *)actualNavigableItem;
- (long long)actualChildIndex;
- (void)structureEditingGroupSubitemsAtIndexes:(NSIndexSet *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (BOOL)structureEditingCanGroupSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditingAddNewSubgroup;
- (BOOL)structureEditingCanAddNewSubgroup;
- (NSSet *)allowedFileTypesForNewFile;
@end

