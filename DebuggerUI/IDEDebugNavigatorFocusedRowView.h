//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTableRowView.h>

@class CALayer;

@interface IDEDebugNavigatorFocusedRowView : DVTTableRowView
{
    CALayer *_separatorLine;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)layout;
- (id)_lineLayerWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dbg_commonFocusedInit;

@end

