//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionTestAttachment.h>

#import <IDEKit/IDETestReport_TestAttachment-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface IDESchemeActionTestAttachment (IDETestReport_TestAttachment) <IDETestReport_TestAttachment>
@property(readonly, copy, nonatomic) NSNumber *ide_test_attachment_payloadSize;
@property(readonly, copy, nonatomic) NSString *ide_test_attachment_payload_filePath;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_UTI;
@property(readonly, copy, nonatomic) NSString *ide_test_activity_attachment_base_title;
@property(readonly, copy, nonatomic) NSDate *sortingTimestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

