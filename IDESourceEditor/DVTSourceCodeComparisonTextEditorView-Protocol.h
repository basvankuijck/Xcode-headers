//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class NSColor;

@protocol DVTSourceCodeComparisonTextEditorView <NSObject>
- (struct _DVTSourceCodeComparisonViewportRange)viewportRangeForRange:(struct _NSRange)arg1;
- (double)heightForLineRange:(struct _NSRange)arg1;
- (long long)lineAtViewportPoint:(double)arg1;
- (void)scrollCenterToComparisonPosition:(struct _DVTSourceCodeComparisonTextEditorScrollPosition)arg1;
- (void)scrollToComparisonPosition:(struct _DVTSourceCodeComparisonTextEditorScrollPosition)arg1;
@property(nonatomic, readonly) struct _DVTSourceCodeComparisonTextEditorScrollPosition centeredComparisonScrollPosition;
@property(nonatomic, readonly) struct _DVTSourceCodeComparisonTextEditorScrollPosition comparisonScrollPosition;
@property(nonatomic, readonly) double viewportHeight;
@property(nonatomic, readonly) struct _NSRange visibleLineRange;
@property(nonatomic, readonly) BOOL isScrollingBasedOnLayout;
@property(nonatomic, readonly) double defaultLineHeight;
@property(nonatomic, readonly) unsigned long long numberOfLines;
@property(nonatomic, readonly) NSColor *backgroundColor;
@end

