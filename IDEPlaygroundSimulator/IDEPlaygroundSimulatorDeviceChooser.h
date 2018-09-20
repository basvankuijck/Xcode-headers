//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPlaygroundSimulator/IDEPlaygroundSimulatorDeviceChooserProtocol-Protocol.h>

@class NSString;

@interface IDEPlaygroundSimulatorDeviceChooser : NSObject <IDEPlaygroundSimulatorDeviceChooserProtocol>
{
}

+ (id)deviceTypeForPlatform:(id)arg1 inContext:(id)arg2;
+ (id)bestPlaygroundSimulatorDeviceForPlatform:(id)arg1 error:(id *)arg2;
+ (BOOL)isPlaygroundSimulatorAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

