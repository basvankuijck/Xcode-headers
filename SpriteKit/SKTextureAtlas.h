//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSSecureCoding>
{
    NSDictionary *_textureDict;
    NSString *_atlasName;
    BOOL _isCUIImageAtlas;
    struct unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *>>> _textureMap;
}

+ (void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2;
+ (id)atlasNamed:(id)arg1;
+ (id)atlasWithDictionary:(id)arg1;
+ (BOOL)canUseObjectForAtlas:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)lookupCachedTextureNamed:(id)arg1;
+ (id)findTextureNamed:(id)arg1;
+ (id)getSupportedPostfixes;
+ (struct CGImage *)createCGImageFromCUINamedImage:(struct CGImage *)arg1 withSize:(struct CGSize)arg2 atRect:(struct CGRect)arg3;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(BOOL)arg3;
+ (void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)textureNamed:(id)arg1;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadTexturesFromCUIImageAtlas:(id)arg1;
- (void)loadTextures;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
@property(readonly, nonatomic) NSArray *textureNames;
- (BOOL)isEqualToTextureAtlas:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;
- (void)_prePopulateCache;
- (void)unload;
- (id)_copyImageData;

@end

