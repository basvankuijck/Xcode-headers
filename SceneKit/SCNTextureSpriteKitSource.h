//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class SKScene;

__attribute__((visibility("hidden")))
@interface SCNTextureSpriteKitSource : SCNTextureOffscreenRenderingSource
{
    SKScene *_scene;
    double _lastUpdate;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
-     // Error parsing type: @40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: metalTextureWithEngineContext:textureSampler:nextFrameTime:
-     // Error parsing type: ^{__C3DTexture=}40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: textureWithEngineContext:textureSampler:nextFrameTime:
-     // Error parsing type: v24@0:8^{__C3DRendererContext={__CFRuntimeBase=QAQ}iIIIIfI^{__C3DTexture}^{__C3DStack}^vBBBBB^{__CFDictionary}I^{__CFDictionary}^{__CFDictionary}^{__CFDictionary}{C3DColor4=(?=[4f]{?=ffff})}^vq^{__C3DFXProgramObject}{__C3DEngineStats=IIIIIIIIIIIIIIIIIIIIIIIIdddddddddddddddIIIIIIIIIIIIIIIIIdIdIdddd[60d]Idd}{Cache=[16I]Ii^{__C3DBlendStates}I^{__C3DRasterizerStates}^{__C3DMesh}^{__C3DMeshElement}IIiI^viii}{?=[5I][5i][14{?=iII}][14I]^?^?^?^?^?^?^?^?^?^?}[2{VolatileObject=^{__C3DArray}II^{__CFArray}}]^{__C3DArray}I^{__CFDictionary}}16, name: cleanup:
-     // Error parsing type: d40@0:8@16^{__C3DEngineContext=}24^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}32, name: __updateTextureWithSKScene:engineContext:sampler:
- (void)__renderSKScene:(id)arg1 withSKSCNRenderer:(id)arg2 engineContext:(struct __C3DEngineContext *)arg3 viewport:(double)arg4 atTime: /* Error: Ran out of types for this method. */;
-     // Error parsing type: v40@0:8^{__C3DEngineContext=}16^{__C3DTextureSampler={__CFRuntimeBase=QAQ}iiiiii{C3DColor4=(?=[4f]{?=ffff})}fCiQ}24^d32, name: renderWithEngineContext:textureSampler:nextFrameTime:
- (void)dealloc;

@end

