//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBNSCellEditor : IBEditor
{
}

+ (id)controlForCell:(id)arg1 inDocument:(id)arg2;
+ (Class)ibDropTargetResolverClass;
- (id)stringEditingContextForEvent:(id)arg1;
- (id)editedTitleKeyPath;
- (BOOL)isTitleEditable;
- (struct CGRect)rectForTitleEditingInView:(id)arg1;
- (struct CGRect)editedCellFrameInView:(id)arg1;
- (id)editorView;
- (id)control;
- (id)editedCell;

@end

