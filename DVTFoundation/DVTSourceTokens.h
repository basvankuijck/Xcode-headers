//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface DVTSourceTokens : NSObject
{
    NSMutableSet *_tokens;
    BOOL _caseSensitive;
}

+ (long long)addTokenForString:(id)arg1;
+ (long long)_tokenForString:(id)arg1;
- (void).cxx_destruct;
- (id)allTokens;
- (long long)tokenForString:(id)arg1;
- (BOOL)containsToken:(id)arg1;
- (void)setCaseSensitive:(BOOL)arg1;
- (void)addArrayOfStrings:(id)arg1;
- (id)initWithArrayOfStrings:(id)arg1 caseSensitive:(BOOL)arg2;

@end

