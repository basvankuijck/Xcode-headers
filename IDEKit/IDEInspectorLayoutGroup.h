//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEDeclarativeInspectorDynamicVisibilityManager, IDEInspectorContentView, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface IDEInspectorLayoutGroup : NSObject <DVTInvalidation>
{
    NSMutableOrderedSet *_subgroups;
    IDEInspectorLayoutGroup *_parentGroup;
    IDEDeclarativeInspectorDynamicVisibilityManager *_visibilityManager;
    IDEInspectorContentView *_contentView;
    NSString *_debugLabel;
    struct CGRect _frame;
}

+ (void)initialize;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(copy) NSString *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(retain) IDEDeclarativeInspectorDynamicVisibilityManager *visibilityManager; // @synthesize visibilityManager=_visibilityManager;
@property(readonly, nonatomic) NSOrderedSet *subgroups; // @synthesize subgroups=_subgroups;
@property(retain, nonatomic) IDEInspectorContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)inspectorContentViewDidMoveToWindow;
- (void)inspectorContentViewWillMoveToWindow:(id)arg1;
- (void)uninstallFromInspectorContentView;
- (void)installIntoInspectorContentView:(id)arg1;
- (struct CGRect)convertRectFromView:(struct CGRect)arg1;
- (struct CGRect)convertRectToView:(struct CGRect)arg1;
- (void)pushFrameOriginsToViews;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (void)recursivelyPushFrameOriginsToViews;
- (void)recursivelyLayoutGroupTreeBottomUp;
- (void)recursivelyLayoutGroupTreeTopDown;
@property double frameY;
@property double frameX;
@property double frameHeight;
@property double frameWidth;
@property struct CGSize frameSize;
@property struct CGPoint frameOrigin;
@property(readonly) struct CGRect bounds;
- (void)removeSubgroup:(id)arg1;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)addSubgroup:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionWithIndent:(long long)arg1;
- (id)brecciaAttributeDescription;
- (id)attributeDescription;
- (void)refreshIfNeeded;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

