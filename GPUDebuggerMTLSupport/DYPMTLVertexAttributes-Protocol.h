//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/DYBufferArray-Protocol.h>

@protocol DYBuffer;

@protocol DYPMTLVertexAttributes <DYBufferArray>
@property(readonly, nonatomic) id <DYBuffer> indirectBuffer;
@property(readonly, nonatomic) id <DYBuffer> indexBuffer;
@property(readonly, nonatomic) id <DYBuffer> postVertexDumpBuffer;
@end

