//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSCoder, NSString;

@protocol NSWindowRestoration <NSObject>
+ (void)restoreWindowWithIdentifier:(NSString *)arg1 state:(NSCoder *)arg2 completionHandler:(void (^)(NSWindow *, NSError *))arg3;
@end

