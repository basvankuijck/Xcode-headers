//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class DVTDevice, DVTDeviceConsoleViewController, DVTDevicesWindowContentAreaViewController, DVTLozengeTextField, DVTObservingToken, NSSplitViewItem;

@interface DVTDeviceContentSplitViewController : NSSplitViewController
{
    DVTObservingToken *_deviceWindowCategoryObserer;
    DVTDeviceConsoleViewController *_consoleViewController;
    NSSplitViewItem *_consoleSplitViewItem;
    DVTDevice *_device;
    DVTLozengeTextField *_emptyContentView;
}

@property(retain) DVTLozengeTextField *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)_detailViewControllerInfoDictionaryForDevice:(id)arg1;
- (void)_hideEmptySelectionView;
- (void)_showEmptySelectionView;
- (void)_updateDetailsWithDevice:(id)arg1;
- (BOOL)_shouldShowConsoleForWindowCategory:(int)arg1;
- (void)_removeConsoleSplitViewItem;
- (void)_addConsoleSplitViewItemWithClass:(Class)arg1 device:(id)arg2;
- (void)setConsoleHeight:(double)arg1 sender:(id)arg2;
- (void)collapseConsole:(id)arg1;
- (void)_animateDividerToPosition:(double)arg1 consoleViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSSplitViewItem *consoleSplitViewItem; // @synthesize consoleSplitViewItem=_consoleSplitViewItem;
@property(readonly, getter=isConsoleViewControllerLoaded) BOOL consoleViewControllerLoaded;
@property(readonly, nonatomic) DVTDeviceConsoleViewController *consoleViewController; // @synthesize consoleViewController=_consoleViewController;
@property(readonly) DVTDevicesWindowContentAreaViewController *contentAreaViewController;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)dealloc;

@end

