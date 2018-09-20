//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class DVTFilePath, DVTMacroDefinitionTable, DVTSearchPath, DVTVersion, NSArray, NSDate, NSNumber, NSString, NSURL;

@interface DVTToolchain : NSObject <NSCopying>
{
    NSNumber *_embeddedDebuggerSetting;
    DVTFilePath *_lldbPath;
    DVTFilePath *_llvmProfdataPath;
    DVTVersion *_swiftVersion;
    unsigned long long _hash;
    NSString *_identifier;
    DVTFilePath *_path;
    DVTVersion *_version;
    NSArray *_aliases;
    NSString *_displayName;
    NSString *_displayDescription;
    DVTMacroDefinitionTable *_defaultMacros;
    DVTMacroDefinitionTable *_overrideMacros;
    DVTMacroDefinitionTable *_additionalDefaultMacrosIfTopToolchain;
    DVTSearchPath *_executableBinarySearchPath;
    DVTSearchPath *_librarySearchPath;
    NSURL *_reportProblemURL;
    NSString *_shortDisplayName;
    NSDate *_createdDate;
    NSNumber *_compatibilityVersion;
    NSString *_compatibilityVersionDisplayString;
}

+ (id)defaultToolchain;
@property(readonly) NSString *compatibilityVersionDisplayString; // @synthesize compatibilityVersionDisplayString=_compatibilityVersionDisplayString;
@property(readonly) NSNumber *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(readonly) NSString *shortDisplayName; // @synthesize shortDisplayName=_shortDisplayName;
@property(readonly) NSURL *reportProblemURL; // @synthesize reportProblemURL=_reportProblemURL;
@property(readonly) DVTSearchPath *librarySearchPath; // @synthesize librarySearchPath=_librarySearchPath;
@property(readonly) DVTSearchPath *executableBinarySearchPath; // @synthesize executableBinarySearchPath=_executableBinarySearchPath;
@property(readonly) DVTMacroDefinitionTable *additionalDefaultMacrosIfTopToolchain; // @synthesize additionalDefaultMacrosIfTopToolchain=_additionalDefaultMacrosIfTopToolchain;
@property(readonly) DVTMacroDefinitionTable *overrideMacros; // @synthesize overrideMacros=_overrideMacros;
@property(readonly) DVTMacroDefinitionTable *defaultMacros; // @synthesize defaultMacros=_defaultMacros;
@property(readonly) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSArray *aliases; // @synthesize aliases=_aliases;
@property(readonly) DVTVersion *version; // @synthesize version=_version;
@property(readonly) DVTFilePath *path; // @synthesize path=_path;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) DVTVersion *swiftVersion;
- (id)llvmProfdataPath;
- (id)lldbPath;
- (BOOL)isDefaultToolchain;
- (BOOL)requiresEmbeddedDebuggerForSwift;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)infoDictionaryWithError:(id *)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

@end
