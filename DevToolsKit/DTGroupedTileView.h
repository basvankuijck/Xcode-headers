//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsKit/DTTileView.h>

@class DTGroupedAssetHilightView, NSArray, NSEvent;

@interface DTGroupedTileView : DTTileView
{
    void *reserved;
    long long groupDragTargetIndex;
    long long groupLocalDragTargetIndex;
    BOOL dragInsertAfterInitialTarget;
    BOOL dropOnGroup;
    NSArray *groupCounts;
    NSArray *groups;
    DTGroupedAssetHilightView *overlayView;
    NSEvent *activeMouseDown;
    BOOL showingHeaders;
    CDStruct_f6c3f719 itemInset;
}

+ (BOOL)eventWouldToggleSelection:(id)arg1;
+ (BOOL)eventWouldExtendSelection:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1 inDecoratedView:(id)arg2;
- (id)dropHighlightColor;
- (void)keyDown:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)insertNewline:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)shouldTrackSelectionWithMouseDownEvent:(id)arg1;
- (void)selectItemWithEvent:(id)arg1;
- (id)toolTipForPoint:(struct CGPoint)arg1 sourceRect:(struct CGRect *)arg2;
- (void)dropGroup:(id *)arg1 andItemInsertionIndex:(long long *)arg2 atPoint:(struct CGPoint)arg3;
- (void)dropGroup:(id *)arg1 andItemInsertionIndex:(long long *)arg2 after:(char *)arg3 atPoint:(struct CGPoint)arg4;
- (unsigned long long)indexOfGroupAtPoint:(struct CGPoint)arg1;
- (id)contentObjectAtPoint:(struct CGPoint)arg1;
- (id)tileViewItemAtPoint:(struct CGPoint)arg1;
- (struct CGRect)headerRectForGroupWithIndex:(long long)arg1;
- (id)headerRects;
- (struct CGRect)titleRectForHeaderRect:(struct CGRect)arg1;
- (struct CGRect)titleBackgroundRectForHeaderRect:(struct CGRect)arg1;
- (id)_mutableIndexSetInAppliedGridForRect:(struct CGRect)arg1;
- (unsigned long long)_indexInAppliedGridForPoint:(struct CGPoint)arg1;
- (void)getGlobalIndex:(long long *)arg1 groupIndex:(long long *)arg2 andLocalIndex:(long long *)arg3 atPoint:(struct CGPoint)arg4;
- (void)_getRow:(unsigned long long *)arg1 column:(unsigned long long *)arg2 forPoint:(struct CGPoint)arg3;
- (void)computeTargetGridGeometry;
- (struct CGSize)recalculateTargetFrameSize;
- (id)attributedTitleForGroup:(id)arg1;
- (struct CGRect)rectForTileViewItemAtIndex:(long long)arg1;
- (struct CGRect)_frameRectForIndexInGrid:(unsigned long long)arg1 gridSize:(struct CGSize)arg2;
- (BOOL)isGroupLocalIndex:(long long)arg1 theFirstItemInAnyRowInGroupWithIndex:(long long)arg2;
- (BOOL)isGroupLocalIndex:(long long)arg1 theLastItemInAnyRowInGroupWithIndex:(long long)arg2;
- (long long)appliedColumnsInRow:(long long)arg1 ofGroup:(long long)arg2;
- (long long)appliedRowsInGroupWithIndex:(long long)arg1;
- (long long)targetRowsInGroupWithIndex:(long long)arg1;
- (double)headerHeight;
- (double)headerPostpadHeight;
- (double)headerPrepadHeight;
- (double)headerTitleHeight;
- (long long)numberOfColumns;
- (long long)localIndexForGlobalIndex:(unsigned long long)arg1;
- (long long)groupIndexForGlobalIndex:(unsigned long long)arg1;
- (long long)globalIndexForLocalIndex:(long long)arg1 inGroupWithIndex:(long long)arg2;
- (void)setDragInsertionPoint:(struct CGPoint)arg1;
- (void)setDropGroup:(id)arg1;
- (void)setDropGroup:(id)arg1 dropChildIndex:(long long)arg2 after:(BOOL)arg3 on:(BOOL)arg4;
- (void)clearDragInsertionPoint;
- (struct CGRect)dragInsertionRect;
- (id)dragInsertionPath;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setItemInset:(CDStruct_f6c3f719)arg1;
- (CDStruct_f6c3f719)itemInset;
- (void)orderOutOverlayView;
- (void)orderInOverlayView;
- (id)overlayView;
- (id)draggedImageState:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (id)newLayoutItemForRepresentedObject:(id)arg1;
- (void)setSelectedContentObjects:(id)arg1;
- (id)indexesForContentObjects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setGroups:(id)arg1;
- (id)groups;
- (void)setActiveMouseDown:(id)arg1;
- (id)activeMouseDown;
- (void)setShowingHeaders:(BOOL)arg1;
- (BOOL)isShowingHeaders;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

