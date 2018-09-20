//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerColorView : NSView
{
    double _redComponent;
    double _greenComponent;
    double _blueComponent;
    double _alphaComponent;
    NSColor *_backgroundLowerColor;
    NSColor *_backgroundUpperColor;
    NSColor *_borderColor;
}

@property(copy, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSColor *backgroundUpperColor; // @synthesize backgroundUpperColor=_backgroundUpperColor;
@property(copy, nonatomic) NSColor *backgroundLowerColor; // @synthesize backgroundLowerColor=_backgroundLowerColor;
@property(nonatomic) double alphaComponent; // @synthesize alphaComponent=_alphaComponent;
@property(nonatomic) double blueComponent; // @synthesize blueComponent=_blueComponent;
@property(nonatomic) double greenComponent; // @synthesize greenComponent=_greenComponent;
@property(nonatomic) double redComponent; // @synthesize redComponent=_redComponent;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

