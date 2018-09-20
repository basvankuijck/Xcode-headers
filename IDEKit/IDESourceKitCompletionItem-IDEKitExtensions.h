//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESourceKitCompletionItem.h>

#import <IDEKit/DVTTextCompletionItem-Protocol.h>

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDESourceKitCompletionItem (IDEKitExtensions) <DVTTextCompletionItem>
@property(readonly) unsigned long long priorityComparatorKind;
@property(readonly) long long priorityBucket;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSImage *icon;

// Remaining properties
@property(readonly, copy) NSString *action;
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy) NSString *displayType;
@property double fuzzyMatchingScore;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL notRecommended;
@property(readonly, copy) NSString *parentText;
@property double priority;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;
@end
