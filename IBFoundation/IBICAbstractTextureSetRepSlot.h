//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlot.h>

@class IBICColorSpace, IBICGraphicsFeatureSet, IBICIdiom, IBICMemoryClass, IBICScale;

@interface IBICAbstractTextureSetRepSlot : IBICSlot
{
    IBICIdiom *_idiom;
    IBICScale *_scale;
    IBICMemoryClass *_memory;
    IBICGraphicsFeatureSet *_graphicsFeatureSet;
    IBICColorSpace *_colorSpace;
}

+ (Class)assetRepClass;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICGraphicsFeatureSet *graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(readonly) IBICMemoryClass *memory; // @synthesize memory=_memory;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (void)captureComponents;
- (id)suggestedSourceItemNameForRep;

@end

