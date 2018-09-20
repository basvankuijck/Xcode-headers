//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving-Protocol.h"

@class NSImage, NSSharingServicePickerTouchBarItem, NSString;

@interface IBNSSharingServicePickerTouchBarItem : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSSharingServicePickerTouchBarItem *_runtimeTouchBarItem;
    BOOL _enabled;
    NSString *_buttonTitle;
    NSImage *_buttonImage;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property(retain) NSImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(copy) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (id)runtimeTouchBarItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (BOOL)ibInspectedCustomizationLabelIsVisible;
- (BOOL)ibInspectedIdentifierIsVisible;
- (id)ibTypeNameForDefaultLabel;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

