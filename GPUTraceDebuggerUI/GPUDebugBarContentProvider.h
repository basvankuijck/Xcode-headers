//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class DVTObservingToken, GPUDebuggingAddition;

__attribute__((visibility("hidden")))
@interface GPUDebugBarContentProvider : IDEDebugBarContentProvider
{
    GPUDebuggingAddition *_currentDebuggingAddition;
    DVTObservingToken *_debuggingAdditionsObservation;
}

@property(retain) GPUDebuggingAddition *currentDebuggingAddition; // @synthesize currentDebuggingAddition=_currentDebuggingAddition;
- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;

@end

