//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SourceEditor/NSDraggingSource-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC12SourceEditor30SourceEditorViewDraggingSource : NSObject <NSDraggingSource>
{
    // Error parsing type: , name: defaultDragAndDropTextDelay
    // Error parsing type: , name: dragAndDropTextDelayOverride
    // Error parsing type: , name: dragAndDropTextDelay.storage
    // Error parsing type: , name: lastEvent
    // Error parsing type: , name: draggingSession
    // Error parsing type: , name: mouseDragMovementThreshold
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;

@end

