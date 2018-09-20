//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOperationWindowController.h>

#import <IDEKit/IDESourceControlWindowController-Protocol.h>
#import <IDEKit/_TtP6IDEKit37IDESourceControlAuthenticationContext_-Protocol.h>

@class IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSString;
@protocol IDESourceControlRefreshHistoryDocument;

@interface IDESourceControlOperationWindowController : IDEOperationWindowController <_TtP6IDEKit37IDESourceControlAuthenticationContext_, IDESourceControlWindowController>
{
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
    id <IDESourceControlRefreshHistoryDocument> _refreshDocument;
}

@property __weak id <IDESourceControlRefreshHistoryDocument> refreshDocument; // @synthesize refreshDocument=_refreshDocument;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void).cxx_destruct;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)endSheet;
- (BOOL)containsWorkingCopyForRepository:(id)arg1;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle;
- (void)_beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 editorDocument:(id)arg4 workingCopy:(id)arg5 workingCopies:(id)arg6 operationViewControllerClass:(Class)arg7 context:(id)arg8;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 workingCopy:(id)arg4 operationViewControllerClass:(Class)arg5 context:(id)arg6;
- (void)beginSheetForWindow:(id)arg1 workspace:(id)arg2 workspaceUIHandler:(id)arg3 workingCopies:(id)arg4 operationViewControllerClass:(Class)arg5 context:(id)arg6;
- (void)_beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 workingCopies:(id)arg3 operationViewControllerClass:(Class)arg4 context:(id)arg5;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopies:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

