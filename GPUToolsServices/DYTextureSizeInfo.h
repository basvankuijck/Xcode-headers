//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/NSCopying-Protocol.h>

@interface DYTextureSizeInfo : NSObject <NSCopying>
{
    BOOL _isCubeMap;
    unsigned int _dimensions;
    unsigned int _arrayLength;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
}

@property(readonly, nonatomic) BOOL isCubeMap; // @synthesize isCubeMap=_isCubeMap;
@property(readonly, nonatomic) unsigned int arrayLength; // @synthesize arrayLength=_arrayLength;
@property(readonly, nonatomic) unsigned int dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;

@end

