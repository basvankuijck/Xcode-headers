//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenuItem.h>

@interface NSMenuItem (IBMenuItemIntegration)
+ (id)defaultMixedStateImage;
+ (id)defaultOffStateImage;
+ (id)defaultOnStateImage;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedKeyEquivalent;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (BOOL)ibCanBeValidSheetSegueSource;
- (BOOL)ibCanBeValidPopoverSegueSource;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (id)ibDefaultImage;
- (void)setIbInspectedMixedStateImage:(id)arg1;
- (id)ibInspectedMixedStateImage;
- (void)setIbInspectedOnStateImage:(id)arg1;
- (id)ibInspectedOnStateImage;
- (void)setIbInspectedTitle:(id)arg1;
- (id)ibInspectedTitle;
- (void)setIbInspectedKeyEquivalent:(id)arg1;
- (id)ibInspectedKeyEquivalent;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibPasteboardTypes;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibCanSupportIdentifierProperty;
- (id)ibEditorClass;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)_ibLocalAttributeKeyPaths_NSMenuItem;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
@end

