//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextFoldInlineTokenAttachmentCell.h>

@class DVTSourceCodeTreeNodeFold;

@interface DVTSourceCodeTreeNodeInlineTokenAttachmentCell : DVTTextFoldInlineTokenAttachmentCell
{
}

- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)chevronRectForBounds:(struct CGRect)arg1;
- (id)chevronImage;
- (double)_textFoldInlineTokenAttachmentWidthDelta;

// Remaining properties
@property __weak DVTSourceCodeTreeNodeFold *fold; // @dynamic fold;

@end

