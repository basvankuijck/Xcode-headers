//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionOptionViewController.h>

@class NSLayoutConstraint, NSPopUpButton, NSProgressIndicator, NSSet;

@interface IDEDistributionOptionThinningViewController : IDEDistributionOptionViewController
{
    NSPopUpButton *_thinningOptionsPopUp;
    NSLayoutConstraint *_popupWidthConstraint;
    NSLayoutConstraint *_popupLeadingConstraint;
    NSProgressIndicator *_loadingIndicator;
    NSSet *_availableDeviceDisplayNames;
}

@property(retain, nonatomic) NSSet *availableDeviceDisplayNames; // @synthesize availableDeviceDisplayNames=_availableDeviceDisplayNames;
@property(retain, nonatomic) NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) NSLayoutConstraint *popupLeadingConstraint; // @synthesize popupLeadingConstraint=_popupLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *popupWidthConstraint; // @synthesize popupWidthConstraint=_popupWidthConstraint;
@property(retain, nonatomic) NSPopUpButton *thinningOptionsPopUp; // @synthesize thinningOptionsPopUp=_thinningOptionsPopUp;
- (void).cxx_destruct;
- (void)updateValueFromMenu:(id)arg1;
- (void)updateMenuWithDeviceDisplayNameToCoalescedThinningVariantSet:(id)arg1;
- (BOOL)needsInteraction;
- (id)loadContent;
- (void)viewDidLoad;

@end

