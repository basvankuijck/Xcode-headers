//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, _TtC12DVTAnalytics27ProcessorUsagePointUserData, _TtC18DVTAnalyticsClient38AnalyticsProcessorUsagePointIdentifier;

@interface _TtC12DVTAnalytics23ProcessorUsagePointInfo : NSObject
{
    // Error parsing type: , name: processorUsagePointName
    // Error parsing type: , name: sourceFileName
    // Error parsing type: , name: sourceFileLineNumber
    // Error parsing type: , name: locallySymbolicatedProcessorUsagePointName
    // Error parsing type: , name: locallySymbolicatedSourceFileName
    // Error parsing type: , name: locallySymbolicatedSourceFileLine
    // Error parsing type: , name: bugType
    // Error parsing type: , name: identifier
    // Error parsing type: , name: userData
    // Error parsing type: , name: path
}

+ (id)filename;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithSummary:(id)arg1 identifier:(id)arg2 userData:(id)arg3 path:(id)arg4;
@property(nonatomic, readonly) NSURL *path; // @synthesize path;
@property(nonatomic, retain) _TtC12DVTAnalytics27ProcessorUsagePointUserData *userData; // @synthesize userData;
@property(nonatomic, readonly) _TtC18DVTAnalyticsClient38AnalyticsProcessorUsagePointIdentifier *identifier; // @synthesize identifier;
@property(nonatomic, readonly) NSString *bugType; // @synthesize bugType;
@property(nonatomic, copy) NSString *locallySymbolicatedSourceFileName; // @synthesize locallySymbolicatedSourceFileName;
@property(nonatomic, copy) NSString *locallySymbolicatedProcessorUsagePointName; // @synthesize locallySymbolicatedProcessorUsagePointName;
@property(nonatomic, readonly) long long sourceFileLineNumber; // @synthesize sourceFileLineNumber;
@property(nonatomic, readonly) NSString *sourceFileName; // @synthesize sourceFileName;
@property(nonatomic, readonly) NSString *processorUsagePointName; // @synthesize processorUsagePointName;

@end

