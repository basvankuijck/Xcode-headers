//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class NSArray;

@interface IDEMappingModelEntityMappingInspectorController : IDEInspectorViewController
{
}

+ (id)keyPathsForValuesAffectingDestinationEntityNames;
+ (id)keyPathsForValuesAffectingSourceEntityNames;
+ (id)keyPathsForValuesAffectingDestinationEntities;
+ (id)keyPathsForValuesAffectingSourceEntities;
+ (id)keyPathsForValuesAffectingMappingModel;
@property(readonly) NSArray *destinationEntityNames;
@property(readonly) NSArray *sourceEntityNames;
@property(readonly) NSArray *destinationEntities;
@property(readonly) NSArray *sourceEntities;
- (id)mappingModel;

@end

