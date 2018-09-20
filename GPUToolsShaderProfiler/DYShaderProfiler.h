//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYShaderAnalyzer;
@protocol DYShaderProfilerDelegate;

@interface DYShaderProfiler : NSObject
{
    id <DYShaderProfilerDelegate> _delegate;
    struct dispatch_queue_s *_queue;
    DYShaderAnalyzer *_shaderAnalyzer;
    int _pendingRequestLock;
    unsigned int _pendingRequest;
}

+ (void)removeTemporaryDirectory;
+ (id)temporaryDirectory;
+ (id)extractShaderBinaryTextSegment:(id)arg1;
+ (BOOL)isDisassemblerAvailable;
+ (BOOL)isFramebufferFetchWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderBeginWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (BOOL)isRenderEndWithEvents:(void *)arg1 type:(unsigned int)arg2;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
+ (void)loadLLDB;
@property(readonly, nonatomic) __weak id <DYShaderProfilerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)calculateUtilizations:(id)arg1 result:(id)arg2;
- (int)metalPluginTarget:(id)arg1;
- (void)calculateFrameTime:(id)arg1 result:(id)arg2;
- (BOOL)isDeviceSupported;
- (BOOL)_isAlwaysEnabled;
- (id)profileFrame;
- (id)profileShader:(id)arg1;
- (void)initializeShaderAnalyzer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

