//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBCocoaTouchTargetRuntime;

@interface NSObject (IBTargetRuntimeIntegration)
- (BOOL)ibTabBarShouldArchiveItems:(id)arg1;
- (BOOL)ibToolbarShouldArchiveItems:(id)arg1;
- (id)valueByTransitioningFromTargetRuntime:(id)arg1 toTargetRuntime:(id)arg2;
- (void)didChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)ibSwizzledCocoaTouchDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
@property(retain) IBCocoaTouchTargetRuntime *cocoaTouchTargetRuntime;
- (void)changeTargetRuntimeTo:(id)arg1 inDocument:(id)arg2 withContext:(id)arg3;
- (void)changeTargetRuntimeTo:(id)arg1 inDocument:(id)arg2;
@end

