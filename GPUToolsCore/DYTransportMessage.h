//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsCore/NSCopying-Protocol.h>

@class DYTransport, NSData, NSDictionary;

@interface DYTransportMessage : NSObject <NSCopying>
{
    NSData *_payload;
    NSDictionary *_attributes;
    DYTransport *_transport;
    NSData *_encodedAttributes;
    id _decodedPayload;
    unsigned int _decodedPayloadType;
    int _kind;
    unsigned int _serial;
    unsigned int _replySerial;
    unsigned int _transportSize;
}

+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(BOOL)arg3;
+ (id)messageWithKind:(int)arg1 boolPayload:(BOOL)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;
+ (id)messageWithKind:(int)arg1;
@property(readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;
@property(readonly, retain, nonatomic) DYTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property(readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
- (id)objectPayload;
- (id)stringPayload;
- (id)plistPayload;
- (BOOL)boolPayload;
- (BOOL)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1;
- (unsigned int)uint32ForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)_setTransportSize:(unsigned int)arg1;
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;
- (BOOL)hasBeenSent;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(BOOL)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
- (id)init;

@end

