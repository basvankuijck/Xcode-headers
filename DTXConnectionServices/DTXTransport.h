//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTXResourceTracker, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DTXTransport : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;
    NSObject<OS_dispatch_queue> *_handlerGuard;
    DTXResourceTracker *_tracker;
    CDUnknownBlockType _dataReceivedHandler;
    unsigned int _status;
    NSObject<OS_dispatch_semaphore> *_waitForResume;
    // Error parsing type: AB, name: _resumed
}

+ (BOOL)recognizesURL:(id)arg1;
+ (id)schemes;
@property(readonly, nonatomic) DTXResourceTracker *resourceTracker; // @synthesize resourceTracker=_tracker;
@property unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (unsigned int)supportedDirections;
- (id)permittedBlockCompressionTypes;
@property(readonly) NSArray *localAddresses;
@property(copy, nonatomic) CDUnknownBlockType dataReceivedHandler;
- (void)serializedDisconnect:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(CDUnknownBlockType)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2 withRateLimiter:(id)arg3;
- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;
- (id)initWithRemoteAddress:(id)arg1;
- (id)initWithLocalAddress:(id)arg1;
- (void)dealloc;
- (id)serializedXPCRepresentation;
- (id)initWithXPCRepresentation:(id)arg1;
- (id)init;
- (BOOL)canTransmit;
- (BOOL)canReceive;

@end

