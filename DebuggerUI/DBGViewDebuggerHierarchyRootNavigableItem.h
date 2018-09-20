//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGDebugNavigableItem.h>

@class DBGHierarchyNavigationCoordinator, DBGViewDebugger, DVTObservingToken, NSArray;

@interface DBGViewDebuggerHierarchyRootNavigableItem : DBGDebugNavigableItem
{
    DBGHierarchyNavigationCoordinator *_hierarchyNavigationCoordinator;
    NSArray *_childHierarchyItems;
    DVTObservingToken *_viewDebuggerApplicationChangedObservingToken;
}

@property(retain) DVTObservingToken *viewDebuggerApplicationChangedObservingToken; // @synthesize viewDebuggerApplicationChangedObservingToken=_viewDebuggerApplicationChangedObservingToken;
@property(retain) NSArray *childHierarchyItems; // @synthesize childHierarchyItems=_childHierarchyItems;
@property(retain, nonatomic) DBGHierarchyNavigationCoordinator *hierarchyNavigationCoordinator; // @synthesize hierarchyNavigationCoordinator=_hierarchyNavigationCoordinator;
- (void).cxx_destruct;
- (id)_makeDefaultHierarchyNavigationCoordinator;
- (void)primitiveInvalidate;
- (id)childRepresentedObjects;
- (void)_updateChildRepresentedObjects;
@property(readonly, nonatomic) DBGViewDebugger *viewDebugger;
- (void)_observeViewDebuggerApplication;
- (id)initWithRepresentedObject:(id)arg1;

@end

