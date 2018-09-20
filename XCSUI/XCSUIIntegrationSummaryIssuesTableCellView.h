//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSAttributedString, NSButton, NSImageView, NSStackView, NSTextField, NSView, XCSUIIntegrationIssue;
@protocol XCSUIIntegrationSummaryIssuesTableCellViewActionTarget;

@interface XCSUIIntegrationSummaryIssuesTableCellView : NSTableCellView
{
    NSAttributedString *_unmodifiedRadarFieldAttString;
    NSTextField *_issueTypeAndCauseField;
    NSTextField *_issueReasonField;
    NSTextField *_issueFileField;
    NSTextField *_introducedInField;
    NSTextField *_radarField;
    XCSUIIntegrationIssue *_representedIssue;
    id <XCSUIIntegrationSummaryIssuesTableCellViewActionTarget> _actionTarget;
    NSStackView *_issueStackView;
    NSImageView *_issueTypeIcon;
    NSView *_issueTypeAndCauseContainerView;
    NSView *_reasonContainerView;
    NSView *_issueFileContainerView;
    NSView *_introducedInContainerView;
    NSButton *_radarButton;
    NSButton *_fixItButton;
    NSView *_radarContainerView;
}

@property __weak NSView *radarContainerView; // @synthesize radarContainerView=_radarContainerView;
@property __weak NSButton *fixItButton; // @synthesize fixItButton=_fixItButton;
@property __weak NSButton *radarButton; // @synthesize radarButton=_radarButton;
@property __weak NSView *introducedInContainerView; // @synthesize introducedInContainerView=_introducedInContainerView;
@property __weak NSView *issueFileContainerView; // @synthesize issueFileContainerView=_issueFileContainerView;
@property __weak NSView *reasonContainerView; // @synthesize reasonContainerView=_reasonContainerView;
@property __weak NSView *issueTypeAndCauseContainerView; // @synthesize issueTypeAndCauseContainerView=_issueTypeAndCauseContainerView;
@property __weak NSImageView *issueTypeIcon; // @synthesize issueTypeIcon=_issueTypeIcon;
@property __weak NSStackView *issueStackView; // @synthesize issueStackView=_issueStackView;
@property __weak id <XCSUIIntegrationSummaryIssuesTableCellViewActionTarget> actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain) XCSUIIntegrationIssue *representedIssue; // @synthesize representedIssue=_representedIssue;
@property __weak NSTextField *radarField; // @synthesize radarField=_radarField;
@property __weak NSTextField *introducedInField; // @synthesize introducedInField=_introducedInField;
@property __weak NSTextField *issueFileField; // @synthesize issueFileField=_issueFileField;
@property __weak NSTextField *issueReasonField; // @synthesize issueReasonField=_issueReasonField;
@property __weak NSTextField *issueTypeAndCauseField; // @synthesize issueTypeAndCauseField=_issueTypeAndCauseField;
- (void).cxx_destruct;
- (void)configureFixItButtonForCell:(id)arg1 withIssue:(id)arg2;
- (id)issueTypeIconImageForIssue:(id)arg1 silencedOrResolved:(BOOL)arg2;
- (void)refresh;
- (void)setObjectValue:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)layout;

@end
