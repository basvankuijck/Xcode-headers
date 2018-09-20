//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDragAndDropInsertionIndicatorDelegate-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol IBDragAndDropPolicyDelegate;

@interface IBOrderedRelationshipDragAndDropPolicy : NSObject <IBDragAndDropInsertionIndicatorDelegate>
{
    id _representedObject;
    BOOL _usesConfinementRectForDropIndicatorRect;
    id <IBDragAndDropPolicyDelegate> _delegate;
    NSString *_relationKeyPath;
    long long _primaryGrowthDirection;
    long long _secondaryGrowthDirection;
    long long _orderedRelationInsertionIndex;
    NSSet *_pasteboardTypes;
}

@property(readonly) NSSet *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property(nonatomic) long long orderedRelationInsertionIndex; // @synthesize orderedRelationInsertionIndex=_orderedRelationInsertionIndex;
@property(nonatomic) BOOL usesConfinementRectForDropIndicatorRect; // @synthesize usesConfinementRectForDropIndicatorRect=_usesConfinementRectForDropIndicatorRect;
@property(nonatomic) long long secondaryGrowthDirection; // @synthesize secondaryGrowthDirection=_secondaryGrowthDirection;
@property(nonatomic) long long primaryGrowthDirection; // @synthesize primaryGrowthDirection=_primaryGrowthDirection;
@property(readonly) NSString *relationKeyPath; // @synthesize relationKeyPath=_relationKeyPath;
@property __weak id <IBDragAndDropPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)customizesDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (BOOL)canAcceptDragInfo:(id)arg1;
- (long long)insertionIndexForPoint:(struct CGPoint)arg1;
- (BOOL)shouldIncrementInsertionIndexForPoint:(struct CGPoint)arg1 rectForObjectAtInsertionIndex:(struct CGRect)arg2;
- (double)distanceInSecondaryGrowthDirectionBetweenPoint:(struct CGPoint)arg1 andRect:(struct CGRect)arg2;
- (double)distanceInPrimaryGrowthDirectionBetweenPoint:(struct CGPoint)arg1 andRect:(struct CGRect)arg2;
- (double)distanceInDirection:(long long)arg1 betweenPoint:(struct CGPoint)arg2 andRect:(struct CGRect)arg3;
- (BOOL)hasSecondaryGrowthDirection;
@property(readonly, nonatomic) unsigned long long orderedRelationInsertionEdge;
@property(readonly, nonatomic) struct CGRect confinementRect;
- (struct CGRect)dragAndDropInsertionIndicator:(id)arg1 dragAlignmentRectForRelatedObject:(id)arg2;
- (struct CGRect)dragAlignmentRectForRelatedObject:(id)arg1;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *orderedRelation;
- (id)initWithDelegate:(id)arg1 representedObject:(id)arg2 toManyRelation:(id)arg3 pasteboardType:(id)arg4 growthDirection:(long long)arg5;
- (id)initWithDelegate:(id)arg1 representedObject:(id)arg2 toManyRelation:(id)arg3 pasteboardTypes:(id)arg4 primaryGrowthDirection:(long long)arg5 secondaryGrowthDirection:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

