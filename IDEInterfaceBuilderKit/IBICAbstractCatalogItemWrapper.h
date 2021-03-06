//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IDETaggedAssetItem-Protocol.h>

@class DVTFilePath, IBICAbstractCatalogItem, IBICAssetTagInfoProvider, NSImage, NSSet, NSString;

@interface IBICAbstractCatalogItemWrapper : NSObject <IDETaggedAssetItem>
{
    IBICAbstractCatalogItem *_catalogItem;
    IBICAssetTagInfoProvider *_infoProvider;
}

@property(retain, nonatomic) IBICAssetTagInfoProvider *infoProvider; // @synthesize infoProvider=_infoProvider;
@property(retain, nonatomic) IBICAbstractCatalogItem *catalogItem; // @synthesize catalogItem=_catalogItem;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_nameForItemFromRoot:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSSet *expectedFilePaths;
@property(readonly, nonatomic) DVTFilePath *expectedBaseFilePath;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSSet *assetTags;
@property(readonly, nonatomic) NSSet *inheritedAssetTags;
- (id)initWithCatalogItem:(id)arg1 infoProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

