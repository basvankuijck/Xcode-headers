//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSString;
@protocol DYPShaderDebuggerExecutedLocation, DYPShaderDebuggerExecutionHistoryNode, DYPShaderDebuggerROI, DYPShaderDebuggerResourceResoutionTables, DYPShaderDebuggerVariableSnapshot, DYPShaderDebuggerVariableSnapshotNode;

@protocol DYPShaderDebuggerDataSource <NSObject>
@property(readonly, nonatomic) NSArray *sourcePaths;
@property(readonly, nonatomic) NSData *threadsMaskData;
@property(readonly, nonatomic) NSArray *threads;
@property(readonly, nonatomic) unsigned long long fragmentFrontMostRule;
@property(readonly, nonatomic) id <DYPShaderDebuggerResourceResoutionTables> resourceResolutionTables;
@property(readonly, nonatomic) NSArray *executedLocations;
@property(readonly, nonatomic) id <DYPShaderDebuggerROI> regionOfInterest;
- (NSArray *)firstThreadMatchNodesAtExecutedLocation:(id <DYPShaderDebuggerExecutedLocation>)arg1;
- (NSArray *)maskAtExecutedLocation:(id <DYPShaderDebuggerExecutedLocation>)arg1 withNode:(id <DYPShaderDebuggerExecutionHistoryNode>)arg2;
- (NSArray *)maskForNode:(id <DYPShaderDebuggerExecutionHistoryNode>)arg1;
- (NSArray *)arrayViewForVariableSnapshotNode:(id <DYPShaderDebuggerVariableSnapshotNode>)arg1 valueData:(id *)arg2 valueElementStride:(unsigned long long)arg3;
- (NSArray *)viewForVariableSnapshotNode:(id <DYPShaderDebuggerVariableSnapshotNode>)arg1 valueData:(id *)arg2 valueElementStride:(unsigned long long)arg3 valueRowStride:(unsigned long long)arg4 maskData:(id *)arg5;
- (id <DYPShaderDebuggerVariableSnapshot>)findVariableByName:(NSString *)arg1 executionHistoryNode:(id <DYPShaderDebuggerExecutionHistoryNode>)arg2 column:(unsigned long long)arg3;
- (NSArray *)variablesForExecutionHistoryNode:(id <DYPShaderDebuggerExecutionHistoryNode>)arg1;
- (NSData *)contentsForPath:(NSString *)arg1;
@end

