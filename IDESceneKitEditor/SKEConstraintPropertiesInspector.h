//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEInspectorViewController.h>

#import <IDESceneKitEditor/NSOutlineViewDataSource-Protocol.h>
#import <IDESceneKitEditor/NSOutlineViewDelegate-Protocol.h>

@class NSString;

@interface SKEConstraintPropertiesInspector : SKEInspectorViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
}

- (void)pickNode:(id)arg1 fromButton:(id)arg2;
- (id)buildChildNodesMenuForNode:(id)arg1;
- (void)nodeSelectedInMenu:(id)arg1;
- (void)pickNode:(id)arg1;
- (id)sliceElement;
- (BOOL)noSelection;
- (id)constraint;
- (void)setContent:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
