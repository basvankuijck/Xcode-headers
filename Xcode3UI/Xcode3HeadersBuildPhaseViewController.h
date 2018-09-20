//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

#import <Xcode3UI/Xcode3BuildPhaseFiltering-Protocol.h>

@class DVTStackView_ML, NSIndexSet, NSMutableArray, NSString;

@interface Xcode3HeadersBuildPhaseViewController : Xcode3BuildPhaseViewController <Xcode3BuildPhaseFiltering>
{
    DVTStackView_ML *_stackView;
    NSMutableArray *_groupViewControllers;
    NSMutableArray *_hasSearchResultsObservingTokens;
    NSMutableArray *_observationTokens;
    NSIndexSet *_storedDisclosedIndexes;
    BOOL _hasSearchResults;
    BOOL _viewInstalled;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)_attributesForNameString;
+ (id)_attributesForCountString;
@property BOOL hasSearchResults; // @synthesize hasSearchResults=_hasSearchResults;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (BOOL)capsuleView:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)capsuleView:(id)arg1 validateDrop:(id)arg2;
- (id)supportedDragTypes;
- (id)_defaultGroupViewController;
- (BOOL)validateMenuItem:(id)arg1;
- (void)Xcode3Support_changeBuildFileRoleToProject:(id)arg1;
- (void)Xcode3Support_changeBuildFileRoleToPrivate:(id)arg1;
- (void)Xcode3Support_changeBuildFileRoleToPublic:(id)arg1;
- (void)_hasSearchResultsChanged;
@property(copy) NSString *searchString;
- (BOOL)_isFiltered;
- (void)primitiveInvalidate;
- (BOOL)canRemoveItems;
- (void)_canRemoveItemsChanged;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (id)titleForDisplay;
- (void)_titleForDisplayChanged;
- (void)_discloseIndexes:(id)arg1;
- (void)_updateDisclosedSubviews;
- (void)setEditor:(id)arg1;
- (void)viewWillUninstall;
- (void)_updateDisclosureViewTitle:(id)arg1;
- (void)viewDidInstall;
- (id)initWithBuildPhase:(id)arg1;
- (void)_commonInit;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

