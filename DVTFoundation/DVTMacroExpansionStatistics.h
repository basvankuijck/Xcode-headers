//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface DVTMacroExpansionStatistics : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned long long _numMacroDefinitionLookups;
    NSCountedSet *_macroNameLookupCounts;
    unsigned long long _numMacroLookupCursorsCreated;
    NSCountedSet *_macroNameLookupCursorCreationCounts;
    unsigned long long _numFirstDefinitionRetrievals;
    NSCountedSet *_macroNameFirstDefnRetrievalCounts;
}

+ (id)defaultStatistics;
@property(readonly) NSCountedSet *macroNameFirstDefnRetrievalCounts; // @synthesize macroNameFirstDefnRetrievalCounts=_macroNameFirstDefnRetrievalCounts;
@property(readonly) unsigned long long numFirstDefinitionRetrievals; // @synthesize numFirstDefinitionRetrievals=_numFirstDefinitionRetrievals;
@property(readonly) NSCountedSet *macroNameLookupCursorCreationCounts; // @synthesize macroNameLookupCursorCreationCounts=_macroNameLookupCursorCreationCounts;
@property(readonly) unsigned long long numMacroLookupCursorsCreated; // @synthesize numMacroLookupCursorsCreated=_numMacroLookupCursorsCreated;
@property(readonly) NSCountedSet *macroNameLookupCounts; // @synthesize macroNameLookupCounts=_macroNameLookupCounts;
@property(readonly) unsigned long long numMacroDefinitionLookups; // @synthesize numMacroDefinitionLookups=_numMacroDefinitionLookups;
- (void).cxx_destruct;
- (void)recordRetrievalOfFirstDefinitionForMacroName:(id)arg1;
- (void)recordLookupCursorCreationForMacroName:(id)arg1;
- (void)recordLookupEventForMacroName:(id)arg1;
@property(readonly) unsigned long long numUniqueMacroNamesLookedUp;
- (id)init;

@end

