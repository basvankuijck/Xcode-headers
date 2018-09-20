//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTModelObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/DVTReferenceResolverClient-Protocol.h>

@class DVTFilePath, DVTReferenceResolver, DVTSourceCodeLanguage, DVTStackBacktrace, IDEContainer, IDEGroup, NSDictionary, NSMutableDictionary, NSString;

@interface IDEContainerItem : DVTModelObject <DVTInvalidation, DVTReferenceResolverClient>
{
    IDEGroup *_superitem;
    NSMutableDictionary *_properties;
    NSString *_path;
    DVTReferenceResolver *_resolver;
    struct {
        unsigned int observingForBuildProductsRelative:1;
        unsigned int observingForCurrentSDKRelative:1;
        unsigned int observingForSourceTreeRelative:1;
    } _flags;
    NSDictionary *_cachedResolutionContext;
}

+ (id)keyPathsForValuesAffectingExpectedFilePath;
+ (id)keyPathsForValuesAffectingWrapsLines;
+ (id)keyPathsForValuesAffectingIndentWidth;
+ (id)keyPathsForValuesAffectingTabWidth;
+ (id)keyPathsForValuesAffectingUsesTabs;
+ (BOOL)automaticallyNotifiesObserversOfContainer;
+ (id)supportedCustomResolutionStrategies;
+ (id)supportedResolutionStrategies;
+ (void)initialize;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)knownAssetTags;
- (id)assetTags;
- (void)setAssetTags:(id)arg1;
- (BOOL)canHaveAssetTags;
- (void)primitiveInvalidate;
- (void)_performMove:(id)arg1 newFilePath:(id)arg2 inContext:(id)arg3;
- (BOOL)_structureEditSetNameForItemsConnectedToFileSystem:(id)arg1 inContext:(id)arg2;
- (void)_takePathAndResolutionStrategiesFromContainerItem:(id)arg1;
@property(readonly) DVTFilePath *expectedFilePath;
@property(readonly) DVTFilePath *resolvedFilePath;
- (BOOL)_getPathAndResolutionStrategiesForAbsolutePath:(id)arg1 path:(id *)arg2 resolutionStrategies:(id *)arg3;
- (BOOL)_getPath:(id *)arg1 forStrategies:(id)arg2;
- (BOOL)_getPath:(id *)arg1 forStrategies:(id)arg2 absolutePath:(id)arg3;
- (id)_absolutePath;
- (id)resolutionContextForStrategies:(id)arg1;
@property(readonly) long long progress; // @dynamic progress;
- (id)issueLog;
@property(readonly) unsigned long long aggregateSourceControlConflictStatus;
@property(readonly) int aggregateSourceControlServerStatus;
@property(readonly) int aggregateSourceControlLocalStatus;
@property(readonly) unsigned long long conflictStateForUpdateOrMerge;
@property(readonly) int sourceControlServerStatus;
@property(readonly) int sourceControlLocalStatus;
- (void)_setContainerItemEdited;
@property(readonly, copy) NSString *description;
- (void)debugPrintStructure;
- (void)debugPrintInnerStructure;
@property(readonly) DVTReferenceResolver *resolver;
@property(copy) DVTSourceCodeLanguage *language;
@property BOOL wrapsLines;
@property long long indentWidth;
@property long long tabWidth;
@property BOOL usesTabs;
@property unsigned long long textEncoding;
@property unsigned long long lineEndings;
- (id)_textPreferences;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1 searchParent:(BOOL)arg2;
- (id)_propertiesCreatingIfNeeded;
@property(readonly) NSDictionary *properties;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, getter=isEditable) BOOL editable;
- (void)_didSetContainer;
- (void)_setContainer:(id)arg1;
- (BOOL)_willSetContainer:(id)arg1;
@property(readonly) IDEContainer *container;
- (void)_setSuperitem:(id)arg1;
@property(readonly) IDEGroup *superitem;
- (void)setPath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)changePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)primitiveChangePath:(id)arg1 resolutionStrategies:(id)arg2;
- (void)resolverStrategiesDidChange:(id)arg1;
- (void)_configureReferenceResolutionStrategySpecificObservations;
- (void)_clearAllReferenceResolutionStrategySpecificObservations;
- (void)_setupSourceTreeRelativeObservations;
- (void)_clearSourceTreeRelativeObservations;
- (void)_setupCurrentSDKRelativeObservations;
- (void)_clearCurrentSDKRelativeObservations;
- (void)_setupBuildProductsRelativeObservations;
- (void)_clearBuildProductsRelativeObservations;
- (void)_workspaceBuildProductsLocationDidChange:(id)arg1;
- (void)_invalidateResolvedFilePath;
- (id)relativePathForPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)initWithPath:(id)arg1 resolutionStrategies:(id)arg2;
- (id)init;
- (BOOL)structuredEditingAcceptsInsertionIntoGroup:(id)arg1;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)setReferenceStrategyFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setLocationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPathFromUTF8String:(const char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setReferenceStyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
