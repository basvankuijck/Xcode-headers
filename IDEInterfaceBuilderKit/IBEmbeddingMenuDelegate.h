//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractEditorMenuDelegate.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class IBMutableIdentityDictionary, NSString;

@interface IBEmbeddingMenuDelegate : IBAbstractEditorMenuDelegate <NSMenuDelegate>
{
    IBMutableIdentityDictionary *_menuItemsByTargetRuntime;
}

- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (id)currentTargetRuntime;
- (id)menuItemsForTargetRuntime:(id)arg1;
- (BOOL)displayTitles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

