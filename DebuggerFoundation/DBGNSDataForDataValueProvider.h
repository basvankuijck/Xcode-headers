//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGDataValue, DBGNSDataForDataValueProviderOptions, IDEStackFrame, NSData, NSError, NSString;
@protocol DVTCancellable;

@interface DBGNSDataForDataValueProvider : NSObject
{
    IDEStackFrame *_stackFrame;
    NSString *_expressionResultingInNSData;
    BOOL _hasDataBeenRetrieved;
    NSData *_data;
    BOOL _wasCancelled;
    BOOL _retrievalStarted;
    id <DVTCancellable> _cancellableMemoryReadToken;
    BOOL _autoHandleExceptions;
    DBGNSDataForDataValueProviderOptions *_options;
    DBGDataValue *_dataDataValue;
    NSError *_retrievalError;
    double _timeToEvaluateExpression;
    double _timeToReadData;
}

@property double timeToReadData; // @synthesize timeToReadData=_timeToReadData;
@property double timeToEvaluateExpression; // @synthesize timeToEvaluateExpression=_timeToEvaluateExpression;
@property(retain) NSError *retrievalError; // @synthesize retrievalError=_retrievalError;
@property(readonly) BOOL autoHandleExceptions; // @synthesize autoHandleExceptions=_autoHandleExceptions;
@property(retain) DBGDataValue *dataDataValue; // @synthesize dataDataValue=_dataDataValue;
@property(retain) DBGNSDataForDataValueProviderOptions *options; // @synthesize options=_options;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) BOOL hasDataBeenRetrieved; // @synthesize hasDataBeenRetrieved=_hasDataBeenRetrieved;
- (void).cxx_destruct;
- (id)safelyUnarchiveRootObjectFromDataUsingSecureCoding:(BOOL)arg1 withValidClasses:(id)arg2;
- (void)_dataWasFetched:(id)arg1;
- (void)_failedToGetData;
- (void)_readArchivedData:(id)arg1;
- (void)_startRetrieval;
- (void)cancel;
- (id)_initWithStackFrame:(id)arg1 expressionResultingInNSData:(id)arg2 options:(id)arg3;
- (id)initWithStackFrame:(id)arg1 expressionResultingInNSData:(id)arg2 options:(id)arg3;
- (id)initWithStackFrame:(id)arg1 expressionResultingInNSData:(id)arg2;
- (id)initWithKeyedArchivableDataValue:(id)arg1;

@end

