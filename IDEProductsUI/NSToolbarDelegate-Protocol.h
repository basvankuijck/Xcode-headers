//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class NSArray, NSNotification, NSString, NSToolbar, NSToolbarItem;

@protocol NSToolbarDelegate <NSObject>

@optional
- (void)toolbarDidRemoveItem:(NSNotification *)arg1;
- (void)toolbarWillAddItem:(NSNotification *)arg1;
- (NSArray *)toolbarSelectableItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarAllowedItemIdentifiers:(NSToolbar *)arg1;
- (NSArray *)toolbarDefaultItemIdentifiers:(NSToolbar *)arg1;
- (NSToolbarItem *)toolbar:(NSToolbar *)arg1 itemForItemIdentifier:(NSString *)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
@end

