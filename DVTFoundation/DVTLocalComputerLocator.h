//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDeviceLocator.h>

@interface DVTLocalComputerLocator : DVTDeviceLocator
{
}

+ (id)localComputer;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (id)deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (void)stopLocating;
- (void)startLocating;
- (id)platforms;
- (id)deviceLocationScheme;

@end

