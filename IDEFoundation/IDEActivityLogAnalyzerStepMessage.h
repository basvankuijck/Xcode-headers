//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@interface IDEActivityLogAnalyzerStepMessage : IDEActivityLogMessage
{
    long long _parentIndex;
}

@property long long parentIndex; // @synthesize parentIndex=_parentIndex;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (unsigned long long)totalNumberOfWarnings;
- (BOOL)isAnalyzerStepMessage;

@end

