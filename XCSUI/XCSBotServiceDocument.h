//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DVTObservingToken, NSString, XCSUIService;

@interface XCSBotServiceDocument : IDEEditorDocument
{
    NSString *_theRealDisplayName;
    DVTObservingToken *_maintenanceTasksObserver;
    XCSUIService *_service;
}

+ (id)keyPathsForValuesAffectingDisplayName;
@property(retain, nonatomic) XCSUIService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)botIntegration;
- (id)bot;
- (id)displayName;
- (void)editorDocumentWillClose;
- (void)setFileURL:(id)arg1;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

