//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class NSMenu, NSOpenPanel, NSPathCell;

@protocol NSPathCellDelegate <NSObject>

@optional
- (void)pathCell:(NSPathCell *)arg1 willPopUpMenu:(NSMenu *)arg2;
- (void)pathCell:(NSPathCell *)arg1 willDisplayOpenPanel:(NSOpenPanel *)arg2;
@end

