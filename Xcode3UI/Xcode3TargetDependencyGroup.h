//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildFileGroup.h>

@interface Xcode3TargetDependencyGroup : Xcode3BuildFileGroup
{
}

+ (void)initialize;
- (id)_computeTargetDependencies;
- (BOOL)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertItems:(id)arg1;
- (BOOL)removeItemsAtIndexes:(id)arg1;
- (void)dependencyRemovedNotification:(id)arg1;
- (void)dependencyAddedNotification:(id)arg1;
- (id)name;
- (void)primitiveInvalidate;
- (void)initializeGroup;

@end

