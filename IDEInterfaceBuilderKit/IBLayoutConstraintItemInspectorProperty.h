//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class IBCancellationToken, IDEInspectorKeyPath, NSPopUpButton, NSString;

@interface IBLayoutConstraintItemInspectorProperty : IDEInspectorProperty <NSMenuDelegate>
{
    IDEInspectorKeyPath *_automaticallyLayoutBasedOnLanguageKeyPath;
    IDEInspectorKeyPath *_itemExternalExplicitLabelKeyPath;
    IDEInspectorKeyPath *_alternativeItemLabelKeyPath;
    IDEInspectorKeyPath *_attributeTypeKeyPath;
    IDEInspectorKeyPath *_constraintKeyPath;
    IDEInspectorKeyPath *_attributeKeyPath;
    IDEInspectorKeyPath *_itemLabelKeyPath;
    IDEInspectorKeyPath *_constantKeyPath;
    IBCancellationToken *_rolloverToken;
    IDEInspectorKeyPath *_itemKeyPath;
    NSString *_lastRefreshedItemTitle;
    BOOL _hideRevealInEditorButton;
    NSPopUpButton *_pullDown;
}

@property BOOL hideRevealInEditorButton; // @synthesize hideRevealInEditorButton=_hideRevealInEditorButton;
@property(retain) NSPopUpButton *pullDown; // @synthesize pullDown=_pullDown;
- (void).cxx_destruct;
- (void)revealLocationInEditor:(id)arg1;
- (id)itemsToSelect;
- (void)propertyViewWillUninstallFromContentView;
- (void)_didToggleMarginRelative:(id)arg1;
- (void)updateConstantsIfNeededForConstraints:(id)arg1;
- (void)_didChooseToReplaceInspectedItem:(id)arg1;
- (void)_didToggleAutomaticallyLayoutBasedOnLanguageFromMenu:(id)arg1;
- (void)_didSelectReverseItemsFromMenu:(id)arg1;
- (void)_didSelectItemFromMenu:(id)arg1;
- (void)_didSelectConstraintAttribute:(id)arg1;
- (id)_menuItemForAttribute:(unsigned long long)arg1 selectedAttributes:(id)arg2;
- (void)didFinishRollingOverItemInspectorBackgroundView:(id)arg1;
- (void)didStartRollingOverItemInspectorBackgroundView:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (BOOL)isInspectingFirstItemAndAttribute;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_addActionsMenuItemGroupToMutableGroups:(id)arg1;
- (void)_addOptionsMenuItemGroupToMutableGroups:(id)arg1;
- (void)_addPossibleNeighborsMenuItemGroupToMutableGroups:(id)arg1;
- (id)_sameContainingItemOrNilForConstraints:(id)arg1;
- (BOOL)_isCandidateItem:(id)arg1 aParentOrContainerLikeSiblingForContainingItem:(id)arg2;
- (id)_setOfItemsFromConstraints:(id)arg1;
- (void)_enumerateCandidateConstraintSiblingsForItem:(id)arg1 layoutInfo:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_addAttributeMenuItemGroupToMutableGroups:(id)arg1;
- (long long)_marginRelativeAttributeState;
- (void)_addHorizontalAttributeMenuItemsToMutableAttributesGroup:(id)arg1 selectedAttributes:(id)arg2 shouldShowMarginRelativeAttributes:(BOOL)arg3 shouldShowEdgeRelativeAttributes:(BOOL)arg4;
- (void)_addVerticalAttributeMenuItemsToMutableAttributesGroup:(id)arg1 selectedAttributes:(id)arg2 shouldShowMarginRelativeAttributes:(BOOL)arg3 shouldShowEdgeRelativeAttributes:(BOOL)arg4;
- (void)_addSizeAttributeMenuItemsToMutableAttributesGroup:(id)arg1 selectedAttributes:(id)arg2;
- (BOOL)_allSelectedItemsSupportLayoutMargins;
- (BOOL)_allSelectedItemsSupportFirstBaseline;
- (void)refresh;
- (void)primitiveInvalidate;
- (double)baseline;
- (id)lastActiveDocumentEditor;
- (id)inspectedDocument;
- (id)inspectorController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

