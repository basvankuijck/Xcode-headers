//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class NSString;

@interface SKEDocumentKVCEdition : SKEDocumentEdition
{
    NSString *_keyPath;
    id _object;
    id _newValue;
    id _oldValue;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 object:(id)arg2 newValue:(id)arg3 oldValue:(id)arg4 keyPath:(id)arg5;

@end

