//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, NSArray, NSMutableArray, NSOperationQueue, NSString, _TtC13IDEFoundation30IDESourceControlAccountManager, _TtC13IDEFoundation34IDESourceControlFingerprintManager;
@protocol OS_dispatch_queue;

@interface IDESourceControlManager : NSObject
{
    NSMutableArray *_registeredWorkspaces;
    NSObject<OS_dispatch_queue> *_registeredWorkspacesDispatchQueue;
    NSMutableArray *_legacyWorkingTrees;
    NSMutableArray *_extensions;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_holdingQueue;
    DVTDispatchLock *_holdingQueueLock;
    long long _maxConcurrentOperationCount;
    long long _authenticationRetryAttempts;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _showChangeBar;
    BOOL _showUpstreamChangesInChangeBar;
    BOOL _automaticallyAddNewFiles;
    BOOL _waitingForAuthentication;
    BOOL _showMergeCommits;
    BOOL _shouldLoadAccounts;
    NSObject<OS_dispatch_queue> *_legacyWorkingTreesDispatchQueue;
    _TtC13IDEFoundation30IDESourceControlAccountManager *_accountManager;
    _TtC13IDEFoundation34IDESourceControlFingerprintManager *_fingerprintManager;
    double _minimumLocalStatusRequestDelay;
    NSString *_pathOfWorkspaceJustCheckedOut;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (void)setDisableLoadingAccounts:(BOOL)arg1;
+ (BOOL)disableLoadingAccounts;
+ (void)setEnableLoadingAccounts:(BOOL)arg1;
+ (BOOL)enableLoadingAccounts;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlReachabilityLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sharedSourceControlManager;
@property(retain) NSString *pathOfWorkspaceJustCheckedOut; // @synthesize pathOfWorkspaceJustCheckedOut=_pathOfWorkspaceJustCheckedOut;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
@property(readonly) _TtC13IDEFoundation34IDESourceControlFingerprintManager *fingerprintManager; // @synthesize fingerprintManager=_fingerprintManager;
@property(readonly) _TtC13IDEFoundation30IDESourceControlAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly) BOOL shouldLoadAccounts; // @synthesize shouldLoadAccounts=_shouldLoadAccounts;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)performRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performRequest:(id)arg1 waitUntilFinished:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)handleError:(id)arg1 forRequest:(id)arg2 operation:(id)arg3 waitUntilFinished:(BOOL)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
@property long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
- (void)reportSourceControlOperation:(unsigned long long)arg1;
- (void)_reportNewUICloneOperation:(unsigned long long)arg1;
- (void)_reportNewUIEditorOperation:(unsigned long long)arg1;
- (void)_reportNewUIContextOperation:(unsigned long long)arg1;
- (void)_reportConfigurationOperation:(unsigned long long)arg1;
- (void)_reportCommitNavigatorOperation:(unsigned long long)arg1;
- (void)_reportEditorOperation:(unsigned long long)arg1;
- (void)_reportMenuOperation:(unsigned long long)arg1;
- (void)_reportCommitOperation:(unsigned long long)arg1;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)workingTreeAtFilePath:(id)arg1;
- (id)workingTreeForFilePath:(id)arg1;
- (void)unregisterWorkspace:(id)arg1;
- (void)registerWorkspace:(id)arg1;
- (id)workingCopyForFilePath:(id)arg1;
- (id)extensionForRequest:(id)arg1;
- (id)commonExtensionForPaths:(id)arg1;
- (id)extensionForURL:(id)arg1;
- (id)extensionToUseForFilePath:(id)arg1;
- (id)extensionMatchingDirectoryIdentifier:(id)arg1;
- (id)extensionsMatchingProtocol:(id)arg1;
- (id)extensionMatchingIdentifier:(id)arg1;
- (void)asyncPerformBlockOnWorkingTreeQueue:(CDUnknownBlockType)arg1;
- (void)addLegacyWorkingTree:(id)arg1;
@property(readonly) NSArray *legacyWorkingTrees; // @synthesize legacyWorkingTrees=_legacyWorkingTrees;
@property BOOL showMergeCommits;
@property BOOL automaticallyAddNewFiles;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property BOOL showUpstreamChangesInChangeBar; // @synthesize showUpstreamChangesInChangeBar=_showUpstreamChangesInChangeBar;
@property BOOL showChangeBar; // @synthesize showChangeBar=_showChangeBar;
@property BOOL enableSourceControl;
- (id)_blacklistedDirectories;
- (id)_directoryIdentifiers;
- (void)loadExtensions;
- (void)loadPlugIns;
- (id)defaultExtension;
- (id)initWithSavedAccounts:(BOOL)arg1 credentialsManager:(id)arg2 userDefaults:(id)arg3;
- (id)initWithSavedAccounts:(BOOL)arg1;

@end
