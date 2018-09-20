//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/IDEDataModelInspectorController.h>

#import <IDEModelEditor/IDEInspectorAccessibilitySupport-Protocol.h>

@class NSArray, NSArrayController, NSString, _IDEDataModelVersionedInspectorItem;

@interface IDEDataModelDocumentInspector : IDEDataModelInspectorController <IDEInspectorAccessibilitySupport>
{
    NSArray *_developmentVersionMenuItems;
    NSArrayController *versionsArrayController;
    NSArray *_versionGroupItems;
}

+ (id)keyPathsForValuesAffectingDevelopmentVersionTitle;
+ (id)keyPathsForValuesAffectingSourceLanguage;
+ (id)keyPathsForValuesAffectingModelVersionIdentifier;
+ (id)keyPathsForValuesAffectingCanChooseModelVersion;
@property(copy) NSArray *developmentVersionMenuItems; // @synthesize developmentVersionMenuItems=_developmentVersionMenuItems;
- (void).cxx_destruct;
@property(readonly) NSString *developmentVersionTitle;
- (void)takeToolsVersion:(id)arg1;
@property unsigned long long sourceLanguage; // @dynamic sourceLanguage;
- (void)setModelVersionIdentifier:(id)arg1;
- (id)modelVersionIdentifier;
- (void)setContent:(id)arg1;
@property(readonly) NSArray *versionGroupItems;
- (id)_generateVersionGroupItems;
@property(retain) _IDEDataModelVersionedInspectorItem *currentInspectorItem;
- (void)setCurrentReference:(id)arg1;
- (id)currentReference;
- (id)_versionGroup;
- (BOOL)canChooseModelVersion;
- (void)refreshTargetMenus;
- (void)loadView;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

