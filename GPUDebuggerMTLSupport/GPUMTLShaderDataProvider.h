//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUTraceShaderDataProvider-Protocol.h>

@class GPUTraceShaderDataItem, GPUTraceShaderItem, IDEEditorDocument, NSMutableArray, NSMutableDictionary, NSString;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface GPUMTLShaderDataProvider : NSObject <GPUTraceShaderDataProvider>
{
    GPUTraceShaderItem *_shaderItem;
    GPUTraceShaderDataItem *_dataItem;
    NSString *_sourceCode;
    NSMutableArray *_mutableAnnotations;
    NSMutableDictionary *_shaderBinaryCost;
    NSMutableDictionary *_shaderSampleInfo;
    NSMutableDictionary *_shaderSampleInfoBase;
    id <GPUTraceShaderDataProviderDelegate> delegate;
    id <DYPShaderSourceDocument> document;
    IDEEditorDocument *_editorDocument;
}

@property(nonatomic) __weak GPUTraceShaderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(nonatomic) __weak id <DYPShaderSourceDocument> document; // @synthesize document;
@property(nonatomic) __weak id <GPUTraceShaderDataProviderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (double)shaderTimingForShaderType:(unsigned int)arg1;
- (id)retainedEditorDocumentWithWorkspaceDocument:(id)arg1;
- (id)remarks;
- (float)shaderBinaryCostForShaderType:(unsigned int)arg1;
- (id)allDiassemblyInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)sampleInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)_buildShaderSampleInfo:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)perLineSourceInfoDictForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)_functionNameForShaderType:(unsigned int)arg1;
- (id)shaderAnalyzerResultForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (void)_handleProfilerData:(id)arg1;
- (void)onUpdatedProfilerDataIsAvailable:(id)arg1;
- (void)onLibraryUpdateAttempted:(id)arg1;
- (void)_storeBinaryPercentageOfShaderItem:(id)arg1;
- (void)_handleLibraryUpdate:(id)arg1;
- (void)_addAnnotation:(id)arg1 tooltip:(id)arg2 lineRange:(struct _NSRange)arg3 severity:(unsigned int)arg4 percentage:(float)arg5;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1;
- (void)requestProfilerData;
- (void)shaderSourceChanged:(id)arg1;
- (BOOL)editable;
- (id)alertInfoKey;
- (id)alertMessageKey;
- (id)languageIdentifier;
- (long long)lineNumber;
- (id)sourcePath;
- (id)sourceCode;
- (id)shaderAnnotations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

