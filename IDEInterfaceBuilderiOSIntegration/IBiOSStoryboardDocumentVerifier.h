//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderiOSIntegration/IBiOSDocumentVerifier.h>

@interface IBiOSStoryboardDocumentVerifier : IBiOSDocumentVerifier
{
}

+ (BOOL)shouldNeverUseAutoincrementingIDs;
- (void)verifyAndPopulateMessages:(id)arg1;
- (void)_verifyOrderOfViewControllerInGroupObjects;
- (void)_verifyMinimumDevelopmentTarget;
- (void)_verifyErroneousViewSimulatedMetrics;
- (void)_verifyDanglingGroups;
- (void)_verifyEmptyExplicitStoryboardIdentifierIdentifiers;
- (void)_verifyIdentifiedSceneMemberIdentifiers;
- (void)_verifySwitchSizes;
- (void)_verifySeguesAreValidAndPopulateMessages:(id)arg1;
- (id)document;

@end

