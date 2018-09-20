//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEMediaResourceFoldingStrategy, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEMediaResourceVariantContext : NSObject <DVTInvalidation>
{
    NSMapTable *_repositoriesToMediaTypesToNamesToVariantSets;
    NSMapTable *_repositoriesToObservationTokens;
    NSMutableDictionary *_mediaTypesToVariantSets;
    NSMutableSet *_variantSets;
    NSSet *_repositories;
    NSMutableDictionary *_observers;
    NSSet *_mediaRepositories;
    IDEMediaResourceFoldingStrategy *_foldingStrategy;
}

+ (void)initialize;
@property(readonly) IDEMediaResourceFoldingStrategy *foldingStrategy; // @synthesize foldingStrategy=_foldingStrategy;
@property(readonly) NSSet *variantSets; // @synthesize variantSets=_variantSets;
@property(readonly) NSSet *mediaRepositories; // @synthesize mediaRepositories=_mediaRepositories;
- (void).cxx_destruct;
- (void)repository:(id)arg1 didAddOrUpdateResources:(id)arg2 andRemoveResources:(id)arg3;
- (void)notifyObserversOfAddsAndModifies:(id)arg1 andDeletes:(id)arg2;
- (id)registerVariantContextObserverWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)variantSetsOfMediaType:(id)arg1;
- (id)variantSetsWithName:(id)arg1 andMediaType:(id)arg2;
- (id)variantSetsWithNames:(id)arg1 andMediaType:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithFoldingStratgey:(id)arg1 andMediaRepositories:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

