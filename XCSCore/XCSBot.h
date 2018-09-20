//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSDictionary, NSString, XCSBotConfiguration, XCSBotGroup, XCSBotSCMBlueprint, XCSValidator;

@interface XCSBot : XCSObject
{
    BOOL _requiresUpgrade;
    XCSBotSCMBlueprint *_lastRevisionBlueprint;
    struct NSArray *_groups;
    XCSValidator *_validator;
}

+ (id)botWithName:(id)arg1 group:(id)arg2 type:(unsigned long long)arg3 configuration:(id)arg4 lastRevisionBlueprint:(id)arg5 validationErrors:(id *)arg6;
@property(retain, nonatomic) XCSValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) BOOL requiresUpgrade; // @synthesize requiresUpgrade=_requiresUpgrade;
@property(retain, nonatomic) XCSBotSCMBlueprint *lastRevisionBlueprint; // @synthesize lastRevisionBlueprint=_lastRevisionBlueprint;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *botSCMBlueprintAsDictionary;
- (void)newestNonFatalIntegrationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)newestIntegrationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)_validateID:(id)arg1 name:(id)arg2 group:(id)arg3 type:(unsigned long long)arg4 configuration:(id)arg5 lastRevisionBlueprint:(id)arg6;
- (id)_initWithID:(id)arg1 rev:(id)arg2 tinyID:(id)arg3 docType:(id)arg4 name:(id)arg5 group:(id)arg6 type:(unsigned long long)arg7 configuration:(id)arg8 lastRevisionBlueprint:(id)arg9 nextIntegrationNumber:(long long)arg10 service:(id)arg11 requiresUpgrade:(BOOL)arg12 duplicatedFromID:(id)arg13 validationErrors:(id *)arg14;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)patchRepresentation;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) XCSBotConfiguration *configuration; // @dynamic configuration;
@property(retain, nonatomic) NSString *duplicatedFromID; // @dynamic duplicatedFromID;
@property(retain, nonatomic) XCSBotGroup *group; // @dynamic group;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long nextIntegrationNumber; // @dynamic nextIntegrationNumber;
@property(nonatomic) unsigned long long type; // @dynamic type;

@end
