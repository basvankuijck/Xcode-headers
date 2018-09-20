//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSPointerArray, NSTouchBar, NSTouchBarItem;

@interface IDESystemModalDebugBarController : NSObject
{
    BOOL _modalDebugBarEnabled;
    NSPointerArray *_recentKeyWindowsStack;
    NSMapTable *_trackedDebugBars;
    NSTouchBarItem *_debuggerSystemTrayBarItem;
    NSTouchBar *_systemModalDebugBar;
}

+ (id)sharedController;
@property(retain) NSTouchBar *systemModalDebugBar; // @synthesize systemModalDebugBar=_systemModalDebugBar;
@property(retain) NSTouchBarItem *debuggerSystemTrayBarItem; // @synthesize debuggerSystemTrayBarItem=_debuggerSystemTrayBarItem;
@property(retain) NSMapTable *trackedDebugBars; // @synthesize trackedDebugBars=_trackedDebugBars;
@property(retain) NSPointerArray *recentKeyWindowsStack; // @synthesize recentKeyWindowsStack=_recentKeyWindowsStack;
@property(nonatomic, getter=isModalDebugBarEnabled) BOOL modalDebugBarEnabled; // @synthesize modalDebugBarEnabled=_modalDebugBarEnabled;
- (void).cxx_destruct;
- (void)_dismissSystemModalDebugBar;
- (void)_minimizeSystemModalDebugBar;
- (void)_presentSystemModalDebugBar;
- (void)performBlockIfNewAppKit:(CDUnknownBlockType)arg1 withFallback:(CDUnknownBlockType)arg2;
- (void)_disableSystemTrayDebuggerButton;
- (void)debugButtonAction:(id)arg1;
- (void)_enableSystemTrayDebuggerButton;
- (void)_updateSystemTrayDebuggerButton;
- (void)_showDebugBarForWorkspaceWindowController:(id)arg1;
- (void)_switchToMostRecentKeyWindowDebugBar;
- (void)_deactivateDebugBarForWorkspaceWindowController:(id)arg1;
- (void)_activateDebugBarForWorkspaceWindowController:(id)arg1;
- (void)updateDebugBarForWorkspaceWindowController:(id)arg1;
- (void)minimizeDebugBar;
- (void)setDebugSessionActive:(BOOL)arg1 forWorkspaceWindowController:(id)arg2;
- (void)_initializeSystemModalDebugBar;
- (void)dealloc;
- (id)init;
- (BOOL)_isTrackingAnyDebugBars;
- (void)_setTrackedDebugBar:(id)arg1 forWorkspaceWindowController:(id)arg2;
- (id)_trackedDebugBarForWorkspaceWindowController:(id)arg1;
- (void)_initializeTrackedDebugBars;
- (void)_removeKeyWindowFromRecentsStack:(id)arg1;
- (void)_pushKeyWindowOnRecentsStack:(id)arg1;
- (void)_initializeKeyWindowsStack;
- (void)_updateWithKeyWindow:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)_stopObservingKeyWindowNotifications;
- (void)_startObservingKeyWindowNotifications;

@end

