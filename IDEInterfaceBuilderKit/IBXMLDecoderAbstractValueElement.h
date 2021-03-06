//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBXMLDecoderElement.h>

@class NSData, NSString;

@interface IBXMLDecoderAbstractValueElement : IBXMLDecoderElement
{
    NSData *_value;
    NSString *_key;
}

@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)interpretedBytesValue;
@property(readonly) double interpretedDoubleValue;
@property(readonly) float interpretedFloatValue;
@property(readonly) long long interpretedLongLongValue;
@property(readonly) BOOL interpretedBoolValue;
- (id)initWithAttributes:(const char **)arg1 stringTable:(id)arg2 error:(id *)arg3;

@end

