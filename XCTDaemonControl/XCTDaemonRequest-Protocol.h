//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTDaemonControl/NSObject-Protocol.h>

@class NSError, XCTProtocolVersion;
@protocol XCTDaemonProxyProviding;

@protocol XCTDaemonRequest <NSObject>
+ (XCTProtocolVersion *)minimumProtocolVersion;
- (void)handleConnectionFailure:(NSError *)arg1;
- (void)executeWithDaemonProxyProvider:(id <XCTDaemonProxyProviding>)arg1;
@end

