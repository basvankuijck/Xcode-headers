//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTTableView, NSString, Xcode3TargetMembershipInspector;

@interface Xcode3TargetMembershipInspectorContentView : DVTLayoutView_ML <DVTInvalidation>
{
    Xcode3TargetMembershipInspector *_inspector;
    DVTTableView *_targetMembershipsTableView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)setShowRoleColumn:(BOOL)arg1;
- (void)layoutBottomUp;
- (void)primitiveInvalidate;
- (void)awakeFromNib;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

