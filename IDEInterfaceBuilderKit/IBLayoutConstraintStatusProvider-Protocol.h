//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBLayoutConstraint;

@protocol IBLayoutConstraintStatusProvider <NSObject>
- (BOOL)isSelectableConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isSelectedConstraint:(IBLayoutConstraint *)arg1;
- (BOOL)isConflictingConstraint:(IBLayoutConstraint *)arg1;
@end

