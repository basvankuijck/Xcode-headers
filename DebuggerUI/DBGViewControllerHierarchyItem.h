//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGViewObjectHierarchyItem.h>

#import <DebuggerUI/DBGDebugNavigatorContentObjectDataSource-Protocol.h>

@class DBGViewControllerObject, NSString;

@interface DBGViewControllerHierarchyItem : DBGViewObjectHierarchyItem <DBGDebugNavigatorContentObjectDataSource>
{
}

+ (void)registerTableCellViewsForDebugNavigatorContentDelegateWithOutlineView:(id)arg1;
- (id)childItemsForCoordinator:(id)arg1;
@property(readonly) DBGViewControllerObject *proxiedViewController;
- (id)createDebugNavigatorTableCellViewWithContentDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

