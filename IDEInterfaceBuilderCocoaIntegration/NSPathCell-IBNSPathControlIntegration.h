//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPathCell.h>

@interface NSPathCell (IBNSPathControlIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedAllowsAllTypes;
+ (id)keyPathsForValuesAffectingIbInspectedAllowsSpecificTypes;
+ (id)keyPathsForValuesAffectingIbInspectedPath;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedAllowsAllTypes:(BOOL)arg1;
- (BOOL)ibInspectedAllowsAllTypes;
- (BOOL)ibInspectedAllowsSpecificTypes;
- (void)setIbShadowedAllowedTypes:(id)arg1;
- (id)ibShadowedAllowedTypes;
- (id)ibInspectedPath;
- (void)setIbInspectedPath:(id)arg1;
- (void)setIbInspectedControlSize:(unsigned long long)arg1;
- (id)ibWidgetType;
- (struct CGRect)ibTitleRectForBounds:(struct CGRect)arg1;
- (id)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (Class)ibEditorClass;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
@end

