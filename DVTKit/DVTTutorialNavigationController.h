//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTTutorialController, NSButton, NSView;

@interface DVTTutorialNavigationController : NSViewController
{
    BOOL _isOnLastPage;
    NSButton *_nextButton;
    NSButton *_previousButton;
    NSButton *_cancelButton;
    NSView *_navigationContainerView;
    DVTTutorialController *_tutorialController;
    NSButton *_currentPageNavigationButton;
}

@property(retain, nonatomic) NSButton *currentPageNavigationButton; // @synthesize currentPageNavigationButton=_currentPageNavigationButton;
@property __weak DVTTutorialController *tutorialController; // @synthesize tutorialController=_tutorialController;
@property __weak NSView *navigationContainerView; // @synthesize navigationContainerView=_navigationContainerView;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *previousButton; // @synthesize previousButton=_previousButton;
@property __weak NSButton *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (void)setNextButtonEnabled:(BOOL)arg1;
- (void)setPageControllerIsOnFirstPage:(BOOL)arg1;
- (void)setPageControllerIsOnLastPage:(BOOL)arg1;
- (void)cancelAction:(id)arg1;
- (void)previousAction:(id)arg1;
- (void)nextAction:(id)arg1;

@end

