//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBAbstractSegueConnection, IBAbstractStoryboardSegueTemplate, IBSimulatedMetricsContainer, IBStoryboardDocument, IBStoryboardRelationshipSegue, NSImage, NSObject, NSSet, NSString;
@protocol IBPrimarySceneObject;

@protocol IBPrimarySceneObject <NSObject>
@property(copy, nonatomic) NSString *ibExplicitStoryboardIdentifier;
- (NSString *)ibShortDisplayName;
- (BOOL)ibIsPrimarySceneObject:(NSObject<IBPrimarySceneObject> *)arg1 validSplitViewDetailWithSegue:(IBStoryboardRelationshipSegue *)arg2;
- (BOOL)ibIsPrimarySceneObject:(NSObject<IBPrimarySceneObject> *)arg1 validSplitViewMasterWithSegue:(IBStoryboardRelationshipSegue *)arg2;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibAddStoryboardSegueTemplate:(IBAbstractStoryboardSegueTemplate *)arg1;
- (void)ibWillResignSourceControllerForSegue:(IBAbstractSegueConnection *)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(IBAbstractSegueConnection *)arg1;
- (IBSimulatedMetricsContainer *)ibInheritableMetricsForDownstreamController:(id <IBPrimarySceneObject>)arg1 viaSegue:(IBAbstractSegueConnection *)arg2;
- (NSSet *)ibOutgoingSeguesInDocument:(IBStoryboardDocument *)arg1;
- (NSSet *)ibIncomingSeguesIncludingSelfOriginated:(BOOL)arg1;
- (NSImage *)ibImageForOwnedScene;

@optional
@property(nonatomic) BOOL ibInspectedIsDesignatedEntryPoint;
- (NSString *)ibUniqueIdentifierForStoryboardCompilation;
- (void)ibPrepareTopLevelControllerForStoryboardCompilation;
@end

