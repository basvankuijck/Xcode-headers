//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@interface NSPredicateEditorRowTemplate (IBPredicateEditorInspectorIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedCompoundTypes;
+ (id)keyPathsForValuesAffectingIbInspectedRightExpressionObjects;
+ (id)keyPathsForValuesAffectingIbInspectedLeftExpressionObjects;
+ (id)keyPathsForValuesAffectingIbInspectedLeftExpressionsAreEditableList;
+ (id)keyPathsForValuesAffectingIbInspectedRightExpressionsAreEditableList;
+ (id)keyPathsForValuesAffectingIbInspectedRightExpressionTypeString;
+ (id)keyPathsForValuesAffectingIbInspectedLeftExpressionTypeString;
+ (id)keyPathsForValuesAffectingIbInspectedRightExpressionType;
+ (id)keyPathsForValuesAffectingIbInspectedLeftExpressionType;
+ (id)keyPathsForValuesAffectingIbInspectedOperators;
+ (void)ibPopulateAdditionalInspectorSlices:(id)arg1 forCategory:(id)arg2;
- (void)setIbInspectedCompoundTypes:(long long)arg1;
- (long long)ibInspectedCompoundTypes;
- (void)setIbInspectedRightExpressionObjects:(id)arg1;
- (id)ibInspectedRightExpressionObjects;
- (void)setIbInspectedLeftExpressionObjects:(id)arg1;
- (id)ibInspectedLeftExpressionObjects;
- (void)setIbInspectedExpressionValues:(id)arg1 forSide:(long long)arg2;
- (id)ibInspectedExpressionValuesForSide:(long long)arg1;
- (id)ibInspectedExpressionObjectsFromViewAtIndex:(long long)arg1;
- (BOOL)ibInspectedRightExpressionsAreEditableList;
- (BOOL)ibInspectedLeftExpressionsAreEditableList;
- (id)ibInspectedRightExpressionTypeString;
- (void)setIbInspectedRightExpressionType:(long long)arg1;
- (long long)ibInspectedRightExpressionType;
- (id)ibInspectedLeftExpressionTypeString;
- (void)setIbInspectedLeftExpressionType:(long long)arg1;
- (long long)ibInspectedLeftExpressionType;
- (id)expressionObjectFromTag:(long long)arg1;
- (long long)popupTagForExpressions:(id)arg1 attributeType:(unsigned long long)arg2;
- (void)setIbInspectedOperators:(long long)arg1;
- (long long)ibInspectedOperators;
- (BOOL)ibIsInspectorSliceApplicable:(id)arg1 forCategory:(id)arg2;
@end

