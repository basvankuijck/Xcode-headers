//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class IDEActivityLogRecord, IDESchemeActionRunDestinationRecord, NSArray, NSURL;

@interface IDETestReportDocument : IDEEditorDocument
{
    NSURL *_logURL;
    IDEActivityLogRecord *_logRecord;
    NSArray *_testableSummaries;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)autosavesInPlace;
+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *runDestinationRecord; // @synthesize runDestinationRecord=_runDestinationRecord;
@property(retain, nonatomic) NSArray *testableSummaries; // @synthesize testableSummaries=_testableSummaries;
@property(retain, nonatomic) IDEActivityLogRecord *logRecord; // @synthesize logRecord=_logRecord;
- (void).cxx_destruct;
- (id)displayName;
- (void)refreshTestableSummaries;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (int)readOnlyStatus;
- (BOOL)canSave;

@end

