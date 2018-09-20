//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStructureViewController.h>

@class IBDockViewController, IBNavigationOutlineViewController, IDEViewController, NSNumber, NSView;
@protocol IBHybridStructureSelectionProvider;

@interface IBHybridStructureViewController : IBStructureViewController
{
    NSView *_outlineAreaView;
    IBDockViewController *_dockViewController;
    IBNavigationOutlineViewController *_outlineViewController;
    NSNumber *_lastKnownOutlineViewWidth;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentFilterFieldWantingStructureProvider;
@property(copy, nonatomic) NSNumber *lastKnownOutlineViewWidth; // @synthesize lastKnownOutlineViewWidth=_lastKnownOutlineViewWidth;
@property(retain) IBNavigationOutlineViewController *outlineViewController; // @synthesize outlineViewController=_outlineViewController;
@property(retain) IBDockViewController *dockViewController; // @synthesize dockViewController=_dockViewController;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)editedTopLevelObjectsDidChange;
- (void)editorInstalled;
- (void)topLevelObjectsChanged;
- (id)selectionProviderForRevealingMembers:(id)arg1;
- (double)minimumContentWidth;
- (double)contentWidth;
- (double)outlineViewWidth;
- (void)selectionProviderDidBecomeActive:(id)arg1;
- (double)constrainContentWidthAndChangeModesIfNeeded:(double)arg1;
- (BOOL)supportsTogglingStructureArea;
- (void)toggleStructureArea:(id)arg1;
- (id)structureAreaExpansionPreferencesKey;
- (id)highlightProviders;
- (void)setDrawsWithActiveLook:(BOOL)arg1;
@property(retain, nonatomic) IDEViewController<IBHybridStructureSelectionProvider> *currentStructureProvider; // @dynamic currentStructureProvider;
@property(readonly, nonatomic) IDEViewController<IBHybridStructureSelectionProvider> *lastStructureSelectionProvider;
- (id)currentFilterFieldWantingStructureProvider;
- (id)stateSavingIdentifier;
- (void)viewDidInstall;
- (void)loadView;
- (id)closedSelectionProvider;
- (id)initialSelectionProvider;
- (void)makeAndPopulateSelectionProviders:(id)arg1;
- (void)setDockItemLabelPopUpContainer:(id)arg1;

@end

