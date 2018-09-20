//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/NSCopying-Protocol.h>

@class IBICSlot, NSString;

@interface IBICSlottedAssetRepIdentifier : NSObject <NSCopying>
{
    IBICSlot *_slot;
    NSString *_fileName;
    unsigned long long _conflictState;
}

+ (id)inferredRepIdentifiersGroupedByItemNameForPaths:(id)arg1;
+ (id)inferredRepIdentifiersForPaths:(id)arg1;
+ (CDUnknownBlockType)slotComponentTransformerForPaths:(id)arg1;
+ (id)orderImageRepPathsForDeterministicConflictResolution:(id)arg1;
+ (id)inferredRepIdentifierForPath:(id)arg1 slotComponentTransformer:(CDUnknownBlockType)arg2;
+ (id)inferredRepIdentifiersForImageReps:(id)arg1;
+ (Class)slotClass;
+ (id)explicitlyUnassignedIdentifierForFileName:(id)arg1;
+ (id)identifierWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long conflictState; // @synthesize conflictState=_conflictState;
@property(readonly) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) IBICSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *stringRepresentation;
- (long long)compareInTieBreakingOrder:(id)arg1;
- (BOOL)isExplicitlyUnassigned;
- (BOOL)isConflictFree;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImageCatalogImageRepIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)assetRepIdentifierBySettingConflictStateComponent:(unsigned long long)arg1 toValue:(BOOL)arg2;
- (long long)compareDisplayOrder:(id)arg1;
- (id)initWithSlot:(id)arg1 fileName:(id)arg2 conflictState:(unsigned long long)arg3;

@end

