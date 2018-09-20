//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKView.h>

#import <IDESpriteKitParticleEditor/SKSelectionView-Protocol.h>

@class NSArray, NSEvent, NSString;
@protocol SKInputViewDelegate;

@interface SKInputView : SKView <SKSelectionView>
{
    struct {
        unsigned int _touchBegan:1;
        unsigned int _touchMoved:1;
        unsigned int _touchEnded:1;
        unsigned int _touchHoverMove:1;
        unsigned int _scrollWheel:1;
        unsigned int _magnify:1;
        unsigned int _rotate:1;
        unsigned int _multiTouchBegan:1;
        unsigned int _multiTouchMoved:1;
        unsigned int _multiTouchEnded:1;
        unsigned int _rightDown:1;
        unsigned int _rightUp:1;
        unsigned int _willRenderContent:1;
        unsigned int _didUpdate:1;
        unsigned int _acceptedDragTypes:1;
        unsigned int _dragEntered:1;
        unsigned int _didPerformDrag:1;
        unsigned int _reserved:16;
    } _delegateFlags;
    unsigned long long _lastEventModFlags;
    unsigned long long _lastEventFlag;
    unsigned long long _lastDragEventFlag;
    id _eventMonitor;
    struct CGPoint _lastTouchPoint;
    unsigned long long _lastTouchId;
    NSArray *_draggingTypes;
    struct unique_ptr<DelayedTouchEvent, std::__1::default_delete<DelayedTouchEvent>> _latestMoveEvent;
    struct unique_ptr<DelayedTouchEvent, std::__1::default_delete<DelayedTouchEvent>> _endEvent;
    NSEvent *_scrollWheelEvent;
    NSEvent *_magnifyEvent;
    NSEvent *_rotateEvent;
    NSEvent *_multiTouchMovedEvent;
    NSEvent *_multiTouchEndedEvent;
    NSEvent *_hoverMoveEvent;
    BOOL _allowDragging;
    BOOL _trackMoves;
    id <SKInputViewDelegate> _inputViewDelegate;
    NSEvent *_lastMouseDownEvent;
    NSEvent *_lastMouseDragEvent;
}

+ (BOOL)isNaturalScrollDirection;
@property(nonatomic) BOOL trackMoves; // @synthesize trackMoves=_trackMoves;
@property(nonatomic) BOOL allowDragging; // @synthesize allowDragging=_allowDragging;
@property(readonly, nonatomic) NSEvent *lastMouseDragEvent; // @synthesize lastMouseDragEvent=_lastMouseDragEvent;
@property(readonly, nonatomic) NSEvent *lastMouseDownEvent; // @synthesize lastMouseDownEvent=_lastMouseDownEvent;
@property unsigned long long lastEventModFlags; // @synthesize lastEventModFlags=_lastEventModFlags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_update:(double)arg1;
- (void)willRenderContent;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)_tryAcceptFilenameListDrop:(id)arg1 sender:(id)arg2;
- (BOOL)_tryAcceptMediaResourceDrop:(id)arg1 sender:(id)arg2;
- (BOOL)_tryAcceptObjectLibraryDrop:(id)arg1 sender:(id)arg2;
- (BOOL)_tryAcceptNodeLibraryDrop:(id)arg1 sender:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_processDelayedEvents;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)touchCancelled:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)_delayedTouchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)_delayedTouchMove:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2 clickCount:(int)arg3;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
@property(nonatomic) __weak id <SKInputViewDelegate> inputViewDelegate; // @synthesize inputViewDelegate=_inputViewDelegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

