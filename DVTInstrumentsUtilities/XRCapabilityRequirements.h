//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XRCapabilityRequirements : NSObject
{
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}

+ (id)requirementsFromPlist:(id)arg1 error:(id *)arg2;
+ (id)requirementsFromContext:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)checkRequirementsAgainstRegistery:(id)arg1 error:(id *)arg2;
- (id)plistRepresentation;
- (id)init;

@end

