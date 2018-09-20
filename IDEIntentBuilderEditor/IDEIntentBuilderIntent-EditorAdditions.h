//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntent.h>

#import <IDEIntentBuilderEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, NSUUID, _TtC13DVTFoundation9DVTSymbol;

@interface IDEIntentBuilderIntent (EditorAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingPrimaryParameterCombinationAsIdentifier;
+ (id)keyPathsForValuesAffectingParameterCombinationsAsIdentifier;
+ (id)keyPathsForValuesAffectingParameterCombinationsAsString;
+ (id)keyPathsForValuesAffectingGeneratedClassName;
+ (id)keyPathsForValuesAffectingHasDuplicateParameterCombinations;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingUserConfirmationRequiredEnabled;
+ (id)keyPathsForValuesAffectingPossibleRestrictionNames;
+ (id)keyPathsForValuesAffectingPossibleRestrictions;
+ (id)keyPathsForValuesAffectingCanAddParameterCombinations;
- (id)ideModelObjectTypeIdentifier;
@property(retain, nonatomic) NSUUID *primaryParameterCombinationAsIdentifier;
@property(readonly, copy, nonatomic) NSArray *parameterCombinationsAsIdentifier;
@property(readonly, copy, nonatomic) NSArray *parameterCombinationsAsString;
@property(readonly, copy, nonatomic) NSString *generatedClassName;
@property(readonly, copy, nonatomic) NSString *originalGeneratedClassName;
@property(readonly, nonatomic) BOOL hasDuplicateParameterCombinations;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
- (void)prepareToPasteFromPasteboard;
- (BOOL)canCopy;
@property(readonly, nonatomic, getter=isUserConfirmationRequiredEnabled) BOOL userConfirmationRequiredEnabled;
@property(readonly, nonatomic) NSArray *possibleRestrictionNames;
@property(readonly, nonatomic) NSArray *possibleRestrictions;
@property(readonly, nonatomic) BOOL canAddParameterCombinations;
- (void)updateOriginalGeneratedClassName;
- (id)imageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

