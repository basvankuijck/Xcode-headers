//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderCocoaIntegration/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBDefaultNSToolbarItemsContainerView, IBDocument, IBMutableIdentityDictionary, IBNSToolbarItemsContainerView, NSButton, NSString, NSTextField;
@protocol IBNSToolbarConfigurationViewDelegate;

@interface IBNSToolbarConfigurationView : DVTLayoutView_ML <DVTInvalidation>
{
    IBMutableIdentityDictionary *_setupOffsets;
    IBDefaultNSToolbarItemsContainerView *_defaultItemsView;
    IBNSToolbarItemsContainerView *_allowedItemsView;
    NSString *_localPasteboardType;
    IBDocument *_document;
    id <IBNSToolbarConfigurationViewDelegate> _delegate;
    NSTextField *_allowedItemsLabel;
    NSTextField *_defaultItemsLabel;
    NSButton *_doneButton;
}

+ (id)configurationViewWithAllowedItems:(id)arg1 defaultItems:(id)arg2;
+ (void)initialize;
@property(retain) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSTextField *defaultItemsLabel; // @synthesize defaultItemsLabel=_defaultItemsLabel;
@property(retain) NSTextField *allowedItemsLabel; // @synthesize allowedItemsLabel=_allowedItemsLabel;
@property(nonatomic) __weak id <IBNSToolbarConfigurationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) NSString *localPasteboardType; // @synthesize localPasteboardType=_localPasteboardType;
@property(retain, nonatomic) IBNSToolbarItemsContainerView *allowedItemsView; // @synthesize allowedItemsView=_allowedItemsView;
@property(retain, nonatomic) IBDefaultNSToolbarItemsContainerView *defaultItemsView; // @synthesize defaultItemsView=_defaultItemsView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)done:(id)arg1;
- (void)primitiveInvalidate;
- (void)setupWithAllowedItems:(id)arg1 defaultItems:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

