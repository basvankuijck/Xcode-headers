//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, DVTDeviceCapability, DVTExtension;

@interface DVTDeviceService : NSObject
{
    DVTDevice *_device;
    DVTExtension *_extension;
    DVTDeviceCapability *_currentCapability;
}

+ (id)capability;
@property(readonly) DVTDeviceCapability *currentCapability; // @synthesize currentCapability=_currentCapability;
@property(readonly) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;

@end

