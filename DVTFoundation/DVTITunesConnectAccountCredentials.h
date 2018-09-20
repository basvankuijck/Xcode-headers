//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface DVTITunesConnectAccountCredentials : NSObject <NSSecureCoding>
{
    NSString *_username;
    NSString *_token;
    NSString *_alternateDSID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property(readonly) NSString *token; // @synthesize token=_token;
@property(readonly) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeveloperAccount:(id)arg1;
- (id)initWithUsername:(id)arg1 token:(id)arg2 alternateDSID:(id)arg3;

@end

