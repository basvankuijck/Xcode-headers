//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYDeviceInfo, NSArray, NSData, NSDictionary, NSString;

@interface DYCaptureSessionInfo : NSObject
{
    DYDeviceInfo *_deviceInfo;
    NSDictionary *_libraryLinkTimeVersions;
    NSDictionary *_queueLabels;
    NSDictionary *_threadLabels;
    NSString *_patchVersion;
    struct DYInterposeVersion _version;
    BOOL _guestAppWasLinkedOnApexOrLater;
    unsigned int _nativePointerSize;
    unsigned int _isBoundaryLess;
    unsigned int _graphicsApi;
    DYDeviceInfo *_controlDeviceInfo;
    struct DYInterposeVersion *_interposerVersion;
    unsigned long long _capturedFramesCount;
    NSDictionary *_guestAppInfoPlist;
    NSData *_guestAppIconData;
    NSDictionary *_launchDictionary;
    NSDictionary *_configurationDictionary;
}

+ (int)platformOfCaptureStore:(id)arg1;
+ (id)symbolicatorSignatureFromCaptureStore:(id)arg1;
+ (unsigned int)graphicsAPIOfCaptureStore:(id)arg1;
@property(readonly, nonatomic) unsigned int graphicsApi; // @synthesize graphicsApi=_graphicsApi;
@property(readonly, nonatomic) unsigned int isBoundaryLess; // @synthesize isBoundaryLess=_isBoundaryLess;
@property(readonly, retain, nonatomic) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
@property(readonly, retain, nonatomic) NSDictionary *launchDictionary; // @synthesize launchDictionary=_launchDictionary;
@property(readonly, nonatomic) NSData *guestAppIconData; // @synthesize guestAppIconData=_guestAppIconData;
@property(readonly, retain, nonatomic) NSDictionary *guestAppInfoPlist; // @synthesize guestAppInfoPlist=_guestAppInfoPlist;
@property(readonly, nonatomic) BOOL guestAppWasLinkedOnApexOrLater; // @synthesize guestAppWasLinkedOnApexOrLater=_guestAppWasLinkedOnApexOrLater;
@property(readonly, nonatomic) unsigned long long capturedFramesCount; // @synthesize capturedFramesCount=_capturedFramesCount;
@property(readonly, nonatomic) unsigned int nativePointerSize; // @synthesize nativePointerSize=_nativePointerSize;
@property(nonatomic) struct DYInterposeVersion *interposerVersion; // @synthesize interposerVersion=_interposerVersion;
@property(readonly, retain, nonatomic) DYDeviceInfo *controlDeviceInfo; // @synthesize controlDeviceInfo=_controlDeviceInfo;
@property(readonly, retain, nonatomic) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (BOOL)_isBackwardsCompatible:(id)arg1 isInternal:(BOOL)arg2;
- (BOOL)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)labelForThreadID:(unsigned long long)arg1;
- (id)labelForQueueID:(unsigned long long)arg1;
- (int)linkTimeVersionForLibrary:(id)arg1;
@property(readonly, nonatomic) BOOL lockGraphicsAfterCompletion;
@property(readonly, nonatomic) BOOL suspendAfterCompletion;
@property(readonly, nonatomic) BOOL harvestStateAtEnd;
@property(readonly, nonatomic) BOOL triggerOnNextGraphicsCommand;
@property(readonly, nonatomic) unsigned int frameLimit;
@property(readonly, nonatomic) unsigned int triggerFrame;
@property(readonly, retain, nonatomic) NSDictionary *guestAppEnvironment;
@property(readonly, retain, nonatomic) NSArray *guestAppArguments;
@property(readonly, retain, nonatomic) NSString *guestAppCurrentDirectory;
@property(readonly, retain, nonatomic) NSString *guestAppPath;
@property(readonly, retain, nonatomic) NSString *guestAppBundleIdentifier;
@property(readonly, retain, nonatomic) NSString *guestAppTitle;
- (void)dealloc;
- (id)initWithCaptureStore:(id)arg1;
- (id)init;

@end

