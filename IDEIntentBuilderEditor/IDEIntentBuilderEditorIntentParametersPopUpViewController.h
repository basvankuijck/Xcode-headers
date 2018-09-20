//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTPopoverContentViewController.h>

@class IDEIntentBuilderIntent, IDEIntentBuilderIntentParameterCombination, NSButton, NSMutableSet, NSPopover;
@protocol IDEIntentBuilderEditorIntentParametersPopUpViewControllerDelegate;

@interface IDEIntentBuilderEditorIntentParametersPopUpViewController : DVTPopoverContentViewController
{
    NSPopover *_popover;
    BOOL _shouldAddAfterDismissal;
    NSMutableSet *_selectedParameters;
    IDEIntentBuilderIntent *_intent;
    IDEIntentBuilderIntentParameterCombination *_parameterCombination;
    id <IDEIntentBuilderEditorIntentParametersPopUpViewControllerDelegate> _delegate;
    NSButton *_addButton;
}

@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak id <IDEIntentBuilderEditorIntentParametersPopUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEIntentBuilderIntentParameterCombination *parameterCombination; // @synthesize parameterCombination=_parameterCombination;
@property(readonly, nonatomic) IDEIntentBuilderIntent *intent; // @synthesize intent=_intent;
@property(retain, nonatomic) NSMutableSet *_selectedParameters; // @synthesize _selectedParameters;
- (void).cxx_destruct;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (void)checkBoxPressed:(id)arg1;
- (void)primitiveInvalidate;
- (void)presentViewControllerRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2;
- (void)loadView;
- (id)initWithIntent:(id)arg1;

@end

