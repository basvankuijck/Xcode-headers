//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBXMLDecoderParserStringTable, NSDictionary, NSString;

@interface IBXMLDecoderElement : NSObject
{
    struct {
        unsigned char inlineBytes[32];
        char *bytes;
        unsigned long long length;
        unsigned long long capacity;
    } _characterBuffer;
    BOOL _charactersCompleted;
    NSString *_uninterpretedStringValue;
    IBXMLDecoderParserStringTable *_stringTable;
}

+ (id)elementName;
- (void).cxx_destruct;
- (BOOL)acceptNilElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptSetElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptArrayElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptDictionaryElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptStringElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptReferenceElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptObjectElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptBooleanElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptRealElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptIntegerElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptCharactersElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptBytesElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptDoubleElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptFloatElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptIntElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptBoolElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptAbstractObjectElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptAbstractValueElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptNameElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptFallbacksElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptClassElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptClassesElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptDataElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptArchiveElement:(id)arg1 error:(id *)arg2;
- (BOOL)acceptElement:(id)arg1 error:(id *)arg2;
- (id)interpretedObjectValue:(char *)arg1;
- (void)finishedAddingSubelements;
- (void)finishedInterpretingCharacters;
- (BOOL)interpretDataReturningError:(id *)arg1;
- (void)finishedAcceptingCharacters;
- (void)acceptCharacters:(const char *)arg1 length:(long long)arg2;
- (void)growCharacterBuffer:(long long)arg1;
- (void)invokeWithAccessToUninterpretedCharacters:(CDUnknownBlockType)arg1;
@property(readonly) NSString *uninterpretedStringValue;
- (BOOL)acceptsData;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;
- (BOOL)addElement:(id)arg1 error:(id *)arg2;
- (id)resolvedAbstractObjectElement;
@property(readonly) NSString *referencedIdentifier;
@property(readonly) NSString *identifier;
@property(readonly) NSDictionary *keyedAbstractValueElements;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
@property(readonly) NSString *elementName;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;
- (Class)elementClassForElementName:(const char *)arg1;

@end

