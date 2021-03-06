//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSUI/IDEContinuousIntegrationLogNavigatorHelper-Protocol.h>

@class NSString;

@interface XCSUILogNavigatorHelper : NSObject <IDEContinuousIntegrationLogNavigatorHelper>
{
}

- (id)statusImagesForXCSItem:(id)arg1 status:(id)arg2 renderInWindow:(id)arg3 rowIsDisclosed:(BOOL)arg4;
- (long long)statusOfIntegration:(id)arg1;
- (BOOL)isIntegrationFinished:(id)arg1;
- (void)performAction:(SEL)arg1 forNavigableItemSelection:(id)arg2 withNavigator:(id)arg3;
- (id)titleForNavigableItemSelection:(id)arg1 action:(SEL)arg2 menuItemState:(id *)arg3;
- (BOOL)navigableItemSelection:(id)arg1 allowsAction:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

