//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBUIOverlayView, NSView;

@protocol IBUIOverlayViewDelegate <NSObject>
- (NSView *)overlayView:(IBUIOverlayView *)arg1 hitTest:(struct CGPoint)arg2 defaultHit:(NSView *)arg3;
- (void)overlayView:(IBUIOverlayView *)arg1 drawRect:(struct CGRect)arg2;
@end

