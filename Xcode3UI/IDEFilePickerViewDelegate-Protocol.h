//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDEFilePickerView, NSCell, NSOutlineView, NSString, NSTableColumn;

@protocol IDEFilePickerViewDelegate <NSObject>

@optional
- (NSString *)filePickerView:(IDEFilePickerView *)arg1 outlineView:(NSOutlineView *)arg2 toolTipForCell:(NSCell *)arg3 rect:(struct CGRect *)arg4 tableColumn:(NSTableColumn *)arg5 item:(id)arg6 mouseLocation:(struct CGPoint)arg7;
- (BOOL)filePickerView:(IDEFilePickerView *)arg1 outlineView:(NSOutlineView *)arg2 isItemExpandable:(id)arg3;
- (NSCell *)filePickerView:(IDEFilePickerView *)arg1 outlineView:(NSOutlineView *)arg2 dataCellForTableColumn:(NSTableColumn *)arg3 item:(id)arg4;
- (void)filePickerView:(IDEFilePickerView *)arg1 outlineView:(NSOutlineView *)arg2 willDisplayCell:(id)arg3 forTableColumn:(NSTableColumn *)arg4 item:(id)arg5;
@end

