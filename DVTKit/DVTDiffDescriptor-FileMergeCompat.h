//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDiffDescriptor.h>

@interface DVTDiffDescriptor (FileMergeCompat)
@property(readonly) long long fmc_numAddLines;
@property(readonly) long long fmc_numLines;
- (long long)fmc_rightDelta;
- (double)fmc_verticalSpan:(id)arg1 forSide:(int)arg2 ensureLayout:(BOOL)arg3;
- (double)fmc_endCoordinate:(id)arg1 forSide:(int)arg2 ensureLayout:(BOOL)arg3;
- (double)fmc_startCoordinate:(id)arg1 forSide:(int)arg2 ensureLayout:(BOOL)arg3;
- (void)fmc_invalidateVitals;
@end

