//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol IDEProvisioningLedgerDelegate;

@interface IDEProvisioningLedger : NSObject
{
    NSMutableArray *_entries;
    id <IDEProvisioningLedgerDelegate> _delegate;
}

@property(nonatomic) __weak id <IDEProvisioningLedgerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)provisioningLedgerEntryDidClose:(id)arg1 withError:(id)arg2;
- (void)provisioningLedgerEntry:(id)arg1 didRecordDetails:(id)arg2;
- (void)provisioningLedgerEntry:(id)arg1 didCloseSubentry:(id)arg2 withError:(id)arg3;
- (void)provisioningLedgerEntry:(id)arg1 didOpenSubentry:(id)arg2;
- (id)openLedgerEntryForRepresentedObject:(id)arg1 logAspect:(id)arg2;
- (id)init;

@end

