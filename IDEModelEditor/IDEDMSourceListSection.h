//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEDMArrayController, NSArray, NSString;

@interface IDEDMSourceListSection : NSObject <DVTInvalidation>
{
    DVTObservingToken *_observationToken;
    DVTObservingToken *_hiddenItemsObservationToken;
    IDEDMArrayController *_arrayController;
    NSArray *_sectionItemsToHide;
    NSString *_treeControllerChildrenKeyPath;
    id _modelRoot;
    NSString *_name;
    NSString *_identifier;
    NSString *_keyPath;
}

+ (void)initialize;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(retain) id modelRoot; // @synthesize modelRoot=_modelRoot;
- (void).cxx_destruct;
@property(copy) NSString *treeControllerChildrenKeyPath; // @synthesize treeControllerChildrenKeyPath=_treeControllerChildrenKeyPath;
- (id)valueForUndefinedKey:(id)arg1;
- (id)representativeIcon;
@property(readonly, copy) NSArray *sectionItems;
@property(copy) NSArray *sectionItemsToHide; // @synthesize sectionItemsToHide=_sectionItemsToHide;
@property(readonly, copy) NSString *description;
@property(copy) NSArray *sortDescriptors;
- (void)primitiveInvalidate;
- (id)initWithName:(id)arg1 modelRoot:(id)arg2 keyPath:(id)arg3 identifier:(id)arg4;
- (void)_notifyChangeWithDictionary:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

