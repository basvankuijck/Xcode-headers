//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTReplacementViewDelegate-Protocol.h>
#import <DVTKit/DVTTabChooserViewDelegate-Protocol.h>

@class DVTBorderView, DVTNotificationToken, DVTReplacementView, DVTStackBacktrace, DVTTabChooserView, NSAttributedString, NSImage, NSString, NSView;
@protocol DVTAssetDetailViewDelegate;

@interface DVTAssetDetailView : DVTLayoutView_ML <DVTTabChooserViewDelegate, DVTReplacementViewDelegate, DVTInvalidation>
{
    NSView *_helpButton;
    DVTNotificationToken *_replacementViewFrameChangeToken;
    DVTBorderView *_dividerLine;
    DVTTabChooserView *_detailControllerChooserView;
    DVTReplacementView *_replacementView;
    NSAttributedString *_label;
    NSString *_helpIdentifier;
    NSView *_editingView;
    NSImage *_image;
    id <DVTAssetDetailViewDelegate> _delegate;
}

+ (void)initialize;
@property(retain) id <DVTAssetDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSView *editingView; // @synthesize editingView=_editingView;
@property(copy, nonatomic) NSString *helpIdentifier; // @synthesize helpIdentifier=_helpIdentifier;
@property(copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
@property(readonly) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(readonly) DVTTabChooserView *detailControllerChooserView; // @synthesize detailControllerChooserView=_detailControllerChooserView;
- (void).cxx_destruct;
- (void)uninstallEditingView;
- (void)installEditingView;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)replacementViewFrameDidChange:(id)arg1;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGSize)suggestedSize;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (struct CGPoint)replacementViewOrigin;
- (double)effectiveDetailControllerChooserViewHeight;
- (BOOL)shouldShowDetailControllerChooserView;
- (void)drawRect:(struct CGRect)arg1;
- (double)detailControllerChooserViewHeight;
- (struct CGRect)detailControllerChooserViewFrame;
- (struct CGRect)headerRect;
- (double)headerHeight;
- (struct CGRect)editingViewRect;
- (struct CGRect)labelAreaBounds;
- (struct CGRect)imageRect;
- (struct CGRect)imageAreaBounds;
- (BOOL)isFlipped;
- (void)takeLabelFromString:(id)arg1;
- (id)basicLabelAttributes;
- (void)takeLabelFromTitle:(id)arg1 andSubtitle:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)assetDetailViewCommonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

