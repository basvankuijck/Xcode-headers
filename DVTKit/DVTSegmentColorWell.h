//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAbstractColorPicker.h>

@class NSImage, NSImageCell;

@interface DVTSegmentColorWell : DVTAbstractColorPicker
{
    NSImageCell *_iconCell;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)swatchRect;
- (double)swatchHeight;
- (void)mouseDown:(id)arg1;
- (id)effectiveBorderColor;
- (id)effectiveDarkColor;
- (id)effectiveLightColor;
@property(retain, nonatomic) NSImage *icon;

@end

