//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSCopying-Protocol.h>
#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTFilePath, IDEContainer, IDERefactoringBuildSettings, IDEWorkspace, NSArray, NSDictionary, NSMutableSet, NSString;
@protocol IDEIndexable;

@protocol IDEIndexable <NSCopying, NSObject>
- (IDERefactoringBuildSettings *)buildSettingsForMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2;
@property(nonatomic, readonly) NSString *localizedIndexableDescription;
- (void)languageOfMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2 completionBlock:(void (^)(DVTSourceCodeLanguage *))arg3;
@property(nonatomic, readonly) BOOL requiresMainThread;
- (BOOL)writeProductHeaders:(NSDictionary *)arg1 toFile:(DVTFilePath *)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(IDEWorkspace *)arg1 withCompletionBlock:(void (^)(NSDictionary *))arg2;
- (IDEContainer *)containerForIndexables:(NSMutableSet *)arg1 rootPaths:(NSMutableSet *)arg2;
@property(nonatomic, readonly) NSArray *indexableFiles;
@property(nonatomic, readonly) NSString *indexName;
@property(nonatomic, readonly) NSString *identifier;

@optional
- (BOOL)isUnitTest;
@property(nonatomic, readonly) NSString *productType;
- (NSString *)productNameWithBuildSetting:(NSString *)arg1 workspace:(IDEWorkspace *)arg2;
- (id)copyWithZone:(void *)arg1;
- (void)clearCachedBuildSettings;
@property(nonatomic) __weak id <IDEIndexable> proxy;
- (NSDictionary *)settingsForFile:(DVTFilePath *)arg1;
- (void)settingsForFilesInWorkspace:(IDEWorkspace *)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(void (^)(NSDictionary *))arg3;

// Remaining properties
@property(nonatomic, readonly) BOOL unitTest;
@end

