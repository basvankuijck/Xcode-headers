//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsUtilities/NSObject-Protocol.h>

@class NSString, XRLazyKVOAdapter;

@protocol XRLazyKVOResponder <NSObject>
- (void)handleLazyKVOUpdate:(XRLazyKVOAdapter *)arg1;

@optional
- (void)prepareForLazyKVOUpdate:(XRLazyKVOAdapter *)arg1 object:(id)arg2 keyPath:(NSString *)arg3 context:(const void *)arg4;
@end

