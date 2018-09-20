//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSError, NSPopUpButton, NSTextField, NSView;
@protocol DVTCancellable, MTLLibrary;

@interface SKEMetalProgramPicker : IDEInspectorProperty
{
    NSPopUpButton *_sourceFile;
    NSPopUpButton *_fragmentFunction;
    NSPopUpButton *_vertexFunction;
    NSButton *_opaque;
    NSView *_errorView;
    NSTextField *_errorLabel;
    NSError *_compilationError;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_delegateKeyPath;
    id <MTLLibrary> _mtlLibrary;
    id <DVTCancellable> _popUpWillPopToken;
}

+ (void)setupMaterialLibrary:(id)arg1 withDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)sourceFileWillPopUp:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)didCompileNotification:(id)arg1;
- (void)setError:(id)arg1;
- (void)selectOpaque:(id)arg1;
- (void)selectFragmentFunction:(id)arg1;
- (void)selectVertexFunction:(id)arg1;
- (void)setFragmentFunctionName:(id)arg1;
- (void)setVertexFunctionName:(id)arg1;
- (void)selectSourceFile:(id)arg1;
- (void)presentError:(id)arg1;
- (void)didCompileLibrary;
- (void)setMTLLibrary:(id)arg1;
- (void)primitiveInvalidate;
- (double)baseline;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

