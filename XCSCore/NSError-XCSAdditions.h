//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSDictionary, NSString;

@interface NSError (XCSAdditions)
- (id)errorWithRepositoryID:(id)arg1;
@property(readonly) NSString *repositoryID;
- (id)fingerprint;
- (id)underlyingError;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (BOOL)_validateDomain:(id)arg1 code:(id)arg2 message:(id)arg3 repository:(id)arg4 underlyingError:(id)arg5 fingerprint:(id)arg6 validationErrors:(id *)arg7;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
@end

