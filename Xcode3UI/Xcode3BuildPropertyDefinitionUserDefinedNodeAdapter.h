//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPropertyDefinitionStringNodeAdapter.h>

@class NSCell;

@interface Xcode3BuildPropertyDefinitionUserDefinedNodeAdapter : Xcode3BuildPropertyDefinitionStringNodeAdapter
{
    BOOL _noEditUntilRebuild;
    NSCell *_nameCell;
}

- (void).cxx_destruct;
- (void)dataNodeConfigure:(id)arg1;
- (void)setNewName:(id)arg1;
- (void)rename:(id)arg1 toNewName:(id)arg2 inColumnContext:(id)arg3;
- (id)dataNode:(id)arg1 outlineView:(id)arg2 dataCellForTableColumn:(id)arg3;
- (BOOL)formatter:(id)arg1 getObjectValue:(out id *)arg2 forString:(id)arg3 errorDescription:(out id *)arg4;
- (BOOL)dataNode:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;
- (void)primitiveInvalidate;

@end

