//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUTraceDebuggerUI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface GPUSharedUIState : NSObject <DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_stateTable;
    NSString *_identifier;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setState:(id)arg1 ForKey:(id)arg2;
- (id)stateForKey:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIdentifer:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

