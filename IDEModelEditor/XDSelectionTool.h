//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/XDDiagramTool.h>

@class DVTNotificationToken, XDGraphic;

@interface XDSelectionTool : XDDiagramTool
{
    XDGraphic *_mouseOverGraphic;
    DVTNotificationToken *_graphicRemovedToken;
    struct CGRect _rubberbandRect;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)mouseDown:(id)arg1 inView:(id)arg2;
- (BOOL)dragSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)rubberbandSelectionWithEvent:(id)arg1 inView:(id)arg2;
- (BOOL)moveSelectedGraphicsWithEvent:(id)arg1 inView:(id)arg2;
- (void)trackKnob:(int)arg1 ofGraphic:(id)arg2 withEvent:(id)arg3 inView:(id)arg4;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (void)_diagramStorageWillRemoveGraphic:(id)arg1;
- (void)resignCurrentDiagramTool;
- (void)becomeCurrentDiagramTool;
- (id)imageForDiagramToolbarItem;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

