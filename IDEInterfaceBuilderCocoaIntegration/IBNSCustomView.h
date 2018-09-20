//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBRemoteView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaCustomObject-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBNSCustomView : IBRemoteView <IBDocumentArchiving, IBCocoaCustomObject>
{
    BOOL _encodeUsingClassSwapper;
    id _extension;
    NSString *_className;
}

@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)marshalledRepresentationForRendering;
- (id)marshalledClassName;
- (id)marshalledUserDefinedRuntimeAttributeKeyValuePairs;
- (void)setAppearance:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (BOOL)drawsDirectlyAsPlaceholder;
- (BOOL)ibCanDirectlySetCanDrawConcurrently;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawPlaceholder:(struct CGRect)arg1;
- (BOOL)prefersCachedImageBasedDrawing;
- (BOOL)ibCanEmbedDirectlyInSplitView;
- (BOOL)ibWantsEditorCanvasFrameContentBorder;
- (id)ibRuntimeClassName;
- (id)ibWidgetType;
- (id)ibDesignableContentView;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibExternalCustomClassModule;
- (void)setIbExternalCustomClassModule:(id)arg1;
- (id)ibExternalCustomClassName;
- (void)setIbExternalCustomClassName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ibFallbackClassNameForClassSwapper;
- (id)targetRuntime;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (BOOL)ibShouldUseClassSwapper;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

