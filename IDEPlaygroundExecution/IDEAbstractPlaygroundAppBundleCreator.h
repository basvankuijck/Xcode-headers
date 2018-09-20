//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundExecution/IDEPlaygroundAppBundleCreator-Protocol.h>

@class DVTFilePath, DVTSDK, NSArray, NSString, NSUUID;

@interface IDEAbstractPlaygroundAppBundleCreator : NSObject <IDEPlaygroundAppBundleCreator>
{
    NSString *_playgroundName;
    NSUUID *_playgroundUUID;
    NSString *_uniquingString;
    DVTFilePath *_symlinkedResourcesPath;
    NSArray *_resourceSearchPaths;
    NSArray *_frameworkSearchPaths;
    NSArray *_auxiliarySourceFrameworkLocations;
    DVTSDK *_sdk;
}

+ (id)supportedPlatforms;
@property(readonly) DVTSDK *sdk; // @synthesize sdk=_sdk;
@property(readonly, copy) NSArray *auxiliarySourceFrameworkLocations; // @synthesize auxiliarySourceFrameworkLocations=_auxiliarySourceFrameworkLocations;
@property(readonly, copy) NSArray *frameworkSearchPaths; // @synthesize frameworkSearchPaths=_frameworkSearchPaths;
@property(readonly) NSArray *resourceSearchPaths; // @synthesize resourceSearchPaths=_resourceSearchPaths;
@property(readonly, copy) DVTFilePath *symlinkedResourcesPath; // @synthesize symlinkedResourcesPath=_symlinkedResourcesPath;
@property(readonly, copy) NSString *uniquingString; // @synthesize uniquingString=_uniquingString;
@property(readonly, copy) NSUUID *playgroundUUID; // @synthesize playgroundUUID=_playgroundUUID;
@property(readonly, copy) NSString *playgroundName; // @synthesize playgroundName=_playgroundName;
- (void).cxx_destruct;
- (id)constructPlaygroundAppBundleInDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)playgroundAppBundleForAppAtPath:(id)arg1 withExecutableSubpath:(id)arg2 bundleIdentifier:(id)arg3;
- (BOOL)signPlaygroundAppAtPath:(id)arg1 error:(id *)arg2;
- (id)createFileWrapperForPlaygroundAppReturningRelativeExecutablePath:(id *)arg1 bundleIdentifier:(id *)arg2 error:(id *)arg3;
- (id)initWithPlaygroundName:(id)arg1 UUID:(id)arg2 uniquingString:(id)arg3 symlinkedResourcesPath:(id)arg4 resourceSearchPaths:(id)arg5 frameworkSearchPaths:(id)arg6 auxiliarySourceFrameworkLocations:(id)arg7 sdk:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

