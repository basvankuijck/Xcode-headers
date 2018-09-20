//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3Core/DVTInvalidation-Protocol.h>

@class NSError, NSString;
@protocol IDEFlightCheckingContext;

@protocol IDEFlightChecking <DVTInvalidation>
@property(readonly, nonatomic, getter=isAutomaticallyResolvable) BOOL automaticallyResolvable;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) NSError *resolutionError;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic, getter=isLongRunning) BOOL longRunning;
@property(readonly, nonatomic) BOOL requiresAccountAndTeamSelection;
@property(readonly, copy, nonatomic) NSString *pastTitle;
@property(readonly, copy, nonatomic) NSString *resolvingTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly) BOOL hidden;
- (void)revert;
- (void)validate;
- (void)unresolveWithContext:(id <IDEFlightCheckingContext>)arg1;
- (void)resolveWithContext:(id <IDEFlightCheckingContext>)arg1;
@end

