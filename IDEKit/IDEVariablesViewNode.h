//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSCopying-Protocol.h>
#import <IDEKit/NSPasteboardWriting-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSArray, NSMutableArray, NSPredicate, NSString;
@protocol IDEDataValue;

@interface IDEVariablesViewNode : NSObject <NSPasteboardWriting, NSCopying, DVTInvalidation>
{
    NSString *_cachedName;
    BOOL _cachedHasChildren;
    NSMutableArray *_children;
    DVTObservingToken *_dataValueIsValidObserver;
    DVTObservingToken *_childObserver;
    DVTObservingToken *_childValuesCountValidObserver;
    NSMutableArray *_filteredChildren;
    BOOL _expanded;
    BOOL _dataValueWasUnsetAfterGoingInvalid;
    id <IDEDataValue> _dataValue;
    unsigned long long _type;
    IDEVariablesViewNode *_parent;
    NSPredicate *_childFilter;
    NSString *_placeholderStringForNilDataValue;
    NSArray *_childSortDescriptors;
    NSString *_manuallySetName;
}

+ (id)keyPathsForValuesAffectingNumberOfChildren;
+ (id)keyPathsForValuesAffectingChildValuesCountValid;
+ (id)keyPathsForValuesAffectingHasChildren;
+ (id)keyPathsForValuesAffectingName;
+ (id)rootWithChildren:(id)arg1;
+ (void)initialize;
@property BOOL dataValueWasUnsetAfterGoingInvalid; // @synthesize dataValueWasUnsetAfterGoingInvalid=_dataValueWasUnsetAfterGoingInvalid;
@property(copy) NSString *manuallySetName; // @synthesize manuallySetName=_manuallySetName;
@property(copy, nonatomic) NSArray *childSortDescriptors; // @synthesize childSortDescriptors=_childSortDescriptors;
@property(copy) NSString *placeholderStringForNilDataValue; // @synthesize placeholderStringForNilDataValue=_placeholderStringForNilDataValue;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSPredicate *childFilter; // @synthesize childFilter=_childFilter;
@property __weak IDEVariablesViewNode *parent; // @synthesize parent=_parent;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) id <IDEDataValue> dataValue; // @synthesize dataValue=_dataValue;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_cancelObservers;
- (long long)compareType:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (void)_doWorkThatRequiresFilteredChildrenRecalculation:(CDUnknownBlockType)arg1;
- (void)_ensureChildrenAreValid:(CDUnknownBlockType)arg1;
- (void)recursivleyRestoreExpansionStateAndLoadChildrenUsingContextState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSArray *children; // @dynamic children;
- (void)_calculateAndSetFilteredChildren;
@property(readonly) NSArray *filteredChildren;
- (void)_removeChildNode:(id)arg1;
- (void)_addChildNodes:(id)arg1;
- (void)_addChildNode:(id)arg1;
- (BOOL)shouldShowAsFilteredChild;
@property(readonly) long long numberOfChildren;
@property(readonly) BOOL childValuesCountValid;
@property(readonly) BOOL hasChildren;
@property(readonly) BOOL isTopLevelNode;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *fullNamePath;
- (void)overrideDefaultName:(id)arg1;
@property(readonly) NSString *name;
- (void)_primitiveSetDataValue:(id)arg1;
- (void)_resetChildren;
- (void)setDataValue:(id)arg1;
- (id)initWithDataValue:(id)arg1 type:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(retain) NSMutableArray *mutableChildren; // @dynamic mutableChildren;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

