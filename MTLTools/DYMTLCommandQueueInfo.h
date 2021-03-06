//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLTools/NSCopying-Protocol.h>
#import <MTLTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface DYMTLCommandQueueInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _canBeCaptured;
    BOOL _isOpenGLQueue;
    BOOL _isInternalQueue;
    NSString *_displayName;
    unsigned long long _deviceAddress;
    unsigned long long _queueAddress;
    unsigned long long _toolsQueueAddress;
    NSString *_label;
}

+ (BOOL)isLabelAppleInternal:(const char *)arg1;
+ (id)capturableObjectType;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isInternalQueue; // @synthesize isInternalQueue=_isInternalQueue;
@property(nonatomic) BOOL isOpenGLQueue; // @synthesize isOpenGLQueue=_isOpenGLQueue;
@property(nonatomic) BOOL canBeCaptured; // @synthesize canBeCaptured=_canBeCaptured;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long toolsQueueAddress; // @synthesize toolsQueueAddress=_toolsQueueAddress;
@property(readonly, nonatomic) unsigned long long queueAddress; // @synthesize queueAddress=_queueAddress;
@property(readonly, nonatomic) unsigned long long deviceAddress; // @synthesize deviceAddress=_deviceAddress;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithCommandQueue:(id)arg1;

@end

