//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPlaygroundExecution/IDEAbstractPlaygroundAppBundleCreator.h>

@interface IDEMacPlaygroundAppBundleCreator : IDEAbstractPlaygroundAppBundleCreator
{
}

+ (id)supportedPlatforms;
- (id)playgroundAppBundleForAppAtPath:(id)arg1 withExecutableSubpath:(id)arg2 bundleIdentifier:(id)arg3;
- (BOOL)signPlaygroundAppAtPath:(id)arg1 error:(id *)arg2;
- (id)createFileWrapperForPlaygroundAppReturningRelativeExecutablePath:(id *)arg1 bundleIdentifier:(id *)arg2 error:(id *)arg3;
- (id)constructPlaygroundAppBundleInDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)playgroundStubPath;

@end

