//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapMessageHandler.h>

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class DTXConnection, NSString;

@interface DTTapMessageHandlerArchiver : DTTapMessageHandler <DTXAllowedRPC>
{
    DTXConnection *_helperConnection;
}

- (void).cxx_destruct;
- (void)_helperConnectionError;
- (id)messageReceived:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 archiveURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

