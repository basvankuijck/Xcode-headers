//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEOpenQuicklyResultGenerator, NSArray;

@interface IDEOpenQuicklyAggregationEntry : NSObject
{
    BOOL _finishedStarting;
    IDEOpenQuicklyResultGenerator *_generator;
    NSArray *_resultsOrderedByScore;
    long long _receivedGeneration;
}

@property(readonly) long long receivedGeneration; // @synthesize receivedGeneration=_receivedGeneration;
@property(readonly) NSArray *resultsOrderedByScore; // @synthesize resultsOrderedByScore=_resultsOrderedByScore;
@property(readonly) IDEOpenQuicklyResultGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (id)description;
- (void)noteDidFinishStarting;
- (BOOL)updateOrderedResults:(id)arg1 generation:(long long)arg2;
- (id)initWithGenerator:(id)arg1;

@end

