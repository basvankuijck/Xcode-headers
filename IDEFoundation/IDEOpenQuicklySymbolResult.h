//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEOpenQuicklyResult.h>

@class DVTDocumentLocation, DVTFilePath;
@protocol IDEOpenQuicklyIndexSymbol;

@interface IDEOpenQuicklySymbolResult : IDEOpenQuicklyResult
{
    DVTDocumentLocation *_location;
    DVTFilePath *_sourceSDKFilePath;
    DVTFilePath *_symbolFilePath;
    id <IDEOpenQuicklyIndexSymbol> _symbol;
}

+ (id)resultWithCandidate:(struct IDEOpenQuicklyQueryCandidate *)arg1 symbol:(id)arg2 query:(id)arg3;
+ (double)scoreAdjustmentForSymbolKind:(id)arg1;
@property(readonly) id <IDEOpenQuicklyIndexSymbol> symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (id)alternateTitleGivenParentResult:(id)arg1;
- (id)valueStandingInForForAlternateIdentity;
- (unsigned long long)hashForAlternateIdentity;
- (BOOL)isFromPoject;
- (BOOL)isSymbolic;
- (id)sourceSDKFilePath;
- (id)location;
- (BOOL)representsSameResult:(id)arg1;
- (BOOL)representsSameResultAsSymbolResult:(id)arg1;
- (unsigned long long)hashOfResultIdentity;
- (id)updatedResultForQuery:(id)arg1;

@end

