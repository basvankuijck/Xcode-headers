//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTDeviceKitBase/DVTCancellable-Protocol.h>

@class NSMutableSet, NSString;

@interface DTDKCopyValueRequest : NSObject <DVTCancellable>
{
    NSMutableSet *_promises;
    BOOL _cancelled;
    NSString *_domain;
    NSString *_key;
}

+ (id)requestWithDomain:(id)arg1 key:(id)arg2;
@property(readonly, copy) NSString *key; // @synthesize key=_key;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)cancel;
- (BOOL)cancelled;
- (void)finishWithResult:(id)arg1 andError:(int)arg2;
- (void)addPromise:(id)arg1;

// Remaining properties
@property(readonly, getter=isCancelled) BOOL cancelled; // @dynamic cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

