//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>

@class NSArray;

@protocol MDLTransformComponent <MDLComponent>
@property(readonly, copy, nonatomic) NSArray *keyTimes;
@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(nonatomic) BOOL resetsTransform;
// Error parsing type for property matrix:
// Property attributes: T{?=[4]},N


@optional
+     // Error parsing type: {?=[4]}32@0:8@"MDLObject"16d24, name: globalTransformWithObject:atTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: localTransformAtTime:
-     // Error parsing type: v80@0:8{?=[4]}16, name: setLocalTransform:
-     // Error parsing type: v88@0:8{?=[4]}16d80, name: setLocalTransform:forTime:
@end

