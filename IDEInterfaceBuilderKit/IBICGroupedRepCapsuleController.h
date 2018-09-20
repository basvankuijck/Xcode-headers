//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAssetOverviewCapsuleController.h>

#import <IDEInterfaceBuilderKit/IBICAssetRepViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICGroupedRepCapsuleDelegate-Protocol.h>

@class DVTNotificationToken, NSString;

@interface IBICGroupedRepCapsuleController : IBICAssetOverviewCapsuleController <IBICAssetRepViewDelegate, IBICGroupedRepCapsuleDelegate, IBICCatalogItemObserver>
{
    DVTNotificationToken *_warningsChangedToken;
}

- (void).cxx_destruct;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (void)chooseDropTarget:(id *)arg1 acceptedType:(long long *)arg2 andAllowedDragOperations:(unsigned long long *)arg3 forDraggingInfo:(id)arg4;
- (void)removeExistingItemBeforeAcceptingPasteboardContentIntoComponentWithID:(id)arg1;
- (void)didCompleteDropOperationWithDroppedItems:(id)arg1;
- (id)addDroppedItem:(id)arg1 withComponentID:(id)arg2;
- (id)addItemFromPasteboardReferencedFilePath:(id)arg1 withComponentID:(id)arg2;
- (id)addItemFromDroppedContentObject:(id)arg1 withComponentID:(id)arg2;
- (id)inferredComponentIDsForImageReps:(id)arg1;
- (id)inferredComponentIDsForPaths:(id)arg1;
- (id)prepareConvertedCopyOfDroppedFallbackItem:(id)arg1 toReplaceExistingItem:(id)arg2 context:(id)arg3 targetDropLocation:(id *)arg4;
- (id)prepareToDropItem:(id)arg1 ontoExistingItem:(id)arg2 context:(id)arg3;
- (Class)secondaryItemClassForPasteboardOperationsTargetingDropLocation:(id)arg1;
- (Class)primaryItemClassForPasteboardOperationsTargetingDropLocation:(id)arg1;
- (BOOL)isValidToDropColorOnComponentWithID:(id)arg1;
- (id)imagesForForDropLocation:(id)arg1 fromPasteboard:(id)arg2;
- (id)suggestedAssetComponentIDForDraggedAssetComponent:(id)arg1 context:(id)arg2;
- (BOOL)canProduceImageForPasteboard:(id)arg1 forFileTypesForDropLocation:(id)arg2;
- (BOOL)isValidPath:(id)arg1 forDroppingOnComponentWithID:(id)arg2;
- (id)dropLocationAtPoint:(struct CGPoint)arg1;
- (void)view:(id)arg1 draggingEnded:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (id)pathByRemovingConflictFreePrefixFromPath:(id)arg1;
- (BOOL)isConflictPath:(id)arg1;
- (id)prefixPathWithConflictDistinguisher:(id)arg1 conflictFree:(BOOL)arg2 truncateConflictedPaths:(BOOL)arg3;
- (void)pushData;
- (void)groupedRepCapsule:(id)arg1 configureAssetView:(id)arg2 forAssetRepIdentifier:(id)arg3;
- (void)groupedRepCapsule:(id)arg1 configureGroupView:(id)arg2 forGroupWithPath:(id)arg3;
- (void)slottedAssetCapsuleWillLayout:(id)arg1;
- (id)groupedRepCapsule:(id)arg1 detailAreaPathForIdentifier:(id)arg2;
- (void)removeAssetComponentIDsFromUIImmediately:(id)arg1;
- (id)assetCapsule;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1 andAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

