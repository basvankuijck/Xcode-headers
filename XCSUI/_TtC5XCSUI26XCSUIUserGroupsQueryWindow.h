//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI26XCSUIUserGroupsQueryWindow : NSWindowController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: selectionCallback
    // Error parsing type: , name: candidates
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)acceptSelectedItem:(id)arg1;
- (void)windowDidLoad;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;

@end

