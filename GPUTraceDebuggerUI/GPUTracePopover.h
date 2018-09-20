//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTraceAPIItem, GPUTraceContentPopover, NSPopover, NSView;

__attribute__((visibility("hidden")))
@interface GPUTracePopover : NSObject
{
    GPUTraceContentPopover *_thumbnailContentController;
    NSPopover *_thumbnailPopover;
    NSView *_contentView;
    unsigned long long _edge;
    BOOL _forceSkipPopover;
    BOOL _previousTooltip;
    BOOL _finishAnimate;
    BOOL _animates;
    BOOL _open;
    BOOL _truncate;
    BOOL _showTooltip;
    BOOL _usePadding;
    GPUTraceAPIItem *_alias;
    GPUTraceAPIItem *_item;
    struct CGRect _displayRect;
}

@property(nonatomic) BOOL usePadding; // @synthesize usePadding=_usePadding;
@property(nonatomic) BOOL showTooltip; // @synthesize showTooltip=_showTooltip;
@property(nonatomic) BOOL truncate; // @synthesize truncate=_truncate;
@property(nonatomic) BOOL open; // @synthesize open=_open;
@property(nonatomic) BOOL animates; // @synthesize animates=_animates;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
@property(retain, nonatomic) GPUTraceAPIItem *item; // @synthesize item=_item;
@property(retain, nonatomic) GPUTraceAPIItem *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
- (void)_update;
- (void)_flushAnimation:(id)arg1;
- (id)initWithView:(id)arg1 preferredEdge:(unsigned long long)arg2;

@end

