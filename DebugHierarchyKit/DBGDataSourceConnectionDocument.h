//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGDataSourceConnection-Protocol.h>

@class NSString;
@protocol DBGDataSourceConnectionDelegate;

@interface DBGDataSourceConnectionDocument : NSObject <DBGDataSourceConnection>
{
    double _debugHierarchyVersion;
    id <DBGDataSourceConnectionDelegate> _delegate;
}

+ (Class)matchingDataCoordinatorClass;
@property __weak id <DBGDataSourceConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property double debugHierarchyVersion; // @synthesize debugHierarchyVersion=_debugHierarchyVersion;
- (void).cxx_destruct;
- (void)retrieveDebugHierarchyConfiguration:(CDUnknownBlockType)arg1;
- (void)performRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

