//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPlatform, DVTPortalProfilePurpose, IDEAppIDFeatures, IDEProvisionableEntitlements, IDEProvisioningEntitlementsExpansion, NSDictionary, NSNumber, NSString;
@protocol IDEProvisioningBasicTeam;

@interface IDEProvisionableOverrides : NSObject
{
    NSString *_configuration;
    NSNumber *_profileSupport;
    NSNumber *_provisioningStyle;
    DVTPortalProfilePurpose *_provisioningPurpose;
    id <IDEProvisioningBasicTeam> _team;
    DVTPlatform *_platform;
    NSString *_profileSpecifier;
    NSString *_certificateIdentifier;
    NSString *_bundleIdentifier;
    NSString *_entitlementsFile;
    NSDictionary *_entitlements;
    IDEProvisionableEntitlements *_baseEntitlements;
    IDEProvisioningEntitlementsExpansion *_entitlementsExpansion;
    NSNumber *_entitlementsDestination;
    IDEAppIDFeatures *_appIDFeatures;
    NSNumber *_allowSigningWithoutTeamSelection;
    NSNumber *_signingRequiresTeam;
}

+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(id)arg2 provisioningStyle:(id)arg3 provisioningPurpose:(id)arg4 team:(id)arg5 platform:(id)arg6 profileSpecifier:(id)arg7 certificateIdentifier:(id)arg8 bundleIdentifier:(id)arg9 entitlementsFile:(id)arg10 entitlements:(id)arg11 baseEntitlements:(id)arg12 entitlementsExpansion:(id)arg13 entitlementsDestination:(id)arg14 allowSigningWithoutTeamSelection:(id)arg15 signingRequiresTeam:(id)arg16 appIDFeatures:(id)arg17;
+ (id)overridesWithConfiguration:(id)arg1 profileSupport:(id)arg2;
@property(readonly, nonatomic) NSNumber *signingRequiresTeam; // @synthesize signingRequiresTeam=_signingRequiresTeam;
@property(readonly, nonatomic) NSNumber *allowSigningWithoutTeamSelection; // @synthesize allowSigningWithoutTeamSelection=_allowSigningWithoutTeamSelection;
@property(readonly, nonatomic) IDEAppIDFeatures *appIDFeatures; // @synthesize appIDFeatures=_appIDFeatures;
@property(readonly, nonatomic) NSNumber *entitlementsDestination; // @synthesize entitlementsDestination=_entitlementsDestination;
@property(readonly, nonatomic) IDEProvisioningEntitlementsExpansion *entitlementsExpansion; // @synthesize entitlementsExpansion=_entitlementsExpansion;
@property(readonly, nonatomic) IDEProvisionableEntitlements *baseEntitlements; // @synthesize baseEntitlements=_baseEntitlements;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSString *entitlementsFile; // @synthesize entitlementsFile=_entitlementsFile;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *certificateIdentifier; // @synthesize certificateIdentifier=_certificateIdentifier;
@property(readonly, nonatomic) NSString *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) DVTPortalProfilePurpose *provisioningPurpose; // @synthesize provisioningPurpose=_provisioningPurpose;
@property(readonly, nonatomic) NSNumber *provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) NSNumber *profileSupport; // @synthesize profileSupport=_profileSupport;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)description;

@end

