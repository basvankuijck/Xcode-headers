//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol MDLTSUStreamWriteChannel <MDLTSUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg2;
@end
