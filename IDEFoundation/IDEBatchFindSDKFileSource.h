//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindFileSource.h>

@class NSString;

@interface IDEBatchFindSDKFileSource : IDEBatchFindFileSource
{
    NSString *_SDKIdentifier;
}

+ (id)decodeFromPropertyListRepresentation:(id)arg1;
+ (id)propertyListIdentifier;
@property(readonly) NSString *SDKIdentifier; // @synthesize SDKIdentifier=_SDKIdentifier;
- (void).cxx_destruct;
- (void)accessContentGroupsWithWorkspace:(id)arg1 priority:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)accumulateContributingSources:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToFileSourceWithIdenticalClass:(id)arg1;
- (id)propertyListRepresentation;
- (id)initWithSDKIdentifier:(id)arg1;

@end

