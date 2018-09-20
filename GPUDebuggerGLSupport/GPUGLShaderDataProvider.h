//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerGLSupport/GPUTraceShaderDataProvider-Protocol.h>

@class GPUTraceShaderDataItem, GPUTraceShaderItem, IDEEditorDocument, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface GPUGLShaderDataProvider : NSObject <GPUTraceShaderDataProvider>
{
    GPUTraceShaderItem *_shaderItem;
    GPUTraceShaderDataItem *_dataItem;
    NSMutableArray *_mutableAnnotations;
    NSString *_sourceHeader;
    NSString *_infoLog;
    NSString *_sourceCode;
    NSURL *_sourceURL;
    NSDictionary *_programInfoDict;
    BOOL _isAssembly;
    NSMutableArray *_observerTokens;
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
- (void)requestProfilerData;
- (float)shaderBinaryCostForShaderType:(unsigned int)arg1;
- (id)sampleInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)allDiassemblyInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)perLineSourceInfoDictForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)shaderAnalyzerResultForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (void)_updateProgram;
- (id)_createProgramInfoDict:(id)arg1;
- (id)_createProgramHeader:(id)arg1;
- (id)_shaderDisassembly;
- (void)_onDisassemblyUpdated;
- (void)_onProgramInfoDictUpdated;
- (void)_rebuildAnnotations:(id)arg1 lineOffset:(long long)arg2;
- (void)_makeAnnotationsWithInfoLog:(id)arg1;
- (void)_appendProfilerResultToInfoLog:(id)arg1 programItem:(id)arg2;
- (id)_buildInfoLogWithDictionary:(id)arg1;
- (void)_updateProgramInfoDict;
- (void)_addAnnotation:(id)arg1 tooltip:(id)arg2 lineRange:(struct _NSRange)arg3 severity:(unsigned int)arg4 percentage:(float)arg5;
- (void)dealloc;
- (void)_createSourceCodeAndURL;
- (id)initWithDataItem:(id)arg1;
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
