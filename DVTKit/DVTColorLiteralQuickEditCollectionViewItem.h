//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class DVTColorLiteralQuickEditCollectionViewColorView, NSColor, NSView;

@interface DVTColorLiteralQuickEditCollectionViewItem : NSCollectionViewItem
{
    NSColor *_representedColor;
    NSView *_backgroundView;
    DVTColorLiteralQuickEditCollectionViewColorView *_colorView;
}

+ (id)nibName;
@property(retain) DVTColorLiteralQuickEditCollectionViewColorView *colorView; // @synthesize colorView=_colorView;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSColor *representedColor; // @synthesize representedColor=_representedColor;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setSelected:(BOOL)arg1;

@end

