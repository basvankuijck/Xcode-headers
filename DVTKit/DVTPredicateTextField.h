//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTWarningTextField.h>

@class DVTPredicateTextFieldCell, NSPredicate, NSString;

@interface DVTPredicateTextField : DVTWarningTextField
{
}

+ (void)initialize;
@property(copy) NSPredicate *predicate;
@property(copy) NSString *initialStringValue;
@property(retain) DVTPredicateTextFieldCell *cell;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)abortEditing;
- (void)textDidBeginEditing:(id)arg1;

@end

