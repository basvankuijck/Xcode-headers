//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotSuggestionSetAction.h>

@interface IBICSlotSuggestionSetAction (DisplayAdditions)
- (id)slotsToGenerateFromForItem:(id)arg1;
- (id)conflictFreeSlotsForChildrenOfItem:(id)arg1;
- (BOOL)isInNullState:(id)arg1;
- (BOOL)wouldMakeChangesToItem:(id)arg1 inDocument:(id)arg2;
- (long long)applicationStateToItem:(id)arg1 inDocument:(id)arg2;
- (long long)compareApplicationOrder:(id)arg1;
- (double)applicationOrder;
- (BOOL)applyToCatalogItem:(id)arg1 inDocument:(id)arg2 dryRun:(BOOL)arg3;
- (id)invertedAction;
@end

