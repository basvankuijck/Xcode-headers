//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class DVTWarningTextFieldCell;

@interface DVTWarningTextField : NSTextField
{
}

+ (void)initialize;
- (void)textDidChange:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
@property(getter=isShowingWarning) BOOL showingWarning;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL shouldShowWarning;
@property(retain) DVTWarningTextFieldCell *cell;
- (void)_configureCell;

@end

