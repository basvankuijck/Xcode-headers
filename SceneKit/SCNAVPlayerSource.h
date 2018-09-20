//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

@class AVPlayer, AVPlayerItemVideoOutput;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNAVPlayerSource : SCNTextureSource
{
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    unsigned long long _texturePixelFormat;
    unsigned long long _width;
    unsigned long long _height;
}

-     // Error parsing type: @40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: metalTextureWithEngineContext:textureSampler:nextFrameTime:
-     // Error parsing type: v24@0:8^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIdddddddddddddddIIIIIIIIIIIIIIIIIdIdIdddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][14{?=iII}][14I]^?^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16, name: cleanup:
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;
- (void)discardVideoData;
- (id)init;

@end

