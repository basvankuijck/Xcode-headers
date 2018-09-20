//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class NSArray;

@interface IDEOpenQuicklyAlternateGroupResult : IDEOpenQuicklyResult
{
    IDEOpenQuicklyResult *_primaryResult;
    NSArray *_alternatesIncludingPrimaryChoice;
    NSArray *_alternatesExcludingPrimaryChoice;
}

+ (id)alternateGroupResultForAlternates:(id)arg1;
+ (id)orderedResutlsByCombiningAlternates:(id)arg1;
+ (id)flattenAndOrderAlternates:(id)arg1;
@property(readonly) NSArray *alternatesExcludingPrimaryChoice; // @synthesize alternatesExcludingPrimaryChoice=_alternatesExcludingPrimaryChoice;
@property(readonly) NSArray *alternatesIncludingPrimaryChoice; // @synthesize alternatesIncludingPrimaryChoice=_alternatesIncludingPrimaryChoice;
@property(readonly) IDEOpenQuicklyResult *primaryResult; // @synthesize primaryResult=_primaryResult;
- (void).cxx_destruct;
- (id)childResults;
- (BOOL)representsAlternativeOfResult:(id)arg1;
- (unsigned long long)hashForAlternateIdentity;
- (id)valueStandingInForForAlternateIdentity;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsAlternateGroupResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)flattenToPrimaryResult;
- (BOOL)isFromPoject;
- (id)sourceSDKFilePath;
- (id)location;
- (BOOL)isSymbolic;
- (id)updatedResultForQuery:(id)arg1;

@end

