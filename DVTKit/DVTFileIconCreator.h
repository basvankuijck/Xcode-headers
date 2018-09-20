//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTFileIconCreator : NSObject
{
}

+ (BOOL)_checkIfDirty:(id)arg1;
+ (id)iconForDVTFilePath:(id)arg1 fileDataTypeHint:(id)arg2 decorated:(BOOL)arg3;
+ (id)_iconForDVTFileType:(id)arg1 isDirty:(BOOL)arg2 isMissing:(BOOL)arg3;
+ (id)_xcodeBundleFileTypeConformedToByFileType:(id)arg1;
+ (id)iconForDVTFilePath:(id)arg1 fileDataTypeHint:(id)arg2;
+ (id)iconForFileType:(id)arg1;
+ (id)_iconForFileTypeIdentifierOrFileExtension:(id)arg1 isDirty:(BOOL)arg2 isMissing:(BOOL)arg3;
+ (id)_dataTypesAndFileExtensionsToIconsCache;
+ (id)_baseIconForFileTypeIdentifierOrFileExtension:(id)arg1;
+ (id)_lookupIconInBundleWithOverrideForFileExtension:(id)arg1;
+ (id)_lookupIconInBundleWithOverrideForFileType:(id)arg1;
+ (id)overriderImageProviderClassByUTI;
+ (id)_xcodeBundleIconForFileType:(id)arg1;
+ (id)_xcodeBundleIconForFileExtension:(id)arg1;
+ (id)_xcodeBundleExtensionsToIconNames;
+ (id)_xcodeBundleFileDataTypesToIconNames;
+ (id)missingIconWithBaseIcon:(id)arg1;
+ (id)iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2 isDirty:(BOOL)arg3;
+ (id)iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2;
+ (id)_iconWithBaseIcon:(id)arg1 badgeIcon:(id)arg2 isDirty:(BOOL)arg3 isMissing:(BOOL)arg4;
+ (void)initialize;

@end

