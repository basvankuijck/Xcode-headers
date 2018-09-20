//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;
@protocol IBRenderingDestination;

@interface IBViewRenderer : NSObject
{
    NSView *_view;
    id <IBRenderingDestination> _destination;
}

+ (id)rendererWithView:(id)arg1 renderingDestination:(id)arg2;
@property(readonly, nonatomic) id <IBRenderingDestination> destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)renderIntoCoreGraphicsContext:(id)arg1 scale:(double)arg2 appearance:(id)arg3;
- (void)renderIntoCoreGraphicsContext:(id)arg1 scale:(double)arg2;
- (id)renderViewImageWithAppearance:(id)arg1;
- (id)renderContentWithAppearance:(id)arg1;
- (void)invokeWithDestinationScaleFactors:(CDUnknownBlockType)arg1;
- (id)initWithView:(id)arg1 renderingDestination:(id)arg2;

@end
