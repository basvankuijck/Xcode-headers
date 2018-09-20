//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDownloadableOperationDownload, DVTFilePath, DVTObservingToken, DVTPlatform, DVTProxiediOSDevice, NSError, NSString;

@interface DVTProxiedDeviceSymbolsCoordinator : NSObject
{
    DVTFilePath *_symbolsPath;
    NSError *_downloadError;
    DVTDownloadableOperationDownload *_downloadOperation;
    DVTProxiediOSDevice *_device;
    NSString *_modelCode;
    DVTObservingToken *_modelCodeObserver;
    NSString *_operatingSystemVersion;
    DVTObservingToken *_operatingSystemVersionObserver;
    NSString *_operatingSystemBuild;
    DVTObservingToken *_operatingSystemBuildObserver;
    DVTPlatform *_platform;
    DVTObservingToken *_platformObserver;
}

@property(retain) DVTObservingToken *platformObserver; // @synthesize platformObserver=_platformObserver;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(retain) DVTObservingToken *operatingSystemBuildObserver; // @synthesize operatingSystemBuildObserver=_operatingSystemBuildObserver;
@property(retain) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_operatingSystemBuild;
@property(retain) DVTObservingToken *operatingSystemVersionObserver; // @synthesize operatingSystemVersionObserver=_operatingSystemVersionObserver;
@property(retain) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(retain) DVTObservingToken *modelCodeObserver; // @synthesize modelCodeObserver=_modelCodeObserver;
@property(retain) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(retain) DVTProxiediOSDevice *device; // @synthesize device=_device;
@property(retain) DVTDownloadableOperationDownload *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(retain) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(retain) DVTFilePath *symbolsPath; // @synthesize symbolsPath=_symbolsPath;
- (void).cxx_destruct;
- (id)_downloadOpForSymbolsFileURL:(id)arg1 fromPath:(id)arg2 requireAuth:(BOOL)arg3 error:(id *)arg4;
- (void)_completePreparationForSymbolsPath:(id)arg1;
- (void)_downloadSymbolsToFileURL:(id)arg1 fromServers:(id)arg2;
- (void)_downloadSymbolsToFileURL:(id)arg1;
- (void)_checkForSymbols;
- (void)_setUpPropertyObservers;
- (id)initWithDevice:(id)arg1;

@end

