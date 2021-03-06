//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICGroupedRepCapsuleController.h>

@interface IBICSlottedAssetOverviewCapsuleController : IBICGroupedRepCapsuleController
{
}

- (id)assetComponentIDForAssetComponent:(id)arg1;
- (id)assetComponentForAssetComponentID:(id)arg1;
- (void)didCompleteDropOperationWithDroppedItems:(id)arg1;
- (id)addDroppedItem:(id)arg1 withComponentID:(id)arg2;
- (id)addItemFromPasteboardReferencedFilePath:(id)arg1 withComponentID:(id)arg2;
- (id)addItemFromDroppedContentObject:(id)arg1 withComponentID:(id)arg2;
- (id)inferredComponentIDsForImageReps:(id)arg1;
- (id)inferredComponentIDsForPaths:(id)arg1;
- (id)prepareConvertedCopyOfDroppedFallbackItem:(id)arg1 toReplaceExistingItem:(id)arg2 context:(id)arg3 targetDropLocation:(id *)arg4;
- (id)prepareToDropItem:(id)arg1 ontoExistingItem:(id)arg2 context:(id)arg3;
- (id)suggestedAssetComponentIDForDraggedAssetComponent:(id)arg1 context:(id)arg2;
- (Class)secondaryItemClassForPasteboardOperationsTargetingDropLocation:(id)arg1;
- (Class)primaryItemClassForPasteboardOperationsTargetingDropLocation:(id)arg1;
- (BOOL)isValidToDropColorOnComponentWithID:(id)arg1;
- (id)imagesForForDropLocation:(id)arg1 fromPasteboard:(id)arg2;
- (BOOL)canProduceImageForPasteboard:(id)arg1 forFileTypesForDropLocation:(id)arg2;
- (BOOL)isValidPath:(id)arg1 forDroppingOnComponentWithID:(id)arg2;
- (Class)assetCapsuleClass;
- (id)groupedRepCapsule:(id)arg1 detailAreaPathForIdentifier:(id)arg2;
- (void)groupedRepCapsule:(id)arg1 configureAssetView:(id)arg2 forAssetRepIdentifier:(id)arg3;
- (void)groupedRepCapsule:(id)arg1 configureGroupView:(id)arg2 forGroupWithPath:(id)arg3;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (id)assetCapsule;
- (BOOL)displaysChildrenOfItem:(id)arg1;
- (id)displayableDescendants;
- (id)asset;

@end

