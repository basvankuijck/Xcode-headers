//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTAnalyticsLogStackFrameProtocol-Protocol.h>

@class NSString;

@interface DVTCrashLogParsedStackFrame : NSObject <DVTAnalyticsLogStackFrameProtocol>
{
    BOOL _symbolicated;
    NSString *_address;
    NSString *_comment;
    long long _depth;
    NSString *_image;
    NSString *_symbol;
    unsigned long long _offset;
    NSString *_sourceFile;
    unsigned long long _sourceLine;
    NSString *_parserIdentifier;
}

@property(readonly) NSString *parserIdentifier; // @synthesize parserIdentifier=_parserIdentifier;
@property unsigned long long sourceLine; // @synthesize sourceLine=_sourceLine;
@property(retain) NSString *sourceFile; // @synthesize sourceFile=_sourceFile;
@property unsigned long long offset; // @synthesize offset=_offset;
@property(retain) NSString *symbol; // @synthesize symbol=_symbol;
@property(retain) NSString *image; // @synthesize image=_image;
@property long long depth; // @synthesize depth=_depth;
@property(getter=isSymbolicated) BOOL symbolicated; // @synthesize symbolicated=_symbolicated;
@property(retain) NSString *comment; // @synthesize comment=_comment;
@property(retain) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly) NSString *instructionPointerAddressString;
@property(readonly) unsigned long long stackFrameOffset;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithParserIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

