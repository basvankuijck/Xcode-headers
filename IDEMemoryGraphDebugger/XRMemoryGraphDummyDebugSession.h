//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugSession.h>

@class IDEWorkspace;

@interface XRMemoryGraphDummyDebugSession : IDEDebugSession
{
    IDEWorkspace *_workspace;
}

@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)requestPause;

@end

