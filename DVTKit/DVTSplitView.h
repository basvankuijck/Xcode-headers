//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTStatefulObject-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>
#import <DVTKit/NSSplitViewDelegate-Protocol.h>

@class DVTStackBacktrace, DVTStateToken, NSColor, NSImage, NSMutableDictionary, NSString;

@interface DVTSplitView : NSSplitView <NSSplitViewDelegate, NSAnimationDelegate, DVTStatefulObject, DVTInvalidation>
{
    double _dividerThickness;
    unsigned long long _indexOfViewForResizing;
    long long _lastEventNumber;
    id _dvtDelegate;
    id _splitViewItems;
    NSImage *_dividerKnobImage;
    NSImage *_dividerImage;
    NSColor *_dividerColor;
    NSColor *_cachedCompositedDividerColor;
    DVTStateToken *_stateToken;
    NSMutableDictionary *_additionalEffectiveRects;
    struct {
        unsigned int _delegateRespondsToCanCollapseSubview:1;
        unsigned int _delegateRespondsToShouldCollapseAtIndex:1;
        unsigned int _delegateRespondsToConstrainMinCoordinate:1;
        unsigned int _delegateRespondsToConstrainMaxCoordinate:1;
        unsigned int _delegateRespondsToConstrainSplitPosition:1;
        unsigned int _delegateRespondsToShouldHideDivider:1;
        unsigned int _delegateRespondsToResizeSubviews:1;
        unsigned int _delegateRespondsToEffectiveRect:1;
        unsigned int _delegateRespondsToAdditionalEffectiveRect:1;
        unsigned int _delegateRespondsToAdditionalEffectiveRects:1;
        unsigned int _delegateRespondsToWillResizeSubviews:1;
        unsigned int _delegateRespondsToDidResizeSubviews:1;
        unsigned int _delegateRespondsToSplitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:1;
        unsigned int _delegateRespondsToNeedsRectanglesForViewsWithStateForSize:1;
        unsigned int _delegateRespondsToWillStartLiveResize:1;
        unsigned int _delegateRespondsToDidEndLiveResize:1;
        unsigned int _needsAdjust:1;
        unsigned int _doingAnimationReplaceSubview:1;
        unsigned int _reserved:15;
    } _dvtSplitViewFlags;
    BOOL _isAnimating;
    BOOL _revertingState;
    BOOL _suppressAdditionalRects;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain, nonatomic) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property unsigned long long indexOfViewForResizing; // @synthesize indexOfViewForResizing=_indexOfViewForResizing;
- (void).cxx_destruct;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)dvt_isValidGrabHit:(struct CGPoint)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitViewWillResizeSubviews:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)viewWillDraw;
- (void)adjustSubviews;
- (BOOL)wantsUpdateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)dvt_removeSubview:(id)arg1;
- (void)dvt_addSubview:(id)arg1;
- (void)dvt_replaceSubview:(id)arg1 with:(id)arg2;
- (void)setSubviews:(id)arg1;
- (id)_splitViewItemForSubview:(id)arg1;
- (id)splitViewItemWithIdentifier:(id)arg1;
- (void)removeSplitViewItem:(id)arg1;
- (void)insertSplitViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addSplitViewItem:(id)arg1;
- (id)splitViewItems;
- (id)_splitViewItems;
- (void)_updateSplitViewItemsBasedOnSubviews;
- (void)_indicateStateChangedIfNeccessary;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_setSplitViewItemInfo:(id)arg1;
- (id)_splitViewItemInfo;
- (BOOL)_skipDividerIndexDuringAnimation:(long long)arg1;
- (void)toggleVisibilityOfItemUsingAnimation:(id)arg1;
@property(copy) NSColor *dividerColor;
@property double dividerThickness;
@property(copy) NSImage *dividerImage;
@property(copy) NSImage *dividerKnobImage;
- (void)primitiveInvalidate;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (id)dvt_delegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dvtSplitViewCommonInit;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

