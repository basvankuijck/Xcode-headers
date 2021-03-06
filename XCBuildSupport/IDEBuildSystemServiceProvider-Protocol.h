//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCBuildSupport/NSObject-Protocol.h>

@class IDEWorkspace, NSString;
@protocol IDEBlueprint, IDEBlueprintProvider;

@protocol IDEBuildSystemServiceProvider <NSObject>
@property(readonly, nonatomic) Class buildOperationClass;
@property(readonly, nonatomic) BOOL isModern;
- (void)setObjectRootPathOverride:(NSString *)arg1;
- (void)noteBuildFolderCleanedInWorkspace:(IDEWorkspace *)arg1;
- (void)noteBlueprintProviderDidChange:(id <IDEBlueprintProvider>)arg1 inWorkspace:(IDEWorkspace *)arg2;
- (void)generateIndexingInfoForWorkspace:(IDEWorkspace *)arg1 blueprint:(id <IDEBlueprint>)arg2 completionBlock:(void (^)(NSDictionary *, NSError *))arg3;
@end

