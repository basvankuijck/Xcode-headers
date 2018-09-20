//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, DVTFilePath, IDEEntityIdentifier, IDETypeIdentifier, NSString, NSURL;
@protocol IDELogStoreManageable;

@interface IDEActivityLogRecord : NSObject
{
    id <IDELogStoreManageable> _logStoreManageable;
    NSString *_auxiliaryLogUniqueIdentifier;
    IDEEntityIdentifier *_entityIdentifier;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)highLevelStatusForLogStoreManageable:(id)arg1;
+ (id)cacheLog:(id)arg1;
+ (void)uncacheLogRecord:(id)arg1;
+ (void)cacheLogRecord:(id)arg1;
+ (id)cachedLogRecordWithURL:(id)arg1;
@property(readonly) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(readonly) NSString *auxiliaryLogUniqueIdentifier; // @synthesize auxiliaryLogUniqueIdentifier=_auxiliaryLogUniqueIdentifier;
@property(readonly) id <IDELogStoreManageable> logStoreManageable; // @synthesize logStoreManageable=_logStoreManageable;
- (void).cxx_destruct;
- (id)testableSummariesForFilePath:(id)arg1 runDestinationRecord:(id *)arg2 error:(id *)arg3;
@property(readonly) DVTFilePath *buildMetricsReportFilePath;
@property(readonly) BOOL collectMetrics;
@property(readonly) NSString *onDiskPath;
@property(readonly) DVTFilePath *coverageArchiveFilePath;
@property(readonly) DVTFilePath *coverageReportFilePath;
@property(readonly) BOOL hasCoverageData;
@property(readonly) DVTFilePath *testableSummariesPlistFilePath;
- (id)initWithEntityIdentifier:(id)arg1;
- (long long)compareUsingTimeStartedRecording:(id)arg1;
- (id)fullLogIfInMemory;
- (id)fullLogStoreManageableWithError:(id *)arg1;
- (id)fullLogWithError:(id *)arg1;
@property(readonly) BOOL isRecording;
@property(readonly) NSString *highLevelStatus;
@property(readonly) NSString *signature;
@property(readonly) DVTFileDataType *documentType;
@property(readonly, nonatomic) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(readonly) NSString *title;
@property(readonly) IDETypeIdentifier *domainType;
@property(readonly) NSString *uniqueIdentifier;
@property(readonly) NSURL *logURL;

@end

