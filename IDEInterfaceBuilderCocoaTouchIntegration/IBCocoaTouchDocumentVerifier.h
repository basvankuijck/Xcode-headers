//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentVerifier.h>

@interface IBCocoaTouchDocumentVerifier : IBDocumentVerifier
{
}

- (void)verifyAndPopulateMessages:(id)arg1;
- (void)_verifyAnchorPositionsForOlderDocuments;
- (void)_verifyViewControllerViewPresenceAndPopulateMessages:(id)arg1;
- (void)_verifyViewControllerAutoLayoutGuides;
- (void)_verifyViewControllerViewClasses;
- (void)_verifyPendingImageRequestBehavior;
- (void)_verifySimulatedMetrics;
- (void)_verifyViewControllerAutolayoutGuidesAndPopulateMessages:(id)arg1;
- (void)_verifyNoContentInsetsForScrollViewsInAutolayoutDocuments;
- (void)_verifyGroupStyleTableViewCellBackgroundColors;
- (void)_verifyTopLevelViewSimulatedOrientationMetrics;
- (void)_verifyBarButtonItemToNavigationItemRelationships;
- (void)_verifyTableViewSeparatorStyle;
- (void)_verifyButtonTitles;
- (void)_verifyWebViewOpacity;
- (void)_verifyBarStyledProgressViewsAreTheCorrectHeight;
- (void)_verifyContentModes;
- (void)_verifyNavControllersHaveNavBars;
- (void)_verifyByRemovingMultiOutletsAndPopulateMessages:(id)arg1;
- (long long)lastSavedPluginVersion;

@end

