//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DVTInvalidation-Protocol.h>
#import <DebuggerFoundation/NSObject-Protocol.h>

@class DVTExtension, IDELaunchParametersSnapshot, IDELaunchSession, IDERunDestination, NSString;

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
@property(readonly, nonatomic) IDELaunchSession *launchSession;
- (id)initInLaunchSession:(IDELaunchSession *)arg1 withAppDisplayName:(NSString *)arg2 runDestination:(IDERunDestination *)arg3 fromExtension:(DVTExtension *)arg4;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
- (void)processFinalLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
- (IDELaunchParametersSnapshot *)adjustedLaunchParametersForLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
@end

