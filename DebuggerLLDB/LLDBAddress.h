//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBAddress-Protocol.h>

@class NSString;

@interface LLDBAddress : NSObject <DBGSBAddress>
{
    struct SBAddress {
        struct unique_ptr<lldb_private::Address, std::__1::default_delete<lldb_private::Address>> m_opaque_ap;
    } _address;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetOffset;
- (id)initWithSBAddress:(struct SBAddress *)arg1;
- (unsigned long long)GetLoadAddress:(id)arg1;
- (id)GetLineEntry;
- (id)GetModule;
- (id)GetSymbol;
- (id)GetSymbolContext:(unsigned int)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

