//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationContext.h>

@class IDEEditor, IDEWorkspace, IDEWorkspaceTabController, NSDocument;

@interface IDEAnnotationContext : DVTAnnotationContext
{
    IDEEditor *_editor;
    NSDocument *_document;
    IDEWorkspaceTabController *_workspaceTabController;
}

@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly) NSDocument *document; // @synthesize document=_document;
@property(readonly) IDEEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (id)description;
@property(readonly) IDEWorkspace *workspace;
- (id)initWithEditor:(id)arg1 document:(id)arg2 fileDataType:(id)arg3 workspaceTabController:(id)arg4;
- (id)initWithFileDataType:(id)arg1;

@end

