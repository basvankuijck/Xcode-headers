//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGViewSurface.h>

@class CALayer, NSDictionary, NSString;

@interface DBGViewLayer : DBGViewSurface
{
    CALayer *_representedLayer;
    DBGViewSurface *_hostingView;
    NSString *_viewIdentifier;
    NSDictionary *_layerInfo;
}

@property(retain) NSDictionary *layerInfo; // @synthesize layerInfo=_layerInfo;
@property(retain) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
@property(nonatomic) __weak DBGViewSurface *hostingView; // @synthesize hostingView=_hostingView;
@property(retain, nonatomic) CALayer *representedLayer; // @synthesize representedLayer=_representedLayer;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)supportsCALayerInspectorProperties;
- (id)representedObjectClassName;
- (id)identifier;
- (struct CATransform3D)transform;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (id)parentViewSurface;
- (id)_addPropertiesFromLayer:(id)arg1 toDictionary:(id)arg2;
- (id)_initWithViewDescriber:(id)arg1 parent:(id)arg2 layer:(id)arg3 dictionary:(id)arg4;
- (id)initWithViewDescriber:(id)arg1 parent:(id)arg2 dictionary:(id)arg3;
- (void)updateRepresentedLayerUsingParentRepresentedLayerTree;
- (void)_recursivelyUpdateCALayerForViewSurface:(id)arg1;
- (void)_recursivelyUpdatePropertiesOfLayer:(id)arg1 withLayerNode:(id)arg2;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;
- (void)updateChildrenWithSnapshotGroup:(id)arg1 forRequest:(id)arg2;

@end

