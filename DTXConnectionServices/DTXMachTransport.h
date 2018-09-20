//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXTransport.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTXMachTransport : DTXTransport
{
    unsigned int _receivePort;
    unsigned int _sendPort;
    NSURL *_connectableAddress;
    NSObject<OS_dispatch_source> *_listenSource;
    NSObject<OS_dispatch_source> *_deadPortSource;
    NSObject<OS_dispatch_queue> *_inputQueue;
    struct DTXMachMessage *_sendBuffer;
    unsigned int _bufferedLength;
}

+ (id)fileDescriptorHandshakeWithSendPort:(unsigned int)arg1;
+ (id)fileDescriptorHandshakeWithReceivePort:(unsigned int)arg1;
+ (id)addressForSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 inProcess:(int)arg3;
+ (id)transportForCommunicationWithTask:(unsigned int)arg1;
+ (id)schemes;
- (void).cxx_destruct;
- (id)localAddresses;
- (void)disconnect;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalAddress:(id)arg1;
- (id)initWithSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 publishedAddress:(id)arg3;
- (BOOL)_setupWithAddress:(id)arg1;
- (BOOL)_setupWithSendPort:(unsigned int)arg1 receivePort:(unsigned int)arg2 publishedAddress:(id)arg3;

@end

