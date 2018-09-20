//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLStageInputOutputDescriptor, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLSkin : NSObject
{
    unsigned int _vertexCount;
    _Bool _needNormal;
    _Bool _needTangent;
    id <MTLBuffer> _vertexWeightIndicesBuffer;
    id <MTLBuffer> _boneIndicesBuffer;
    id <MTLBuffer> _boneWeightsBuffer;
    SCNMTLComputePipeline *_computePS;
    MTLStageInputOutputDescriptor *_computeStageDesc;
}

- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner *)arg3 renderContext:(id)arg4;
- (void)dealloc;
-     // Error parsing type: @48@0:8^{__C3DSkinner=}16^{__C3DMesh=}24^{__C3DGeometry={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}^{__C3DMesh}^{__C3DMaterial}^{__CFArray}^{__CFSet}^{__CFArray}^{?}b1^?{?=CB{?=BCCC}^{__C3DMeshElement}^{__C3DMeshSource}^{__C3DMesh}^v^v}{?=CfIC(?={?=ff}{?=f}{?=f}{?=Cb1b1})}C}32@40, name: initWithSkinner:baseMesh:baseGeometry:resourceManager:

@end

