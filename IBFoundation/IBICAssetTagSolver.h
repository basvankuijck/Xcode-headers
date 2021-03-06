//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMutableIdentityDictionary, NSDictionary, NSSet;

@interface IBICAssetTagSolver : NSObject
{
    IBMutableIdentityDictionary *_cachedCumulativePropagatedTags;
    IBMutableIdentityDictionary *_cachedAcceptedTags;
    NSDictionary *_adornersByAndornees;
    NSSet *_solutionSpace;
}

@property(readonly) NSSet *solutionSpace; // @synthesize solutionSpace=_solutionSpace;
- (void).cxx_destruct;
- (id)cumulativeTagsPropagatedToItem:(id)arg1;
- (id)cumulativeTagsPropagatedByItem:(id)arg1;
- (id)acceptedTagsForItem:(id)arg1;
- (id)setByUnioningTags:(id)arg1 withLocalTagsFromItem:(id)arg2;
- (id)adornersForAdornee:(id)arg1;
- (id)initWithSolutionSpace:(id)arg1 error:(id *)arg2;

@end

