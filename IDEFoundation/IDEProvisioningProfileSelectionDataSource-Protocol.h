//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairDataSource-Protocol.h>

@class IDEProfileQualification, IDEProvisioningProfileDownloaderContext;
@protocol IDEProvisioningBasicProfile;

@protocol IDEProvisioningProfileSelectionDataSource <IDEProvisioningRepairDataSource>
@property(readonly, nonatomic) BOOL showEmptyProfileSelectionPlaceholder;
@property(readonly, nonatomic) IDEProfileQualification *profileQualification;
@property(retain, nonatomic) id <IDEProvisioningBasicProfile> provisioningProfile;
@property(readonly) long long profileSupport;
@property(readonly, getter=isProfileChangeable) BOOL profileChangeable;
- (IDEProvisioningProfileDownloaderContext *)provisioningProfileDownloaderContextWithError:(id *)arg1;
- (void)locateEligibleProfiles:(id *)arg1 ineligibleProfiles:(id *)arg2;
@end

