//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEiPhoneSupport/NSObject-Protocol.h>

@class NSString;
@protocol DVTBroadcastName;

@protocol IDEInfoPlistCoordination <NSObject>
- (id <DVTBroadcastName>)infoPlistCoordinatorDidChangeBroadcastName;
- (void)removeValue:(id)arg1 fromArrayForPlistSetting:(NSString *)arg2;
- (void)addValue:(id)arg1 toArrayForPlistSetting:(NSString *)arg2;
- (void)setValue:(id)arg1 forPlistSetting:(NSString *)arg2;
- (id)valueForPlistSetting:(NSString *)arg1 ofType:(Class)arg2;
- (id)valueForPlistSetting:(NSString *)arg1;
@end

