//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemFilteringCoordinator.h>

@class DVTTimeSlicedMainThreadWorkQueue, NSMutableDictionary;

@interface IDENavigableItemAsyncFilteringCoordinator : IDENavigableItemFilteringCoordinator
{
    int _currentFilteringGeneration;
    NSMutableDictionary *_filteringProxiesByKey;
    DVTTimeSlicedMainThreadWorkQueue *_itemsToFilterQueue;
    DVTTimeSlicedMainThreadWorkQueue *_itemsToInvalidateChildArrangedItemsQueue;
}

+ (id)keyPathsForValuesAffectingPerformingFiltering;
@property(readonly) DVTTimeSlicedMainThreadWorkQueue *itemsToInvalidateChildArrangedItemsQueue; // @synthesize itemsToInvalidateChildArrangedItemsQueue=_itemsToInvalidateChildArrangedItemsQueue;
@property(readonly) DVTTimeSlicedMainThreadWorkQueue *itemsToFilterQueue; // @synthesize itemsToFilterQueue=_itemsToFilterQueue;
- (void).cxx_destruct;
- (void)_handleObjectGraphDidChange:(id)arg1;
- (void)_handleItemsPropertiesDidChange:(id)arg1;
- (void)_invalidateParentsChildrenOf:(id)arg1;
- (void)_markItem:(id)arg1 matches:(BOOL)arg2;
- (void)_invalidateArrangedChildrenOfFilterProxies;
- (void)_itemInvalidateMatchState:(id)arg1;
- (id)_arrangeItems:(id)arg1 ofItem:(id)arg2;
- (void)_performFilterEvaluationOfRepresentedObject:(id)arg1;
- (void)_performFilterEvaluationOfItem:(id)arg1;
- (void)_beginFilteringFrom:(id)arg1;
- (BOOL)performingFiltering;
- (int)_filterCurrentGeneration;
- (void)_filterDidChange;
- (void)_stopAllWork;
- (void)resumeFiltering;
- (void)suspendFiltering;
- (void)primitiveInvalidate;
- (id)init;
- (id)_filteredItemProxyForKey:(id)arg1;
- (void)_setFilteredItemProxy:(id)arg1 forKey:(id)arg2;
- (id)_filteredItemProxyForItems:(id)arg1;
- (id)_filteringProxiesByKey;

@end

