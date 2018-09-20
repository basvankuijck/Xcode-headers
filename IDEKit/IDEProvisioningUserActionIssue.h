//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEProvisioningIssue.h>

@class IDEProvisioningIssueResolutionWindowController, IDEProvisioningUserAction, NSWindow;

@interface IDEProvisioningUserActionIssue : IDEProvisioningIssue
{
    IDEProvisioningUserAction *_userAction;
    IDEProvisioningIssueResolutionWindowController *_issueResolutionWindowController;
    NSWindow *_issueResolutionWindowControllerHostWindow;
}

@property(retain, nonatomic) NSWindow *issueResolutionWindowControllerHostWindow; // @synthesize issueResolutionWindowControllerHostWindow=_issueResolutionWindowControllerHostWindow;
@property(retain, nonatomic) IDEProvisioningIssueResolutionWindowController *issueResolutionWindowController; // @synthesize issueResolutionWindowController=_issueResolutionWindowController;
@property(retain, nonatomic) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didSelectIssueAction:(id)arg1;
- (BOOL)requiresAdditionalUserInteraction;
- (void)didSelectSubtitleAction:(id)arg1;
- (id)buttonTitle;
- (id)initWithError:(id)arg1;

@end

