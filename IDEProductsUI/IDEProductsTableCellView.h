//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSLayoutConstraint;

@interface IDEProductsTableCellView : NSTableCellView
{
    NSButton *_errorButton;
    NSLayoutConstraint *_errorButtonWidthConstraint;
}

@property __weak NSLayoutConstraint *errorButtonWidthConstraint; // @synthesize errorButtonWidthConstraint=_errorButtonWidthConstraint;
@property __weak NSButton *errorButton; // @synthesize errorButton=_errorButton;
- (void).cxx_destruct;
- (void)_hideErrorButton;
- (void)_showErrorButton;

@end

