//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTReplacementView, NSString, NSTextField, XCSIntegration, XCSIntegrationIssues, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIIntegrationSummaryStatusViewController : DVTViewController
{
    XCSUIStatusBadge *_errorsBadge;
    XCSUIStatusBadge *_warningsBadge;
    XCSUIStatusBadge *_issuesBadge;
    XCSUIStatusBadge *_testsBadge;
    XCSIntegration *_integration;
    XCSIntegrationIssues *_integrationIssues;
    XCSUIStatusBadgesView *_badgesView;
    NSString *_integrationTitleString;
    NSTextField *_integrationDetailsStatusText;
    NSTextField *_integrationDetailsSchemeText;
    NSTextField *_integrationDetailsBranchText;
    NSTextField *_integrationDetailsQueuedTime;
    NSTextField *_integrationDetailsStartTime;
    NSTextField *_integrationDetailsDurationText;
    NSTextField *_integrationDetailsConfigurationText;
    NSTextField *_integrationDetailsToolchainText;
    DVTReplacementView *_topBarReplacementView;
}

@property __weak DVTReplacementView *topBarReplacementView; // @synthesize topBarReplacementView=_topBarReplacementView;
@property __weak NSTextField *integrationDetailsToolchainText; // @synthesize integrationDetailsToolchainText=_integrationDetailsToolchainText;
@property __weak NSTextField *integrationDetailsConfigurationText; // @synthesize integrationDetailsConfigurationText=_integrationDetailsConfigurationText;
@property __weak NSTextField *integrationDetailsDurationText; // @synthesize integrationDetailsDurationText=_integrationDetailsDurationText;
@property __weak NSTextField *integrationDetailsStartTime; // @synthesize integrationDetailsStartTime=_integrationDetailsStartTime;
@property __weak NSTextField *integrationDetailsQueuedTime; // @synthesize integrationDetailsQueuedTime=_integrationDetailsQueuedTime;
@property __weak NSTextField *integrationDetailsBranchText; // @synthesize integrationDetailsBranchText=_integrationDetailsBranchText;
@property __weak NSTextField *integrationDetailsSchemeText; // @synthesize integrationDetailsSchemeText=_integrationDetailsSchemeText;
@property __weak NSTextField *integrationDetailsStatusText; // @synthesize integrationDetailsStatusText=_integrationDetailsStatusText;
@property(readonly, copy, nonatomic) NSString *integrationTitleString; // @synthesize integrationTitleString=_integrationTitleString;
@property __weak XCSUIStatusBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(retain, nonatomic) XCSIntegrationIssues *integrationIssues; // @synthesize integrationIssues=_integrationIssues;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *statusString;
@property(readonly, nonatomic) unsigned long long warningCount;
@property(readonly, nonatomic) unsigned long long errorCount;
- (void)refreshUI;
- (void)refreshWithIntegrationIssues;
- (void)createBadges;
- (void)primitiveInvalidate;
- (void)loadView;

@end

