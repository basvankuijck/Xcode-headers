//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEFindNavigatorAbstractScopeOutlineItem.h>

@interface IDEFindNavigatorGroupScopeOutlineItem : IDEFindNavigatorAbstractScopeOutlineItem
{
    BOOL _filterable;
}

- (id)predicate;
- (id)filteredCloneWithChildren:(id)arg1 passedFilterLocally:(BOOL)arg2 descendantPassedFilter:(BOOL)arg3;
- (BOOL)isFilterable;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 predicate:(id)arg3 passedFilterLocally:(BOOL)arg4 descendantPassedFilter:(BOOL)arg5 filterable:(BOOL)arg6;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 predicate:(id)arg3 children:(id)arg4 passedFilterLocally:(BOOL)arg5 descendantPassedFilter:(BOOL)arg6 filterable:(BOOL)arg7;

@end

