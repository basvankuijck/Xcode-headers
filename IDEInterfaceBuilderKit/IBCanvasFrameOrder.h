//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMutableIdentityDictionary;

@interface IBCanvasFrameOrder : NSObject
{
    IBMutableIdentityDictionary *_zOrder;
    IBMutableIdentityDictionary *_preOrder;
    IBMutableIdentityDictionary *_postOrder;
    IBMutableIdentityDictionary *_viewsToFrames;
    IBMutableIdentityDictionary *_framesToRootFrames;
}

@property(retain, nonatomic) IBMutableIdentityDictionary *framesToRootFrames; // @synthesize framesToRootFrames=_framesToRootFrames;
@property(retain, nonatomic) IBMutableIdentityDictionary *viewsToFrames; // @synthesize viewsToFrames=_viewsToFrames;
@property(retain, nonatomic) IBMutableIdentityDictionary *postOrder; // @synthesize postOrder=_postOrder;
@property(retain, nonatomic) IBMutableIdentityDictionary *preOrder; // @synthesize preOrder=_preOrder;
@property(retain, nonatomic) IBMutableIdentityDictionary *zOrder; // @synthesize zOrder=_zOrder;
- (void).cxx_destruct;
- (id)init;

@end

