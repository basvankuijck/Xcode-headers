//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTileViewDelegate-Protocol.h>

@class DVTDraggedImageState, DVTLibraryTileView, DVTTileViewItem, NSEvent;
@protocol DVTDraggingInfo, NSDraggingInfo;

@protocol DVTLibraryTileViewDelegate <DVTTileViewDelegate>

@optional
- (void)libraryTileViewDidChangeEffectiveAppearance:(DVTLibraryTileView *)arg1;
- (void)libraryTileViewDidCancel:(DVTLibraryTileView *)arg1;
- (void)libraryTileViewCopySelectedItems:(DVTLibraryTileView *)arg1;
- (void)libraryTileViewDeleteSelectedItems:(DVTLibraryTileView *)arg1;
- (void)libraryTileViewUserPressedEnter:(DVTLibraryTileView *)arg1;
- (void)libraryTileView:(DVTLibraryTileView *)arg1 wasDoubleClicked:(NSEvent *)arg2;
- (void)libraryTileViewDragSelectedItems:(DVTLibraryTileView *)arg1 withMouseDownEvent:(NSEvent *)arg2 andMouseDraggedEvent:(NSEvent *)arg3;
- (BOOL)libraryTileView:(DVTLibraryTileView *)arg1 shouldDragLayoutItem:(DVTTileViewItem *)arg2 withMouseDownEvent:(NSEvent *)arg3;
- (DVTTileViewItem *)libraryTileView:(DVTLibraryTileView *)arg1 tileViewItemForRepresentedObject:(id)arg2;
- (DVTDraggedImageState *)libraryTileView:(DVTLibraryTileView *)arg1 draggedImageState:(id <DVTDraggingInfo>)arg2;
- (void)libraryTileView:(DVTLibraryTileView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)libraryTileView:(DVTLibraryTileView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)libraryTileView:(DVTLibraryTileView *)arg1 prepareForDragOperation:(id <NSDraggingInfo>)arg2;
- (void)libraryTileView:(DVTLibraryTileView *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (unsigned long long)libraryTileView:(DVTLibraryTileView *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
- (unsigned long long)libraryTileView:(DVTLibraryTileView *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
@end

