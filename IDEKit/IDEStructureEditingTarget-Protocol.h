//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDENavigableItem, IDEWorkspace;
@protocol IDEStructureEditingDropTarget, IDEStructureEditingGroupingTarget, IDEStructureEditingRemoveSubitemsTarget;

@protocol IDEStructureEditingTarget <NSObject>
- (id <IDEStructureEditingRemoveSubitemsTarget>)structureEditingRemoveSubitemsTargetForParentNavigableItem:(IDENavigableItem *)arg1;
- (id <IDEStructureEditingGroupingTarget>)structureEditingGroupingTargetForProposedNavigableItem:(IDENavigableItem *)arg1 proposedChildIndex:(long long)arg2 createDirectory:(BOOL)arg3 inWorkspace:(IDEWorkspace *)arg4;
- (id <IDEStructureEditingDropTarget>)structureEditingTargetForProposedNavigableItem:(IDENavigableItem *)arg1 proposedChildIndex:(long long)arg2;
@end

