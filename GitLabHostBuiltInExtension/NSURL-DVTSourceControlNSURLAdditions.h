//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (DVTSourceControlNSURLAdditions)
- (id)dvtscm_lastPathComponent;
- (id)dvtscm_lastPathComponentNoExtension;
- (BOOL)dvtscm_sameServerAs:(id)arg1;
- (id)dvtscm_serverURL;
- (BOOL)dvtscm_isValid;
- (BOOL)dvtscm_isSCPURI;
- (id)dvtscm_scpURL;
- (id)dvtscm_anonymousURL;
- (id)dvtscm_path;
- (unsigned short)dvtscm_port_uint16;
- (id)dvtscm_port;
- (id)dvtscm_host;
- (id)dvtscm_scheme;
- (id)dvtscm_password;
- (id)dvtscm_user;
@end
