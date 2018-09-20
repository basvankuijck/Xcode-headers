//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEProductsUI/NSToolbarDelegate-Protocol.h>

@class IDEProductsViewController, NSSegmentedControl, NSString, NSToolbarItem;

@interface IDEProductsWindowController : NSWindowController <NSToolbarDelegate>
{
    NSSegmentedControl *_segmentControl;
    IDEProductsViewController *_productsViewController;
    NSToolbarItem *_segmentControlToolbarItem;
}

+ (id)sharedProductsWindowController;
@property __weak NSToolbarItem *segmentControlToolbarItem; // @synthesize segmentControlToolbarItem=_segmentControlToolbarItem;
@property(retain) IDEProductsViewController *productsViewController; // @synthesize productsViewController=_productsViewController;
@property __weak NSSegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
- (void).cxx_destruct;
- (void)_configureSegmentedControl;
- (void)showProductsSectionWithIdentifier:(id)arg1 forProductIdentifier:(id)arg2 didShowProduct:(CDUnknownBlockType)arg3;
- (void)refresh;
- (void)resizeSegmentControl;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

