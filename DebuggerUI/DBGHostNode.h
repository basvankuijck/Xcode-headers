//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGInteractiveSceneView, DBGSceneNode, DBGTrueSpacingBox, NSMutableArray, NSMutableDictionary;

@interface DBGHostNode : DBGNode
{
    DBGTrueSpacingBox *_trueSpacingBox;
    unsigned long long _visibleRangeFromIndex;
    unsigned long long _visibleRangeToIndex;
    NSMutableArray *_subHostNodes;
    unsigned long long _minimumRenderingOrder;
    unsigned long long _maximumRenderingOrder;
    int _reason;
    int _explosionStyle;
    DBGInteractiveSceneView *_sceneView;
    DBGSceneNode *_rootViewNode;
    NSMutableDictionary *_nodesByZPosition;
}

@property(readonly) NSMutableDictionary *nodesByZPosition; // @synthesize nodesByZPosition=_nodesByZPosition;
@property int explosionStyle; // @synthesize explosionStyle=_explosionStyle;
@property int reason; // @synthesize reason=_reason;
@property __weak DBGSceneNode *rootViewNode; // @synthesize rootViewNode=_rootViewNode;
@property(readonly) __weak DBGInteractiveSceneView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (void)performRecursivelyOnSceneNodesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)updateRenderingOrderRecursively:(BOOL)arg1 withRenderingOrderRangeStartingAt:(unsigned long long)arg2;
- (void)updateTrueSpacingBoxRenderingOrder:(BOOL)arg1;
- (void)updateNodeShaderModifiersRecursively;
- (void)updateNodeAppearenceAfterConstraintsUpdate:(BOOL)arg1 selectedItemCount:(unsigned long long)arg2;
- (void)removeConstraintsOnHostedNodes:(BOOL)arg1;
- (void)updateNodesByZPosition;
- (void)updateNodesByZPositionRecursively;
- (unsigned long long)zOrderIndexOfNode:(id)arg1;
- (id)zOrderKeysSortedByZPosition;
- (id)nodeInZMaxPlane;
- (id)nodesInZPlaneWithIndex:(int)arg1;
- (void)updateVisibleViewsWithRangeFromIndex:(int)arg1 toIndex:(int)arg2 animated:(BOOL)arg3;
- (unsigned long long)hideViewsBehindNode:(id)arg1;
- (unsigned long long)hideViewsAboveNode:(id)arg1;
- (void)resetVisibleRangeAnimated:(BOOL)arg1;
- (void)contentClippingModeChanged;
- (BOOL)getSpacingBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2 forNode:(id)arg3 relativeToNode:(id)arg4;
- (void)updateSpacing:(double)arg1 forNodesInfluencedBy:(id)arg2;
- (void)updateSpacing:(double)arg1;
@property(readonly) BOOL hasSubHostNodes;
@property(readonly) BOOL hasTrueSpacingBox;
- (void)traverseTrueSpacingBoxesInvokingBlock:(CDUnknownBlockType)arg1;
- (void)updateBoxWithSpacing:(double)arg1;
- (BOOL)boundingBoxAMin:(struct SCNVector3)arg1 max:(struct SCNVector3)arg2 overlappsBoundingBoxBMin:(struct SCNVector3)arg3 max:(struct SCNVector3)arg4;
- (void)repositionNode:(id)arg1 spacing:(double)arg2;
- (void)_repositionNodesWithSpacing:(double)arg1 recursively:(BOOL)arg2;
- (void)_resetNodesPositionInfluencedRecursively:(BOOL)arg1;
- (void)rebuildNodePositioningDependeciesWithSpacing:(double)arg1 recursively:(BOOL)arg2;
- (double)nodeSpacing;
- (BOOL)isHostNodeNeededForView:(id)arg1 style:(int *)arg2;
- (void)addNodesWithSubviews:(id)arg1 style:(int)arg2;
- (void)explodeFlattenedAnimated:(BOOL)arg1;
- (void)addMinimumSpacingToContentViews;
- (void)explodeTrueSpacingAnimated:(BOOL)arg1;
- (void)explodeAllWithStyle:(int)arg1;
- (void)explodeSubviewsWithStyle:(int)arg1;
- (id)initWithRootView:(id)arg1 host:(id)arg2 inSceneView:(id)arg3;

@end

