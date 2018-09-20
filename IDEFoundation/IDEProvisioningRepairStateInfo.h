//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, IDEProvisioningUserAction, NSError, NSString;
@protocol IDERepairable;

@interface IDEProvisioningRepairStateInfo : NSObject
{
    id <IDERepairable> _repairable;
    long long _state;
    DVTLogAspect *_logAspect;
    NSString *_stepDescription;
    IDEProvisioningUserAction *_userAction;
    NSError *_error;
}

+ (id)repairStateWithRepairable:(id)arg1 logAspect:(id)arg2;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) IDEProvisioningUserAction *userAction; // @synthesize userAction=_userAction;
@property(readonly) NSString *stepDescription; // @synthesize stepDescription=_stepDescription;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly) id <IDERepairable> repairable; // @synthesize repairable=_repairable;
- (void).cxx_destruct;
- (void)setFailedWithError:(id)arg1;
- (void)setSucceeded;
- (void)clearUserAction;
- (void)setExecutingUserAction;
- (void)setWaitingForUserAction:(id)arg1;
- (void)setExecutingWithStepDescription:(id)arg1;
- (void)setPending;
- (id)description;

@end

