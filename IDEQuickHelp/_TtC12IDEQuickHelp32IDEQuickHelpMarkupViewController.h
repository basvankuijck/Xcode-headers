//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEQuickHelp/IDEQuickHelpPlaceholderViewDelegate-Protocol.h>
#import <IDEQuickHelp/WebFrameLoadDelegate-Protocol.h>
#import <IDEQuickHelp/WebPolicyDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController : DVTViewController <IDEQuickHelpPlaceholderViewDelegate, WebFrameLoadDelegate, WebPolicyDelegate>
{
    // Error parsing type: , name: webView
    // Error parsing type: , name: _webViewFrameDidChangeObserverToken
    // Error parsing type: , name: _webPreferences
    // Error parsing type: , name: quickHelpController
    // Error parsing type: , name: urlProvider
    // Error parsing type: , name: _hasPlaceholder
    // Error parsing type: , name: _placeholderView
    // Error parsing type: , name: style
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)placeholderView:(id)arg1 clickSearchButton:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

@end

