//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface SCNLayerSource : SCNImageSource
{
    CALayer *_layer;
}

@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (BOOL)isOpaque;
- (id)textureSource;

@end

