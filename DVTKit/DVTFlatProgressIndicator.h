//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSProgressIndicator.h>

@class NSBezierPath, NSColor, NSImage;

@interface DVTFlatProgressIndicator : NSProgressIndicator
{
    double _startAnimationTime;
    NSImage *_indeterminateProgressBackground;
    NSColor *_fillAndStrokeColor;
    NSBezierPath *_progressIndicatorPath;
}

@property(retain, nonatomic) NSBezierPath *progressIndicatorPath; // @synthesize progressIndicatorPath=_progressIndicatorPath;
@property(retain, nonatomic) NSColor *fillAndStrokeColor; // @synthesize fillAndStrokeColor=_fillAndStrokeColor;
@property(retain, nonatomic) NSImage *indeterminateProgressBackground; // @synthesize indeterminateProgressBackground=_indeterminateProgressBackground;
- (void).cxx_destruct;
- (id)_stripeOfSize:(struct CGSize)arg1;
@property(readonly) double indeterminateOffset;
@property(readonly) struct CGRect determinateProgressRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)startAnimation:(id)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)_resetSizeDependentProperties;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;

@end

