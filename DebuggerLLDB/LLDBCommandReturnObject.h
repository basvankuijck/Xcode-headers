//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBCommandReturnObject-Protocol.h>

@class NSString;

@interface LLDBCommandReturnObject : NSObject <DBGSBCommandReturnObject>
{
    struct SBCommandReturnObject {
        struct unique_ptr<lldb_private::CommandReturnObject, std::__1::default_delete<lldb_private::CommandReturnObject>> m_opaque_ap;
    } _commandReturnObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetOutputSize;
- (const char *)GetOutput;
- (unsigned long long)GetErrorSize;
- (const char *)GetError;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

