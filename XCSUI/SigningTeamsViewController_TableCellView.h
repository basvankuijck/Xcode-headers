//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSImageView, NSProgressIndicator, NSTextField, XCSDeveloperTeam;

@interface SigningTeamsViewController_TableCellView : NSTableCellView
{
    NSTextField *_teamIDField;
    NSTextField *_errorField;
    NSButton *_signInButton;
    NSButton *_joinTeamButton;
    NSButton *_reviewAgreementButton;
    NSButton *_joinedToServerButton;
    NSProgressIndicator *_joinProgress;
    NSImageView *_errorImageView;
    XCSDeveloperTeam *_fetchedTeam;
}

@property(retain) XCSDeveloperTeam *fetchedTeam; // @synthesize fetchedTeam=_fetchedTeam;
@property __weak NSImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property __weak NSProgressIndicator *joinProgress; // @synthesize joinProgress=_joinProgress;
@property __weak NSButton *joinedToServerButton; // @synthesize joinedToServerButton=_joinedToServerButton;
@property __weak NSButton *reviewAgreementButton; // @synthesize reviewAgreementButton=_reviewAgreementButton;
@property __weak NSButton *joinTeamButton; // @synthesize joinTeamButton=_joinTeamButton;
@property __weak NSButton *signInButton; // @synthesize signInButton=_signInButton;
@property __weak NSTextField *errorField; // @synthesize errorField=_errorField;
@property __weak NSTextField *teamIDField; // @synthesize teamIDField=_teamIDField;
- (void).cxx_destruct;

@end

