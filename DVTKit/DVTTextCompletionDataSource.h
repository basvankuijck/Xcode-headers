//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTSourceCodeLanguage, DVTStackBacktrace, DVTWeakInterposer, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;
@protocol DVTTextCompletionDataSourceDelegate;

@interface DVTTextCompletionDataSource : NSObject <DVTInvalidation>
{
    DVTSourceCodeLanguage *_language;
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    NSMutableArray *_strategies;
    NSMutableSet *_strategyObservers;
    NSOperationQueue *_completionsGeneratorQueue;
    NSMapTable *_lastGeneratedCompletionItemsPerStrategy;
}

+ (void)initialize;
@property(retain, nonatomic) DVTSourceCodeLanguage *language; // @synthesize language=_language;
- (void).cxx_destruct;
@property(copy) NSArray *strategies;
- (void)generateCompletionsForDocumentLocation:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)primitiveInvalidate;
- (id)initWithLanguage:(id)arg1;
- (id)init;
@property __weak id <DVTTextCompletionDataSourceDelegate> delegate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

