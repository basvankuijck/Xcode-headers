//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUTraceShaderDebuggerThreadPickerItem, NSImageView, NSTextField;

__attribute__((visibility("hidden")))
@interface GPUTraceContentFragmentROITableCellView : NSTableCellView
{
    NSTextField *_xView;
    NSTextField *_yView;
    NSTextField *_zView;
    NSImageView *_fragmentImageView;
}

+ (double)height;
+ (id)cellIdentifier;
@property __weak NSImageView *fragmentImageView; // @synthesize fragmentImageView=_fragmentImageView;
@property __weak NSTextField *zView; // @synthesize zView=_zView;
@property __weak NSTextField *yView; // @synthesize yView=_yView;
@property __weak NSTextField *xView; // @synthesize xView=_xView;
- (void).cxx_destruct;
@property(retain) GPUTraceShaderDebuggerThreadPickerItem *objectValue; // @dynamic objectValue;

@end

