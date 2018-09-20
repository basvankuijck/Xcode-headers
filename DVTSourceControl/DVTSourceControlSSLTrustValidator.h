//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/NSURLSessionDelegate-Protocol.h>

@class NSString;

@interface DVTSourceControlSSLTrustValidator : NSObject <NSURLSessionDelegate>
{
    CDUnknownBlockType __validatorBlock;
}

+ (id)fingerprintOfCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)fingerprintOfServer:(id)arg1;
+ (id)fingerprintOfTrust:(struct __SecTrust *)arg1;
+ (id)protectionSpaceOfServer:(id)arg1;
+ (struct __SecTrust *)trustOfServer:(id)arg1;
+ (BOOL)shouldTrustServer:(id)arg1 withFingerprint:(id)arg2 userTrustedFingerprint:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_shouldTrustServer:(id)arg1 withFingerprint:(id)arg2 userTrustedFingerprint:(id)arg3;
- (id)_fingerprintOfServer:(id)arg1;
- (struct __SecTrust *)_trustOfServer:(id)arg1;
- (id)_protectionSpaceOfServer:(id)arg1;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

