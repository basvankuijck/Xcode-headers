//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTMarkup/_TtC9DVTMarkup6XPView.h>

@class NSString;
@protocol _TtP9DVTMarkup28PlaygroundMarkupViewDelegate_;

@interface _TtC9DVTMarkup20PlaygroundMarkupView : _TtC9DVTMarkup6XPView
{
    // Error parsing type: , name: rootView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: preferredMaxLayoutWidth
    // Error parsing type: , name: markupContent
    // Error parsing type: , name: style
    // Error parsing type: , name: cachedHeightForWidth
    // Error parsing type: , name: selectionOrigin
    // Error parsing type: , name: selectionRect
}

- (CDUnknownBlockType).cxx_destruct;
- (void)handleLink:(id)arg1 tappedRect:(struct CGRect)arg2;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)resignFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (double)preferredHeightForWidth:(double)arg1;
- (void)performRendererLayout;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateViewFromStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) NSString *markupText;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth;
@property(nonatomic) __weak id <_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_> delegate; // @synthesize delegate;

@end

