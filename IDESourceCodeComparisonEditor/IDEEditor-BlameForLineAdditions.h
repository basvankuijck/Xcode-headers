//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESourceCodeComparisonEditor/IDESourceControlBlameForLineEditor-Protocol.h>
#import <IDESourceCodeComparisonEditor/IDESourceControlLogDetailDelegate-Protocol.h>

@class NSString;

@interface IDEEditor (BlameForLineAdditions) <IDESourceControlBlameForLineEditor, IDESourceControlLogDetailDelegate>
- (id)viewWindow;
- (BOOL)detailShouldShowOpenBlameView;
- (void)openBlameView;
- (void)openComparisonViewForRevision:(id)arg1;
- (void)blameSelectedLine:(id)arg1;
@property(readonly) BOOL shouldEnableBlameForLine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

