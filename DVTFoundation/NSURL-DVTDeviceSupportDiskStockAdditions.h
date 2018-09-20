//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <DVTFoundation/DVTDiskStockMember-Protocol.h>

@class DVTFilePath, NSDate, NSObject, NSString;
@protocol DVTDiskStock;

@interface NSURL (DVTDeviceSupportDiskStockAdditions) <DVTDiskStockMember>
- (void)diskStockManager:(id)arg1 didCullThisMemberFromDiskStock:(id)arg2;
- (BOOL)diskStockManager:(id)arg1 willCullThisMemberFromDiskStock:(id)arg2;
- (long long)diskStockMemberCompareTo:(id)arg1;
@property(readonly) NSDate *diskStockMemberTTL;
@property(readonly) NSString *diskStockMemberDisplayName;
@property(readonly) __weak NSObject<DVTDiskStock> *diskStock;
@property(readonly) DVTFilePath *diskStockMemberRepresentation;
- (BOOL)_markedAsKept;
- (void)_markAsKept:(BOOL)arg1;
- (id)_deviceSupportInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

