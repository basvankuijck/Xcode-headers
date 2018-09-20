//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTOperation, IDEExecutionOperationTracker, NSArray, NSMutableArray, NSString;

@interface IDEQueuedOperationInfo : NSObject
{
    NSMutableArray *_buildOperations;
    BOOL _isRunning;
    NSString *_commandName;
    IDEExecutionOperationTracker *_tracker;
}

@property BOOL isRunning; // @synthesize isRunning=_isRunning;
@property(retain) IDEExecutionOperationTracker *tracker; // @synthesize tracker=_tracker;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
- (void).cxx_destruct;
- (id)description;
- (void)removeBuildOperation:(id)arg1;
- (BOOL)containsBuildOperation:(id)arg1;
@property(readonly, copy) NSArray *buildOperations;
@property(readonly) DVTOperation *topLevelOperation;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2 buildOperations:(id)arg3;

@end

