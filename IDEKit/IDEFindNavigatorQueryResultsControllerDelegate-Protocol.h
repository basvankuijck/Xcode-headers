//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDEBatchFindAbstractQuery, IDEBatchFindAbstractResult, IDEFindNavigatorQueryResultsController, NSMenu, NSSet;

@protocol IDEFindNavigatorQueryResultsControllerDelegate
- (NSMenu *)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 contextMenuForResultsFromQuery:(IDEBatchFindAbstractQuery *)arg2;
- (void)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 openResult:(IDEBatchFindAbstractResult *)arg2 eventType:(unsigned long long)arg3;
- (void)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 selectResults:(NSSet *)arg2;
- (void)queryResultsControllerExportedUserInterfaceStateDidChange:(IDEFindNavigatorQueryResultsController *)arg1;
@end

