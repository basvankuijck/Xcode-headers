//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface LOCPlistParseInfo : NSObject
{
    unsigned short _quoteCharacter;
    const unsigned short *_begin;
    const unsigned short *_curr;
    const unsigned short *_end;
    NSError *_error;
    NSMutableArray *_tokens;
    NSMutableString *_skippedChunk;
    NSMutableString *_unescapedPlistString;
    NSMutableDictionary *_typeContentsPairDictForStringKey;
    void *_reserve;
}

@property void *reserve; // @synthesize reserve=_reserve;
@property unsigned short quoteCharacter; // @synthesize quoteCharacter=_quoteCharacter;
@property(retain) NSMutableDictionary *typeContentsPairDictForStringKey; // @synthesize typeContentsPairDictForStringKey=_typeContentsPairDictForStringKey;
@property(retain) NSMutableString *unescapedPlistString; // @synthesize unescapedPlistString=_unescapedPlistString;
@property(retain) NSMutableString *skippedChunk; // @synthesize skippedChunk=_skippedChunk;
@property(retain) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(retain) NSError *error; // @synthesize error=_error;
@property const unsigned short *end; // @synthesize end=_end;
@property const unsigned short *curr; // @synthesize curr=_curr;
@property const unsigned short *begin; // @synthesize begin=_begin;
- (void).cxx_destruct;
- (id)init;

@end

