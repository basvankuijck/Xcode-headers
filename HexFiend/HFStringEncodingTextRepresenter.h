//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFTextRepresenter.h>

@interface HFStringEncodingTextRepresenter : HFTextRepresenter
{
    unsigned long long stringEncoding;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)copySelectedBytesToPasteboard:(id)arg1;
- (id)dataFromPasteboardString:(id)arg1;
- (void)insertText:(id)arg1;
- (void)initializeView;
- (void)setEncoding:(unsigned long long)arg1;
- (unsigned long long)encoding;
- (Class)_textViewClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

