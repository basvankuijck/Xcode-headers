//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DTDraggedImageStateTransitionRegistry : NSObject
{
    NSMutableDictionary *registry;
}

+ (id)sharedInstance;
- (id)transitionFromState:(id)arg1 toState:(id)arg2;
- (void)registerTransition:(Class)arg1 fromImageStateClass:(Class)arg2 toImageStateClass:(Class)arg3;
- (id)init;

@end

