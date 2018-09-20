//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, SCNOrderedDictionary;
@protocol MTLLibrary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding>
{
    unsigned int _isPresentationInstance:1;
    // Error parsing type: ^{__C3DFXTechnique={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}qq^^{__C3DFXPass}b1b1b1b1b1I^{?}^{__CFDictionary}^{__C3DNode}^{__CFArray}^{__C3DFXTechnique}^v}, name: _technique
    NSMutableDictionary *_valueForSymbol;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    id <MTLLibrary> _library;
    NSArray *_passes;
}

+ (BOOL)supportsSecureCoding;
+     // Error parsing type: @24@0:8^{__C3DFXTechnique={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}qq^^{__C3DFXPass}b1b1b1b1b1I^{?}^{__CFDictionary}^{__C3DNode}^{__CFArray}^{__C3DFXTechnique}^v}16, name: techniqueWithTechniqueRef:
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)_didInstallInEngineContext:(struct __C3DEngineContext *)arg1;
- (id)passAtIndex:(unsigned long long)arg1;
- (void)_setupPasses;
- (id)presentationInstance;
- (BOOL)isPausedOrPausedByInheritance;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (void)removeAllBindings;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 pausedByNode:(BOOL)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)library;
- (void)setLibrary:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForSymbolNamed:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
-     // Error parsing type: ^{__C3DFXTechnique={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}qq^^{__C3DFXPass}b1b1b1b1b1I^{?}^{__CFDictionary}^{__C3DNode}^{__CFArray}^{__C3DFXTechnique}^v}16@0:8, name: techniqueRef
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_symbolsAssignedValues;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DFXTechnique={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}qq^^{__C3DFXPass}b1b1b1b1b1I^{?}^{__CFDictionary}^{__C3DNode}^{__CFArray}^{__C3DFXTechnique}^v}16, name: initWithTechniqueRef:
-     // Error parsing type: @24@0:8^{__C3DFXTechnique={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}qq^^{__C3DFXPass}b1b1b1b1b1I^{?}^{__CFDictionary}^{__C3DNode}^{__CFArray}^{__C3DFXTechnique}^v}16, name: initPresentationTechniqueWithTechniqueRef:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

