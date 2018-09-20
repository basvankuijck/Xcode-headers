//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

#import <IDESourceEditor/DVTSourceLanguagePrimaryCompletionStrategy-Protocol.h>
#import <IDESourceEditor/DVTTextFindable-Protocol.h>
#import <IDESourceEditor/IDEDocumentStructureProviding-Protocol.h>
#import <IDESourceEditor/IDEIndexCompatibleDocumentLocationConverter-Protocol.h>
#import <IDESourceEditor/IDEMediaLibraryDelegate-Protocol.h>
#import <IDESourceEditor/IDESourceCodeDocument-Protocol.h>
#import <IDESourceEditor/IDESourceCodeGenerationDestination-Protocol.h>

@class DVTSourceCodeLanguage, IDEMediaResourceVariantContext, NSArray, NSDictionary, NSPrintInfo, NSString, NSURL, _TtC18SourceModelSupport26SourceModelLanguageService;

@interface _TtC15IDESourceEditor18SourceCodeDocument : IDEEditorDocument <IDESourceCodeGenerationDestination, DVTSourceLanguagePrimaryCompletionStrategy, IDESourceCodeDocument, IDEDocumentStructureProviding, IDEIndexCompatibleDocumentLocationConverter, DVTTextFindable, IDEMediaLibraryDelegate>
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: notifiesWhenClosing
    // Error parsing type: , name: registeredEditors
    // Error parsing type: , name: firstEditorWorkspaceObservingToken
    // Error parsing type: , name: firstEditorWorkspaceBuildSettings
    // Error parsing type: , name: lastKnownBuildOperation
    // Error parsing type: , name: variantContextForMediaLibrary
    // Error parsing type: , name: variantForResolvingMediaResources
    // Error parsing type: , name: firstEditorWorkspacePreferredIndexableIdentifiers
    // Error parsing type: , name: activeSchemeObservingToken
    // Error parsing type: , name: diagnosticsEnabledObservingToken
    // Error parsing type: , name: activeSchemeBuildablesObservingToken
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: languageServiceHostExtension.storage
    // Error parsing type: , name: textEncoding
    // Error parsing type: , name: lastEditTimestamp
    // Error parsing type: , name: usesInferredLanguage
    // Error parsing type: , name: language
    // Error parsing type: , name: contentState
    // Error parsing type: , name: contentStateObservers
    // Error parsing type: , name: contentReadFromURL
    // Error parsing type: , name: generatedContentContext
    // Error parsing type: , name: currentGeneratedContentProvider
    // Error parsing type: , name: currentGeneratedContentProviderDisplayNameObserver
    // Error parsing type: , name: currentContentGenerationCoordinator
    // Error parsing type: , name: sourceEditorDiagnosticManagerObserver
    // Error parsing type: , name: sourceEditorDiagnosticManager.storage
    // Error parsing type: , name: journal
    // Error parsing type: , name: landmarkTimer
    // Error parsing type: , name: _topLandmark
    // Error parsing type: , name: inFlightExtensionCommandToken
    // Error parsing type: , name: inFlightExtensionCommandTimer
    // Error parsing type: , name: indentReplacements
    // Error parsing type: , name: printInfo_.storage
}

+ (long long)topUndoGroupingLevel;
- (CDUnknownBlockType).cxx_destruct;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
@property(nonatomic, retain) NSPrintInfo *printInfo;
- (id)emptyPrivateCopy;
- (id)privateCopy;
- (id)diffDataSource;
- (BOOL)replaceFindResults:(id)arg1 inSelection:(struct _NSRange)arg2 withString:(id)arg3 withError:(id *)arg4;
- (BOOL)replaceTextWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (BOOL)replaceFindResults:(id)arg1 withString:(id)arg2 withError:(id *)arg3;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
@property(nonatomic, readonly) NSArray *ideTopLevelStructureObjects;
- (void)updateLandmarks;
- (id)updatedLocationFromLocation:(id)arg1 toTimestamp:(double)arg2;
- (id)indexCompatibleDocumentLocationFromLocation:(id)arg1;
- (void)indexChanged:(id)arg1;
@property(nonatomic, readonly) NSDictionary *buildSettings;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) BOOL canSave;
- (BOOL)readFromData:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@property(nonatomic, copy) NSURL *fileURL;
@property(nonatomic, retain) DVTSourceCodeLanguage *language; // @synthesize language;
@property(nonatomic) double lastEditTimestamp; // @synthesize lastEditTimestamp;
@property(nonatomic, readonly) _TtC18SourceModelSupport26SourceModelLanguageService *sourceModelLanguageService;
- (id)editedContents;
- (id)sourceModel;
@property(nonatomic, copy) NSDictionary *variantForResolvingMediaResources; // @synthesize variantForResolvingMediaResources;
@property(nonatomic, retain) IDEMediaResourceVariantContext *variantContextForMediaLibrary; // @synthesize variantContextForMediaLibrary;
- (void)unregisterDocumentEditor:(id)arg1;
- (void)registerDocumentEditor:(id)arg1;
- (id)newUndoManager;
- (void)editorDocumentWillClose;
- (id)init;
- (id)lineRangeCharacterRangeConverter;
- (id)sourceCodeGenerator:(id)arg1 commitInsertionOfSourceCodeForCompositeResult:(id)arg2 error:(id *)arg3;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCAtSynthesizeWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCPropertyDeclarationWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCPropertyReleaseForTeardownWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceVariableReleaseForTeardownWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddObjectiveCReleaseForTeardownMethodWithSourceCodeGenerator:(id)arg1 withReleaseCallCode:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceVariableDeclarationWithName:(id)arg2 type:(id)arg3 inClassNamed:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCClassMethodDefinitionWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCClassMethodDeclarationWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceMethodDefinitionWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAppendObjectiveCSourceCode:(id)arg1 afterItem:(id)arg2 prependNewLine:(BOOL)arg3;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddObjectiveCInstanceMethodDeclarationWithName:(id)arg2 inClassNamed:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddObjectiveCMethodSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)_primitiveAddObjectiveCSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 insertAdditionalNewlineWhenInsertingWithAfterBeforeHint:(BOOL)arg4 insertAtEndWhenInsertingWithoutHint:(BOOL)arg5 insertAfterObjCBlockWhenInsertingAtBeginning:(BOOL)arg6 ignoreHintItemsConformingToSpecifications:(id)arg7 onlyConsiderItemsConformingToSpecifications:(id)arg8 error:(id *)arg9;
- (id)_insertObjectiveCSourceCode:(id)arg1 inTeardownMethodForClassNamed:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_teardownMethodNameForSourceModelCodeGeneratorWithOptions:(id)arg1;
- (BOOL)_hasObjCMethodImplementationForName:(id)arg1 forClassNamed:(id)arg2;
- (id)_objCMethodImplementationItemForName:(id)arg1 inClassItem:(id)arg2;
- (id)_insertObjCSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 withInsertAfterHint:(id)arg3 andInsertBeforeHint:(id)arg4 ignoreHintItemsConformingToSpecifications:(id)arg5 onlyConsiderItemsConformingToSpecifications:(id)arg6 insertAdditionalNewline:(BOOL)arg7 insertAtEndWhenInsertingWithoutHint:(BOOL)arg8 insertAfterObjCBlockWhenInsertingAtBeginning:(BOOL)arg9;
- (id)_insertObjCSourceCode:(id)arg1 inContainingSourceModelItem:(id)arg2 withInsertAfterHint:(id)arg3 andInsertBeforeHint:(id)arg4 ignoreHintItemsConformingToSpecifications:(id)arg5 onlyConsiderItemsConformingToSpecifications:(id)arg6 insertAdditionalNewline:(BOOL)arg7 fallbackInsertionBlock:(CDUnknownBlockType)arg8;
- (long long)_insertionHintMatchPriorityForObjCSourceModelItem:(id)arg1 givenInsertionHintItemName:(id)arg2 andLanguageSpecification:(id)arg3 ignoreItemsConformingToSpecifications:(id)arg4 onlyConsiderItemsConformingToSpecifications:(id)arg5;
- (id)_insertObjCSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 error:(id *)arg4;
- (id)_insertObjCSourceCode:(id)arg1 inContainingSourceModelItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 firstPossibleItemToInsertBefore:(id)arg4 error:(id *)arg5;
- (id)_insertionHintForObjCSourceModelItem:(id)arg1;
- (id)_firstObjCSourceModelItemToInsertBeforeInInstanceVariableBlock:(id)arg1;
- (id)_firstTopLevelObjCInterfaceSourceModelItemToInsertBeforeInClassItem:(id)arg1;
- (id)_insertSourceCode:(id)arg1 atBeginningOfClassSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 insertAfterObjCBlock:(BOOL)arg4;
- (id)_insertSourceCode:(id)arg1 atEndOfClassSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3;
- (id)_insertSourceCode:(id)arg1 atEndOfContainingSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 beforeItemMatchingPredicateBlock:(CDUnknownBlockType)arg4;
- (id)_insertSourceCode:(id)arg1 atBeginningOfContainingSourceModelItem:(id)arg2 insertOnNextLine:(BOOL)arg3 afterItemMatchingPredicateBlock:(CDUnknownBlockType)arg4;
- (id)_primitiveInsertSourceCode:(id)arg1 atBeginning:(BOOL)arg2 ofContainingSourceModelItem:(id)arg3 insertOnNextLine:(BOOL)arg4 afterOrBeforeItemMatchingPredicateBlock:(CDUnknownBlockType)arg5;
- (id)textDocumentLocationForInsertingSourceCode:(id)arg1 atLocation:(unsigned long long)arg2;
- (id)_instanceVariableDeclarationBlockItemForClassItem:(id)arg1;
- (id)_objCCategoryImplementationClassModelItemForClassNamed:(id)arg1 categoryName:(id)arg2 error:(id *)arg3;
- (id)_objCCategoryInterfaceClassModelItemForClassNamed:(id)arg1 categoryName:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_objCImplementationClassModelItemForClassNamed:(id)arg1 error:(id *)arg2;
- (id)_objCInterfaceClassModelItemForClassNamed:(id)arg1 error:(id *)arg2;
- (id)_classModelItemForClassNamed:(id)arg1 withConditionBlock:(CDUnknownBlockType)arg2;
- (id)errorForNotFindingClassItemForClassNamed:(id)arg1 humanReadableClassItemType:(id)arg2;
- (id)supportedSourceCodeLanguagesForSourceCodeGeneration;
- (BOOL)classItemIsValid:(id)arg1;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftClassMethodDefinitionWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftInstanceMethodDefinitionWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddSwiftMethodSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftInstanceVariableReleaseForTeardownWithName:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_primitiveAddSwiftReleaseForTeardownMethodWithSourceCodeGenerator:(id)arg1 withReleaseCallCode:(id)arg2 inClassItem:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)_insertSwiftSourceCode:(id)arg1 inTeardownMethodForClassItem:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_swiftMethodItemForName:(id)arg1 inClassItem:(id)arg2;
- (id)_teardownMethodNameForSwiftSourceCodeGeneratorWithOptions:(id)arg1;
- (id)sourceCodeGenerator:(id)arg1 prepareToAddSwiftPropertyDeclarationWithName:(id)arg2 type:(id)arg3 inClassItem:(id)arg4 options:(id)arg5 error:(id *)arg6;
- (id)_primitiveAddSwiftSourceCode:(id)arg1 toClassItem:(id)arg2 withOptions:(id)arg3 insertAdditionalNewlineWhenInsertingWithAfterBeforeHint:(BOOL)arg4 insertAtEndWhenInsertingWithoutHint:(BOOL)arg5 error:(id *)arg6;
- (id)_insertSwiftSourceCode:(id)arg1 inTopLevelOfClassItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 error:(id *)arg4;
- (id)_insertSwiftSourceCode:(id)arg1 inContainingSourceLandmarkItem:(id)arg2 asCloseAsPossibleToLineNumber:(unsigned long long)arg3 firstPossibleItemToInsertBefore:(id)arg4 error:(id *)arg5;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (BOOL)hasMultiLineAnnotationHighlight;
- (id)documentLocationWithLastLineRangeAtLocation:(id)arg1;
- (id)documentLocation:(id)arg1 byUnion:(id)arg2;
- (id)documentLocationWithEnclosingLineRangeAtLocation:(id)arg1;
- (id)insertCharactersAfterLocation:(id)arg1 withString:(id)arg2;
- (id)insertCharactersBeforeLocation:(id)arg1 withString:(id)arg2;
- (id)replaceCharactersAtLocation:(id)arg1 withString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

