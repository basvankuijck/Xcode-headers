//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICStickerRep.h>

@interface IBICStickerRep (DisplayAdditions)
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (id)icon;
- (id)bitmap;
- (id)dragImage;
- (id)image;
- (id)imageRep;
@end

