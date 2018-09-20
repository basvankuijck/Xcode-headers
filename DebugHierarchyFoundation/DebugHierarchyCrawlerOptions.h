//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DebugHierarchyCrawlerOptions : NSObject
{
    NSArray *_rootItems;
    NSArray *_groupingIdentifiers;
    BOOL _groupingIdentifiersAreExclusive;
    long long _groupVisibilityMask;
    unsigned long long _maximumObjectDepth;
    unsigned long long _maximumObjectCount;
}

@property unsigned long long maximumObjectCount; // @synthesize maximumObjectCount=_maximumObjectCount;
@property unsigned long long maximumObjectDepth; // @synthesize maximumObjectDepth=_maximumObjectDepth;
@property long long groupVisibilityMask; // @synthesize groupVisibilityMask=_groupVisibilityMask;
@property BOOL groupingIdentifiersAreExclusive; // @synthesize groupingIdentifiersAreExclusive=_groupingIdentifiersAreExclusive;
@property(retain) NSArray *groupingIdentifiers; // @synthesize groupingIdentifiers=_groupingIdentifiers;
@property(readonly) NSArray *rootItems; // @synthesize rootItems=_rootItems;
- (void).cxx_destruct;
- (BOOL)shouldCrawlObject:(id)arg1;
- (BOOL)shouldCrawlGroupWithID:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setGroupingIdentifiers:(id)arg1 exclusive:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;

@end

