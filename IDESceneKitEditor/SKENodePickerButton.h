//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class SCNNode;

@interface SKENodePickerButton : NSButton
{
    SCNNode *_node;
}

@property(retain, nonatomic) SCNNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

