//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (DYNSImageAdditions)
+ (void)dy_writeRGBADataToTiffFile:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 name:(id)arg4;
+ (void)dy_writetoTiffFile:(id)arg1 name:(id)arg2;
+ (id)dy_imageWithData:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 hasAlpha:(BOOL)arg4;
- (BOOL)dy_writetoPNGFileName:(id)arg1 error:(id *)arg2;
- (id)dy_encodeAsPNG:(id *)arg1;
@end

