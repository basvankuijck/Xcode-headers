//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBExpressionOptions-Protocol.h>

@class NSString;

@interface LLDBRPCExpressionOptions : NSObject <DBGSBExpressionOptions>
{
    struct SBExpressionOptions {
        unsigned int m_connection_id;
        unsigned int m_class_id;
        unsigned long long m_object_id;
    } _expressionOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetTrapExceptions:(_Bool)arg1;
- (void)SetFetchDynamicValue:(int)arg1;
- (void)SetLanguage:(int)arg1;
- (void)SetTimeoutInMicroSeconds:(unsigned int)arg1;
- (void)SetUnwindOnError:(_Bool)arg1;
- (void)SetTryAllThreads:(_Bool)arg1;
- (void)SetIgnoreBreakpoints:(_Bool)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

