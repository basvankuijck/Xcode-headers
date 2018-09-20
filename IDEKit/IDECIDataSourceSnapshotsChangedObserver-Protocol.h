//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol IDECIBot, IDECIBotRun, IDECIService, XCSUIIntegrationStatusProtocol;

@protocol IDECIDataSourceSnapshotsChangedObserver

@optional
- (void)dataSource:(id)arg1 buildQueueSnapshotsChanged:(id <IDECIService>)arg2;
- (void)dataSource:(id)arg1 versionInfoSnapshotsChanged:(id)arg2;
- (void)dataSource:(id)arg1 integrationSnapshotsChanged:(id <IDECIBotRun>)arg2 botSnapshot:(id <IDECIBot>)arg3;
- (void)dataSource:(id)arg1 botSnapshotsChanged:(id <IDECIBot>)arg2;
- (void)dataSource:(id)arg1 integrationStatusSnapshotsChanged:(id <XCSUIIntegrationStatusProtocol>)arg2 serviceSnapshot:(id <IDECIService>)arg3 botSnapshot:(id <IDECIBot>)arg4 integrationSnapshot:(id <IDECIBotRun>)arg5;
- (void)dataSource:(id)arg1 accountWasRemovedForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasAddedForService:(id)arg2;
- (void)dataSource:(id)arg1 didFinishInitialLoadForService:(id)arg2;
- (void)dataSource:(id)arg1 botDefinitionChanged:(id <IDECIBot>)arg2;
- (void)dataSource:(id)arg1 aclUpdateForService:(id <IDECIService>)arg2;
- (void)dataSource:(id)arg1 integrationFinished:(id <XCSUIIntegrationStatusProtocol>)arg2;
@end

