//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

@interface IBICDataSet : IBICSlottedAsset
{
}

+ (id)contentReferenceTypeName;
+ (long long)validateCompressionType:(long long)arg1;
+ (BOOL)encodesCompressionForChildren;
+ (BOOL)supportsCompression;
+ (id)importPriority;
+ (id)classNameComponents;
+ (id)defaultName;
+ (id)catalogItemFileExtension;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
+ (id)createDefaultInstancesForUnitTesting;
+ (Class)assetRepClass;
- (CDStruct_550fdc95)taggingSupport;
- (void)manifestArchivist:(id)arg1 populateManifestEntry:(id)arg2 forChild:(id)arg3;
- (BOOL)manifestArchivist:(id)arg1 childHasDataToRecordInManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromChildEntry:(id)arg2 toChild:(id)arg3 results:(id)arg4;
- (BOOL)manifestArchivist:(id)arg1 validateManifestChildEntry:(id)arg2 results:(id)arg3;
- (id)initializeManifestArchivist;
- (id)intrinsicallyOrderedChildren;
- (id)children;
- (id)assetRepForStructuredIdentifier:(id)arg1;
- (id)childForIdentifier:(id)arg1;
- (id)assetRepForIdentifier:(id)arg1;
- (id)conflictFreeChildForSlot:(id)arg1;
- (id)assetRepMatchingVariant:(id)arg1 forPlatform:(id)arg2;
- (id)assetRepForSlot:(id)arg1;

@end
