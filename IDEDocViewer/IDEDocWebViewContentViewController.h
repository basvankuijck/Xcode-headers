//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEDocViewer/IDEDocContentView-Protocol.h>
#import <IDEDocViewer/IDEDocJumpBarInterchangeDelegate-Protocol.h>
#import <IDEDocViewer/NSPopoverDelegate-Protocol.h>
#import <IDEDocViewer/WebFrameLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebPolicyDelegate-Protocol.h>
#import <IDEDocViewer/WebResourceLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebUIDelegate-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEDocContentAreaViewController, IDEDocJumpBarInterchange, IDENavBar, NSString, NSURL, NSVisualEffectView, WebView;

@interface IDEDocWebViewContentViewController : DVTViewController <NSPopoverDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebUIDelegate, WebResourceLoadDelegate, IDEDocJumpBarInterchangeDelegate, IDEDocContentView>
{
    IDENavBar *_navBar;
    IDEDocJumpBarInterchange *_jumpBarInterchange;
    DVTObservingToken *_mainFrameURLObservingToken;
    NSURL *_referenceURLOverride;
    double _cumulativeMagnifyDelta;
    short _stickyTextMagnifyGestureDirection;
    float _textSizeMultiplierAtGestureStart;
    DVTNotificationToken *_fontAndColorThemeChangedObserver;
    IDEDocContentAreaViewController *_hostContentAreaViewController;
    WebView *_webView;
    NSVisualEffectView *_webViewVisualEffectView;
    DVTBorderedView *_webViewBorderedView;
}

+ (id)mainDocumentElementInWebView:(id)arg1;
+ (void)initialize;
+ (id)webViewLoadingLogAspect;
@property(retain) DVTBorderedView *webViewBorderedView; // @synthesize webViewBorderedView=_webViewBorderedView;
@property(retain) NSVisualEffectView *webViewVisualEffectView; // @synthesize webViewVisualEffectView=_webViewVisualEffectView;
@property(retain) WebView *webView; // @synthesize webView=_webView;
@property __weak IDEDocContentAreaViewController *hostContentAreaViewController; // @synthesize hostContentAreaViewController=_hostContentAreaViewController;
- (void).cxx_destruct;
- (void)userDidSelectWithIdentifier:(id)arg1;
- (void)setZoomMultiplier:(float)arg1;
- (float)zoomMultiplier;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)haveWorkspaceOpenOrRevealURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)_downloadAndOpenSampleCodeWithRequest:(id)arg1;
- (BOOL)_allowURLRequest:(id)arg1 webView:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webViewContextMenu_openLinkInNewTab:(id)arg1;
- (void)webViewContextMenu_copyLink:(id)arg1;
- (void)webViewContextMenu_findText:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
@property(readonly) NSString *selectedStringInWebView;
- (void)loadURL:(id)arg1;
- (id)webViewURLString;
- (void)jumpBarInterchange:(id)arg1 userDidSelectURL:(id)arg2;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)_updateJumpBar;
- (id)_parentTabController;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

