//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAMediaTimingFunction, NSArray, NSString;

@protocol SCNJSAnimationGroupJSExport <JSExport>
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property double duration;
@property(copy) NSArray *animations;
@end

