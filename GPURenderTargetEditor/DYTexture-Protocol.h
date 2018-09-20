//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/DYCacheableResource-Protocol.h>
#import <GPURenderTargetEditor/DYResource-Protocol.h>

@class NSString;
@protocol DYTextureImage;

@protocol DYTexture <DYResource, DYCacheableResource>
@property(readonly, nonatomic) BOOL isFlipped;
@property(readonly, nonatomic) BOOL isCubemap;
@property(readonly, nonatomic) id <DYTextureImage> firstValidTextureImage;
@property(readonly, nonatomic) unsigned int mipmapLevelsUsedMask;
@property(readonly, nonatomic) int maxMipmapLevel;
@property(readonly, nonatomic) int baseMipmapLevel;
- (NSString *)cubemapLabelForFaceIndex:(int)arg1;
- (id <DYTextureImage>)textureImageForMipmapLevel:(int)arg1 layer:(int)arg2;
- (unsigned int)layerCountForMipmapLevel:(unsigned int)arg1;
@end

