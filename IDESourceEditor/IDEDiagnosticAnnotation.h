//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBuildIssueAnnotation.h>

@class IDEDiagnosticActivityLogMessage;

@interface IDEDiagnosticAnnotation : IDEBuildIssueAnnotation
{
    IDEDiagnosticActivityLogMessage *_diagnosticItem;
}

+ (id)sidebarFixItIcon;
+ (unsigned long long)severity;
+ (double)precedence;
@property(retain, nonatomic) IDEDiagnosticActivityLogMessage *diagnosticItem; // @synthesize diagnosticItem=_diagnosticItem;
- (void).cxx_destruct;
- (id)annotationDisplayDescription;
- (void)drawHighlightedRangesInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsHighlightedRanges;
- (void)resolveLocationIfNeededForLayoutManager:(id)arg1;
- (id)initWithDiagnosticItem:(id)arg1;

@end
