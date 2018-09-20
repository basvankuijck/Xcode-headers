//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTDelayedInvocation, IDEDistributionAccountIssueViewController;
@protocol DVTInvalidation;

@interface IDEDistributioniTunesConnectAccountStepViewController : IDEDistributionStepViewController
{
    double _startTime;
    id <DVTInvalidation> _accountsToken;
    DVTDelayedInvocation *_delayedAccountCheck;
    IDEDistributionAccountIssueViewController *_accountIssuesVC;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
+ (id)keyPathsForValuesAffectingTitle;
@property(retain, nonatomic) IDEDistributionAccountIssueViewController *accountIssuesVC; // @synthesize accountIssuesVC=_accountIssuesVC;
@property(retain) DVTDelayedInvocation *delayedAccountCheck; // @synthesize delayedAccountCheck=_delayedAccountCheck;
@property(retain) id <DVTInvalidation> accountsToken; // @synthesize accountsToken=_accountsToken;
@property double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (BOOL)canGoPrevious;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)_checkForiTunesAccount;
- (BOOL)canGoNext;
- (void)viewDidInstall;
- (id)title;
- (void)primitiveInvalidate;

@end

