//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (DVTInstrumentsUtilities)
+ (id)dvtiu_errorWithCode:(unsigned long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;
+ (id)dvtiuErrorWithFormat:(id)arg1;
+ (id)dvtiuErrorWithCode:(unsigned long long)arg1;
- (BOOL)dvtiu_isURLAlreadyExistsError;
- (BOOL)getRecommendedRecoveryAction:(id *)arg1 parameter:(id *)arg2;
@end

