//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class IDESchemeBuildableReference, NSArray;

@protocol IDECodeCoverageTargetProviding
@property(readonly, nonatomic) NSArray *codeCoverageTargets;
@property(nonatomic) BOOL onlyGenerateCoverageForSpecifiedTargets;
@property(nonatomic) BOOL codeCoverageEnabled;
- (NSArray *)resolvedCodeCoverageBuildables;
- (void)removeCodeCoverageTarget:(IDESchemeBuildableReference *)arg1;
- (void)addCodeCoverageTarget:(IDESchemeBuildableReference *)arg1;
@end

