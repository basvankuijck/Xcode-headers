//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBUIAccessibilityConfiguration;

@interface IBUIMarshallableAccessibilityConfiguration : NSObject
{
    IBUIAccessibilityConfiguration *_configuration;
    NSObject *_object;
}

+ (void)registerMarshallingRecordHandlers;
@property(retain) NSObject *object; // @synthesize object=_object;
@property(retain) IBUIAccessibilityConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
- (id)localExtraMarshalledToOneRelationshipKeyPaths;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)initWithObject:(id)arg1 andConfiguration:(id)arg2;

@end

