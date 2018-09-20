//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNCameraControlConfiguration-Protocol.h>

@class NSEvent, SCNNode, SCNView;

@protocol SCNEventHandler <SCNCameraControlConfiguration>
@property(nonatomic) SCNView *view;
@property(readonly, nonatomic) SCNNode *freeCamera;
@property(nonatomic) BOOL enableFreeCamera;
@property(nonatomic) BOOL enabled;
- (BOOL)rotateWithEvent:(NSEvent *)arg1;
- (BOOL)magnifyWithEvent:(NSEvent *)arg1;
- (BOOL)scrollWheel:(NSEvent *)arg1;
- (BOOL)mouseDragged:(NSEvent *)arg1;
- (BOOL)mouseMoved:(NSEvent *)arg1;
- (BOOL)mouseUp:(NSEvent *)arg1;
- (BOOL)mouseDown:(NSEvent *)arg1;
- (BOOL)keyUp:(NSEvent *)arg1;
- (BOOL)flagsChanged:(NSEvent *)arg1;
- (BOOL)keyDown:(NSEvent *)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)activateFreeCamera;
- (BOOL)wantsRedraw;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)sceneDidChange;
- (void)sceneWillChange;
@end

