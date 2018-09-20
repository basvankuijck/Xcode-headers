//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSSet, SCNAuthoringEnvironment2, SCNManipulator, SCNNode;
@protocol SCNAuthoringEnvironmentDelegate, SCNSceneRenderer;

@interface SCNAuthoringEnvironment : NSObject
{
    struct __C3DEngineContext *_engineContext;
    id <SCNSceneRenderer> _sceneRenderer;
    _Bool _sceneRendererIsSCNView;
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}, name: _noColorProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}, name: _colorOnlyProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}, name: _colorAndTextureProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}, name: _lightProbesProgram
    // Error parsing type: ^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}ib1b1^{__C3DFXProgramDelegate}}, name: _wireframeProgram
    CDStruct_4aabc75a _logsInfo;
    CDStruct_4aabc75a _boldLogsInfo;
    CDStruct_4aabc75a _dynamicLinesInfo;
    CDStruct_4aabc75a _dynamicLinesNoDepthTestInfo;
    CDStruct_4aabc75a _dynamicTrianglesInfo;
    CDStruct_4aabc75a _overlayDynamicLinesInfo;
    CDStruct_4aabc75a _overlayDynamicTriangleInfo;
    CDStruct_4aabc75a _textInfo;
    CDStruct_4aabc75a _lightProbesInfo;
    CDStruct_c23cf450 _normalTextInfo;
    CDStruct_c23cf450 _boldTextInfo;
    struct __C3DRasterizerStates *_depthOnCullOnStates;
    struct __C3DRasterizerStates *_depthOffCullOnStates;
    struct __C3DRasterizerStates *_depthOnCullOffStates;
    struct __C3DRasterizerStates *_depthOffCullOffStates;
    const void *_arrowIndicesOffset;
    unsigned short _arrowIndicesCount;
    const void *_quadrantIndicesOffset;
    unsigned short _quadrantIndicesCount;
    const void *_quadrantRingIndicesOffset;
    unsigned short _quadrantRingIndicesCount;
    double _timedRecordingExpirationTime;
    unsigned char _timedRecordingBuffer[64000];
    unsigned int _timedRecordingBufferStart;
    unsigned int _timedRecordingBufferEnd;
    long long _authoringDisplayMask;
    unsigned int _hasLighting:1;
    BOOL _shouldSnapOnGrid;
    BOOL _shouldSnapToAlign;
    BOOL _selectionIsReadonly;
    long long _editingSpace;
    BOOL _graphicalSelectionEnabled;
    // Error parsing type: , name: _selectionP0
    // Error parsing type: , name: _selectionP1
    BOOL _selecting;
    BOOL _surroundToSelect;
    NSSet *_initialSelection;
    NSMutableOrderedSet *_selection;
    NSArray *_selectedNodes;
    BOOL _isOrbiting;
    float _lastGridDistance;
    double _gridUnit;
    NSMutableArray *_visibleManipulableItems;
    void *_wireframeRenderer;
    unsigned int _consoleLineCount;
    struct {
        _Bool initialized;
        _Bool showFullStatistics;
        _Bool showRenderOptionsPanel;
        float fps;
        float waitDisplayLinkTime;
        long long pressedButtonIndex;
        struct __CFString *fpsString;
        struct __CFString *shortString;
        struct __CFString *internalString;
        unsigned int lightingStatistics[9];
        struct __C3DEngineStats stats;
    } _statisticsInfo;
    float _drawScale;
    id _delegate;
    SCNAuthoringEnvironment2 *_authEnv2;
}

+ (id)authoringEnvironmentForSceneRenderer:(id)arg1 createIfNeeded:(BOOL)arg2;
+ (id)authoringEnvironmentForSceneRenderer:(id)arg1;
+ (id)rendererForSceneRenderer:(id)arg1;
+ (long long)defaultAuthoringDisplayMask;
@property(nonatomic) BOOL surroundToSelect; // @synthesize surroundToSelect=_surroundToSelect;
@property(nonatomic) BOOL graphicalSelectionEnabled; // @synthesize graphicalSelectionEnabled=_graphicalSelectionEnabled;
@property(nonatomic) __weak id <SCNAuthoringEnvironmentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long editingSpace; // @synthesize editingSpace=_editingSpace;
@property(readonly, nonatomic) double gridUnit; // @synthesize gridUnit=_gridUnit;
@property(nonatomic) BOOL shouldSnapToAlign; // @synthesize shouldSnapToAlign=_shouldSnapToAlign;
@property(nonatomic) BOOL shouldSnapOnGrid; // @synthesize shouldSnapOnGrid=_shouldSnapOnGrid;
- (BOOL)isEditingSubComponent;
- (void)dealloc;
- (void)drawString:(id)arg1 atPoint:(struct CGPoint)arg2 color:(id)arg3;
- (void)drawLineFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 color:(id)arg3;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
@property(readonly, nonatomic) BOOL selecting;
- (void)setSelecting:(BOOL)arg1;
- (void)endOrbiting;
- (void)beginOrbiting;
- (void)saveInitialSelection;
- (void)_updateSelectionWithSelectionFrame:(unsigned long long)arg1;
- (void)beginEditingNodes:(id)arg1;
- (void)beginEditingNode:(id)arg1;
- (id)selectedItems;
@property(readonly, nonatomic) NSArray *selectedNodes;
- (void)cancelEdition;
@property(nonatomic) long long authoringDisplayMask;
@property(readonly, nonatomic) SCNManipulator *manipulator;
@property(readonly, nonatomic) SCNNode *authoringOverlayLayer;
- (void)sceneDidChange:(id)arg1;
- (void)update;
- (id)authoringEnvironment2;
- (void)setupAuthoringEnv2;
- (void)_setupAuthoringEnv2:(id)arg1;
@property(nonatomic) BOOL selectionIsReadonly;
@property(readonly, nonatomic) struct CATransform3D viewMatrix;
- (id)renderer;
@property(readonly) id <SCNSceneRenderer> sceneRenderer;
- (id)_initWithEngineContext:(struct __C3DEngineContext *)arg1;
- (id)init;

@end

