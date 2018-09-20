//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>

@class DVTFilePath, NSString;

@interface IBClassDescriptionSource : NSObject <NSCoding, NSCopying, IBDocumentArchiving>
{
    unsigned long long _cachedHash;
    long long _sourceType;
    NSString *_qualifier;
    DVTFilePath *_frameworkPath;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)qualifierKeyForSourceType:(long long)arg1;
+ (id)frameworkSourceIdentifierForInterfaceFile:(id)arg1 inFramework:(id)arg2;
+ (id)documentLocalSourceIdentifier;
+ (id)systemSourceIdentifierForPluginWithBundleIdentifier:(id)arg1;
+ (id)workspaceDocumentSourceIdentifierForInterfaceFile:(id)arg1 inWorkspaceDocumentInFolderAtPath:(id)arg2;
+ (id)workspaceDocumentSourceIdentifierForWorkspaceDocumentRelativeInterfaceFile:(id)arg1;
@property(retain) DVTFilePath *frameworkPath; // @synthesize frameworkPath=_frameworkPath;
@property(readonly) NSString *qualifier; // @synthesize qualifier=_qualifier;
@property(readonly) long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (long long)compareForDefinitionContention:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)compareLegacyMajorKeys:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToClassDescriptionSource:(id)arg1;
- (id)absolutePathInTermsOfWorkspace:(id)arg1;
- (id)absolutePathInTermsOfDocumentPath:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)displayLabelInDocument:(id)arg1;
- (id)frameworkName;
- (id)pluginBundleIdentifier;
- (id)frameworkRelativeInterfaceFile;
- (id)workspaceDocumentRelativeInterfaceFile;
- (id)documentRelativeInterfaceFile;
- (id)relativeInterfaceFile;
- (BOOL)isSourcedFromRelativeInterfaceFile;
- (BOOL)isSourcedFromFramework;
- (BOOL)isSourcedFromWorkspaceDocument;
- (BOOL)isSourcedFromPlugin;
- (BOOL)isSourcedFromDocumentRelativeFile;
- (BOOL)isSourcedFromLocalDocument;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceType:(long long)arg1 andQualifier:(id)arg2;
- (unsigned long long)computeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

