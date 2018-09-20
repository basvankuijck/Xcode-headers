//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <IDEKit/IDETestsInTestableObserver-Protocol.h>

@class IDETest, NSButton, NSString;
@protocol IDETestReport_TestGroup;

@interface _IDETestReportsTestTargetTableCellView : NSTableCellView <IDETestsInTestableObserver>
{
    IDETest *_jumpToTest;
    NSButton *_jumpButton;
    id <IDETestReport_TestGroup> _testGroup;
}

@property(retain) id <IDETestReport_TestGroup> testGroup; // @synthesize testGroup=_testGroup;
@property __weak NSButton *jumpButton; // @synthesize jumpButton=_jumpButton;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewDidMoveToSuperview;
- (void)fitViews;
- (void)testsChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)jumpToTestSourceCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

