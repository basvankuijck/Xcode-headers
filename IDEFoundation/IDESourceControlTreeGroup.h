//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTreeItem.h>

@class NSArray, NSMutableArray;

@interface IDESourceControlTreeGroup : IDESourceControlTreeItem
{
    BOOL _areChildrenLoaded;
}

+ (id)keyPathsForValuesAffectingSparseChildren;
+ (void)initialize;
@property BOOL areChildrenLoaded; // @synthesize areChildrenLoaded=_areChildrenLoaded;
- (void)clearAllRevisions;
- (void)reload;
@property(readonly) NSMutableArray *mutableChildren; // @dynamic mutableChildren;
@property(copy) NSArray *children; // @dynamic children;
- (id)sparseChildren;
- (id)ideModelObjectTypeIdentifier;

@end

