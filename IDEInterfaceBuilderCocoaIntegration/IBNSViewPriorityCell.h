//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IBNSViewPrioritySlider, NSNumber, NSStepper, NSTextField;
@protocol IBNSViewPriorityCellDelegate;

@interface IBNSViewPriorityCell : NSTableCellView
{
    IBNSViewPrioritySlider *_slider;
    NSTextField *_numberField;
    NSStepper *_stepper;
    id <IBNSViewPriorityCellDelegate> _delegate;
    NSNumber *_trackingRectTag;
}

@property(retain) NSNumber *trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(nonatomic) id <IBNSViewPriorityCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(nonatomic) NSTextField *numberField; // @synthesize numberField=_numberField;
@property(nonatomic) IBNSViewPrioritySlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidMoveToWindow;

@end

