//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol DVTCustomDataStoring;

@interface IDEBatchFindScopeStore : NSObject
{
    id <DVTCustomDataStoring> _storage;
    NSArray *_scopes;
    CDUnknownBlockType _legacyImporter;
}

- (void).cxx_destruct;
@property(copy) NSArray *scopes;
- (void)writeScopes:(id)arg1;
- (id)loadScopes;
- (id)initWithStorage:(id)arg1 legacyImporter:(CDUnknownBlockType)arg2;

@end

