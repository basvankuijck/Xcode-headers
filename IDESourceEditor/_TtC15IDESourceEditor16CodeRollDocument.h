//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@interface _TtC15IDESourceEditor16CodeRollDocument : IDEEditorDocument
{
    // Error parsing type: , name: renameOperation
    // Error parsing type: , name: registeredEditors
}

- (CDUnknownBlockType).cxx_destruct;
- (void)unregisterDocumentEditor:(id)arg1;
- (void)registerDocumentEditor:(id)arg1;
- (void)updateChangeCount:(unsigned long long)arg1;
- (id)newUndoManager;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@property(nonatomic, readonly) int readOnlyStatus;
- (id)init;

@end

