//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDataProvider.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface IDEDataProvider_NetworkStatistics : IDEDataProvider
{
    NSObject<OS_dispatch_queue> *_capture_lock;
    struct __NStatManager *_netstatManager;
    NSObject<OS_dispatch_queue> *_netstatQueue;
    struct unordered_map<int, (anonymous namespace)::ProcessInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, (anonymous namespace)::ProcessInfo>>> _processInfoByPID;
    struct unordered_map<__NStatSource *, (anonymous namespace)::SourceInfo, std::__1::hash<__NStatSource *>, std::__1::equal_to<__NStatSource *>, std::__1::allocator<std::__1::pair<__NStatSource *const, (anonymous namespace)::SourceInfo>>> _sourceInfosBySrcRef;
}

+ (id)sharedDataProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)captureAttributes:(id)arg1 forPIDs:(id)arg2;
- (void)dealloc;
- (BOOL)captureAttributes:(id)arg1 toDictionary:(id)arg2 forPID:(id)arg3;
- (id)supportedAttributes;
- (id)init;

@end

