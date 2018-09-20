//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HexFiend/NSCoding-Protocol.h>

@class HFByteArray, HFControllerCoalescedUndo, NSData, NSFont, NSMutableArray, NSTimer, NSUndoManager;
@protocol HFTextColoringDelegate;

@interface HFController : NSObject <NSCoding>
{
    NSMutableArray *representers;
    HFByteArray *byteArray;
    NSMutableArray *selectedContentsRanges;
    CDStruct_91ee6ea3 displayedContentsRange;
    CDStruct_b3ff9733 displayedLineRange;
    unsigned long long bytesPerLine;
    unsigned long long bytesPerColumn;
    NSFont *font;
    double lineHeight;
    unsigned long long currentPropertyChangeToken;
    NSMutableArray *additionalPendingTransactions;
    unsigned long long propertiesToUpdateInCurrentTransaction;
    NSUndoManager *undoManager;
    unsigned long long selectionAnchor;
    CDStruct_91ee6ea3 selectionAnchorRange;
    HFControllerCoalescedUndo *undoCoalescer;
    double pulseSelectionStartTime;
    double pulseSelectionCurrentTime;
    NSTimer *pulseSelectionTimer;
    CDStruct_91ee6ea3 cachedRange;
    NSData *cachedData;
    unsigned long long cachedGenerationIndex;
    struct {
        unsigned int antialias:1;
        unsigned int overwriteMode:1;
        unsigned int editable:1;
        unsigned int selectable:1;
        unsigned int selectionInProgress:1;
        unsigned int shiftExtendSelection:1;
        unsigned int commandExtendSelection:1;
        unsigned int reserved1:25;
        unsigned int reserved2:32;
    } _hfflags;
    id <HFTextColoringDelegate> _coloringDelegate;
}

+ (BOOL)prepareForChangeInFile:(id)arg1 fromWritingByteArray:(id)arg2;
@property(retain) id <HFTextColoringDelegate> coloringDelegate; // @synthesize coloringDelegate=_coloringDelegate;
- (BOOL)requiresOverwriteMode;
- (void)setInOverwriteMode:(BOOL)arg1;
- (BOOL)inOverwriteMode;
- (void)deleteDirection:(long long)arg1;
- (BOOL)insertByteArray:(id)arg1 replacingPreviousBytes:(unsigned long long)arg2 allowUndoCoalescing:(BOOL)arg3;
- (BOOL)_overwriteModeCoreInsertByteArray:(id)arg1 replacingPreviousBytes:(unsigned long long)arg2 allowUndoCoalescing:(BOOL)arg3 outRangeToRemoveFromSelection:(CDStruct_91ee6ea3 *)arg4;
- (BOOL)_insertionModeCoreInsertByteArray:(id)arg1 replacingPreviousBytes:(unsigned long long)arg2 allowUndoCoalescing:(BOOL)arg3 outNewSingleSelectedRange:(CDStruct_91ee6ea3 *)arg4;
- (BOOL)insertData:(id)arg1 replacingPreviousBytes:(unsigned long long)arg2 allowUndoCoalescing:(BOOL)arg3;
- (void)replaceByteArray:(id)arg1;
- (void)deleteSelection;
- (void)moveToLineBoundaryInDirection:(long long)arg1 andModifySelection:(BOOL)arg2;
- (void)moveInDirection:(long long)arg1 withGranularity:(long long)arg2 andModifySelection:(BOOL)arg3;
- (void)moveInDirection:(long long)arg1 byByteCount:(unsigned long long)arg2 withSelectionTransformation:(long long)arg3 usingAnchor:(BOOL)arg4;
- (void)_activateTypingUndoCoalescingForReplacingRange:(CDStruct_91ee6ea3)arg1 withDataOfLength:(unsigned long long)arg2;
- (void)_activateTypingUndoCoalescingForOverwritingRange:(CDStruct_91ee6ea3)arg1;
- (void)_performTypingUndo:(id)arg1;
- (void)_endTypingUndoCoalescingIfActive;
- (void)_commandValueObjectsReplaceBytesAfterBytesFromBeginning:(id)arg1 upToBytesFromEnd:(id)arg2 withByteArray:(id)arg3;
- (void)_commandReplaceBytesAfterBytesFromBeginning:(unsigned long long)arg1 upToBytesFromEnd:(unsigned long long)arg2 withByteArray:(id)arg3;
- (void)_commandInsertByteArrays:(id)arg1 inRanges:(id)arg2 withSelectionAction:(int)arg3;
- (void)_commandDeleteRanges:(id)arg1;
- (BOOL)_registerCondemnedRangesForUndo:(id)arg1 selectingRangesAfterUndo:(BOOL)arg2;
- (void)_shiftSelectionInDirection:(long long)arg1 byAmount:(unsigned long long)arg2;
- (void)_extendSelectionInDirection:(long long)arg1 byAmount:(unsigned long long)arg2;
- (void)_moveDirectionDiscardingSelection:(long long)arg1 byAmount:(unsigned long long)arg2;
- (void)_removeRangeFromSelection:(CDStruct_91ee6ea3)arg1 withCursorLocationIfAllSelectionRemoved:(unsigned long long)arg2;
- (void)_addRangeToSelection:(CDStruct_91ee6ea3)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelectedContentsRanges:(id)arg1;
- (void)scrollWithScrollEvent:(id)arg1;
- (void)scrollByLines:(long double)arg1;
- (void)pulseSelection;
- (void)firePulseTimer:(id)arg1;
- (double)selectionPulseAmount;
- (void)endSelectionWithEvent:(id)arg1 forByteIndex:(unsigned long long)arg2;
- (void)continueSelectionWithEvent:(id)arg1 forByteIndex:(unsigned long long)arg2;
- (void)beginSelectionWithEvent:(id)arg1 forByteIndex:(unsigned long long)arg2;
- (CDStruct_91ee6ea3)_telescopeSelectionRangeInDirection:(long long)arg1;
- (unsigned long long)maximumSelectionLocation;
- (unsigned long long)minimumSelectionLocation;
- (unsigned long long)_maximumSelectionLocation;
- (unsigned long long)_minimumSelectionLocation;
- (CDStruct_91ee6ea3)_flattenSelectionRange;
- (id)byteArrayForSelectedContentsRanges;
- (void)representer:(id)arg1 changedProperties:(unsigned long long)arg2;
- (void)_updateBytesPerLine;
- (void)setEditable:(BOOL)arg1;
- (BOOL)editable;
- (unsigned long long)bytesPerLine;
- (id)undoManager;
- (void)setUndoManager:(id)arg1;
- (void)_addUndoManagerNotifications;
- (void)_removeUndoManagerNotifications;
- (void)_undoNotification:(id)arg1;
- (id)byteArray;
- (void)setByteArray:(id)arg1;
- (void)_clipSelectedContentsRangesToLength:(unsigned long long)arg1;
- (void)maximizeVisibilityOfContentsRange:(CDStruct_91ee6ea3)arg1;
- (void)_ensureVisibilityOfLocation:(unsigned long long)arg1;
- (void)_updateDisplayedRange;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (id)dataForRange:(CDStruct_91ee6ea3)arg1;
- (unsigned long long)contentsLength;
- (id)selectedContentsRanges;
- (void)_setSingleSelectedContentsRange:(CDStruct_91ee6ea3)arg1;
- (id)_invertedSelectedContentsRanges;
- (BOOL)_shouldInvertSelectedRangesByAnchorRange;
- (unsigned long long)bytesPerColumn;
- (void)setBytesPerColumn:(unsigned long long)arg1;
- (void)setShouldAntialias:(BOOL)arg1;
- (BOOL)shouldAntialias;
- (void)setFont:(id)arg1;
- (id)font;
- (double)lineHeight;
- (void)setDisplayedLineRange:(CDStruct_b3ff9733)arg1;
- (CDStruct_b3ff9733)displayedLineRange;
- (unsigned long long)totalLineCount;
- (CDStruct_91ee6ea3)_maximumDisplayedRangeSet;
- (void)invalidateController;
- (void)removeRepresenter:(id)arg1;
- (void)addRepresenter:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)endPropertyChangeTransaction:(unsigned long long)arg1;
- (unsigned long long)beginPropertyChangeTransaction;
- (void)_addPropertyChangeBits:(unsigned long long)arg1;
- (void)_insertPropertyChangeFence;
- (void)_firePropertyChanges;
- (void)notifyRepresentersOfChanges:(unsigned long long)arg1;
- (id)representers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_sharedInit;

@end

