//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_SCMEditor;

@interface XCSUIBotDefinitionEditor_SCMCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinitionContext *_definitionContext;
    XCSUIBotDefinition_SCMEditor *_scmEditor;
}

+ (id)title;
@property(retain, nonatomic) XCSUIBotDefinition_SCMEditor *scmEditor; // @synthesize scmEditor=_scmEditor;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

