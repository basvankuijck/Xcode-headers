//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGBorderNode, DBGControllerDecorationNode, DBGHostNode, DBGInteractiveSceneView, DBGViewGeometry, DBGViewInstance, SCNMaterial;

@interface DBGSceneNode : DBGNode
{
    DBGBorderNode *_borderNode;
    DBGControllerDecorationNode *_controllerDecorationNode;
    SCNMaterial *_imageMaterial;
    BOOL _isHostRoot;
    BOOL _isSceneRoot;
    BOOL _isWireframeModeEnabled;
    BOOL _isConstraintsWireframeModeEnabled;
    BOOL _clippingEnabled;
    BOOL _currentlyOfInterestForAutoLayout;
    BOOL _screenMaskEnabled;
    BOOL _hasRotation;
    int _nodeContentMode;
    DBGViewInstance *_viewInstance;
    DBGInteractiveSceneView *_sceneView;
    DBGHostNode *_host;
    DBGNode *_constraintsNode;
}

@property BOOL hasRotation; // @synthesize hasRotation=_hasRotation;
@property BOOL screenMaskEnabled; // @synthesize screenMaskEnabled=_screenMaskEnabled;
@property(nonatomic) int nodeContentMode; // @synthesize nodeContentMode=_nodeContentMode;
@property BOOL currentlyOfInterestForAutoLayout; // @synthesize currentlyOfInterestForAutoLayout=_currentlyOfInterestForAutoLayout;
@property(retain) DBGNode *constraintsNode; // @synthesize constraintsNode=_constraintsNode;
@property __weak DBGHostNode *host; // @synthesize host=_host;
@property __weak DBGInteractiveSceneView *sceneView; // @synthesize sceneView=_sceneView;
@property __weak DBGViewInstance *viewInstance; // @synthesize viewInstance=_viewInstance;
- (void).cxx_destruct;
- (void)updateDecorationAfterAppearanceChange;
- (void)updateDecorationVisibility;
- (void)updateControllerDecorationGeometry;
- (void)_removeDecorationForViewController;
- (void)_addDecorationForViewControllerInstance:(id)arg1;
- (void)setupViewControllerDecoration;
- (void)unclipSubviewContentNodes;
- (void)clipSubviewContentNodes;
@property(getter=isClippingEnabled) BOOL clippingEnabled; // @synthesize clippingEnabled=_clippingEnabled;
- (void)updateRenderingOrderWithRangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_updateBorderColorForWireframeModeEnabled:(BOOL)arg1 selected:(BOOL)arg2 highlighted:(BOOL)arg3;
- (id)_colorForDefaultKey:(id)arg1;
- (void)updateAppearenceAfterConstraintsUpdateWithSelectedItemCount:(unsigned long long)arg1;
- (void)changeBorderColor:(id)arg1 borderOpacity:(double)arg2;
- (void)setBorderHidden:(BOOL)arg1;
- (void)setWireframeModeEnabled:(BOOL)arg1;
- (void)setupBorder;
- (id)_fragmentShaderModifierForGLRendererWithClearContent:(BOOL)arg1 applyTint:(BOOL)arg2;
- (id)_fragmentShaderModifierForMetalRendererWithClearContent:(BOOL)arg1 applyTint:(BOOL)arg2 applyMask:(BOOL)arg3;
- (id)_generateFragmentShaderModifierWithClearContent:(BOOL)arg1 applyTint:(BOOL)arg2 applyMask:(BOOL)arg3;
- (id)_generateGeometryShaderModifierWithApplyMask:(BOOL)arg1;
- (void)updateShaderModifiers;
- (BOOL)respondsToHitTests;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSnapshot;
- (id)snapshot;
@property(readonly) DBGViewGeometry *viewGeometry;
- (struct CATransform3D)applicableTransform;
- (id)initWithView:(id)arg1 inSceneView:(id)arg2 host:(id)arg3 isHostRoot:(BOOL)arg4 isSceneRoot:(BOOL)arg5;

@end

