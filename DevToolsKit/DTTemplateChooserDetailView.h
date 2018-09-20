//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImageView, NSScrollView, NSTextField;

@interface DTTemplateChooserDetailView : NSView
{
    NSScrollView *descriptionScrollView;
    NSTextField *descriptionTextField;
    NSTextField *titleTextField;
    NSImageView *imageView;
}

- (void)sizeToFit;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGSize)descriptionSize;
- (double)headerHeight;
- (BOOL)isFlipped;
- (void)setDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)awakeFromNib;

@end

