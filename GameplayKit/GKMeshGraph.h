//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKGraph.h>

@class NSArray, NSMutableArray;

@interface GKMeshGraph : GKGraph
{
    NSMutableArray *_sourceObstacles;
    struct GKCMeshGraph *_cMeshGraph;
    Class _nodeClass;
}

+ (BOOL)supportsSecureCoding;
+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;
+ (id)graphWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
- (void).cxx_destruct;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
-     // Error parsing type: {GKTriangle=[3]}24@0:8Q16, name: triangleAtIndex:
@property(readonly, nonatomic) unsigned long long triangleCount;
- (void)triangulate;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)removeObstacles:(id)arg1;
- (void)addObstacles:(id)arg1;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:maxCoordinate: /* Error: Ran out of types for this method. */;
- (id)initWithBufferRadius:(float)arg1 minCoordinate:(Class)arg2 maxCoordinate:nodeClass: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) float bufferRadius;
- (Class)nodeClass;
- (BOOL)makeNodesFromTriangleEdgeMidpoints;
- (void)setMakeNodesFromTriangleEdgeMidpoints:(BOOL)arg1;
- (BOOL)makeNodesFromTriangleVertices;
- (void)setMakeNodesFromTriangleVertices:(BOOL)arg1;
- (BOOL)makeNodesFromTriangleCenters;
- (void)setMakeNodesFromTriangleCenters:(BOOL)arg1;
@property(nonatomic) unsigned long long triangulationMode;
@property(readonly, nonatomic) NSArray *obstacles;
- (struct GKCMeshGraph *)cMeshGraph;
- (struct GKCGraph *)makeCGraph;

@end

