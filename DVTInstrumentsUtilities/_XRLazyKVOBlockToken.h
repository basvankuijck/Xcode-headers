//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRLazyKVOResponder-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _XRLazyKVOBlockToken : NSObject <XRLazyKVOResponder>
{
    id _object;
    id _observer;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)handleLazyKVOUpdate:(id)arg1;
- (id)initWithObject:(id)arg1 observer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

