//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractResult.h>

@class DVTFilePath, NSString;

@interface IDEBatchFindFileResult : IDEBatchFindAbstractResult
{
    NSString *_contextualSuffix;
    DVTFilePath *_filePath;
}

@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)contextualSuffix;
- (BOOL)textRepresentationForPasteboardIsFileName;
- (id)textRepresentationForPasteboard;
- (BOOL)allowsSummarization;
- (BOOL)contributesToResultCount;
- (BOOL)contributesToFileResultCount;
- (id)initWithFilePath:(id)arg1 contextualSuffix:(id)arg2 parent:(id)arg3 suggestedOrder:(long long)arg4 childOrderingSelector:(SEL)arg5;

@end

