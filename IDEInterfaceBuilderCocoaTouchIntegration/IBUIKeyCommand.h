//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class NSString;

@interface IBUIKeyCommand : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    int _modifierFlags;
    NSString *_input;
    NSString *_actionName;
    NSString *_discoverabilityTitle;
    NSString *_segueName;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(copy, nonatomic) NSString *segueName; // @synthesize segueName=_segueName;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(nonatomic) int modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (id)inputAndModifierMaskAsIBKeyEquivalent;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

