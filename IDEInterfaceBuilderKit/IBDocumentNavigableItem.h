//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class DVTObservingToken, NSString;
@protocol DVTCancellable;

@interface IBDocumentNavigableItem : IDEKeyDrivenNavigableItem
{
    DVTObservingToken *_nameToken;
    id <DVTCancellable> _childWrappersToken;
    NSString *_name;
}

+ (id)keyPathsForValuesAffectingLeaf;
+ (id)keyPathsForValuesAffectingGroupIdentifier;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingRepresentedWrapper;
- (void).cxx_destruct;
- (void)willAccessChildItems;
- (id)contentDocumentLocation;
- (id)documentType;
- (id)archivableRepresentation;
- (id)childRepresentedObjects;
- (BOOL)isLeaf;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (id)groupIdentifier;
- (id)image;
- (id)name;
- (id)representedDocument;
- (id)representedWrapper;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end

