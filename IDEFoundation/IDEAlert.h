//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface IDEAlert : NSObject
{
    NSSet *_cachedProperties;
    BOOL _enabled;
    NSString *_identifier;
    double _executionPriority;
}

+ (id)createAlertForAlertIdentifier:(id)arg1 propertyList:(id)arg2;
+ (id)createAlertForAlertIdentifier:(id)arg1;
+ (BOOL)canAlertWithIdentifierRunOnCurrentOS:(id)arg1;
+ (id)alertExtensionForAlertIdentifier:(id)arg1;
+ (id)alertIdentifiersForGroup:(id)arg1;
+ (id)alertGroups;
+ (id)alertIdentifiers;
+ (id)alertExtensions;
+ (void)_cacheAlerts;
+ (void)_registerAlert:(id)arg1;
+ (void)initialize;
@property double executionPriority; // @synthesize executionPriority=_executionPriority;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (int)alertPropertyListVersion;
- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (void)runForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)prepareToRunForEvent:(id)arg1 inWorkspace:(id)arg2 context:(id)arg3;
- (id)valuesForProperty:(id)arg1;
- (BOOL)validatePropertyValues:(id)arg1;
- (void)enumeratePropertyPermutationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_permuteAlert:(id)arg1 byVaryingProperty:(id)arg2 in:(id)arg3 values:(id)arg4 withBlock:(CDUnknownBlockType)arg5;
- (id)properties;
- (BOOL)canRunOnCurrentOS;
- (id)title;
- (id)group;

@end

