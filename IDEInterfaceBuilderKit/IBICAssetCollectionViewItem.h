//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

#import <IDEInterfaceBuilderKit/IBICAssetCollectionViewItemContainerDelegate-Protocol.h>

@class IBICAbstractCatalogItem, IBICAssetOverviewCapsuleController, NSString;

@interface IBICAssetCollectionViewItem : NSCollectionViewItem <IBICAssetCollectionViewItemContainerDelegate>
{
    double _lastKnownHeight;
    IBICAbstractCatalogItem *_catalogItem;
    IBICAssetOverviewCapsuleController *_controller;
}

@property(readonly, nonatomic) IBICAssetOverviewCapsuleController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) IBICAbstractCatalogItem *catalogItem; // @synthesize catalogItem=_catalogItem;
- (void).cxx_destruct;
- (void)assetCollectionViewItemContainerDidCompleteLayout:(id)arg1;
- (void)installViewFromController;
- (void)loadView;
- (id)dataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

