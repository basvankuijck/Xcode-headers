//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBUIViewAutolayoutGuide, NSObject;
@protocol IBAutolayoutItem;

@protocol IBUIViewAutolayoutGuideDelegate <NSObject>
- (NSObject<IBAutolayoutItem> *)ibEffectiveParentItemForReferencingConstraintTraversalOfViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
- (NSObject<IBAutolayoutItem> *)ibContainingItemForViewLayoutGuide:(IBUIViewAutolayoutGuide *)arg1;
@end

