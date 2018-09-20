//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDevice.h>

#import <IDEiOSSupportCore/DVTBasiciOSDevice-Protocol.h>

@class DVTDeviceOperation, DVTPlatform, NSError, NSMapTable, NSSet, NSString;

@interface DVTAbstractiOSDevice : DVTDevice <DVTBasiciOSDevice>
{
    NSMapTable *_workspaceInstallsInProgress;
    DVTDeviceOperation *_installOperation;
}

+ (id)nameForDeviceFamilyObject:(id)arg1;
- (void).cxx_destruct;
- (id)fetchSpecificLaunchFailureReason;
- (BOOL)_updateTestConfiguration:(id)arg1 atPath:(id)arg2 testBundleContainerPath:(id)arg3 error:(id *)arg4;
- (void)_processControlForPid:(int)arg1 payload:(id)arg2 onProxy:(BOOL)arg3 completed:(CDUnknownBlockType)arg4;
@property(readonly) BOOL supportsLaunchActivateSuspended;
- (BOOL)supportsUISnapshotOnProxy:(BOOL)arg1;
- (BOOL)supportsNewLogging;
- (void)performFetchEventForBundleIdentifier:(id)arg1 orPid:(int)arg2 onProxy:(BOOL)arg3;
- (void)snapshotUIForBundleIdentifier:(id)arg1 orPid:(int)arg2 onProxy:(BOOL)arg3 completed:(CDUnknownBlockType)arg4;
- (void)showMessagesExtensionOnProxy:(BOOL)arg1 completed:(CDUnknownBlockType)arg2;
- (void)simulateNotificationWithBundleID:(id)arg1 payload:(id)arg2 onProxy:(BOOL)arg3 completed:(CDUnknownBlockType)arg4;
- (void)pressHomeButtonOnProxy:(BOOL)arg1 completed:(CDUnknownBlockType)arg2;
- (void)showSiriForExtensions:(id)arg1 queryText:(id)arg2 pid:(int)arg3 onProxy:(BOOL)arg4 completed:(CDUnknownBlockType)arg5;
- (void)showTodayViewForExtensions:(id)arg1 pid:(int)arg2;
- (id)serviceHubProcessControlChannelOnProxy:(BOOL)arg1;
- (id)serviceHubProcessControlChannel;
- (id)iconImage;
- (id)deviceClassForDisplay;
- (BOOL)supportsBuildingThinnedResources;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1;
- (BOOL)canInstallProfile:(id)arg1;
- (id)provisioningProfiles;
- (id)taskForDeviceCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (void)installActivityDidEndInWorkspace:(id)arg1 withError:(id)arg2;
- (void)installActivityInWorkspace:(id)arg1 operationInProgress:(id)arg2 details:(id)arg3;
- (void)installActivityWillBeginInWorkspace:(id)arg1 withProductName:(id)arg2;
- (void)setInstallProgress:(long long)arg1 path:(id)arg2;
- (void)setInstallProgress:(long long)arg1 text:(id)arg2;
- (long long)updateInstalledApplicationsWithMobileInstallRebuild:(BOOL)arg1 result:(id *)arg2;
- (long long)updateInstalledApplicationsWithResult:(id *)arg1;
- (long long)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyDevicePath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (id)copyDevicePath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3;
- (id)copyLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3;
- (id)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3;
- (id)copyDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3;
- (id)_copyPath:(id)arg1 toPath:(id)arg2 sync:(_Bool)arg3 onDevice:(_Bool)arg4;
- (id)copyDevicePath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3 withStatusObserver:(CDUnknownBlockType)arg4;
- (id)copyLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3 withStatusObserver:(CDUnknownBlockType)arg4;
- (id)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3 withStatusObserver:(CDUnknownBlockType)arg4;
- (id)copyDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3 withStatusObserver:(CDUnknownBlockType)arg4;
- (id)_copyPath:(id)arg1 toPath:(id)arg2 sync:(_Bool)arg3 onDevice:(_Bool)arg4 withStatusObserver:(CDUnknownBlockType)arg5;
- (id)_rsyncInstallSourcePath:(id)arg1 destinationPath:(id)arg2 entirelyOnDevice:(BOOL)arg3 sync:(BOOL)arg4 activityString:(id)arg5 retryCount:(unsigned long long)arg6 deviceOperation:(id)arg7 errorStringPtr:(id *)arg8;
- (id)_rsyncInstallDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3 activityString:(id)arg4 deviceOperation:(id)arg5 errorStringPtr:(id *)arg6;
- (id)_rsyncInstallLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3 activityString:(id)arg4 deviceOperation:(id)arg5 errorStringPtr:(id *)arg6;
- (id)_rsyncPath:(id)arg1 toPath:(id)arg2 sync:(_Bool)arg3 onDevice:(_Bool)arg4 withHardLinkDirs:(id)arg5 withStatusObserver:(CDUnknownBlockType)arg6;
- (id)rsyncPath;
- (id)_rsyncErrorStringForNSError:(id)arg1;
- (BOOL)_rsyncErrorIsMkdirFailure:(id)arg1 missingPath:(id *)arg2;
- (id)_transformPathForDevice:(id)arg1 forRsync:(BOOL)arg2 error:(id *)arg3;
- (id)_additionalRsyncParameters;
- (id)_rsyncEnvironment;
- (id)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 withHardLinkDirs:(id)arg4;
- (id)systemBasePath;
- (id)softwareVersion;
- (BOOL)installForRsyncDeveloperModeWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)_performInstallForRsyncDeveloperModeWithBundleId:(id)arg1 filePath:(id)arg2 launchSession:(id)arg3 parameters:(id)arg4 outInstalledAppPath:(id *)arg5 outAlternateRemoteAppPath:(id *)arg6 outError:(id *)arg7;
- (BOOL)_installTestArtifactsForRsyncDeveloperModelForApplication:(id)arg1 launchSession:(id)arg2 parameters:(id)arg3 outError:(id *)arg4;
- (BOOL)_updateTestingEnvironmentVariables:(id)arg1 forApplication:(id)arg2 deviceConfigPath:(id)arg3 testConfiguration:(id)arg4 error:(id *)arg5;
- (BOOL)_updateXCTestBundleInjectEnvironmentVariables:(id)arg1 forApplication:(id)arg2 error:(id *)arg3;
- (BOOL)_determineInstalledAppPathForRsyncDeveloperModeWithLaunchSession:(id)arg1 parameters:(id)arg2 alternateRemoteAppPath:(id)arg3 installReportStart:(id)arg4 outApplication:(id *)arg5 outInstalledAppPath:(id *)arg6 outError:(id *)arg7;
- (BOOL)_performApplyRootForRsyncDeveloperModeWithLaunchSession:(id)arg1 bundleId:(id)arg2 deviceBuiltProductsPath:(id)arg3 filePath:(id)arg4 outInstalledAppPath:(id *)arg5 outError:(id *)arg6;
- (BOOL)_performStageRootForRsyncDeveloperModeWithLaunchSession:(id)arg1 localBuiltProductsPath:(id)arg2 deviceBuiltProductsPath:(id)arg3 deviceBuiltProductsDir:(id)arg4 filePath:(id)arg5 outInstalledAppPath:(id *)arg6 outError:(id *)arg7;
- (void)_updateLaunchParametersForRsyncDeveloperModeWithParameters:(id)arg1 deviceBuiltProductsPath:(id)arg2 localBuiltProductsPath:(id)arg3;
- (BOOL)performInstallWithName:(id)arg1 path:(id)arg2 buildables:(id)arg3 buildParameters:(id)arg4 includeDebugSupportFiles:(BOOL)arg5 killProcesses:(id)arg6 workspace:(id)arg7 outError:(id *)arg8;
- (void)_killProcessesForProductInstallWithWorkspace:(id)arg1 killProcesses:(id)arg2;
- (BOOL)_updateActiveInstallsForProductInstallWithWorkspace:(id)arg1 originalName:(id)arg2 installUUID:(id)arg3 outError:(id *)arg4;
- (BOOL)_updateDeviceApplicationDatabaseForProductInstallWithWorkspace:(id)arg1 originalName:(id)arg2 rsyncResult:(id)arg3 anyAppsInstalledToNonStagingPaths:(BOOL)arg4 anyAppsInstalledToStagingPath:(BOOL)arg5 disableMobileInstallRebuilt:(BOOL)arg6 outError:(id *)arg7;
- (BOOL)_performApplyRootForProductInstallWithWorkspace:(id)arg1 originalName:(id)arg2 installPath:(id)arg3 outRsyncResult:(id *)arg4 outError:(id *)arg5;
- (BOOL)_performStageRootForProductInstallWithWorkspace:(id)arg1 originalName:(id)arg2 sourcePath:(id)arg3 additionalPaths:(id)arg4 hardLinkDirs:(id)arg5 installPath:(id)arg6 outError:(id *)arg7;
- (void)_gatherRootPropertiesForProductInstallWithWorkspace:(id)arg1 buildables:(id)arg2 buildParameters:(id)arg3 filePath:(id)arg4 includeDebugSupportFiles:(BOOL)arg5 outSourcePath:(id *)arg6 outInstallPath:(id *)arg7 outAdditionalPaths:(id *)arg8 outHardLinkDirs:(id *)arg9 outAnyAppsInstalledToStagingPath:(char *)arg10 outAnyAppsInstalledToNonStagingPaths:(char *)arg11 outInstallUUID:(id *)arg12 outDisableMobileInstallRebuild:(char *)arg13;
- (void)_gatherRootPropertiesFromBuildables:(id)arg1 forProductInstallWithWorkspace:(id)arg2 installPath:(id)arg3 buildParameters:(id)arg4 includeDebugSupportFiles:(BOOL)arg5 outAdditionalPaths:(id *)arg6 outAnyAppsInstalledToStagingPath:(char *)arg7 outAnyAppsInstalledToNonStagingPaths:(char *)arg8 outDisableMobileInstallRebuild:(char *)arg9;
- (void)_gatherAdditionalPathsFromBuildable:(id)arg1 buildableProduct:(id)arg2 forProductInstallWithWorkspace:(id)arg3 buildParameters:(id)arg4 installPath:(id)arg5 productInstallPath:(id)arg6 linkedBinaryNameToInstallPath:(id)arg7 outAdditionalPaths:(id *)arg8;
- (id)_newInstallErrorForInstallNamed:(id)arg1 activityDescription:(id)arg2 details:(id)arg3;
- (_Bool)_copyBackAlternateApplication:(id)arg1 atPath:(id *)arg2 error:(id *)arg3;
- (id)_waitForApplicationForSession:(id)arg1;
- (id)_localBuiltProductsPathWithSession:(id)arg1 error:(id *)arg2;
- (id)deviceInstallPathForLaunchSession:(id)arg1 andBuildProductsPath:(id)arg2;
@property(readonly) NSString *deviceTestRelatedArtifactsDir;
- (id)deviceBuiltProductsDir;
- (id)fetchApplications;
- (id)applicationForSession:(id)arg1;
- (id)_uncachedBundleIdentifierForSession:(id)arg1;
- (id)buildParametersForLaunchSession:(id)arg1;
- (id)_launchDatabaseRebuildTriggerForRsyncResult:(id)arg1 bundleIdentifier:(id)arg2;
- (BOOL)_validateRsyncInstallWithError:(id *)arg1;
- (id)installSubstitutionPathsForDebugger;
- (_Bool)addUUIDToActiveInstalls:(id)arg1 errorString:(id *)arg2;
- (_Bool)copyBackActiveInstallsWithErrorString:(id *)arg1;
- (id)activeInstallsPath;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)preferredSDKForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)preferredArchitectureForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)supportedArchitecturesForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)deviceSupportsBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (long long)hostAuthenticatedOneLineCommand:(id)arg1 withArg:(id)arg2 result:(id *)arg3;
- (id)taskForHostCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (long long)multiLineCommand:(id)arg1 onDevice:(_Bool)arg2 result:(id *)arg3;
- (long long)oneLineCommand:(id)arg1 onDevice:(_Bool)arg2 withArguments:(id)arg3 environment:(id)arg4 result:(id *)arg5;
- (id)multiLineCommand:(id)arg1 onDevice:(_Bool)arg2;
- (id)oneLineCommand:(id)arg1 onDevice:(_Bool)arg2 withArguments:(id)arg3 andEnvironment:(id)arg4;
- (id)_runTask:(id)arg1;
- (id)_runTask:(id)arg1 withOutputHandler:(CDUnknownBlockType)arg2;
- (id)supportedDeviceFamilies;
- (void)renameDevice:(id)arg1;
- (void)setName:(id)arg1;
- (_Bool)canRenameDevice;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (_Bool)isWireless;
@property(readonly) _Bool isPasscodeLocked;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (id)shortDescription;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;
- (id)processNamesToObserveForCrashReportsDuringTesting;
- (id)internalSystemTestBundleInjectionLibraryPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (id)internalSystemTestingToolPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
- (BOOL)supportsTargetBootstrapInjection;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;

@end

