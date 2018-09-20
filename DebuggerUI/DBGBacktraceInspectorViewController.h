//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <DebuggerUI/DBGBacktraceInspectorFrameViewControllerDelegate-Protocol.h>
#import <DebuggerUI/DBGBacktraceInspectorHeaderViewDelegate-Protocol.h>

@class DBGBacktraceInspectorHeaderView, DVTDisclosureHeaderView, NSString;
@protocol DBGBacktraceInspectorViewControllerDelegate;

@interface DBGBacktraceInspectorViewController : IDEInspectorViewController <DBGBacktraceInspectorHeaderViewDelegate, DBGBacktraceInspectorFrameViewControllerDelegate>
{
    DBGBacktraceInspectorHeaderView *_customHeaderView;
    BOOL _stackCompressionEnabled;
    id <DBGBacktraceInspectorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <DBGBacktraceInspectorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL stackCompressionEnabled; // @synthesize stackCompressionEnabled=_stackCompressionEnabled;
- (void).cxx_destruct;
- (void)frameViewController:(id)arg1 displaySourceForStackFrame:(id)arg2;
- (void)backtraceHeaderView:(id)arg1 didChangeCompressionState:(long long)arg2;
- (void)disableStackCompressionButton;
- (void)enableStackCompressionButton;
@property(readonly, nonatomic) DVTDisclosureHeaderView *headerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

