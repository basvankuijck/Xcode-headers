//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTDaemonProxyProviding-Protocol.h>
#import <XCTDaemonControl/XCTDaemonSession-Protocol.h>

@class DTXConnection, DTXProxyChannel, NSError, NSMutableArray, NSString, XCTProtocolVersion;
@protocol OS_dispatch_queue, XCTDaemonSessionDelegate, XCTDebugLogDelegate, XCTTransportProvider, XCTestManager_DaemonConnectionInterface;

@interface XCTDaemonSession : NSObject <XCTDaemonProxyProviding, XCTDaemonSession>
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _invalidated
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <XCTDaemonSessionDelegate> _delegate;
    id <XCTDebugLogDelegate> _logDelegate;
    XCTProtocolVersion *_daemonProtocolVersion;
    DTXProxyChannel *_proxyChannel;
    NSError *_daemonConnectionError;
    NSMutableArray *_requests;
    DTXConnection *_dtxConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id <XCTTransportProvider> _transportProvider;
}

+ (id)sessionForSimulatorDevice:(id)arg1;
+ (id)sessionForLocalComputer;
@property(readonly) id <XCTTransportProvider> transportProvider; // @synthesize transportProvider=_transportProvider;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) DTXConnection *dtxConnection; // @synthesize dtxConnection=_dtxConnection;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain) NSError *daemonConnectionError; // @synthesize daemonConnectionError=_daemonConnectionError;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property(copy) XCTProtocolVersion *daemonProtocolVersion; // @synthesize daemonProtocolVersion=_daemonProtocolVersion;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property __weak id <XCTDaemonSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)_on_queue_processPendingRequests;
- (void)_on_queue_handleDaemonConnectionError:(id)arg1;
- (void)_handleDisconnect;
- (void)_on_queue_configureWithTransport:(id)arg1;
- (void)_handleTransport:(id)arg1 error:(id)arg2;
@property(readonly, copy) XCTProtocolVersion *protocolVersion;
@property(readonly) id <XCTestManager_DaemonConnectionInterface> proxy;
- (void)enqueueRequest:(id)arg1;
- (id)proxyChannelForConnection:(id)arg1;
- (void)_tearDownConnectionAndProxyChannel;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1;
- (CDUnknownBlockType)completionOnCallbackQueue:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

