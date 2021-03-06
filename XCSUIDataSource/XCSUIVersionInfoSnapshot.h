//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCSUIService;

@interface XCSUIVersionInfoSnapshot : NSObject
{
    NSString *_versions;
    NSString *_smallVersions;
    NSString *_platforms;
    NSString *_xcode;
    XCSUIService *_service;
}

+ (id)snapshotWithVersions:(id)arg1 smallVersions:(id)arg2 platforms:(id)arg3 xcode:(id)arg4 service:(id)arg5;
@property(readonly, nonatomic) XCSUIService *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *xcode; // @synthesize xcode=_xcode;
@property(readonly, copy, nonatomic) NSString *platforms; // @synthesize platforms=_platforms;
@property(readonly, copy, nonatomic) NSString *smallVersions; // @synthesize smallVersions=_smallVersions;
@property(readonly, copy, nonatomic) NSString *versions; // @synthesize versions=_versions;
- (void).cxx_destruct;
- (id)initWithVersions:(id)arg1 smallVersions:(id)arg2 platforms:(id)arg3 xcode:(id)arg4 service:(id)arg5;

@end

