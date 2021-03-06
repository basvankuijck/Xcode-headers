//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBPlatform;

@interface IBDocumentLinker : NSObject
{
    IBPlatform *_platform;
}

@property(readonly) IBPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)removeStringsFilePlistIfExistsInCopiedStoryboardAtPath:(id)arg1;
- (BOOL)copyStringsFilesForCompiledStoryboardAtPath:(id)arg1 toUnlocalizedOutputDirectory:(id)arg2 error:(id *)arg3;
- (BOOL)copyCompiledPackagesForInputPath:(id)arg1 toLocalizedOutputDirectory:(id)arg2 error:(id *)arg3;
- (BOOL)linkCompiledDocumentsAtPaths:(id)arg1 withOutputDirectory:(id)arg2 options:(id)arg3 populatingWarnings:(id)arg4 error:(id *)arg5;
- (id)initWithPlatform:(id)arg1;
- (id)init;

@end

