//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSCore/NSURLSessionDelegate-Protocol.h>
#import <XCSCore/XCSEventStreamDelegate-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError, NSHTTPCookieStorage, NSString, NSURL, NSURLSession, XCSEventStream;
@protocol OS_dispatch_queue, XCSCodeCoverageProtocol, XCSServiceBuildDelegate, XCSServiceConnectionDelegate, XCSServiceErrorDelegate;

@interface XCSService : NSObject <XCSEventStreamDelegate, NSURLSessionDelegate>
{
    BOOL _enabled;
    BOOL _enableMessageChannel;
    struct OpaqueSecIdentityRef *_identity;
    NSString *_identityKeychainPath;
    NSData *_identityKeychainPassword;
    BOOL _connected;
    NSString *_lastCreatedBotID;
    NSURLSession *_sharedSession;
    id <XCSServiceErrorDelegate> _errorDelegate;
    NSObject<OS_dispatch_queue> *_errorDelegateQueue;
    id <XCSServiceBuildDelegate> _buildDelegate;
    NSObject<OS_dispatch_queue> *_buildDelegateQueue;
    id <XCSServiceConnectionDelegate> _connectionDelegate;
    NSURL *_url;
    long long _version;
    NSString *_unitTestID;
    NSString *_connectionAddress;
    NSString *_clientUUID;
    NSError *_resolutionError;
    NSString *_netServiceDomain;
    NSString *_netServiceType;
    NSString *_netServiceName;
    NSString *_sessionUUID;
    long long _clientVersion;
    NSString *_unitTestName;
    NSString *_name;
    NSDictionary *_dictionaryRepresentation;
    XCSEventStream *_eventStream;
    NSString *_canonicalHostname;
    NSHTTPCookieStorage *_httpCookieStorage;
    double _requestTimeoutInterval;
    NSArray *_protocolClasses;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

+ (id)resultsFromResponse:(id)arg1;
+ (id)sharedCodeCoverageCacheDelegate;
+ (void)setSharedCodeCoverageCacheDelegate:(id)arg1;
+ (id)serviceFromDictionaryRepresentation:(id)arg1;
+ (id)serviceWithConnectionAddress:(id)arg1 portNumber:(unsigned long long)arg2 enabled:(BOOL)arg3;
+ (id)serviceWithConnectionAddress:(id)arg1 portNumber:(unsigned long long)arg2;
+ (id)serviceWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3 enabled:(BOOL)arg4;
+ (id)serviceWithNetServiceDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
+ (id)serviceWithDefaultClientSSL;
+ (id)testDestination;
+ (id)defaultCouchEndpoint;
+ (id)clientSSLEndpointWithHost:(id)arg1;
+ (id)defaultClientSSLEndpoint;
+ (id)defaultEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSArray *protocolClasses; // @synthesize protocolClasses=_protocolClasses;
@property(nonatomic) double requestTimeoutInterval; // @synthesize requestTimeoutInterval=_requestTimeoutInterval;
@property(retain, nonatomic) NSHTTPCookieStorage *httpCookieStorage; // @synthesize httpCookieStorage=_httpCookieStorage;
@property(retain, nonatomic) NSString *canonicalHostname; // @synthesize canonicalHostname=_canonicalHostname;
@property(retain, nonatomic) XCSEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *unitTestName; // @synthesize unitTestName=_unitTestName;
@property(nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) NSString *netServiceName; // @synthesize netServiceName=_netServiceName;
@property(readonly, nonatomic) NSString *netServiceType; // @synthesize netServiceType=_netServiceType;
@property(readonly, nonatomic) NSString *netServiceDomain; // @synthesize netServiceDomain=_netServiceDomain;
@property(readonly, nonatomic) NSError *resolutionError; // @synthesize resolutionError=_resolutionError;
@property(readonly, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property(copy, nonatomic) NSString *connectionAddress; // @synthesize connectionAddress=_connectionAddress;
@property(copy, nonatomic) NSString *unitTestID; // @synthesize unitTestID=_unitTestID;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <XCSServiceConnectionDelegate> connectionDelegate; // @synthesize connectionDelegate=_connectionDelegate;
@property(nonatomic, getter=isConnected) BOOL connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *buildDelegateQueue; // @synthesize buildDelegateQueue=_buildDelegateQueue;
@property(nonatomic) __weak id <XCSServiceBuildDelegate> buildDelegate; // @synthesize buildDelegate=_buildDelegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *errorDelegateQueue; // @synthesize errorDelegateQueue=_errorDelegateQueue;
@property(nonatomic) __weak id <XCSServiceErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
@property(readonly, nonatomic) NSURLSession *sharedSession; // @synthesize sharedSession=_sharedSession;
@property(copy, nonatomic) NSString *lastCreatedBotID; // @synthesize lastCreatedBotID=_lastCreatedBotID;
- (void).cxx_destruct;
- (id)_customErrorIfServerIsBusyProcessing:(id)arg1 error:(id)arg2;
- (void)_checkEndpointRedisCacheWithBase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)apiStatusForServiceVersionGreaterOrEqualTo:(unsigned long long)arg1;
- (id)identityRefUsingKeychainPath:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reconfigureSharedSession;
- (void)listenForPruningFinished:(CDUnknownBlockType)arg1;
- (void)listenForPruningStarted:(CDUnknownBlockType)arg1;
- (void)removeAllObjectsAtBase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
- (void)_uploadFileAtPath:(id)arg1 base:(id)arg2 verb:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_uploadFileAtPath:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_deleteObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_putEndpointWithBase:(id)arg1 body:(id)arg2 usingCredential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_deleteEndpointWithBase:(id)arg1 body:(id)arg2 usingCredential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_postToEndpointWithBase:(id)arg1 body:(id)arg2 usingCredential:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_hitEndpointWithBase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_refreshObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_patchObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_findObjectsOfClass:(Class)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createObjectWithDictionary:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createObject:(id)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)logTasksList:(id)arg1;
- (void)removeAllUnitTestDocsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_bulkImportDocuments:(id)arg1 batchCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_bulkImportDocuments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importTestResults:(id)arg1 completeIntegrationWithID:(id)arg2 testedDevices:(struct NSArray *)arg3 testedDevicesIDs:(id)arg4 hierarchy:(id)arg5 perfMetricNames:(id)arg6 perfMetricKeyPaths:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)isDatabaseBeingCompactedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)databaseFragmentationIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)databaseCompactWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pruneXcodeServerKeepingAtLeast:(unsigned long long)arg1 force:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)notifyAfterBonjourResolution:(CDUnknownBlockType)arg1;
@property(readonly) BOOL isResolving;
@property(readonly) BOOL isResolved;
@property(readonly) BOOL isBonjour;
- (void)canonicalHostnameWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)eventStreamDidConnect:(id)arg1;
- (void)eventStream:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)maintenanceTasksWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)verifyConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSData *identityKeychainPassword;
@property(retain, nonatomic) NSString *identityKeychainPath;
@property(nonatomic) struct OpaqueSecIdentityRef *identity;
@property(readonly, nonatomic) NSURL *friendlyURL;
@property(nonatomic) BOOL enabled;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToService:(id)arg1;
- (void)dealloc;
- (void)removeListeners:(id)arg1;
- (void)stopMessageChannel;
- (void)evaluateAndReestablishMessageChannel;
- (void)configureWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2;
- (id)initWithUnitTestID:(id)arg1 name:(id)arg2 xcsCoreEndPoint:(id)arg3 enableMessageChannel:(BOOL)arg4;
- (id)initWithUnitTestID:(id)arg1 name:(id)arg2 xcsCoreEndPoint:(id)arg3;
- (id)initWithUnitTestID:(id)arg1 xcsCoreEndPoint:(id)arg2;
- (id)initBarebonesStartingEnabled:(BOOL)arg1;
- (id)initBarebones;
- (id)initWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2 serviceEnabled:(BOOL)arg3;
- (id)initWithURL:(id)arg1 enableMessageChannel:(BOOL)arg2;
- (id)initWithURL:(id)arg1 enabled:(BOOL)arg2;
- (id)initWithURL:(id)arg1;
- (id)initForClientSSL;
- (id)init;
- (void)listenForProvisioningProfileRemoved:(CDUnknownBlockType)arg1;
- (void)listenForSigningIdentityRemoved:(CDUnknownBlockType)arg1;
- (void)listenForTeamRemoved:(CDUnknownBlockType)arg1;
- (void)listenForProvisioningProfileCreated:(CDUnknownBlockType)arg1;
- (void)listenForSigningIdentityCreated:(CDUnknownBlockType)arg1;
- (void)listenForTeamIdentityUpdated:(CDUnknownBlockType)arg1;
- (void)fetchHardwareInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeProvisioningProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadProvisioningProfileWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchProvisioningProfileWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadProvisioningProfileAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allProvisioningProfilesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeSigningIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)downloadSigningIdentityWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSigningIdentityWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadSigningIdentityAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allSigningIdentitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeTeam:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateTeam:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadIdentityAtPath:(id)arg1 forTeam:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createTeam:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIdentityOfTeam:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchTeamWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allTeamsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)isProvisioningConfigurationAvailable;
@property(readonly) long long isTeamJoiningAvailable;
- (void)listenForShutdown:(CDUnknownBlockType)arg1;
- (void)requestGracefulShutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)isParallelDeviceTestingAvailable;
- (void)listenForAllDeviceChanges:(CDUnknownBlockType)arg1 owner:(id)arg2;
- (void)listenForDeviceDeletion:(CDUnknownBlockType)arg1;
- (void)listenForDeviceUpdates:(CDUnknownBlockType)arg1;
- (void)listenForDeviceCreation:(CDUnknownBlockType)arg1;
- (void)devicesForTeamIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchServerDeviceInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDeviceWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listenForAllToolchainChanges:(CDUnknownBlockType)arg1 owner:(id)arg2;
- (void)listenForToolchainDeletion:(CDUnknownBlockType)arg1;
- (void)listenForToolchainCreation:(CDUnknownBlockType)arg1;
- (long long)isToolchainsAPIAvailable;
- (void)allToolchainsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeToolchain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveToolchain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listenForPlatformUpdates:(CDUnknownBlockType)arg1 owner:(id)arg2;
- (long long)isPlatformsAPIAvailable;
- (void)allPlatformsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)savePlatform:(id)arg1 forXcode:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeXcode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateXcode:(id)arg1 withID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createXcode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allXcodesForCurrentBuildAgentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)allXcodesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchServiceHealthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)uploadContentsOfFile:(id)arg1 toAsset:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createAsset:(id)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchAssetsForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)latestIntegrationForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dataForSummaryGraphsUsingTimeseriesDataForBot:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dataForTestResultsTableUsingTimeseriesDataForBot:(id)arg1 andRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)timeseriesDataForBot:(id)arg1 andCategory:(id)arg2 inRange:(struct _NSRange)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cleanAndStartBotRunForBotGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listenForBotDeletion:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotDeletion:(CDUnknownBlockType)arg1;
- (void)stopListeningForBotDeletionWithOwner:(id)arg1;
- (void)listenForBotUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotUpdates:(CDUnknownBlockType)arg1;
- (void)stopListeningForBotUpdatesWithOwner:(id)arg1;
- (void)listenForBotCreation:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForBotCreation:(CDUnknownBlockType)arg1;
- (void)stopListeningForBotCreationWithOwner:(id)arg1;
- (void)statsForBot:(id)arg1 sinceDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)statsForBot:(id)arg1 onDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 shouldClean:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateBot:(id)arg1 overwritingBlueprint:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allIntegrationsForBotWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allBotsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBotWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)isBotDuplicationAPIAvailable;
- (void)duplicateBot:(id)arg1 values:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)isPerformsUpgradeIntegrationAvailable;
- (void)fetchBlueprintForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)isFetchBlueprintAPIAvailable;
- (void)_performBlueprintOperationRequest:(id)arg1 withResultClass:(Class)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reflightBranchesForBot:(id)arg1 updatedBlueprint:(id)arg2 skippingRepositoryIdentifiers:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)isBatchTestRunFetchingAPIAvailable;
- (long long)isReflightBranchesForBotUpdatedBlueprintAPIAvailable;
- (void)reflightCredentialsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)listBranchesInBlueprint:(id)arg1 skippingRepositoryIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)isCustomExportOptionsAvailable;
- (long long)isTestLocalizationAPIAvailable;
- (long long)isSkipRepositoriesInBlueprintAPIAvailable;
- (long long)isListBranchesInBlueprintAPIAvailable;
- (void)preflightCredentialsInBlueprint:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)isFingerprintEnforcementAvailable;
- (long long)isDomainRepositorySupportAvailable;
- (void)stopListeningForACLUpdateWithOwner:(id)arg1;
- (void)listenForACLUpdate:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)updateACL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allACLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchExpandedACLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchACLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)isAdditionalBuildArgumentsAvailable;
- (long long)isEnvironmentVariablesAvailable;
- (void)isServiceLoggedIn:(CDUnknownBlockType)arg1;
- (void)isBotCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logoutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loginWithUserName:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)obtainIdentityTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)isAllIssuesResolvedEmailNotificationAvailable;
- (long long)isEmailNotificationEnhancementsAvailable;
- (void)sendNotificationRequest:(id)arg1 forIntegrationID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allOrphanedIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestToBuildIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allPendingIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)allBuildAgentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)listenOnceForAgentRegistration:(CDUnknownBlockType)arg1;
- (void)registerIntegrationService;
- (void)registerBuildListenerWithUsername:(id)arg1 fullName:(id)arg2;
- (id)allAssetsURLForIntegration:(id)arg1;
- (id)webAppURLForBigScreen;
- (id)webAppURLForIntegration:(id)arg1;
- (id)webAppURLForBot:(id)arg1;
- (id)webAppBaseURL;
- (void)handleError:(id)arg1 forRequest:(id)arg2 withFallThroughHandler:(CDUnknownBlockType)arg3 retryHandler:(CDUnknownBlockType)arg4;
- (id)_integrationIDIsNilError;
- (id)_bz2FilePathUsingCacheDirectoryPath:(id)arg1 integrationID:(id)arg2;
- (void)_loadCodeCoverageIntegrationWithID:(id)arg1 cacheDirectoryPath:(id)arg2 skipValidation:(BOOL)arg3 skipBindHierarchy:(BOOL)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_saveCodeCoverageIntegrationWithID:(id)arg1 cachedCCData:(id)arg2 cacheDirectoryPath:(id)arg3 skipValidation:(BOOL)arg4 skipBindHierarchy:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_performServerRequestWithIntegrationID:(id)arg1 cacheDirectoryPath:(id)arg2 policy:(long long)arg3 skipValidation:(BOOL)arg4 skipBindHierarchy:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)serviceIsWorkingOnRequestWithContext:(id)arg1;
- (void)_fileCacheBasedCodeCoverageIntegrationWithIntegrationID:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_keyPathBasedCodeCoverageIntegrationWithIntegrationID:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_cacheCodeCoverageIntegrationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanupCodeCoverageTemporaryResources:(id)arg1;
- (void)_updateRetrievalStatusForIntegrationWithID:(id)arg1 retrievalStatus:(long long)arg2;
- (id)objectWithTitle:(id)arg1 inList:(id)arg2;
- (BOOL)_updateFileWithKeyPathComponents:(id)arg1 usingMethods:(id)arg2 inIntegration:(id)arg3 error:(id *)arg4;
- (void)_updateFiles:(id)arg1 inIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_bulkImportDeviceDataFilesUsingIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_convertFilesToJSON:(id)arg1 integration:(id)arg2 error:(id *)arg3;
- (id)_splitFileListInBatches:(id)arg1 integration:(id)arg2 error:(id *)arg3;
- (void)importCodeCoverageIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIntegration:(id)arg1 withFileKeyPaths:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)codeCoverageIntegrationWithIntegrationID:(id)arg1 skipValidation:(BOOL)arg2 skipBindHierarchy:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)codeCoverageIntegrationWithIntegrationID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)isCodeCoverageAPIAvailable;
@property(nonatomic) __weak id <XCSCodeCoverageProtocol> codeCoverageDelegate;
- (void)deviceDataForTestResultsTableUsingTimeseriesDataForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scmCommitsForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)timeseriesDataForIntegration:(id)arg1 category:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pruneArchiveAndProductForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resume:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pause:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)integrationWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_integrationRangeOfClass:(Class)arg1 base:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listenForIntegrationDeletion:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationDeletion:(CDUnknownBlockType)arg1;
- (void)stopListeningForIntegrationDeletionWithOwner:(id)arg1;
- (void)listenForAdvisoryIntegrationStatusUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForAdvisoryIntegrationStatusUpdates:(CDUnknownBlockType)arg1;
- (void)listenForIntegrationStatusUpdates:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationStatusUpdates:(CDUnknownBlockType)arg1;
- (void)stopListeningForIntegrationStatusUpdatesWithOwner:(id)arg1;
- (void)listenForIntegrationCreation:(CDUnknownBlockType)arg1 withOwner:(id)arg2;
- (void)listenForIntegrationCreation:(CDUnknownBlockType)arg1;
- (void)stopListeningForIntegrationCreationWithOwner:(id)arg1;
- (void)listenForActivityLogUpdatesForIntegration:(id)arg1 handler:(CDUnknownBlockType)arg2 owner:(id)arg3;
- (void)emitActivityLogChunk:(id)arg1 forIntegration:(id)arg2;
- (void)emitAdvisoryStatusForIntegration:(id)arg1 message:(id)arg2 percentage:(double)arg3;
- (long long)isTestsWithKeyPathsForIntegrationDeviceAPIAvailable;
- (void)testsWithKeyPaths:(id)arg1 forIntegration:(id)arg2 device:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)testWithKeyPath:(id)arg1 forIntegration:(id)arg2 device:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)testsForIntegration:(id)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)isTestDurationDataAvailable;
- (void)removeTags:(id)arg1 integration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addTags:(id)arg1 integration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buildQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)integrationsSummariesBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsSummariesAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationSummaryForIntegrationNumber:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastIntegrationSummaries:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allIntegrationSummariesForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFatalIntegrationsBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastIntegrationWithBuildResultForBotIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)nonFatalIntegrationsAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastNonFatalIntegrations:(unsigned long long)arg1 forBotIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastNonFatalIntegrations:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)allNonFatalIntegrationsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)integrationsBeforeIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsAfterIntegrationNumber:(unsigned long long)arg1 howMany:(unsigned long long)arg2 forBot:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lastIntegrations:(unsigned long long)arg1 forBotIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lastIntegrations:(unsigned long long)arg1 forBot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrationCountForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allIntegrationsForBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)allRunningIntegrationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readIssuesForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAssociation:(id)arg1 fromIssue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addAssociation:(id)arg1 toIssue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)assignIssue:(id)arg1 toUser:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unsilenceIssue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)silenceIssue:(id)arg1 silenceMode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createIssues:(id)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createIssue:(id)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readCommitHistoryForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveCommitHistory:(struct NSArray *)arg1 forIntegration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIntegrationWithNumber:(unsigned long long)arg1 bot:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchBlueprintForIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchIntegrationWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createIntegration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_isUserOperationAllowedWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)currentLoggedUserCompletionHandler:(CDUnknownBlockType)arg1;
- (void)userPictureWithEmail:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canUserCreateBots:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canUserViewBots:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVersionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchVersionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

