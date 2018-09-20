//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTCustomDataOwnership, DVTCustomDataSpecifier, NSArray, NSData, NSOperationQueue, NSString;

@protocol DVTCustomDataStoring <NSObject>
@property(readonly) NSString *displayName;
- (BOOL)supportsCustomDataForOwnership:(DVTCustomDataOwnership *)arg1;
- (void)moveCustomDataWithSpecifier:(DVTCustomDataSpecifier *)arg1 toSpecifier:(DVTCustomDataSpecifier *)arg2 completionQueue:(NSOperationQueue *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)removeCustomDataWithSpecifier:(DVTCustomDataSpecifier *)arg1 completionQueue:(NSOperationQueue *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)writeCustomData:(NSData *)arg1 withSpecifier:(DVTCustomDataSpecifier *)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(NSOperationQueue *)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (NSData *)readCustomDataWithSpecifier:(DVTCustomDataSpecifier *)arg1 error:(id *)arg2;
- (NSArray *)customDataOwnershipsForGrouping:(NSString *)arg1;
- (NSArray *)customDataSpecifiersForGrouping:(NSString *)arg1 ownership:(DVTCustomDataOwnership *)arg2;
@end

