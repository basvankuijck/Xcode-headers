//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface IDEPlaygroundDeviceCoordinator : NSObject
{
    NSMapTable *_deviceIdentifierToInterestedOwnersTable;
    NSMapTable *_deviceIdentifierToOwnerTable;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)relinquishOwnership:(id)arg1 ofDeviceWithIdentifier:(id)arg2;
- (void)requestOwnership:(id)arg1 ofDeviceWithIdentifier:(id)arg2;
- (id)currentOwnerOfDeviceWithIdentifier:(id)arg1;
- (id)init;

@end

