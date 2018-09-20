//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class GPUTimelineGraph;

@protocol GPUTimelineGraphDelegate <NSObject>

@optional
- (void)counterGraph:(GPUTimelineGraph *)arg1 selectionRangeChanged:(struct _NSRange)arg2;
- (void)counterGraph:(GPUTimelineGraph *)arg1 nanosecondsPerPointChanged:(unsigned long long)arg2;
- (void)counterGraphClearSelection;
- (unsigned long long)counterGraph:(GPUTimelineGraph *)arg1 shouldMoveRight:(const struct GPUTimelineGraphReferencePlaneCell *)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)counterGraph:(GPUTimelineGraph *)arg1 shouldMoveLeft:(const struct GPUTimelineGraphReferencePlaneCell *)arg2 atIndex:(unsigned long long)arg3;
- (void)counterGraph:(GPUTimelineGraph *)arg1 itemDoubleClicked:(const struct GPUTimelineGraphReferencePlaneCell *)arg2 atIndex:(unsigned long long)arg3;
- (void)counterGraph:(GPUTimelineGraph *)arg1 itemClicked:(const struct GPUTimelineGraphReferencePlaneCell *)arg2 atIndex:(unsigned long long)arg3;
@end

