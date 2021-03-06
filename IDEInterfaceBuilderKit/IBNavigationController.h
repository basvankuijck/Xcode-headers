//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, IBNavigationBar, IBNavigationControllerItem, NSArray, NSLayoutConstraint, NSMutableArray, NSView;

@interface IBNavigationController : IDEViewController
{
    NSLayoutConstraint *_currentLeadingConstraint;
    DVTObservingToken *_kvoPreviousItemTitleToken;
    DVTObservingToken *_kvoCurrentItemTitleToken;
    NSLayoutConstraint *_navBarOffRightEdgeConstraint;
    NSLayoutConstraint *_navBarOffLeftEdgeConstraint;
    NSLayoutConstraint *_navBarVisibleConstraint;
    NSMutableArray *_navItemStack;
    BOOL _isShowingNavigationBar;
    IBNavigationBar *_navBar;
    NSView *_containerView;
    IBNavigationControllerItem *_currentNavigationItem;
    IBNavigationControllerItem *_previousNavigationItem;
}

@property(retain, nonatomic) IBNavigationControllerItem *previousNavigationItem; // @synthesize previousNavigationItem=_previousNavigationItem;
@property(retain, nonatomic) IBNavigationControllerItem *currentNavigationItem; // @synthesize currentNavigationItem=_currentNavigationItem;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)didPopNavigationItem:(id)arg1;
- (void)didPushNavigationItem:(id)arg1 previousItem:(id)arg2;
- (void)_didClickBackButton;
- (void)popNavigationItemByAnimating:(BOOL)arg1;
- (void)popToNavigationItem:(id)arg1 animate:(BOOL)arg2;
- (void)pushNavigationItem:(id)arg1 animate:(BOOL)arg2;
- (void)_runMoveOperationMakingItemCurrent:(id)arg1 navBarContext:(id)arg2 animate:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_positionItemAsCurrentItem:(id)arg1;
- (id)_constraintForHorizontallyPositioningItemAsCurrentItem:(id)arg1;
- (void)_sendDidResignCurrentItemIfPossibleForItem:(id)arg1;
- (void)_sendWillResignCurrentItemIfPossibleForItem:(id)arg1;
- (void)_sendDidBecomeCurrentItemIfPossibleForItem:(id)arg1;
- (void)_sendWillBecomeCurrentItemIfPossibleForItem:(id)arg1;
- (void)_updateNavBarVisibilityFromContext:(id)arg1;
- (void)_prepareNavBarVisibilityFromContext:(id)arg1;
- (id)_navigationBar;
- (void)_previousItemTitleDidChange;
- (void)_currentItemTitleDidChange;
@property(readonly, nonatomic) NSArray *navigationItemStack;
- (void)loadView;
- (void)primitiveInvalidate;

@end

