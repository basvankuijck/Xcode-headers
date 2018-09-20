//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSView;

@interface DVTInsetView : DVTLayoutView_ML
{
    int _verticalContentViewResizingMode;
    int _horizontalContentViewResizingMode;
    NSView *_contentView;
    CDStruct_bf6d4a14 _inset;
}

@property(nonatomic) int horizontalContentViewResizingMode; // @synthesize horizontalContentViewResizingMode=_horizontalContentViewResizingMode;
@property(nonatomic) int verticalContentViewResizingMode; // @synthesize verticalContentViewResizingMode=_verticalContentViewResizingMode;
@property(nonatomic) CDStruct_bf6d4a14 inset; // @synthesize inset=_inset;
@property(readonly) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentView:(id)arg1 inset:(CDStruct_bf6d4a14)arg2;
- (void)commonInitInsetView;

@end

