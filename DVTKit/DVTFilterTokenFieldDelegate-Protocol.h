//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSTokenFieldDelegate-Protocol.h>

@class DVTFilterTokenField, NSArray;

@protocol DVTFilterTokenFieldDelegate <NSTokenFieldDelegate>

@optional
- (NSArray *)tokenFieldIconMenuItemsFor:(DVTFilterTokenField *)arg1;
- (void)tokenField:(DVTFilterTokenField *)arg1 objectValueDidChange:(id)arg2;
- (void)tokenField:(DVTFilterTokenField *)arg1 globalOperatorDidChange:(int)arg2;
@end
