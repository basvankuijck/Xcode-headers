//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleViewController-Protocol.h>
#import <Xcode3UI/IDECapsuleViewDelegate-Protocol.h>

@class NSColor, NSImage, NSString, Xcode3BuildPhase, Xcode3BuildPhasesEditor;

@interface Xcode3BuildPhaseViewController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
    Xcode3BuildPhase *_buildPhase;
    Xcode3BuildPhasesEditor *_editor;
    BOOL _isSyntheticBuildPhase;
}

+ (id)keyPathsForValuesAffectingTitleForDisplay;
@property(readonly, nonatomic) BOOL isSyntheticBuildPhase; // @synthesize isSyntheticBuildPhase=_isSyntheticBuildPhase;
@property(retain) Xcode3BuildPhasesEditor *editor; // @synthesize editor=_editor;
@property(retain) Xcode3BuildPhase *buildPhase; // @synthesize buildPhase=_buildPhase;
- (void).cxx_destruct;
- (double)contentOriginXOffsetForCapsuleView:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)capsuleViewShouldBeginEditingTitle:(id)arg1;
- (void)capsuleViewDidClickRemoveButton:(id)arg1;
- (BOOL)capsuleViewCanBeRemoved:(id)arg1;
- (void)capsuleView:(id)arg1 setTitle:(id)arg2;
- (id)capsuleViewTitleForEditing:(id)arg1;
- (BOOL)capsuleViewCanBeRenamed:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
- (void)selectLocations:(id)arg1;
- (id)currentSelectedLocations;
@property(readonly) BOOL disclosedByDefault;
- (BOOL)showTopBorder;
- (id)nibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBuildPhase:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) NSColor *backgroundColor;
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property BOOL canRemoveItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canSelect;
@property(readonly) BOOL canUndisclose;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

