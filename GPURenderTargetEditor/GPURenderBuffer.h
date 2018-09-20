//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPURenderTargetEditor/GPUColorChannelsViewControllerDelegate-Protocol.h>

@class GPURenderBufferView, GPURenderJob, NSButton, NSLayoutConstraint, NSPopover, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface GPURenderBuffer : NSViewController <GPUColorChannelsViewControllerDelegate>
{
    NSButton *_infoButton;
    NSButton *_settingsButton;
    NSLayoutConstraint *_labelConstraint;
    NSPopover *_infoPopover;
    NSPopover *_settingsPopover;
    GPURenderJob *_renderJob;
    NSTextField *_bufferLabelProxyTextField;
}

+ (id)assetBundle;
@property __weak NSTextField *bufferLabelProxyTextField; // @synthesize bufferLabelProxyTextField=_bufferLabelProxyTextField;
@property(retain, nonatomic) GPURenderJob *renderJob; // @synthesize renderJob=_renderJob;
- (void).cxx_destruct;
- (void)colorChannelViewController:(id)arg1 didChangeRenderingAttributes:(id)arg2;
- (void)dumpImage:(id)arg1 asRaw:(BOOL)arg2;
- (id)accessibleChildren;
- (void)unloadView;
- (void)showSettings:(id)arg1;
- (void)showInfo:(id)arg1;
- (struct CGPoint)_popoverPointForParentButton:(id)arg1;
@property(readonly, nonatomic) __weak GPURenderBufferView *renderBufferView;
@property(readonly, nonatomic) NSString *name;
@property(readonly) struct CGSize resourceImageSize;
- (void)loadView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
