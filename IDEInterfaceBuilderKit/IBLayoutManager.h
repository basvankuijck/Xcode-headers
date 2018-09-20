//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBLayoutGuideGeneratorSnappingDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, IBLayoutGuideCanvasOverlay, IBLayoutGuideGenerator, NSAlignmentFeedbackFilter, NSEvent, NSString;
@protocol IBAutolayoutItem;

@interface IBLayoutManager : NSObject <IBLayoutGuideGeneratorSnappingDelegate, DVTInvalidation>
{
    DVTDelayedInvocation *_clearingPolicy;
    unsigned long long _currentDisplayToken;
    IBLayoutGuideGenerator *_layoutGuideGenerator;
    long long _insetsSuppressed;
    NSAlignmentFeedbackFilter *_alignmentFeedbackFilter;
    NSEvent *_previousEvent;
    struct CGPoint _previousSnappedPoint;
    CDStruct_34734122 _previousOffset;
    IBLayoutGuideCanvasOverlay *_canvasOverlay;
}

+ (void)setGuidesAreEnabled:(BOOL)arg1;
+ (BOOL)guidesAreEnabled;
+ (void)initialize;
@property(readonly) IBLayoutGuideCanvasOverlay *canvasOverlay; // @synthesize canvasOverlay=_canvasOverlay;
- (void).cxx_destruct;
- (long long)displayGuidesForViews:(id)arg1 usingContainerResizingRules:(BOOL)arg2 draggedKnobInSuperview:(CDUnion_31865a80)arg3 andReturningLayoutGuideMatches:(id *)arg4;
- (long long)suggestGuidesForViews:(id)arg1 forEvent:(id)arg2 withSuggestedFrame:(struct CGRect)arg3 returningX:(double *)arg4 andReturningY:(double *)arg5 andReturningLayoutGuideMatches:(id *)arg6 fromKnobPositionInSuperview:(CDUnion_31865a80)arg7 usingContainerResizingRules:(BOOL)arg8 snaps:(BOOL)arg9;
- (long long)applyGuidesForViews:(id)arg1 forEvent:(id)arg2 withSuggestedFrame:(struct CGRect)arg3 andSiblings:(id)arg4 returningX:(double *)arg5 andReturningY:(double *)arg6 andReturningLayoutGuideMatches:(id *)arg7 fromKnobPositionInTargetSuperview:(CDUnion_31865a80)arg8 usingContainerResizingRules:(BOOL)arg9 displayOnly:(BOOL)arg10 maxSnapDistance:(double)arg11;
- (id)feedbackTokenForLayoutGuideGenerator:(id)arg1 ifShouldSnapDefaultY:(double)arg2 toAlignedY:(double)arg3 forCenter:(BOOL)arg4;
- (id)feedbackTokenForLayoutGuideGenerator:(id)arg1 ifShouldSnapDefaultX:(double)arg2 toAlignedX:(double)arg3 forCenter:(BOOL)arg4;
- (void)performAlignmentFeedback:(id)arg1 performanceTime:(unsigned long long)arg2;
- (void)takeAdjustedSnapRect:(struct CGRect)arg1 targetSuperview:(id)arg2 knobPositionInTargetSuperview:(CDUnion_31865a80)arg3;
- (long long)applyGuidesForViews:(id)arg1 forEvent:(id)arg2 withSuggestedFrame:(struct CGRect)arg3 targetSuperview:(id)arg4 andSiblings:(id)arg5 returningX:(double *)arg6 andReturningY:(double *)arg7 andReturningLayoutGuideMatches:(id *)arg8 fromKnobPositionInTargetSuperview:(CDUnion_31865a80)arg9 usingContainerResizingRules:(BOOL)arg10 displayOnly:(BOOL)arg11 maxSnapDistance:(double)arg12 baselines:(id)arg13;
- (void)clearLiveGuides;
- (void)clearLiveGuidesDirectly;
- (void)clearLiveGuidesAfterDelay:(double)arg1;
- (BOOL)isCurrentDisplayToken:(unsigned long long)arg1;
- (unsigned long long)currentDisplayToken;
- (void)invalidateCurrentDisplayToken;
- (struct CGRect)boundingLayoutFrameForViews:(id)arg1;
- (CDStruct_c519178c)insetFromContainer:(id)arg1 toViews:(id)arg2;
- (void)performBlockWithInsetsSuppressed:(CDUnknownBlockType)arg1;
@property(readonly) NSObject<IBAutolayoutItem> *coordinateSpaceView;
- (void)primitiveInvalidate;
- (id)initWithLayoutGuideGenerator:(id)arg1 canvasOverlay:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

