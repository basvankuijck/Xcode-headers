//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, DVTTableView, NSTableRowView, NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit47IDESourceControlRepositoriesTableViewController : DVTViewController
{
    // Error parsing type: , name: previousSelectedRow
    // Error parsing type: , name: changingSelectionThroughKeyPress
    // Error parsing type: , name: headerRowView
    // Error parsing type: , name: hostViewController
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: repositoriesTableView
    // Error parsing type: , name: isConfiguringDataSource
    // Error parsing type: , name: dataSource
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
@property(nonatomic) __weak DVTTableView *repositoriesTableView; // @synthesize repositoriesTableView;
@property(nonatomic, retain) DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic, readonly) NSTableView *tableView;
@property(nonatomic, retain) NSTableRowView *headerRowView; // @synthesize headerRowView;

@end
