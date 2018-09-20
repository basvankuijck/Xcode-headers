//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTDealloc2Main_ViewController.h>

@class DVTSourceControlHostedAccount, DVTSourceControlSSHKeysAuthenticationStrategy, NSImageView, NSPopUpButton, NSProgressIndicator, NSStackView, NSString, NSTextField, NSView, _TtC6IDEKit38IDESourceControlSSHKeyWindowController;
@protocol DVTCancellable, DVTSourceControlCancellable, IDESourceControlSSHKeyCredentialViewDelegate;

@interface IDESourceControlSSHKeyCredentialViewController : DVTDealloc2Main_ViewController
{
    DVTSourceControlSSHKeysAuthenticationStrategy *_sshKeysAuthStrategy;
    _TtC6IDEKit38IDESourceControlSSHKeyWindowController *_sshKeyValidationWindowController;
    id <DVTCancellable> _validateSSHKeyOperation;
    id <DVTSourceControlCancellable> _validateSourceControlSSHKey;
    BOOL _shouldReloadSSHKeys;
    NSString *_URLDerivedUsername;
    id <IDESourceControlSSHKeyCredentialViewDelegate> _delegate;
    DVTSourceControlHostedAccount *_hostedAccount;
    double _viewHeight;
    NSPopUpButton *_sshFilePopUpMenuButton;
    NSView *_privateKeyView;
    NSStackView *_stackView;
    NSView *_sshKeyValidationView;
    NSTextField *_sshKeyValidationStatusTextField;
    NSProgressIndicator *_sshKeyValidationProgressIndicator;
    NSPopUpButton *_sshKeyActionButton;
    NSImageView *_sshKeyValidationStatusImageView;
}

@property __weak NSImageView *sshKeyValidationStatusImageView; // @synthesize sshKeyValidationStatusImageView=_sshKeyValidationStatusImageView;
@property __weak NSPopUpButton *sshKeyActionButton; // @synthesize sshKeyActionButton=_sshKeyActionButton;
@property __weak NSProgressIndicator *sshKeyValidationProgressIndicator; // @synthesize sshKeyValidationProgressIndicator=_sshKeyValidationProgressIndicator;
@property __weak NSTextField *sshKeyValidationStatusTextField; // @synthesize sshKeyValidationStatusTextField=_sshKeyValidationStatusTextField;
@property __weak NSView *sshKeyValidationView; // @synthesize sshKeyValidationView=_sshKeyValidationView;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property __weak NSView *privateKeyView; // @synthesize privateKeyView=_privateKeyView;
@property __weak NSPopUpButton *sshFilePopUpMenuButton; // @synthesize sshFilePopUpMenuButton=_sshFilePopUpMenuButton;
@property(readonly, nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) DVTSourceControlHostedAccount *hostedAccount; // @synthesize hostedAccount=_hostedAccount;
@property(nonatomic) __weak id <IDESourceControlSSHKeyCredentialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *URLDerivedUsername; // @synthesize URLDerivedUsername=_URLDerivedUsername;
- (void).cxx_destruct;
- (id)_actionTooltip:(long long)arg1;
- (id)_actionTitle:(long long)arg1;
- (id)_sshKeyStatusImage:(long long)arg1;
- (void)setStatus:(long long)arg1 withText:(id)arg2 action:(long long)arg3;
- (BOOL)_shouldHideSSHKeyValidation:(long long)arg1 action:(long long)arg2;
- (void)chooseSelectedPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setEnableFields:(BOOL)arg1;
- (void)_handleError:(id)arg1 passphraseRequired:(BOOL)arg2;
- (void)_handleSSHKeyValidation:(BOOL)arg1 error:(id)arg2 passphraseRequired:(BOOL)arg3;
- (void)_handleUnlockOrUpload:(BOOL)arg1;
- (void)_didSetSSHKeyAuthenticationStrategy;
- (void)sshKeyActionClick:(id)arg1;
- (void)chooseExisting:(id)arg1;
- (void)createNew:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)_selectCurrentSSHKeys;
- (void)performSSHKeyAction:(CDUnknownBlockType)arg1;
- (void)_unlock:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_upload:(long long)arg1 displayUploadSheet:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_choose:(CDUnknownBlockType)arg1;
- (void)_create:(CDUnknownBlockType)arg1;
- (void)_updateViewHeight;
@property(retain, nonatomic, setter=setSSHKeysAuthStrategy:) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthStrategy;
- (void)_updateSSHKeyPassphrase:(id)arg1;
- (void)setSSHKeysAuthStrategy:(id)arg1 clearHostedAccount:(BOOL)arg2;
- (void)reloadSSHKeyStatus;
- (void)sshKeySelectionDidChange:(id)arg1;
- (void)_reloadSSHKeys;
- (void)_addStrategyToMenu:(id)arg1;
- (void)_addMissingOrCustomSSHKey;
- (BOOL)_sshKeyExistsInCustomLocationOrMissing;
- (void)_beginLoadingSSHKeys;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

