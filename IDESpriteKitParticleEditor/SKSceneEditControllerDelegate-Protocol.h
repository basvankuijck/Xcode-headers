//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class NSArray, NSDictionary, SKSceneEditController;

@protocol SKSceneEditControllerDelegate <NSObject>
- (void)sceneEditController:(SKSceneEditController *)arg1 performAction:(SEL)arg2 withSender:(id)arg3;
- (BOOL)sceneEditController:(SKSceneEditController *)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3;
- (void)sceneEditController:(SKSceneEditController *)arg1 beginEditingItem:(struct NSObject *)arg2;

@optional
- (void)sceneEditController:(SKSceneEditController *)arg1 didPerformDragOperation:(NSDictionary *)arg2 atLocation:(struct CGPoint)arg3;
- (void)sceneEditController:(SKSceneEditController *)arg1 draggingEntered:(NSArray *)arg2;
- (NSArray *)sceneEditControllerAcceptedDraggedTypes:(SKSceneEditController *)arg1;
- (void)sceneEditControllerEditNavigationGraph:(SKSceneEditController *)arg1;
- (void)sceneEditControllerEditTileMap:(SKSceneEditController *)arg1;
- (void)sceneEditController:(SKSceneEditController *)arg1 didUpdateScene:(double)arg2;
@end

