//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData;

@protocol ExportTexture
- (NSData *)uncompressedData;
- (NSData *)dataForMipmapLevel:(int)arg1 layer:(int)arg2;
- (unsigned int)pixelFormat;
- (BOOL)isYAxisDown;
- (unsigned int)numberOfMipmapLevels;
- (unsigned int)numberOfFaces;
- (unsigned int)numberOfArrayElements;
- (unsigned int)pixelDepth;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
@end

