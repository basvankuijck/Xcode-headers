//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/NSObject-Protocol.h>

@class NSArray, NSData;
@protocol MDLMeshBuffer, MDLMeshBufferZone;

@protocol MDLMeshBufferAllocator <NSObject>
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 data:(NSData *)arg2 type:(unsigned long long)arg3;
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id <MDLMeshBuffer>)newBufferWithData:(NSData *)arg1 type:(unsigned long long)arg2;
- (id <MDLMeshBuffer>)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id <MDLMeshBufferZone>)newZoneForBuffersWithSize:(NSArray *)arg1 andType:(NSArray *)arg2;
- (id <MDLMeshBufferZone>)newZone:(unsigned long long)arg1;
@end

