//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSUndoTyping.h>

@class DVTTextStorageCommonUndoHelper, NSMutableArray;

@interface DVTUndoTyping : NSUndoTyping
{
    DVTTextStorageCommonUndoHelper *_undoHelper;
    NSMutableArray *_coalescedEdits;
}

- (void).cxx_destruct;
- (void)undoRedo:(id)arg1;
- (id)description;
- (BOOL)coalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 text:(id)arg4;
- (id)initWithAffectedRange:(struct _NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(struct _NSRange)arg4;

@end

