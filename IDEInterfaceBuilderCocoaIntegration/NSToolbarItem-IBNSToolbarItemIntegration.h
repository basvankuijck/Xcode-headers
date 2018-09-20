//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface NSToolbarItem (IBNSToolbarItemIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedItemIdentifier;
+ (id)keyPathsForValuesAffectingIbInspectedExternalSizingBehavior;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (void)setIbInspectedItemIdentifier:(id)arg1;
- (id)ibInspectedItemIdentifier;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibInspectedToolTip;
- (void)setIbInspectedToolTip:(id)arg1;
- (id)ibEffectiveRuntimeToolbarItemIdentifier;
- (void)setIbInspectedExternalSizingBehavior:(long long)arg1;
- (long long)ibInspectedExternalSizingBehavior;
- (void)setIbExternalSizingBehavior:(long long)arg1;
- (long long)ibExternalSizingBehavior;
- (void)setIbInitialSizingBehaviorWhenAddedToDocument:(long long)arg1;
- (long long)ibInitialSizingBehaviorWhenAddedToDocument;
- (BOOL)ibInspectedShowSizingBehavior;
- (void)setIbExternalIsSelectable:(BOOL)arg1;
- (BOOL)ibExternalIsSelectable;
- (void)setIbShadowedToolbarItemIdentifier:(id)arg1;
- (id)ibShadowedToolbarItemIdentifier;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)setIbInspectedIsCenteredItem:(BOOL)arg1;
- (BOOL)ibInspectedIsCenteredItem;
- (id)parentToolbar;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)setToolbarItemIdentifier:(id)arg1;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (void)ibTakePastedAttributes:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (void)ibApplyFrameSizeToMinMaxSizes;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (BOOL)ibUsingAutomaticMinMaxSizing;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
@end

