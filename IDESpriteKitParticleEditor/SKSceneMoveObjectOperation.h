//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKSceneNavigableObject;

@interface SKSceneMoveObjectOperation : SKDocumentOperation
{
    long long _index;
    long long _oldIndex;
    SKSceneNavigableObject *_object;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (void)_moveChildToIndex:(long long)arg1;
- (id)initWithDocument:(id)arg1 object:(id)arg2 index:(long long)arg3;

@end

