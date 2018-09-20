//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, _XRDTraceStackTrace;

@interface DTDTraceTapRecordDecoder : NSObject
{
    _XRDTraceStackTrace *_userStackTrace;
    _XRDTraceStackTrace *_kernelStackTrace;
    struct __sFILE *_dtraceFile;
    char *_readBuf;
    unsigned long long _bytesInReadBuffer;
    long long _currentFilepos;
    unsigned int _maxStackDepth;
    NSURL *_fileURL;
}

+ (unsigned int)stringDelimiterLength;
+ (const char *)stringDelimiter;
@property(readonly, nonatomic) unsigned int maxStackDepth; // @synthesize maxStackDepth=_maxStackDepth;
@property(readonly, retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (void)enumerateRecordsUpToPosition:(long long)arg1 timestamp:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void *)_processUnformattedData:(char *)arg1 len:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1 maxStackDepth:(unsigned int)arg2;

@end

