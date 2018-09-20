//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorLayoutGroup.h>

@class IDEInspectorLayoutViewWrapper, IDEInspectorProperty;

@interface IDEInspectorPropertyLayoutGroup : IDEInspectorLayoutGroup
{
    IDEInspectorProperty *leftProperty;
    IDEInspectorProperty *rightProperty;
    IDEInspectorLayoutViewWrapper *leftPropertyViewWrapper;
    IDEInspectorLayoutViewWrapper *rightPropertyViewWrapper;
    BOOL propertyViewsAreInstalled;
}

@property(readonly, nonatomic) IDEInspectorProperty *rightProperty; // @synthesize rightProperty;
@property(readonly, nonatomic) IDEInspectorProperty *leftProperty; // @synthesize leftProperty;
- (void).cxx_destruct;
- (void)inspectorContentViewDidMoveToWindow;
- (void)inspectorContentViewWillMoveToWindow:(id)arg1;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)pushFrameOriginsToViews;
- (id)accessoryView;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)refreshIfNeeded;
- (void)primitiveInvalidate;
- (id)initWithLeftProperty:(id)arg1 andRightProperty:(id)arg2;

@end
