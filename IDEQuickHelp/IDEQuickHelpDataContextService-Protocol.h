//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEQuickHelp/NSObject-Protocol.h>

@class DVTSourceExpression, NSObject;
@protocol OS_dispatch_queue;

@protocol IDEQuickHelpDataContextService <NSObject>
- (void)quickHelpDataContextForExpression:(DVTSourceExpression *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(id <IDEQuickHelpDataContext>))arg3;
@end

