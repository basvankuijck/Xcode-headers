//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogMessage.h>

@class NSString;

@interface IDEActivityLogAnalyzerResultMessage : IDEActivityLogMessage
{
    NSString *_resultType;
    long long _keyEventIndex;
}

+ (id)analyzerMessageType;
@property long long keyEventIndex; // @synthesize keyEventIndex=_keyEventIndex;
- (void).cxx_destruct;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)resultCategory;
- (id)resultType;
- (void)setResultType:(id)arg1;
- (unsigned long long)totalNumberOfAnalyzerResults;
- (unsigned long long)totalNumberOfWarnings;

@end

