//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTMarkdownDocumentOwnershipToken, NSError;

@interface DVTMarkdownParser : NSObject
{
    struct cmark_parser *parser;
    struct cmark_node *documentNode;
    struct cmark_node *traversingNode;
    BOOL aborted;
    DVTMarkdownDocumentOwnershipToken *ownershipToken;
    NSError *_parseError;
}

+ (id)generateHTMLStringFromMarkdown:(id)arg1 variant:(unsigned long long)arg2 usingOptions:(unsigned long long)arg3;
+ (id)generateHTMLStringFromMarkdown:(id)arg1 usingOptions:(unsigned long long)arg2;
+ (id)generateHTMLStringFromMarkdown:(id)arg1;
@property(retain) NSError *parseError; // @synthesize parseError=_parseError;
- (void).cxx_destruct;
- (void)enumerateSourceExtentsWithNodes:(CDUnknownBlockType)arg1;
- (void)enumerateSourceExtents:(CDUnknownBlockType)arg1;
- (void)abortWithError:(id)arg1;
- (BOOL)traverseOutputWithDelegate:(id)arg1 error:(id *)arg2;
- (void)traverseOutputWithDelegate:(id)arg1;
- (id)generateHTMLStringWithLanguageVariant:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2;
- (id)generateHTMLStringUsingOptions:(unsigned long long)arg1;
- (id)generateHTMLString;
@property(readonly) CDStruct_33dcf794 currentSourcePosition;
- (id)documentOwnershipToken;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;

@end

