//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUIDataSource/XCSUIDataSourceOperation.h>

@class NSDate, XCSBot;

@interface XCSUIBotStatsOperation : XCSUIDataSourceOperation
{
    XCSBot *_bot;
    NSDate *_date;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)start;
- (id)operationIdentifier;
- (id)initWithBot:(id)arg1 sinceDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

