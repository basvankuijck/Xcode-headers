//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderDictionaryConvertible-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderEnum, NSString, NSUUID;

@interface IDEIntentBuilderEnumValue : NSObject <DVTInvalidation, IDEIntentBuilderDictionaryConvertible, IDEIntentBuilderIssueGenerator>
{
    BOOL _isRemoved;
    NSUUID *_identifier;
    long long _index;
    NSString *_name;
    NSString *_displayName;
    NSString *_displayNameID;
    IDEIntentBuilderEnum *_parentEnum;
}

+ (void)initialize;
@property(nonatomic, setter=_setRemoved:) BOOL isRemoved; // @synthesize isRemoved=_isRemoved;
@property(nonatomic, setter=_setParentEnum:) __weak IDEIntentBuilderEnum *parentEnum; // @synthesize parentEnum=_parentEnum;
@property(copy, nonatomic, setter=_setDisplayNameID:) NSString *displayNameID; // @synthesize displayNameID=_displayNameID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
- (id)init;
- (void)_registerUndoBlockForFoundEnumValue:(CDUnknownBlockType)arg1;
- (id)codegenForIntentGroupItem:(id)arg1 sourceLanguage:(unsigned long long)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
