//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/DVTInvalidation-Protocol.h>
#import <IDESourceEditor/NSImmediateActionAnimationController-Protocol.h>

@class DVTStackBacktrace, NSImmediateActionGestureRecognizer, NSString, _TtC15IDESourceEditor16SourceCodeEditor;

@interface QuickHelpForceTouchController : NSObject <NSImmediateActionAnimationController, DVTInvalidation>
{
    _TtC15IDESourceEditor16SourceCodeEditor *_editor;
    NSImmediateActionGestureRecognizer *_quickHelpForceTouchGestureRecognizer;
}

+ (void)initialize;
@property(retain) NSImmediateActionGestureRecognizer *quickHelpForceTouchGestureRecognizer; // @synthesize quickHelpForceTouchGestureRecognizer=_quickHelpForceTouchGestureRecognizer;
@property __weak _TtC15IDESourceEditor16SourceCodeEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;
- (void)primitiveInvalidate;
- (void)handleForceTouchGestureRecognizer:(id)arg1;
- (void)addQuickHelpForceTouchGestureRecognizerToEditor:(id)arg1;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

