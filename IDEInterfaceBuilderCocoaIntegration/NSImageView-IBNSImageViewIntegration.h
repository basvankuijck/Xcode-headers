//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSColor;

@interface NSImageView (IBNSImageViewIntegration)
- (void)ibCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (struct CGSize)ibPreferredSize;
- (id)ibWidgetType;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (BOOL)ibIsBorderless;
@property(copy, nonatomic) NSColor *ibExternalContentTintColor;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibLocalAttributeKeyPaths;
@end

