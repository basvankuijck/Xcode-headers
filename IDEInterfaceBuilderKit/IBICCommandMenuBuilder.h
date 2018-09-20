//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class NSString;
@protocol IBICCommandMenuDelegate;

@interface IBICCommandMenuBuilder : NSObject <NSMenuDelegate>
{
    id <IBICCommandMenuDelegate> _delegate;
}

@property __weak id <IBICCommandMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)quicklookItem:(id)arg1;
- (void)changeSlottedAssetRepSlots:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)importContentFromProject:(id)arg1;
- (void)importContent:(id)arg1;
- (void)insertAsset:(id)arg1;
- (void)openWithExternalEditor:(id)arg1;
- (void)showInFinder:(id)arg1;
- (id)documentEditor;
- (id)actionContext;
- (id)generateMenuItemsForCatalogClass:(Class)arg1 includeImportItems:(BOOL)arg2 includeRemoveItems:(BOOL)arg3 includeShowItems:(BOOL)arg4 includeQuickLook:(BOOL)arg5 includeHelp:(BOOL)arg6;
- (id)generateRemoveItems;
- (id)generateImageSetSlotSelectionItemsWithIdent:(long long)arg1;
- (id)menuItemsForRepSuggestionSets:(id)arg1 indent:(long long)arg2;
- (id)generateShowItemsIncludingQuickLook:(BOOL)arg1;
- (id)generateImportItems;
- (id)generateInsertAssetsItemsForCatalogClass:(Class)arg1 inMenu:(id)arg2;
- (id)generateInsertAssetsItemsForCatalogClass:(Class)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

