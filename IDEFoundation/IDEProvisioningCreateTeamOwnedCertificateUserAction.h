//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class DVTPortalCertificateType;

@interface IDEProvisioningCreateTeamOwnedCertificateUserAction : IDEProvisioningUserAction
{
    DVTPortalCertificateType *_type;
}

+ (id)userActionWithType:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) DVTPortalCertificateType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)executionMessage;
- (id)userActionName;
- (id)userActionMessage;
- (id)userActionTitle;
- (id)initWithContext:(id)arg1 type:(id)arg2;

@end

