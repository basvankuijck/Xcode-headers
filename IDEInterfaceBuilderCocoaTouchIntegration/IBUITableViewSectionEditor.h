//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewEditor.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUITableViewCellOwningEditor-Protocol.h>

@class DVTNotificationToken, NSString;

@interface IBUITableViewSectionEditor : IBViewEditor <IBUITableViewCellOwningEditor>
{
    DVTNotificationToken *_layoutObservationToken;
}

+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
- (id)stringEditingContextForEvent:(id)arg1;
- (struct CGRect)footerTitleRectInView:(id)arg1;
- (struct CGRect)headerTitleRectInView:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)interceptMouseDragged:(id)arg1;
- (id)lastMouseDown;
- (void)dragTableViewCell:(id)arg1 withLeftMouseDown:(id)arg2 andLeftMouseDragged:(id)arg3;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (id)containedTableCellForObject:(id)arg1;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_42e99c75)arg2 withEvent:(id)arg3;
- (BOOL)isContainedTableCell:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (id)selectableTableViewCells;
- (id)editedTableViewSection;
- (id)editedView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

