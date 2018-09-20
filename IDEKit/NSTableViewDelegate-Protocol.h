//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSControlTextEditingDelegate-Protocol.h>

@class NSArray, NSCell, NSEvent, NSIndexSet, NSNotification, NSString, NSTableColumn, NSTableRowView, NSTableView, NSView;

@protocol NSTableViewDelegate <NSControlTextEditingDelegate>

@optional
- (void)tableViewSelectionIsChanging:(NSNotification *)arg1;
- (void)tableViewColumnDidResize:(NSNotification *)arg1;
- (void)tableViewColumnDidMove:(NSNotification *)arg1;
- (void)tableViewSelectionDidChange:(NSNotification *)arg1;
- (NSArray *)tableView:(NSTableView *)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (double)tableView:(NSTableView *)arg1 sizeToFitWidthOfColumn:(long long)arg2;
- (BOOL)tableView:(NSTableView *)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldTypeSelectForEvent:(NSEvent *)arg2 withCurrentSearchString:(NSString *)arg3;
- (long long)tableView:(NSTableView *)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 forString:(NSString *)arg4;
- (NSString *)tableView:(NSTableView *)arg1 typeSelectStringForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (double)tableView:(NSTableView *)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(NSTableView *)arg1 didDragTableColumn:(NSTableColumn *)arg2;
- (void)tableView:(NSTableView *)arg1 didClickTableColumn:(NSTableColumn *)arg2;
- (void)tableView:(NSTableView *)arg1 mouseDownInHeaderOfTableColumn:(NSTableColumn *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectTableColumn:(NSTableColumn *)arg2;
- (NSIndexSet *)tableView:(NSTableView *)arg1 selectionIndexesForProposedSelection:(NSIndexSet *)arg2;
- (BOOL)tableView:(NSTableView *)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)selectionShouldChangeInTableView:(NSTableView *)arg1;
- (NSCell *)tableView:(NSTableView *)arg1 dataCellForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (BOOL)tableView:(NSTableView *)arg1 shouldTrackCell:(NSCell *)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (BOOL)tableView:(NSTableView *)arg1 shouldShowCellExpansionForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (NSString *)tableView:(NSTableView *)arg1 toolTipForCell:(NSCell *)arg2 rect:(struct CGRect *)arg3 tableColumn:(NSTableColumn *)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(NSTableView *)arg1 shouldEditTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (void)tableView:(NSTableView *)arg1 willDisplayCell:(id)arg2 forTableColumn:(NSTableColumn *)arg3 row:(long long)arg4;
- (void)tableView:(NSTableView *)arg1 didRemoveRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (void)tableView:(NSTableView *)arg1 didAddRowView:(NSTableRowView *)arg2 forRow:(long long)arg3;
- (NSTableRowView *)tableView:(NSTableView *)arg1 rowViewForRow:(long long)arg2;
- (NSView *)tableView:(NSTableView *)arg1 viewForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
@end

