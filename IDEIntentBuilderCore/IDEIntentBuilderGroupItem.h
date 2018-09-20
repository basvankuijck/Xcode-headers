//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderCore/DVTInvalidation-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderDictionaryConvertible-Protocol.h>
#import <IDEIntentBuilderCore/IDEIntentBuilderIssueGenerator-Protocol.h>

@class DVTStackBacktrace, IDEIntentBuilderGroup, NSString, NSUUID;

@interface IDEIntentBuilderGroupItem : NSObject <DVTInvalidation, IDEIntentBuilderIssueGenerator, IDEIntentBuilderDictionaryConvertible>
{
    BOOL _removed;
    NSString *_originalName;
    NSString *_originalGeneratedName;
    NSUUID *_identifier;
    NSString *_name;
    NSString *_generatedName;
    IDEIntentBuilderGroup *_group;
    NSString *__originalClassPrefix;
}

+ (void)initialize;
@property(nonatomic, getter=isRemoved, setter=_setRemoved:) BOOL removed; // @synthesize removed=_removed;
@property(copy, nonatomic, setter=_setOriginalClassPrefix:) NSString *_originalClassPrefix; // @synthesize _originalClassPrefix=__originalClassPrefix;
@property(nonatomic, setter=_setGroup:) __weak IDEIntentBuilderGroup *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *generatedName; // @synthesize generatedName=_generatedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic, setter=_setOriginalGeneratedName:) NSString *_originalGeneratedName; // @synthesize _originalGeneratedName;
@property(copy, nonatomic, setter=_setOriginalName:) NSString *_originalName; // @synthesize _originalName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *locationDescription;
- (id)generateIssues;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)primitiveInvalidate;
- (void)_registerUndoBlockForFoundItem:(CDUnknownBlockType)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSString *keyPrefix;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

