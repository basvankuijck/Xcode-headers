//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>
#import <GPUToolsShaderProfiler/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface DYShaderProfilerResult : NSObject <NSSecureCoding, NSCopying>
{
    struct DYShaderProfilerTiming _vertexTiming;
    struct DYShaderProfilerTiming _fragmentTiming;
    struct DYShaderProfilerTiming _computeTiming;
    struct DYShaderProfilerTiming _timing;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _drawCallInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programPipelineInfoIndexMap;
    NSMutableDictionary *_vertexShaderBinaryInfo;
    NSMutableDictionary *_fragmentShaderBinaryInfo;
    NSMutableDictionary *_computeKernelBinaryInfo;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _perContextDrawCallCounterMap;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    unsigned int _commandBufferCount;
    unsigned int _deviceUtilization;
    unsigned int _tilerUtilization;
    unsigned int _rendererUtilization;
    NSMutableArray *_drawCallInfoList;
    NSMutableArray *_encoderInfoList;
    NSMutableArray *_encoderProgramInfoList;
    NSMutableArray *_programInfoList;
    NSMutableArray *_programPipelineInfoList;
    NSDictionary *_derivedCountersData;
    unsigned long long _frameTime;
    double _gpuTime;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) double gpuTime; // @synthesize gpuTime=_gpuTime;
@property(nonatomic) unsigned int rendererUtilization; // @synthesize rendererUtilization=_rendererUtilization;
@property(nonatomic) unsigned int tilerUtilization; // @synthesize tilerUtilization=_tilerUtilization;
@property(nonatomic) unsigned int deviceUtilization; // @synthesize deviceUtilization=_deviceUtilization;
@property(nonatomic) unsigned long long frameTime; // @synthesize frameTime=_frameTime;
@property(nonatomic) unsigned int commandBufferCount; // @synthesize commandBufferCount=_commandBufferCount;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) struct DYShaderProfilerTiming timing; // @synthesize timing=_timing;
@property(nonatomic) struct DYShaderProfilerTiming computeTiming; // @synthesize computeTiming=_computeTiming;
@property(nonatomic) struct DYShaderProfilerTiming fragmentTiming; // @synthesize fragmentTiming=_fragmentTiming;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(nonatomic) struct DYShaderProfilerTiming vertexTiming; // @synthesize vertexTiming=_vertexTiming;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) NSDictionary *derivedCountersData; // @synthesize derivedCountersData=_derivedCountersData;
@property(retain, nonatomic) NSMutableArray *programPipelineInfoList; // @synthesize programPipelineInfoList=_programPipelineInfoList;
@property(retain, nonatomic) NSMutableArray *programInfoList; // @synthesize programInfoList=_programInfoList;
@property(readonly, nonatomic) NSMutableArray *encoderProgramInfoList; // @synthesize encoderProgramInfoList=_encoderProgramInfoList;
@property(readonly, nonatomic) NSMutableArray *encoderInfoList; // @synthesize encoderInfoList=_encoderInfoList;
@property(retain, nonatomic) NSMutableArray *drawCallInfoList; // @synthesize drawCallInfoList=_drawCallInfoList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)exportDerivedCounterDataAtPath:(id)arg1 renameWhenConflict:(BOOL)arg2;
- (id)perLineInfoForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2 fragShader:(BOOL)arg3 totalCost:(BOOL)arg4;
- (id)shaderSourceForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (id)_drawCallInfoWithProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (void)calculateEncoderProgramInfo;
- (void)calculateRealTimeInfoWithGPUTime:(double)arg1;
- (void)calculateRealDrawCallTimeInfo;
- (id)programPipelineInfoWithId:(unsigned long long)arg1;
- (id)programInfoWithId:(unsigned long long)arg1;
- (id)drawCallInfoWithFunctionIndex:(unsigned int)arg1 subCommandIndex:(int)arg2;
- (id)drawCallInfoWithFunctionIndex:(unsigned int)arg1;
- (id)computeKernelBinaryForDrawCall:(id)arg1;
- (id)fragmentShaderBinaryForDrawCall:(id)arg1;
- (id)vertexShaderBinaryForDrawCall:(id)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

