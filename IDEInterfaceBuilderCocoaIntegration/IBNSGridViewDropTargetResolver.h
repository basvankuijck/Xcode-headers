//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewDropTargetResolver.h>

@interface IBNSGridViewDropTargetResolver : IBNSViewDropTargetResolver
{
    struct CGRect _lastRowOrColumnRect;
    long long _rowInsertionIndex;
    long long _columnInsertionIndex;
    long long _insertionType;
}

@property(readonly, nonatomic) long long insertionType; // @synthesize insertionType=_insertionType;
@property(readonly, nonatomic) long long columnInsertionIndex; // @synthesize columnInsertionIndex=_columnInsertionIndex;
@property(readonly, nonatomic) long long rowInsertionIndex; // @synthesize rowInsertionIndex=_rowInsertionIndex;
- (struct CGRect)dropRectForDragAndDropInsertionIndicator:(id)arg1;
- (unsigned long long)orderedRelationInsertionEdgeForDragAndDropInsertionIndicator:(id)arg1;
- (id)orderedRelationForDragAndDropInsertionIndicator:(id)arg1;
- (long long)orderedRelationInsertionIndexForDragAndDropInsertionIndicator:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (id)chooseDestinationForDragInfo:(id)arg1;
- (id)childDragCandidateForDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (struct CGRect)rectSpacingBetweenRowOrColumnRect:(struct CGRect)arg1 withEdge:(unsigned long long)arg2 useThinSpacing:(BOOL)arg3;
- (double)minimumSpacingForEdge:(unsigned long long)arg1;
- (void)setColumnInsertionIndex:(long long)arg1;
- (void)setRowInsertionIndex:(long long)arg1;
- (void)setInsertionType:(long long)arg1;
- (id)gridViewDropTargetResolveDelegate;
- (id)editedGridViewTemplate;
- (id)initWithEditedObject:(id)arg1 parent:(id)arg2 frameController:(id)arg3;

@end

