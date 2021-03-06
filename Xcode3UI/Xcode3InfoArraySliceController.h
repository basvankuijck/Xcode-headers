//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3InfoSliceController.h>

@class DVTStackView_ML, NSArray, NSMutableArray, NSPredicate, NSView;

@interface Xcode3InfoArraySliceController : Xcode3InfoSliceController
{
    NSMutableArray *_info;
    NSMutableArray *_sliceControllers;
    DVTStackView_ML *_stackView;
    NSView *_emptyContentView;
    NSPredicate *_entryFilter;
    NSArray *_filteredEntries;
}

+ (id)keyPathsForValuesAffectingTitleForDisplay;
+ (void)initialize;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
@property(copy) NSArray *sliceControllers; // @dynamic sliceControllers;
@property(copy) NSArray *info;
- (id)titleForDisplay;
- (void)controllerInfoChanged:(id)arg1;
- (void)sliceControllersChanged:(id)arg1 changeDictionary:(id)arg2;
- (void)_updateSliceColors;
- (void)_rebuildStackView;
- (void)_recomputeInfoFromSliceControllers;
- (BOOL)validateMenuItem:(id)arg1;
- (void)removeSlice:(id)arg1;
- (void)addSlice:(id)arg1;
- (void)_cleanupSliceController:(id)arg1;
- (id)_sliceControllerForInfoDict:(id)arg1;
- (void)primitiveInvalidate;
- (void)_hideEmptyContentView;
- (void)_showEmptyContentView;
- (void)loadView;
- (id)initWithSliceIdentifier:(id)arg1 infoArray:(id)arg2 infoEditor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableSliceControllers; // @dynamic mutableSliceControllers;

@end

