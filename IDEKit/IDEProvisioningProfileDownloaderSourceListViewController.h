//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTObservingToken, DVTTableView, IDEProvisioningCompoundProfile, IDEProvisioningProfileDownloader, NSArray, NSArrayController, NSDictionary, NSIndexSet, NSString;
@protocol IDEProvisioningProfileDownloaderSourceListViewControllerDelegate;

@interface IDEProvisioningProfileDownloaderSourceListViewController : IDEViewController <NSTableViewDelegate>
{
    IDEProvisioningProfileDownloader *_downloader;
    DVTTableView *_tableView;
    NSArrayController *_profilesArrayController;
    NSArray *_itemsForDisplay;
    NSIndexSet *_profilesTableSelectionIndexes;
    DVTObservingToken *_teamsObserver;
    DVTDelayedInvocation *_updateProfilesDelayedInvocation;
    IDEProvisioningCompoundProfile *_selectedProfile;
    id <IDEProvisioningProfileDownloaderSourceListViewControllerDelegate> _delegate;
    NSDictionary *_teamIdentifierToError;
}

@property(retain, nonatomic) NSDictionary *teamIdentifierToError; // @synthesize teamIdentifierToError=_teamIdentifierToError;
@property(retain, nonatomic) id <IDEProvisioningProfileDownloaderSourceListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEProvisioningCompoundProfile *selectedProfile; // @synthesize selectedProfile=_selectedProfile;
@property(retain, nonatomic) DVTDelayedInvocation *updateProfilesDelayedInvocation; // @synthesize updateProfilesDelayedInvocation=_updateProfilesDelayedInvocation;
@property(retain, nonatomic) DVTObservingToken *teamsObserver; // @synthesize teamsObserver=_teamsObserver;
@property(retain, nonatomic) NSIndexSet *profilesTableSelectionIndexes; // @synthesize profilesTableSelectionIndexes=_profilesTableSelectionIndexes;
@property(retain, nonatomic) NSArray *itemsForDisplay; // @synthesize itemsForDisplay=_itemsForDisplay;
@property(retain) NSArrayController *profilesArrayController; // @synthesize profilesArrayController=_profilesArrayController;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IDEProvisioningProfileDownloader *downloader; // @synthesize downloader=_downloader;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)clickedErrorButtonForTeam:(id)arg1;
- (id)selectedProfileFromSelectedIndex:(id)arg1;
- (id)firstSelectableIndexSet;
- (void)updateProfilesForDisplay;
- (void)startObservations;
- (void)viewDidLoad;
- (id)initWithDownloader:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

