//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBBroadcaster-Protocol.h>

@class NSString;

@interface LLDBBroadcaster : NSObject <DBGSBBroadcaster>
{
    struct SBBroadcaster {
        struct shared_ptr<lldb_private::Broadcaster> m_opaque_sp;
        struct Broadcaster *m_opaque_ptr;
    } _broadcaster;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBBroadcaster:(const struct SBBroadcaster *)arg1;
- (_Bool)IsValid;
- (void)BroadcastEventByType:(unsigned int)arg1 unique:(_Bool)arg2;
- (id)initWithConnection:(id)arg1 name:(const char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

