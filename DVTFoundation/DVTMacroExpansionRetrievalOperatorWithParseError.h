//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTMacroExpansionRetrievalOperator.h>

@class NSError;

@interface DVTMacroExpansionRetrievalOperatorWithParseError : DVTMacroExpansionRetrievalOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (void).cxx_destruct;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithParseError:(id)arg1;

@end

