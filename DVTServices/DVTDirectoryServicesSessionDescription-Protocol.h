//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTServices/NSObject-Protocol.h>

@class DVTDeveloperAccount, NSData, NSString;

@protocol DVTDirectoryServicesSessionDescription <NSObject>
@property(readonly, copy, nonatomic) NSData *sessionData;
@property(readonly, copy, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) DVTDeveloperAccount *account;
@end

