//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPURenderTargetEditor/GPUTraceShaderDebuggerSessionSubEditorDelegate-Protocol.h>

@class GPUTraceShaderDebuggerSessionSubEditor, NSPopover, NSString, NSViewController;

__attribute__((visibility("hidden")))
@interface GPUShaderDebuggerThreadPickerPopoverController : NSObject <GPUTraceShaderDebuggerSessionSubEditorDelegate>
{
    GPUTraceShaderDebuggerSessionSubEditor *_contentViewController;
    NSViewController *_popoverViewController;
    NSPopover *_popover;
}

- (void).cxx_destruct;
- (void)shaderDebuggerSession:(id)arg1 didLaunchFrom:(id)arg2;
- (void)shaderDebuggerSessionWillLaunchFrom:(id)arg1;
- (id)_boundShaderItemOfType:(unsigned int)arg1 forAPIItem:(id)arg2;
- (id)contentViewControllerForThreadPickerItem:(id)arg1 storage:(id)arg2;
- (id)contentViewControllerForShaderItem:(id)arg1 storage:(id)arg2;
- (void)showPopoverRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (id)initWithThreadPickerItem:(id)arg1 storage:(id)arg2;
- (id)initWithShaderItems:(id)arg1 defaultItem:(unsigned long long)arg2 storage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

