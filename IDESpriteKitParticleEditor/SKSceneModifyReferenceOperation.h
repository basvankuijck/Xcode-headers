//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSString, SKEditorReferenceNode;

@interface SKSceneModifyReferenceOperation : SKDocumentOperation
{
    SKEditorReferenceNode *_referenceNode;
    NSString *_oldReference;
    NSString *_newReference;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 referenceNode:(id)arg2 oldReference:(id)arg3 newReference:(id)arg4;

@end

