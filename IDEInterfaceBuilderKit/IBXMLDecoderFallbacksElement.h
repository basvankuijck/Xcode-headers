//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class NSArray, NSMutableArray;

@interface IBXMLDecoderFallbacksElement : IBXMLDecoderElement
{
    NSMutableArray *_nameElements;
}

+ (id)elementName;
- (void).cxx_destruct;
- (void)enumerateElements:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *nameElements;
- (BOOL)acceptNameElement:(id)arg1 error:(id *)arg2;
- (BOOL)requestInsertionIntoParent:(id)arg1 error:(id *)arg2;

@end

