//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSDate, NSDatePicker, NSLayoutConstraint, NSPopUpButton, NSTextField;
@protocol XCSUIScheduleViewControllerDelegate;

@interface XCSUIScheduleViewController : DVTViewController
{
    long long _dayOfWeek;
    unsigned long long _periodType;
    unsigned long long _minutes;
    NSDate *_timeOfDayToIntegrate;
    id <XCSUIScheduleViewControllerDelegate> _delegate;
    NSPopUpButton *_periodTypePopUp;
    NSPopUpButton *_minutePopUp;
    NSTextField *_onLabel;
    NSPopUpButton *_dayOfWeekPopUp;
    NSDatePicker *_timePicker;
    NSTextField *_atLabel;
    NSLayoutConstraint *_atLabelLeadingToDaysOfWeekTrailingConstraint;
    NSLayoutConstraint *_periodPopUpWidthConstraint;
}

@property __weak NSLayoutConstraint *periodPopUpWidthConstraint; // @synthesize periodPopUpWidthConstraint=_periodPopUpWidthConstraint;
@property(retain) NSLayoutConstraint *atLabelLeadingToDaysOfWeekTrailingConstraint; // @synthesize atLabelLeadingToDaysOfWeekTrailingConstraint=_atLabelLeadingToDaysOfWeekTrailingConstraint;
@property(retain, nonatomic) NSTextField *atLabel; // @synthesize atLabel=_atLabel;
@property(retain, nonatomic) NSDatePicker *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) NSPopUpButton *dayOfWeekPopUp; // @synthesize dayOfWeekPopUp=_dayOfWeekPopUp;
@property(retain, nonatomic) NSTextField *onLabel; // @synthesize onLabel=_onLabel;
@property(retain, nonatomic) NSPopUpButton *minutePopUp; // @synthesize minutePopUp=_minutePopUp;
@property(retain, nonatomic) NSPopUpButton *periodTypePopUp; // @synthesize periodTypePopUp=_periodTypePopUp;
@property __weak id <XCSUIScheduleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)minutePopupAction:(id)arg1;
- (void)timePickerAction:(id)arg1;
- (void)daysOfWeekAction:(id)arg1;
- (void)periodTypePopUpAction:(id)arg1;
- (void)setEnabled:(BOOL)arg1 withPeriodType:(unsigned long long)arg2;
- (void)disablePeriodTypeMenuItems:(id)arg1;
- (void)updateLayout;
- (id)preparePeriodicLayer;
- (void)moveView:(id)arg1 rightOfView:(id)arg2 withPadding:(unsigned long long)arg3;
@property(retain, nonatomic) NSDate *timeOfDayToIntegrate; // @synthesize timeOfDayToIntegrate=_timeOfDayToIntegrate;
@property(nonatomic) unsigned long long minutes; // @synthesize minutes=_minutes;
@property(nonatomic) unsigned long long periodType; // @synthesize periodType=_periodType;
@property(nonatomic) long long dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
- (void)viewDidLoad;

@end

