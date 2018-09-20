//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@class DVTPortalProfileCharacteristics;

@interface IDEProvisioningCreateProfileRepairStep : IDEProvisioningRepairStep
{
    DVTPortalProfileCharacteristics *_characteristics;
}

+ (id)createProfileRepairStepWithCharacteristics:(id)arg1;
@property(readonly, nonatomic) DVTPortalProfileCharacteristics *characteristics; // @synthesize characteristics=_characteristics;
- (void).cxx_destruct;
- (BOOL)_installPortalProfile:(id)arg1 profileManager:(id)arg2 error:(id *)arg3;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)activityDescription;
- (id)stepDescription;
- (id)initWithCharacteristics:(id)arg1;

@end

