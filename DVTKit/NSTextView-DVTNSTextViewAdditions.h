//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface NSTextView (DVTNSTextViewAdditions)
- (void)dvt_changeZoomFocusToRange:(struct _NSRange)arg1;
- (struct CGRect)dvt_frameForRange:(struct _NSRange)arg1;
- (void)deleteToEndOfText:(id)arg1;
- (void)deleteToBeginningOfText:(id)arg1;
- (void)moveToEndOfTextAndModifySelection:(id)arg1;
- (void)moveToEndOfText:(id)arg1;
- (void)moveToBeginningOfTextAndModifySelection:(id)arg1;
- (void)moveToBeginningOfText:(id)arg1;
@end

