//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPURenderTargetEditor/GPUGVRenderer-Protocol.h>

@class GPUGVGraph, GPUTraceStorage, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPUTraceGraph : NSObject <GPUGVRenderer>
{
    GPUTraceStorage *_storage;
    NSArray *_dyGraphNodes;
    GPUGVGraph *_resourceMajorGraph;
    GPUGVGraph *_resourceGraphWithSlots;
    // Error parsing type: AQ, name: _progress
    // Error parsing type: AQ, name: _previousProgress
}

- (void).cxx_destruct;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (void)drawNode:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (id)resourceGraphWithSlots:(id)arg1;
- (id)graphLayout;
- (id)resourceMajorGraph;
- (id)initWithNodes:(id)arg1 withStorage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) int direction;
@property(readonly) BOOL drawEdgesFirst;
@property(readonly) unsigned long long hash;
@property(readonly) struct CGSize separation;
@property(readonly) Class superclass;

@end

