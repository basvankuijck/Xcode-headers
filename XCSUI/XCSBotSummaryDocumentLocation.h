//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class IDEWorkspace, XCSIntegrationIssue;

@interface XCSBotSummaryDocumentLocation : DVTDocumentLocation
{
    unsigned long long _selectedArea;
    XCSIntegrationIssue *_issue;
    IDEWorkspace *_workspace;
}

@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly, copy) XCSIntegrationIssue *issue; // @synthesize issue=_issue;
@property(readonly) unsigned long long selectedArea; // @synthesize selectedArea=_selectedArea;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 selectedArea:(unsigned long long)arg3 issue:(id)arg4 workspace:(id)arg5;

@end

