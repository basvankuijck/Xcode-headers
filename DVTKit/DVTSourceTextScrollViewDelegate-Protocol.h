//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSEvent, NSScrollView, NSScroller;

@protocol DVTSourceTextScrollViewDelegate <NSObject>

@optional
- (NSScroller *)scrollView:(NSScrollView *)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (void)scrollViewDidSetFrameSize:(NSScrollView *)arg1;
- (void)scrollViewDidEndLiveResize:(NSScrollView *)arg1;
- (void)scrollViewWillStartLiveResize:(NSScrollView *)arg1;
- (BOOL)scrollView:(NSScrollView *)arg1 shouldHandleScrollWheelEvent:(NSEvent *)arg2;
@end

