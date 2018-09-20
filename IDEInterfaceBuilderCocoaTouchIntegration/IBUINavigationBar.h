//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUITextAttributes, NSArray, NSColor, NSDictionary, NSImage, NSMutableArray, NSString, NSValue;

@interface IBUINavigationBar : IBUIView <IBDocumentArchiving>
{
    NSMutableArray *_items;
    NSValue *_cachedTitleViewFrame;
    NSDictionary *_cachedLeftItemFrames;
    NSDictionary *_cachedRightItemFrames;
    NSDictionary *_cachedBarButtonItemImages;
    NSDictionary *_cachedLeftItemsTitleRects;
    NSDictionary *_cachedRightItemsTitleRects;
    BOOL _translucent;
    BOOL _ibPrefersLargeTitles;
    BOOL _forcesPrompt;
    IBUITextAttributes *_largeTitleTextAttributes;
    long long _barStyle;
    IBUITextAttributes *_titleTextAttributes;
    NSImage *_shadowImage;
    NSImage *_backIndicatorImage;
    NSImage *_backIndicatorTransitionMaskImage;
    NSColor *_barTintColor;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIsPrompted;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleTextShadowVerticalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleTextShadowHorizontalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedHasLargeTitleTextShadowOffset;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleTextShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleTextColor;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleFontDescription;
+ (id)keyPathsForValuesAffectingIbInspectedLargeTitleTextAttributes;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowVerticalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowHorizontalOffset;
+ (id)keyPathsForValuesAffectingIbInspectedHasTitleTextShadowOffset;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextColor;
+ (id)keyPathsForValuesAffectingIbInspectedTitleFontDescription;
+ (id)keyPathsForValuesAffectingIbInspectedTitleTextAttributes;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL forcesPrompt; // @synthesize forcesPrompt=_forcesPrompt;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(retain, nonatomic) NSImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage=_backIndicatorTransitionMaskImage;
@property(retain, nonatomic) NSImage *backIndicatorImage; // @synthesize backIndicatorImage=_backIndicatorImage;
@property(retain, nonatomic) NSImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(copy, nonatomic) IBUITextAttributes *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic) BOOL ibPrefersLargeTitles; // @synthesize ibPrefersLargeTitles=_ibPrefersLargeTitles;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(copy, nonatomic) IBUITextAttributes *ibShadowedLargeTitleTextAttributes; // @synthesize ibShadowedLargeTitleTextAttributes=_largeTitleTextAttributes;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)imageOfBarButtonItem:(id)arg1;
- (id)barButtonItemImages;
- (void)_setCachedItemImagesFromBarItemImagesArray:(id)arg1;
- (struct CGRect)titleViewFrame;
- (struct CGRect)titleRectForButtonBarItem:(id)arg1;
- (id)allBarButtonItems;
- (struct CGRect)frameForButtonBarItem:(id)arg1;
- (id)titleFont;
- (id)promptFont;
- (struct CGRect)promptRect;
- (struct CGRect)titleRect;
- (id)currentNavigationItem;
@property(retain, nonatomic) NSArray *items;
- (void)addNavigationBarItem:(id)arg1;
- (void)removeNavigationBarItem:(id)arg1;
- (id)title;
- (id)prompt;
- (BOOL)isPrompted;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (BOOL)ibWantsPlaceholderContainingViewControllerWhenMarshallingWithContext:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)setIbInspectedLargeTitleTextShadowVerticalOffset:(double)arg1;
- (double)ibInspectedLargeTitleTextShadowVerticalOffset;
- (void)setIbInspectedLargeTitleTextShadowHorizontalOffset:(double)arg1;
- (double)ibInspectedLargeTitleTextShadowHorizontalOffset;
- (void)setIbInspectedHasLargeTitleTextShadowOffset:(BOOL)arg1;
- (BOOL)ibInspectedHasLargeTitleTextShadowOffset;
- (void)setIbInspectedLargeTitleTextShadowColor:(id)arg1;
- (id)ibInspectedLargeTitleTextShadowColor;
- (void)setIbInspectedLargeTitleTextColor:(id)arg1;
- (id)ibInspectedLargeTitleTextColor;
- (void)setIbInspectedLargeTitleFontDescription:(id)arg1;
- (id)ibInspectedLargeTitleFontDescription;
- (void)setIbInspectedLargeTitleTextAttributes:(id)arg1;
- (id)ibInspectedLargeTitleTextAttributes;
- (void)setIbInspectedTitleTextShadowVerticalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowVerticalOffset;
- (void)setIbInspectedTitleTextShadowHorizontalOffset:(double)arg1;
- (double)ibInspectedTitleTextShadowHorizontalOffset;
- (void)setIbInspectedHasTitleTextShadowOffset:(BOOL)arg1;
- (BOOL)ibInspectedHasTitleTextShadowOffset;
- (void)setIbInspectedTitleTextShadowColor:(id)arg1;
- (id)ibInspectedTitleTextShadowColor;
- (void)setIbInspectedTitleTextColor:(id)arg1;
- (id)ibInspectedTitleTextColor;
- (void)setIbInspectedTitleFontDescription:(id)arg1;
- (id)ibInspectedTitleFontDescription;
- (void)setIbInspectedTitleTextAttributes:(id)arg1;
- (id)ibInspectedTitleTextAttributes;
- (BOOL)ibInspectedSupportsLargeTitles;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (id)ibWidgetType;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

