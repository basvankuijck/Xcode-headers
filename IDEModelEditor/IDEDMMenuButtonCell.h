//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSMenu, NSMenuItem, NSTimer;

@interface IDEDMMenuButtonCell : NSButtonCell
{
    NSMenuItem *_currentMenuItem;
    struct CGPoint _previousMousePoint;
    NSTimer *_timer;
    BOOL _ignoredAction;
    NSMenu *_trampolineMenu;
}

- (void).cxx_destruct;
- (void)_validateTrampolineMenu:(id)arg1;
- (id)target;
- (SEL)action;
@property(retain) NSMenuItem *currentMenuItem;
- (void)setMenu:(id)arg1;
- (void)trampolineMenuFired:(id)arg1;
- (void)awakeFromNib;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (double)popUpDelay;

@end

