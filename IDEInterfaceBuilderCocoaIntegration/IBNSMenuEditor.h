//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBNSMenuEditor : IBEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (void)dragSelectionWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)draggedImageStateForMenuItems:(id)arg1;
- (id)draggedImageStateForIdentifiedItems:(id)arg1;
- (BOOL)shouldBlockDragsUntilHoldFromDraggingEntered;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)interceptKeyEvent:(id)arg1;
- (void)editKeyEquivalentForItem:(id)arg1 withEvent:(id)arg2;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (BOOL)effectiveDrawsActivationDarkening;
- (BOOL)forbidsShowingSelectionIndicators;
- (id)lastMouseDown;
- (id)menuView;
- (id)editedMenu;

@end

