//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTSourceModelParser.h>

@interface DVTCSourceModelParser : DVTSourceModelParser
{
    void *_lexer;
}

+ (void)initialize;
+ (id)createTerminalNodeForToken:(CDStruct_341fcc3f *)arg1 scopeProductionRule:(id *)arg2;
+ (void)initializeLexerModes;
+ (id)languageSpecification;
- (void)_endLexerMode:(unsigned long long)arg1;
- (void)_beginLexerMode:(unsigned long long)arg1;
- (BOOL)_getNextToken:(CDStruct_341fcc3f *)arg1 temporaryFlags:(unsigned long long)arg2;
- (unsigned long long)_currentLocation;
- (void)_setCurrentLocation:(unsigned long long)arg1;
- (void)_resetLexerWithInputString:(id)arg1;
- (id)init;

@end

