//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSImage, NSImageView, NSString, XCSUIBotIntegrationPopoverBadgesView;

@interface XCSUIBotIntegrationSummaryPopoverViewController : DVTViewController
{
    NSString *_integrationTitle;
    unsigned long long _errorsCount;
    unsigned long long _warningsCount;
    unsigned long long _issuesCount;
    NSString *_integrationFailureText;
    CDUnknownBlockType _clickHandler;
    NSImage *_errorsIcon;
    NSImage *_warningsIcon;
    NSImage *_issuesIcon;
    NSImageView *_integrationFailureImageView;
    XCSUIBotIntegrationPopoverBadgesView *_countsView;
}

@property __weak XCSUIBotIntegrationPopoverBadgesView *countsView; // @synthesize countsView=_countsView;
@property __weak NSImageView *integrationFailureImageView; // @synthesize integrationFailureImageView=_integrationFailureImageView;
@property(retain) NSImage *issuesIcon; // @synthesize issuesIcon=_issuesIcon;
@property(retain) NSImage *warningsIcon; // @synthesize warningsIcon=_warningsIcon;
@property(retain) NSImage *errorsIcon; // @synthesize errorsIcon=_errorsIcon;
@property(copy) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
@property(copy, nonatomic) NSString *integrationFailureText; // @synthesize integrationFailureText=_integrationFailureText;
@property unsigned long long issuesCount; // @synthesize issuesCount=_issuesCount;
@property unsigned long long warningsCount; // @synthesize warningsCount=_warningsCount;
@property unsigned long long errorsCount; // @synthesize errorsCount=_errorsCount;
@property(copy) NSString *integrationTitle; // @synthesize integrationTitle=_integrationTitle;
- (void).cxx_destruct;
- (void)updateBadges;
- (void)showIntegrationSummary:(id)arg1;
- (void)showOrHideIntegrationFailedControls:(BOOL)arg1;
- (void)loadView;

@end

