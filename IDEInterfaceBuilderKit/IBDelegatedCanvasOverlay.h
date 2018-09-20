//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class NSMutableOrderedSet;
@protocol IBDelegatedCanvasOverlayDelegate;

@interface IBDelegatedCanvasOverlay : IBCanvasOverlay
{
    NSMutableOrderedSet *drawHandlers;
    NSMutableOrderedSet *willDrawHandlers;
    id <IBDelegatedCanvasOverlayDelegate> _delegate;
}

@property __weak id <IBDelegatedCanvasOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
@property(readonly) long long numberOfInstalledHandlers;
- (void)installDrawHandler:(id)arg1 withSelector:(SEL)arg2 priority:(double)arg3 whilePerformingBlock:(CDUnknownBlockType)arg4;
- (id)installDrawHandler:(id)arg1 willDrawSelector:(SEL)arg2 drawSelector:(SEL)arg3 priority:(double)arg4;
- (id)installWillDrawHandler:(id)arg1 selector:(SEL)arg2 priority:(double)arg3;
- (id)installDrawHandler:(id)arg1 selector:(SEL)arg2 priority:(double)arg3;
- (id)installWillDrawHandlerWithPriority:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)installDrawHandlerWithPriority:(double)arg1 block:(CDUnknownBlockType)arg2;

@end

