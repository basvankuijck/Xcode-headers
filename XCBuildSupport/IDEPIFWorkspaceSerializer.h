//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCBuildSupport/IDEPIFSerializer-Protocol.h>

@class NSMapTable, NSString;

@interface IDEPIFWorkspaceSerializer : NSObject <IDEPIFSerializer>
{
    NSMapTable *_cachedObjects;
    NSMapTable *_cachedWorkspacesBySignature;
    NSMapTable *_cachedProjectsBySignature;
    NSMapTable *_cachedTargetsBySignature;
}

- (void).cxx_destruct;
- (id)lookupObjectByType:(id)arg1 signature:(id)arg2;
- (id)objectSignature:(id)arg1;
- (id)mapTableForType:(id)arg1;
- (id)objectInfo:(id)arg1;
- (struct NSDictionary *)objectData:(id)arg1;
- (id)serializeCompleteWorkspace:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

