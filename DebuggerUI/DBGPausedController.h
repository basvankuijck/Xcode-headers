//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGPausedController : NSObject
{
}

+ (id)sharedInstance;
- (id)_findAndActivateTabContainingDebugSession:(id)arg1 workspaceDocument:(id)arg2;
- (id)_activateOrCreateTabWithLabel:(id)arg1 workspaceDocument:(id)arg2;
- (void)selectNewWorkspaceTabController:(id)arg1 workspaceDocument:(id)arg2 forPausedDebugSession:(id)arg3;
- (id)_init_dvt_internal;
- (id)init;

@end

