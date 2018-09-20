//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class DYShaderAnalyzerResult, GPUTraceShaderDataItem, GPUTraceShaderSampleInfo, IDEEditorDocument, IDEWorkspaceDocument, NSArray, NSDictionary, NSString;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate;

@protocol GPUTraceShaderDataProvider <NSObject>
- (IDEEditorDocument *)retainedEditorDocumentWithWorkspaceDocument:(IDEWorkspaceDocument *)arg1;
- (void)shaderSourceChanged:(id <DYPShaderSourceDocument>)arg1;
- (NSString *)alertInfoKey;
- (NSString *)alertMessageKey;
- (NSArray *)remarks;
- (double)shaderTimingForShaderType:(unsigned int)arg1;
- (DYShaderAnalyzerResult *)shaderAnalyzerResultForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (GPUTraceShaderSampleInfo *)sampleInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (NSArray *)allDiassemblyInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (NSDictionary *)perLineSourceInfoDictForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (float)shaderBinaryCostForShaderType:(unsigned int)arg1;
- (NSArray *)shaderAnnotations;
- (void)requestProfilerData;
- (BOOL)editable;
- (NSString *)languageIdentifier;
- (long long)lineNumber;
- (NSString *)sourcePath;
- (NSString *)sourceCode;
@property(nonatomic, readonly) IDEEditorDocument *editorDocument;
@property(nonatomic) __weak GPUTraceShaderDataItem *dataItem;
@property(nonatomic) __weak id <DYPShaderSourceDocument> document;
@property(nonatomic) __weak id <GPUTraceShaderDataProviderDelegate> delegate;
@end

