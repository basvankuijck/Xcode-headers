//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HexFiend/HFTextRepresenter.h>

@interface HFHexTextRepresenter : HFTextRepresenter
{
    unsigned long long omittedNybbleLocation;
    unsigned char unpartneredLastNybble;
}

+ (struct CGPoint)defaultLayoutPosition;
- (void)copySelectedBytesToPasteboard:(id)arg1;
- (void)controllerDidChange:(unsigned long long)arg1;
- (id)dataFromPasteboardString:(id)arg1;
- (void)insertText:(id)arg1;
- (BOOL)_canInsertText:(id)arg1;
- (BOOL)_insertionShouldDeleteLastNybble;
- (void)_clearOmittedNybble;
- (void)initializeView;
- (Class)_textViewClass;

@end

