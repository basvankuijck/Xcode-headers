//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKBitmapFont : NSObject <NSSecureCoding>
{
    NSString *_fontName;
    NSString *_filePath;
    double _lineHeight;
    double _baseLine;
    NSArray *_characterSprites;
    struct map<unsigned short, SKSpriteNode *, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, SKSpriteNode *>>> _characterSpriteByChar;
    struct map<unsigned short, double, std::__1::less<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, double>>> _characterAdvanceByChar;
    struct map<unsigned int, double, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, double>>> _characterKerningByCharPair;
    BOOL _internal;
    NSString *_fileName;
}

+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)fontForFileNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_fontForFileNamed:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;
- (double)advanceForCharacterNamed:(unsigned short)arg1;
- (double)lineHeight;
- (id)spriteForCharacterNamed:(unsigned short)arg1;
- (BOOL)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)fontName;

@end

