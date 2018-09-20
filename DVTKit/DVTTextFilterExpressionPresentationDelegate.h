//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTFilterExpressionPresentationDelegate-Protocol.h>

@class NSString;

@interface DVTTextFilterExpressionPresentationDelegate : NSObject <DVTFilterExpressionPresentationDelegate>
{
    NSString *filterFieldAccessibilityDescription;
    NSString *filterFieldToolTip;
}

+ (id)sharedPresentationDelegate;
@property(readonly) NSString *filterFieldToolTip; // @synthesize filterFieldToolTip;
@property(readonly) NSString *filterFieldAccessibilityDescription; // @synthesize filterFieldAccessibilityDescription;
- (void).cxx_destruct;
- (id)relatedFilterExpressionsIncludingExpression:(id)arg1;
- (id)_alternateOperatorsForTextExpression:(id)arg1;
- (id)menuDisplayStringForFilterExpression:(id)arg1;
- (id)validFilterExpressionsForExpressions:(id)arg1 currentFilterExpression:(id)arg2;
- (id)textFragmentsForFilterExpression:(id)arg1;
- (id)fieldDisplayStringForFilterExpression:(id)arg1;
- (id)editingStringForFilterExpression:(id)arg1;
- (id)titleForFilterIdentifier:(id)arg1;
- (id)filterExpressionForText:(id)arg1 isComplete:(BOOL)arg2 currentFilterExpression:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

