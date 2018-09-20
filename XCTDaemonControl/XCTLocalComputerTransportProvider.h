//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>
#import <XCTDaemonControl/XCTTransportProvider-Protocol.h>

@class NSString, NSXPCConnection;
@protocol XCTDebugLogDelegate, XCTRemoteHostDiagnosticReportsSynchronizing;

@interface XCTLocalComputerTransportProvider : NSObject <XCTTransportProvider, XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (void)invalidate;
- (void)makeTransportWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

