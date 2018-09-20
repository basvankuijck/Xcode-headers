//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol DVTLinkViewDelegate;

@interface DVTLinkView : NSView
{
    id <DVTLinkViewDelegate> _delegate;
    NSView *_contentView;
}

@property(nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <DVTLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)resetCursorRects;

@end

