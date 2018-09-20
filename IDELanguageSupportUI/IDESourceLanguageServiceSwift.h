//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTSourceLanguageService.h>

#import <IDELanguageSupportUI/DVTSourceLandmarkItemDelegate-Protocol.h>
#import <IDELanguageSupportUI/DVTSourceLanguagePrimaryCompletionStrategy-Protocol.h>
#import <IDELanguageSupportUI/DVTSourceLanguageRelatedIdentifierScannerService-Protocol.h>
#import <IDELanguageSupportUI/DVTSourceLanguageServiceSymbolLookup-Protocol.h>
#import <IDELanguageSupportUI/DVTSourceLanguageSyntaxTypeService-Protocol.h>
#import <IDELanguageSupportUI/IDEEditorDocumentDerivedContentOwner-Protocol.h>
#import <IDELanguageSupportUI/IDEEditorDocumentDerivedContentProviding-Protocol.h>
#import <IDELanguageSupportUI/IDEQuickHelpDataContextService-Protocol.h>

@class DVTFilePath, IDEEditorDocumentDerivedContentProvider, IDEWorkspace, NSArray, NSDictionary, NSObject, NSString, NSURL;
@protocol DVTCancellable, IDESourceLanguageServiceSwiftDiagnosticItems, OS_dispatch_queue;

@interface IDESourceLanguageServiceSwift : DVTSourceLanguageService <DVTSourceLandmarkItemDelegate, IDEQuickHelpDataContextService, IDEEditorDocumentDerivedContentOwner, DVTSourceLanguageSyntaxTypeService, DVTSourceLanguageRelatedIdentifierScannerService, DVTSourceLanguageServiceSymbolLookup, IDEEditorDocumentDerivedContentProviding, DVTSourceLanguagePrimaryCompletionStrategy>
{
    NSURL *_documentURL;
    NSDictionary *_buildSettings;
    NSDictionary *_formatOptions;
    IDEWorkspace *_workspace;
    struct vector<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>, std::__1::allocator<std::__1::vector<SwiftSyntaxToken, std::__1::allocator<SwiftSyntaxToken>>>> _syntaxMap;
    vector_e6ad2256 _structure;
    unsigned int _tokenizeGeneration;
    id <DVTCancellable> _tokenizeCancellable;
    id _initializationToken;
    id _documentUpdateNotificationToken;
    id _semanticsDisabledNotificationToken;
    id <DVTCancellable> _semanticsDisabledTimerToken;
    id <DVTCancellable> _serviceStatusObservingToken;
    DVTFilePath *_associatedFilePath;
    IDEEditorDocumentDerivedContentProvider *_derivedContentProvider;
    NSObject<OS_dispatch_queue> *_symbolLookupQueue;
    int _indexStatus;
    BOOL _sourceKitCompilerArgsAreFallback;
    struct _sourcekit_object_s *_sourcekitToolchainIds;
    struct _sourcekit_object_s *_sourcekitToolchainIdsForOpenDocument;
    id <IDESourceLanguageServiceSwiftDiagnosticItems> _diagnosticItems;
    NSString *_sourceKitBufferName;
    id <DVTCancellable> _interfaceGenerationToken;
    NSArray *_sourceKitCompilerArgs;
    NSArray *_toolchainIdents;
}

+ (void)enumerateSupportedContextScopesForLanguage:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)originalURLForGeneratedURL:(id)arg1 inWorkspace:(id)arg2;
+ (id)generatedURLForOriginalURL:(id)arg1 inWorkspace:(id)arg2;
+ (BOOL)canGenerateContentsForURL:(id)arg1 inWorkspace:(id)arg2;
+ (void)initialize;
+ (id)compilerArgumentsByDistillingCompilerArguments:(id)arg1;
+ (id)clangCompilerArgumentsFromDocumentParameters:(id)arg1;
+ (id)swiftCompilerArgumentsFromDocumentParameters:(id)arg1;
+ (id)documentParametersFromSwiftCompilerArguments:(id)arg1;
@property(copy) NSArray *toolchainIdents; // @synthesize toolchainIdents=_toolchainIdents;
@property(copy) NSArray *sourceKitCompilerArgs; // @synthesize sourceKitCompilerArgs=_sourceKitCompilerArgs;
@property id <DVTCancellable> interfaceGenerationToken; // @synthesize interfaceGenerationToken=_interfaceGenerationToken;
@property(copy) NSString *sourceKitBufferName; // @synthesize sourceKitBufferName=_sourceKitBufferName;
@property(retain) id <IDESourceLanguageServiceSwiftDiagnosticItems> diagnosticItems; // @synthesize diagnosticItems=_diagnosticItems;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1 autoCompleteCharacterSet:(id)arg2 proposedAutoComplete:(BOOL)arg3;
- (id)autoCompleteChars;
- (void)findIndexSymbolAtExpression:(id)arg1 withIndexCompatibleLocation:(id)arg2 withCurrentFileContentDictionary:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)quickHelpDataContextForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)expandPlaceholderInRange:(struct _NSRange)arg1 suggestedText:(id)arg2 effectiveRange:(struct _NSRange *)arg3;
- (long long)commentCoverageInLineRange:(struct _NSRange)arg1;
- (id)indentLineRange:(struct _NSRange)arg1 effectiveLineRange:(struct _NSRange *)arg2;
- (struct _NSRange)methodOrFunctionRangeAtIndex:(unsigned long long)arg1;
- (id)landmarkItemTypeNameForReference:(void *)arg1;
- (id)landmarkItemNameForReference:(void *)arg1 nameRange:(struct _NSRange *)arg2;
- (void)_addLandmarkItems:(vector_e6ad2256 *)arg1 toParent:(id)arg2 matchingType:(CDUnknownBlockType)arg3 altParent:(id)arg4 matchingAltType:(CDUnknownBlockType)arg5;
- (void)generateLandmarkItemsForParent:(id)arg1 matchingType:(CDUnknownBlockType)arg2 altParent:(id)arg3 matchingAltType:(CDUnknownBlockType)arg4;
- (struct _NSRange)textCompletionSession:(id)arg1 replacementRangeForSuggestedRange:(struct _NSRange)arg2;
- (long long)contextScopeAtLocation:(unsigned long long)arg1;
- (id)scopeLanguageSpecificationIdentifiersAtLocation:(unsigned long long)arg1;
- (id)functionAndMethodRanges;
- (id)commentBlockRanges;
- (id)_commentBlockRangesInRange:(struct _NSRange)arg1;
- (BOOL)isInTokenizableCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInPlainCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInKeywordAtLocation:(unsigned long long)arg1;
- (BOOL)isIncompletionPlaceholderAtLocation:(unsigned long long)arg1;
- (BOOL)isInNumberConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInCharacterConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIdentifierAtLocation:(unsigned long long)arg1;
- (BOOL)isInStringConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIncludeStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInPreprocessorStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInDocCommentAtLocation:(unsigned long long)arg1;
- (BOOL)isInCommentAtLocation:(unsigned long long)arg1;
- (long long)foldableBlockDepthForLineAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockInnerRangeForLineAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockRangeForLineAtLocation:(unsigned long long)arg1;
- (id)foldableBlockInnerRangesInRange:(struct _NSRange)arg1;
- (id)foldableBlockRangesAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockRangeAtLocation:(unsigned long long)arg1;
- (unsigned long long)indentOfBlockAtLocation:(unsigned long long)arg1;
- (struct _NSRange)functionOrMethodBodyRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)functionRangeAtIndex:(unsigned long long)arg1 isDefinitionOrCall:(char *)arg2;
- (struct _NSRange)methodDefinitionRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfWordAtIndex:(unsigned long long)arg1 allowNonWords:(BOOL)arg2;
- (void)_cancelRelatedIdentifiersRequest;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)shouldShowTemporaryLinkForCharacterAtIndex:(unsigned long long)arg1 proposedRange:(struct _NSRange)arg2 effectiveRanges:(id *)arg3;
- (id)symbolNameAtCharacterIndex:(unsigned long long)arg1 nameRanges:(id *)arg2;
- (struct _NSRange)_functionCallOrDeclarationBaseName:(const shared_ptr_99585c3b *)arg1;
- (struct _NSRange)characterRangeForUSR:(id)arg1;
- (long long)syntaxTypeAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 context:(id)arg3;
- (long long)_swiftSyntaxTypeAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)_applySemanticAnnotation:(struct _NSRange)arg1 kind:(struct _sourcekit_uid_s *)arg2 isSystem:(_Bool)arg3 affectedRange:(struct _NSRange *)arg4;
- (void)_readSemanticAnnotationTokens:(CDStruct_4c46f3f5)arg1 affectedRange:(struct _NSRange *)arg2 utf8IndexToUTF16IndexTableData:(id)arg3;
- (void)_readDiagnostics:(CDStruct_4c46f3f5)arg1;
- (void)_mergeSyntaxAndSemaMap:(CDStruct_4c46f3f5)arg1 affectedRange:(struct _NSRange *)arg2;
- (void)_closeDocument;
- (void)_openDocument;
- (BOOL)_shouldObserveFileForChanges;
- (BOOL)hasSourceKitBuffer;
- (void)derivedContentProvider:(id)arg1 didUnregisterClient:(id)arg2;
- (void)derivedContentProvider:(id)arg1 willRegisterClient:(id)arg2;
- (void)_buildSubStructure:(CDStruct_4c46f3f5)arg1 branch:(vector_e6ad2256 *)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 replacedString:(id)arg3 affectedRange:(struct _NSRange *)arg4;
- (void)updateLineRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)contextDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)_applyChangesFromSourceLanguageServiceContext:(id)arg1;
- (id)initWithLanguage:(id)arg1 delegate:(id)arg2;
- (id)derivedContentProviderForType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

