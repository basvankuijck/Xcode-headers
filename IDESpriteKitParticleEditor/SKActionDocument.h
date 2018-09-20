//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKEditorDocument.h>

#import <IDESpriteKitParticleEditor/GTFActionDocument-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFActionLibraryDocumentLocationDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/GTFActionLibraryUndoDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/IDEMediaLibraryDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/NSKeyedUnarchiverDelegate-Protocol.h>
#import <IDESpriteKitParticleEditor/SKObjectLibraryProvider-Protocol.h>

@class DVTObservingToken, GTFActionLibrary, IDEMediaResourceVariantContext, NSArray, NSDictionary, NSMutableArray, NSString, SKActionEditorNavigableRepresentedNode;

@interface SKActionDocument : SKEditorDocument <GTFActionDocument, GTFActionLibraryUndoDelegate, GTFActionLibraryDocumentLocationDelegate, SKObjectLibraryProvider, IDEMediaLibraryDelegate, NSKeyedUnarchiverDelegate>
{
    DVTObservingToken *_documentEditedKVOToken;
    SKActionEditorNavigableRepresentedNode *_navigableScene;
    GTFActionLibrary *_actionLibrary;
    id _topLevelNavigablePreviewSceneObject;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
@property(retain, nonatomic) id topLevelNavigablePreviewSceneObject; // @synthesize topLevelNavigablePreviewSceneObject=_topLevelNavigablePreviewSceneObject;
@property(retain, nonatomic) GTFActionLibrary *actionLibrary; // @synthesize actionLibrary=_actionLibrary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *availableSceneNames;
@property(readonly, nonatomic) NSMutableArray *dynamicObjectLibraryAssets;
- (void)mediaLibraryController:(id)arg1 populatePasteboard:(id)arg2 withMediaResourceVariantSets:(id)arg3;
- (id)undoManagerForActionLibrary:(id)arg1;
- (id)documentLocationForActionTimeline:(id)arg1;
- (id)documentLocationForAction:(id)arg1;
- (id)addActionTimeline:(id)arg1 withName:(id)arg2;
- (id)nextAvailableActionName:(id)arg1;
@property(readonly, nonatomic) long long actionEditorClientDocumentType;
- (id)dataOfType:(id)arg1 error:(id *)arg2;
- (id)namedAssets;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (BOOL)_loadActionsFromUnarchiver:(id)arg1 withFileInfo:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)ideTopLevelStructureObjects;
- (id)fileDataType;
- (void)editorDocumentWillClose;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
@property(readonly) NSDictionary *variantForResolvingMediaResources;

@end

