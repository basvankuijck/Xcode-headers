//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSCollectionView, NSCollectionViewItem, NSIndexPath, NSString, NSView;

@protocol NSCollectionViewDataSource <NSObject>
- (NSCollectionViewItem *)collectionView:(NSCollectionView *)arg1 itemForRepresentedObjectAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(NSCollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSView *)collectionView:(NSCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(NSCollectionView *)arg1;
@end

