//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

@interface DVTTableCellViewLineWrappingTextStorage : NSTextStorage
{
    NSTextStorage *_realStorage;
}

@property(retain) NSTextStorage *realStorage; // @synthesize realStorage=_realStorage;
- (void).cxx_destruct;
- (void)endEditing;
- (void)beginEditing;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (long long)lastLineBreakPointForWordAtIndex:(unsigned long long)arg1 upToIndex:(unsigned long long)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)init;

@end

