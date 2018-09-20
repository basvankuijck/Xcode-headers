//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface DBGFloatingControlWindow : NSWindow
{
    BOOL _canBecomeKey;
    NSWindow *_contextWindow;
    id _windowCloseToken;
}

- (void).cxx_destruct;
- (void)displayContextRect:(struct CGRect)arg1 showOutline:(BOOL)arg2;
- (id)contextWindow;
- (BOOL)wantsScrollWheelEvent:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)setCanBecomeKey:(BOOL)arg1;
- (id)rootWindow;
- (void)resetChildChain;
- (void)printSubDataValues:(long long)arg1;
- (void)_cleanUpAfterClosingWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

