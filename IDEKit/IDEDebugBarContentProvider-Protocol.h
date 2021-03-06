//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEDebugBar, NSArray, NSView;

@protocol IDEDebugBarContentProvider <NSObject>
@property(copy) NSArray *debugBarControlViews;

@optional
@property(readonly) BOOL prefersDebugBarToAlwaysBeShown;
- (double)xOffsetForSharedLibrariesPopUpAnchoredOnDebugBar:(IDEDebugBar *)arg1;
- (struct CGRect)additionalGrabRectOfDebugBar:(IDEDebugBar *)arg1 inTermsOfView:(NSView *)arg2;
- (void)willBeDetachedFromDebugBar:(IDEDebugBar *)arg1;
- (void)wasAttachedToDebugBar:(IDEDebugBar *)arg1;
@end

