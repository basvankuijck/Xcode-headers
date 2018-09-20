//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class NSMutableArray, NSMutableDictionary, NSTrackingArea;

@interface DVTSegmentedControl : NSSegmentedControl
{
    BOOL _isInSetImage;
    BOOL _mouseIsOverControl;
    NSMutableDictionary *_segmentIndexesToOriginalImages;
    NSTrackingArea *_trackingArea;
    NSMutableArray *_alternateImages;
    BOOL _shouldDrawMenuIndicators;
    BOOL _bordered;
    struct CGPoint _menuIndicatorInset;
}

+ (id)toolbarSegmentedControlWithTrackingMode:(unsigned long long)arg1 images:(id)arg2 alternateImages:(id)arg3;
+ (id)_toolbarSegmentedControlWithImages:(id)arg1 orLabels:(id)arg2 trackingMode:(unsigned long long)arg3;
+ (id)toolbarSegmentedControlWithLabels:(id)arg1 trackingMode:(unsigned long long)arg2;
+ (id)toolbarSegmentedControlWithImages:(id)arg1 trackingMode:(unsigned long long)arg2;
@property(getter=isBordered) BOOL bordered; // @synthesize bordered=_bordered;
@property struct CGPoint menuIndicatorInset; // @synthesize menuIndicatorInset=_menuIndicatorInset;
@property BOOL shouldDrawMenuIndicators; // @synthesize shouldDrawMenuIndicators=_shouldDrawMenuIndicators;
- (void).cxx_destruct;
- (id)_getImageInArray:(id)arg1 forSegment:(long long)arg2;
- (void)_setImage:(id)arg1 inArray:(id)arg2 forSegment:(long long)arg3;
- (void)setAlternateImage:(id)arg1 forSegment:(long long)arg2;
- (id)alternateImageForSegment:(long long)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)_drawDropdownUsingFullImageRect:(struct CGRect)arg1;
- (void)_drawImage:(id)arg1 centeredInRect:(struct CGRect)arg2;
- (id)_rolloverImageForSegment:(unsigned long long)arg1;
- (void)mouseExited:(id)arg1;
- (void)_installRolloverImageForSegment:(unsigned long long)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)_superSetImageWrappedInWorkaroundVariable:(id)arg1 forSegment:(long long)arg2;
- (void)_setImageAndDontRememberAsOriginal:(id)arg1 forSegment:(long long)arg2;
- (void)setImage:(id)arg1 forSegment:(long long)arg2;
- (id)_dvtSegmentedCell;
@property BOOL useMenuDelayForSelectedSegment;
@property BOOL useMenuDelay;
- (id)initWithFrame:(struct CGRect)arg1;

@end

