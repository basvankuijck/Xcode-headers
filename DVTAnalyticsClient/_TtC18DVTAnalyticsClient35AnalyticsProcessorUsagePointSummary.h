//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _TtC18DVTAnalyticsClient35AnalyticsProcessorUsagePointSummary : NSObject
{
    // Error parsing type: , name: processorUsagePointIdentifier
    // Error parsing type: , name: processorUsagePointName
    // Error parsing type: , name: sourceFileName
    // Error parsing type: , name: sourceFileLineNumber
    // Error parsing type: , name: rollingOccurenceCount
    // Error parsing type: , name: rollingUniqueDeviceCount
    // Error parsing type: , name: bugType
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *bugType; // @synthesize bugType;
@property(nonatomic, retain) NSNumber *rollingUniqueDeviceCount; // @synthesize rollingUniqueDeviceCount;
@property(nonatomic, retain) NSNumber *rollingOccurenceCount; // @synthesize rollingOccurenceCount;
@property(nonatomic, retain) NSNumber *sourceFileLineNumber; // @synthesize sourceFileLineNumber;
@property(nonatomic, copy) NSString *sourceFileName; // @synthesize sourceFileName;
@property(nonatomic, copy) NSString *processorUsagePointName; // @synthesize processorUsagePointName;
@property(nonatomic, copy) NSString *processorUsagePointIdentifier; // @synthesize processorUsagePointIdentifier;

@end

