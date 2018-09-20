//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeviceType, DVTPlatform, NSMutableSet, NSSet, NSString;

@interface DVTDeviceLocator : NSObject
{
    NSMutableSet *_locatedDevices;
}

+ (id)deviceLocator;
+ (void)initialize;
- (void).cxx_destruct;
- (void)unpairDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pairCompanionDevice:(id)arg1 withGizmoDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 genericOnly:(BOOL)arg2 allowMultipleMatches:(BOOL)arg3 error:(id *)arg4;
@property(readonly) DVTDeviceType *deviceType; // @dynamic deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (void)stopLocating;
- (BOOL)startLocatingWithError:(id *)arg1;
- (void)startLocating;
@property(readonly, copy) NSSet *platforms;
@property(readonly, copy) DVTPlatform *platform;
@property(readonly, copy) NSString *deviceLocationScheme; // @dynamic deviceLocationScheme;
- (id)init;

// Remaining properties
@property(readonly, copy) NSSet *locatedDevices; // @dynamic locatedDevices;
@property(readonly, copy) NSMutableSet *mutableLocatedDevices; // @dynamic mutableLocatedDevices;

@end

