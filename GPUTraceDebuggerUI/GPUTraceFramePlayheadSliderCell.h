//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

__attribute__((visibility("hidden")))
@interface GPUTraceFramePlayheadSliderCell : NSSliderCell
{
    SEL _mouseDownAction;
    SEL _mouseUpAction;
}

@property SEL mouseDownAction; // @synthesize mouseDownAction=_mouseDownAction;
@property SEL mouseUpAction; // @synthesize mouseUpAction=_mouseUpAction;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (BOOL)_usesCustomTrackImage;

@end

