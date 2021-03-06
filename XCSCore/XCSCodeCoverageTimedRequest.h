//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, XCSService;

@interface XCSCodeCoverageTimedRequest : NSObject
{
    NSString *_base;
    XCSService *_service;
    double _timeout;
    long long _policy;
    id _delegate;
    id _context;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *base; // @synthesize base=_base;
- (void).cxx_destruct;
- (void)clearTimer;
- (void)performRequestWithTimer:(id)arg1;
- (void)performRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithURLBase:(id)arg1 service:(id)arg2 timeout:(double)arg3 policy:(long long)arg4 delegate:(id)arg5 context:(id)arg6;

@end

