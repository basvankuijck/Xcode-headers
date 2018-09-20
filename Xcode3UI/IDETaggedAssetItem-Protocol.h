//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/NSObject-Protocol.h>

@class DVTFilePath, NSImage, NSSet, NSString;

@protocol IDETaggedAssetItem <NSObject>
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSSet *expectedFilePaths;
@property(readonly, nonatomic) DVTFilePath *expectedBaseFilePath;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSSet *inheritedAssetTags;
@property(retain, nonatomic) NSSet *assetTags;
@end

