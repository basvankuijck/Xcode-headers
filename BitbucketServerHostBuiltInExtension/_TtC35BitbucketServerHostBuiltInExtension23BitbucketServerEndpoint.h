//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XCSourceControlHostEndpoint-Protocol.h"

__attribute__((visibility("hidden")))
@interface _TtC35BitbucketServerHostBuiltInExtension23BitbucketServerEndpoint : NSObject <XCSourceControlHostEndpoint>
{
}

- (id)init;
- (void)username:(id)arg1 url:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)repositoryMetadata:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)validateSSHKey:(id)arg1 account:(id)arg2 publicSSHKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)listSSHKeys:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)uploadSSHKey:(id)arg1 account:(id)arg2 publicSSHKey:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)loginHelpURL:(id)arg1 url:(id)arg2 username:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)membership:(id)arg1 account:(id)arg2 options:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)user:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAuthCode:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)validateCredentials:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestPersonalAccessToken:(id)arg1 account:(id)arg2 twoFactorCode:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unstar:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)star:(id)arg1 account:(id)arg2 repository:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)capabilities:(id)arg1 account:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)webURLComponents:(CDUnknownBlockType)arg1;
- (void)webURL:(id)arg1 sha:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)webURL:(id)arg1 branch:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)webURL:(id)arg1 tag:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)webURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)avatar:(id)arg1 account:(id)arg2 email:(id)arg3 size:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)avatar:(id)arg1 account:(id)arg2 username:(id)arg3 size:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createRepository:(id)arg1 account:(id)arg2 owner:(id)arg3 name:(id)arg4 description:(id)arg5 homepage:(id)arg6 private:(BOOL)arg7 reply:(CDUnknownBlockType)arg8;
- (void)repositories:(id)arg1 account:(id)arg2 type:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)searchRepositories:(id)arg1 account:(id)arg2 query:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)shouldAllowAvatarFrom:(id)arg1 withAccount:(id)arg2;
- (void)cancelOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

