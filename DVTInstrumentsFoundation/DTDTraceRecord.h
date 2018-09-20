//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTDTraceRecord : NSObject
{
    int _pid;
    unsigned long long _type;
    unsigned long long _timestamp;
    const char *_eventText;
    unsigned long long _eventTextLength;
    const unsigned long long *_userStackFrames;
    unsigned long long _numUserFrames;
    const unsigned long long *_kernelStackFrames;
    unsigned long long _numKernelFrames;
    NSString *_consoleMessage;
}

@property(retain, nonatomic) NSString *consoleMessage; // @synthesize consoleMessage=_consoleMessage;
@property(nonatomic) unsigned long long numKernelFrames; // @synthesize numKernelFrames=_numKernelFrames;
@property(nonatomic) const unsigned long long *kernelStackFrames; // @synthesize kernelStackFrames=_kernelStackFrames;
@property(nonatomic) unsigned long long numUserFrames; // @synthesize numUserFrames=_numUserFrames;
@property(nonatomic) const unsigned long long *userStackFrames; // @synthesize userStackFrames=_userStackFrames;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long eventTextLength; // @synthesize eventTextLength=_eventTextLength;
@property(nonatomic) const char *eventText; // @synthesize eventText=_eventText;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

