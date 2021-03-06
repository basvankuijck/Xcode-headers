//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDebugTopNavigableModel-Protocol.h>

@class DVTStackBacktrace, IDEAnalyticsLog, IDEDebugSession, IDELaunchSession, NSArray, NSString;

@interface IDEAnalyticsPoint : NSObject <IDEDebugTopNavigableModel>
{
    NSString *_associatedProcessUUID;
    NSString *name;
    NSArray *_threads;
    NSArray *_queues;
    IDEAnalyticsLog *_analyticsLog;
    long long _type;
    NSString *_appName;
    IDEDebugSession *_parentDebugSession;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)initialize;
@property(retain, nonatomic) IDEDebugSession *parentDebugSession; // @synthesize parentDebugSession=_parentDebugSession;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) IDEAnalyticsLog *analyticsLog; // @synthesize analyticsLog=_analyticsLog;
@property(copy, nonatomic) NSArray *queues; // @synthesize queues=_queues;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *subtitle;
@property(readonly) IDELaunchSession *launchSession;
- (id)contentDelegateUIExtensionIdentifier;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

