//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDocViewer/IDEDocJumpBarInterchange.h>

#import <IDEDocViewer/IDENavigableItemCoordinatorDelegate-Protocol.h>

@class DVTBindingToken, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSString;

@interface IDEDocJumpBarNavigablesInterchange : IDEDocJumpBarInterchange <IDENavigableItemCoordinatorDelegate>
{
    IDENavigableItem *_rootNavigableItem;
    DVTBindingToken *_selectedTopLevelNavigableItemsBindingToken;
    DVTBindingToken *_selectedNavigableItemBindingToken;
    IDENavigableItemCoordinator *_coordinator;
    NSArray *_selectedTopLevelNavigableItems;
    IDENavigableItem *_selectedNavigableItem;
}

@property(retain, nonatomic) IDENavigableItem *selectedNavigableItem; // @synthesize selectedNavigableItem=_selectedNavigableItem;
@property(copy, nonatomic) NSArray *selectedTopLevelNavigableItems; // @synthesize selectedTopLevelNavigableItems=_selectedTopLevelNavigableItems;
@property(readonly, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(readonly, nonatomic) IDENavigableItemCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (BOOL)hasSelection;
- (void)takeoverPathControl:(id)arg1;
- (void)updateWithURLString:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

