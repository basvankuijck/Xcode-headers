//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTProgressReporting-Protocol.h>

@class DVTStackBacktrace, DVTSystemActivityToken, NSArray, NSDictionary, NSString;
@protocol DVTInvalidation;

@interface IDEActivityReport : NSObject <DVTProgressReporting>
{
    int _options;
    DVTSystemActivityToken *_systemActivityToken;
    BOOL _unfinished;
    NSString *_completionSummaryString;
    NSArray *_completionSummaryStringSegments;
    NSString *_title;
    NSArray *_titleSegments;
    long long _progress;
    NSDictionary *_completionNotificationUserInfo;
    double _timestamp;
    double _displayPriority;
    unsigned long long _fileIOPriority;
    CDUnknownBlockType _fileIOCoordinatorBlock;
    double _fileIOThrottleFactor;
    NSObject<DVTInvalidation> *_observerOwner;
    CDUnknownBlockType _userDidRequestCancellationHandlerBlock;
    DVTStackBacktrace *_creationBacktrace;
}

+ (id)keyPathsForValuesAffectingPaused;
+ (BOOL)automaticallyNotifiesObserversOfFileIOThrottleFactor;
+ (id)keyPathsForValuesAffectingCompleted;
+ (id)keyPathsForValuesAffectingValid;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(copy) CDUnknownBlockType userDidRequestCancellationHandlerBlock; // @synthesize userDidRequestCancellationHandlerBlock=_userDidRequestCancellationHandlerBlock;
@property(retain) NSObject<DVTInvalidation> *observerOwner; // @synthesize observerOwner=_observerOwner;
@property(getter=isUnfinished) BOOL unfinished; // @synthesize unfinished=_unfinished;
@property(readonly) double fileIOThrottleFactor; // @synthesize fileIOThrottleFactor=_fileIOThrottleFactor;
@property(readonly, copy) CDUnknownBlockType fileIOCoordinatorBlock; // @synthesize fileIOCoordinatorBlock=_fileIOCoordinatorBlock;
@property unsigned long long fileIOPriority; // @synthesize fileIOPriority=_fileIOPriority;
@property double displayPriority; // @synthesize displayPriority=_displayPriority;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSDictionary *completionNotificationUserInfo; // @synthesize completionNotificationUserInfo=_completionNotificationUserInfo;
@property long long progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *titleSegments; // @synthesize titleSegments=_titleSegments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly) int options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)finishReport;
@property(readonly) NSArray *stringSegments;
@property(readonly) NSString *stringValue;
@property(readonly) BOOL paused;
- (void)_setFileIOThrottleFactor:(double)arg1;
@property(readonly, getter=isUserVisible) BOOL userVisible;
@property(readonly, getter=isFileIOIntensive) BOOL fileIOIntensive;
@property(readonly, getter=isPersistent) BOOL persistent;
@property(readonly) BOOL disableTitleAnimation;
@property(readonly) BOOL shouldDisplayImmediately;
@property(readonly) BOOL hidesProgress;
@property(readonly, getter=isSchemeBased) BOOL schemeBased;
@property(readonly, getter=isUserRequested) BOOL userRequested;
@property(readonly, getter=isCancelable) BOOL cancelable;
@property(copy) NSArray *completionSummaryStringSegments; // @synthesize completionSummaryStringSegments=_completionSummaryStringSegments;
@property(copy) NSString *completionSummaryString; // @synthesize completionSummaryString=_completionSummaryString;
@property(readonly, getter=isCompleted) BOOL completed;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 titleSegments:(id)arg2 options:(int)arg3 fileIOPriority:(unsigned long long)arg4 fileIOCoordinatorBlock:(CDUnknownBlockType)arg5;
- (id)_initWithTitle:(id)arg1 titleSegments:(id)arg2 options:(int)arg3 fileIOPriority:(unsigned long long)arg4 fileIOCoordinatorBlock:(CDUnknownBlockType)arg5 unarchived:(BOOL)arg6;
- (void)setCompleted:(id)arg1;
- (void)setProgressAsNSNumber:(id)arg1;
@property(readonly, getter=isValid) BOOL valid;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

