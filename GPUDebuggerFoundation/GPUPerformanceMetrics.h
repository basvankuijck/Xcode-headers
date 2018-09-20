//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPerformanceMetric;

@interface GPUPerformanceMetrics : NSObject
{
    DVTPerformanceMetric *_perceivedCaptureMetric;
    DVTPerformanceMetric *_perceivedReplayMetric;
    BOOL _enableImageRendererCheckpoints;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *logfd;
}

+ (id)defaultMetrics;
- (void).cxx_destruct;
- (void)imageRendererCompleted:(id)arg1;
- (void)imageRendererCheckpoint:(id)arg1 forResourceID:(id)arg2;
- (void)imageRendererStarted:(id)arg1 enableCheckpoints:(BOOL)arg2;
- (void)perceivedCaptureCompleted;
- (void)perceivedCaptureCheckpoint:(id)arg1;
- (void)perceivedCaptureStarted;
- (void)perceivedReplayCompleted;
- (void)perceivedReplayCheckpoint:(id)arg1;
- (void)perceivedReplayStarted;
- (void)xcuiLog:(id)arg1 subLog:(id)arg2;
- (BOOL)useXCUI;
- (void)dealloc;
- (id)init;

@end

