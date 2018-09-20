//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class IDEWorkspace, IDEWorkspaceTabController, NSAlert, NSString, NSURL, NSWindow;

@protocol IDEContinuousIntegrationActionManager <NSObject>
- (NSAlert *)alertForFailureToHandleXCBotURLRequestOnHost:(NSURL *)arg1;
- (void)showBot:(id)arg1 window:(NSWindow *)arg2;
- (void)showIntegrationWithID:(NSString *)arg1 bot:(id)arg2 window:(NSWindow *)arg3;
- (NSURL *)webURLForIntegration:(id)arg1;
- (NSURL *)webURLForBot:(id)arg1;
- (BOOL)canUserCreateAndDeleteBotsOnService:(id)arg1;
- (NSString *)projectNameInBlueprintForBot:(id)arg1;
- (void)botMatchingID:(NSString *)arg1 withTimeout:(double)arg2 completion:(void (^)(BOOL, NSError *, id))arg3;
- (void)fetchMostRecentIntegrationForBot:(id)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)fetchIntegrationForId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)populateIntegrations:(unsigned long long)arg1 forBot:(id)arg2 andIntegrationId:(NSString *)arg3 onService:(id)arg4 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg5;
- (void)fetchBotForBotId:(NSString *)arg1 onService:(id)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, id))arg3;
- (void)deleteIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)cancelIntegration:(id)arg1 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg2;
- (void)deleteBot:(id)arg1 workspace:(IDEWorkspace *)arg2 withCompletionBlock:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
- (void)integrationsForBot:(id)arg1 max:(unsigned long long)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)integrateBot:(id)arg1 cleanFirst:(BOOL)arg2 completionHandler:(void (^)(BOOL, NSError *, NSString *, NSString *))arg3;
- (void)showBotEditorForWorkspaceTabController:(IDEWorkspaceTabController *)arg1 bot:(id)arg2 editingMode:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *, NSArray *))arg4;
@end

