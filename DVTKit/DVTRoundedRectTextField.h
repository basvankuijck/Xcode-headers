//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSColor;

@interface DVTRoundedRectTextField : NSTextField
{
    double _cornerRadius;
    NSColor *_textAndBorderColor;
}

@property(retain, nonatomic) NSColor *textAndBorderColor; // @synthesize textAndBorderColor=_textAndBorderColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

