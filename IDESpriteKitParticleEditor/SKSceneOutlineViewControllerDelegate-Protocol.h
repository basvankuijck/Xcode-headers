//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSMenu;

@protocol SKSceneOutlineViewControllerDelegate
- (struct CGPoint)getViewCenterInScene;
- (NSMenu *)getMenuForRightClick:(struct NSObject *)arg1;
- (void)editTileMap:(id)arg1;
- (void)editNagivationGraph:(id)arg1;
- (void)toggleLockForSelection:(id)arg1;
- (void)bringSelectedItemsToFront;
- (void)sendSelectedItemsToBack;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
@end

