//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (IBImageAdditions)
+ (BOOL)isTemplateName:(id)arg1;
+ (id)ibImageWithScaledDesktopPicture;
+ (id)imageWithRep:(id)arg1;
- (id)ibUninstalledVariantForSize:(struct CGSize)arg1;
- (id)imageFromRect:(struct CGRect)arg1;
- (struct CGRect)convertCanonicalRectToLocalSpace:(struct CGRect)arg1;
- (id)bitmapImageRep;
- (id)imageWithOpacity:(double)arg1;
- (id)representationOfSize:(struct CGSize)arg1;
- (struct CGImage *)cgImageRepresentation;
- (id)imageByScalingToSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 unflip:(BOOL)arg4;
- (void)drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 unflip:(BOOL)arg4;
- (void)lockFocusFlipped:(BOOL)arg1 during:(CDUnknownBlockType)arg2;
- (void)drawWithCommands:(CDUnknownBlockType)arg1;
@end

