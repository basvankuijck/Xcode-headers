//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SourceEditor/SourceEditorScrollView.h>

@protocol SourceEditorComparisonScrollViewDelegate;

@interface SourceEditorComparisonScrollView : SourceEditorScrollView
{
    id <SourceEditorComparisonScrollViewDelegate> _sourceEditorComparisonScrollViewDelegate;
}

@property __weak id <SourceEditorComparisonScrollViewDelegate> sourceEditorComparisonScrollViewDelegate; // @synthesize sourceEditorComparisonScrollViewDelegate=_sourceEditorComparisonScrollViewDelegate;
- (void).cxx_destruct;
- (id)_pointInVisibleScroller:(struct CGPoint)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;

@end
