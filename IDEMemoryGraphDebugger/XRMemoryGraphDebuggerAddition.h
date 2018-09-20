//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEMemoryGraphDebugger/IDEDebuggingAddition-Protocol.h>

@class DVTStackBacktrace, IDELaunchSession, NSString, XRMemoryGraphDebugger;

@interface XRMemoryGraphDebuggerAddition : NSObject <IDEDebuggingAddition>
{
    XRMemoryGraphDebugger *_memoryGraphDebugger;
    IDELaunchSession *_launchSession;
    NSString *_identifier;
}

+ (id)errorMessageForSession:(id)arg1;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) XRMemoryGraphDebugger *memoryGraphDebugger; // @synthesize memoryGraphDebugger=_memoryGraphDebugger;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *targetPlatform;
- (void)initiateMemoryGraphDebugging;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

