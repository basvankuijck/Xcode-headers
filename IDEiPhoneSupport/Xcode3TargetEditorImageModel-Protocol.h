//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class DVTFilePath, DVTVersion, NSString;

@protocol Xcode3TargetEditorImageModel <NSObject>
- (DVTVersion *)minimumOSVersion;
- (NSString *)nameSuffix;
- (int)imageType;
- (DVTFilePath *)imageFilePath;
- (struct CGSize)imageSize;
- (NSString *)orientation;
- (NSString *)device;
- (NSString *)scale;
@end

