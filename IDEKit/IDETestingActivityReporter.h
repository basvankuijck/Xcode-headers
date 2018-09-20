//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEActivityReporter.h>

@class NSMapTable;

@interface IDETestingActivityReporter : IDEActivityReporter
{
    NSMapTable *_reportForTestSessionTable;
    NSMapTable *_reportForTestDiagnosticsTable;
    NSMapTable *_reportForCoverageSessionTable;
}

- (void).cxx_destruct;
- (void)_updateTestRunReport:(id)arg1 withSession:(id)arg2;
- (id)_titleForTestRunSession:(id)arg1;
- (void)_removeTestRunSession:(id)arg1;
- (void)_addTestRunSession:(id)arg1;
- (void)_removeGenerateCoverageReportSession:(id)arg1;
- (void)_addGenerateCoverageReportSession:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end

