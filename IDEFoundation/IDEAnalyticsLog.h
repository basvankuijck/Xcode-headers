//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugProcess.h>

@class IDEAnalyticsPoint, IDEStackFrame;

@interface IDEAnalyticsLog : IDEDebugProcess
{
    IDEAnalyticsPoint *_analyticsPoint;
    IDEStackFrame *_blameStackFrame;
}

@property(retain, nonatomic) IDEStackFrame *blameStackFrame; // @synthesize blameStackFrame=_blameStackFrame;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)isPaused;
- (id)parentDebugSession;
- (id)associatedProcessUUID;
- (id)initWithAnalyticsPoint:(id)arg1;
- (id)init;
- (id)initWithDebugSession:(id)arg1;

@end

