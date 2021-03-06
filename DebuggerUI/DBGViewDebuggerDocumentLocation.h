//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

#import <DebuggerUI/IDEIssueCoalescingDocumentLocationIdentifiable-Protocol.h>

@class NSString;
@protocol NSCopying;

@interface DBGViewDebuggerDocumentLocation : DVTDocumentLocation <IDEIssueCoalescingDocumentLocationIdentifiable>
{
    NSString *_viewObjectAddress;
}

@property(readonly) NSString *viewObjectAddress; // @synthesize viewObjectAddress=_viewObjectAddress;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <NSCopying> issueCoalescingGroupIdentifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 snapshotNode:(id)arg3;
- (id)initWithDocumentURL:(id)arg1 timestamp:(id)arg2 viewObject:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) id <NSCopying> issueCoalescingIdentifier; // @dynamic issueCoalescingIdentifier;

@end

