//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTTask, IDEActivityLogSection, IDEPlaygroundAuxiliarySourceFrameworkLocation, IDEPlaygroundCommonSharedContext, NSArray, NSDate, NSSet;

@interface IDEPlaygroundAuxiliarySourceCompilerOperation : DVTOperation
{
    BOOL _compilerLoggingEnabled;
    NSDate *_compilationDate;
    IDEPlaygroundAuxiliarySourceFrameworkLocation *_frameworkLocation;
    IDEActivityLogSection *_activityLogSection;
    IDEPlaygroundCommonSharedContext *_context;
    NSSet *_sourcesDirectorySwiftFiles;
    DVTTask *_compilerTask;
}

+ (id)logAspect;
@property(retain) DVTTask *compilerTask; // @synthesize compilerTask=_compilerTask;
@property(readonly, copy) NSSet *sourcesDirectorySwiftFiles; // @synthesize sourcesDirectorySwiftFiles=_sourcesDirectorySwiftFiles;
@property __weak IDEPlaygroundCommonSharedContext *context; // @synthesize context=_context;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(retain) IDEPlaygroundAuxiliarySourceFrameworkLocation *frameworkLocation; // @synthesize frameworkLocation=_frameworkLocation;
@property(retain) NSDate *compilationDate; // @synthesize compilationDate=_compilationDate;
- (void).cxx_destruct;
- (id)linkerBuildFlags;
@property(readonly) NSArray *basicBuildFlags;
- (BOOL)signFrameworkDylibAtPath:(id)arg1 error:(id *)arg2;
- (void)main;
- (void)cancel;
- (void)makeHighestPriority;
- (void)makeDefaultPriority;
- (id)initWithContext:(id)arg1 swiftSourceFiles:(id)arg2;

@end

