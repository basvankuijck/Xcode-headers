//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class DVTBorderedView, DVTObservingToken, NSArray, NSButton, NSPopUpButton, NSProgressIndicator, NSTextField, NSView, XCSUIAccountReachabilityToImageTransformer, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_BasicInfoEditor : IDEViewController <XCSUIDataSourceSnapshotsObserver>
{
    DVTObservingToken *_scmDefinitionObservingToken;
    DVTObservingToken *_reachabilityObservingToken;
    DVTObservingToken *_userCanCreateBotsObserver;
    DVTObservingToken *_observeAvailability;
    BOOL _canCreateBotOnServer;
    BOOL _queryingCanCreateBotsOnServer;
    BOOL _viewIsInstalled;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSArray *_servers;
    XCSUIAccountReachabilityToImageTransformer *_imageTransformer;
    DVTBorderedView *_borderedView;
    NSPopUpButton *_serversPopup;
    NSTextField *_botNameField;
    NSView *_controlsView;
    NSButton *_serverWarningButton;
    NSProgressIndicator *_serverRefreshingSpinner;
}

@property __weak NSProgressIndicator *serverRefreshingSpinner; // @synthesize serverRefreshingSpinner=_serverRefreshingSpinner;
@property __weak NSButton *serverWarningButton; // @synthesize serverWarningButton=_serverWarningButton;
@property(retain) NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(retain) NSTextField *botNameField; // @synthesize botNameField=_botNameField;
@property(retain) NSPopUpButton *serversPopup; // @synthesize serversPopup=_serversPopup;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(nonatomic) BOOL queryingCanCreateBotsOnServer; // @synthesize queryingCanCreateBotsOnServer=_queryingCanCreateBotsOnServer;
@property(nonatomic) BOOL canCreateBotOnServer; // @synthesize canCreateBotOnServer=_canCreateBotOnServer;
@property(retain, nonatomic) XCSUIAccountReachabilityToImageTransformer *imageTransformer; // @synthesize imageTransformer=_imageTransformer;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(retain) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (void)setSelectedServer:(id)arg1;
- (void)selectServiceInPopup:(id)arg1;
- (void)addNewServerAction:(id)arg1;
- (void)serverSelectedAction:(id)arg1;
- (void)dummyDummy:(id)arg1;
- (void)_updateServersPopup;
- (void)_clearServersPopup;
- (void)textDidChange:(id)arg1;
- (void)viewWillUninstall;
- (void)commitChanges;
- (void)dataSource:(id)arg1 didFinishInitialLoadForService:(id)arg2;
- (void)dataSource:(id)arg1 accountWasAddedForService:(id)arg2;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;

@end

