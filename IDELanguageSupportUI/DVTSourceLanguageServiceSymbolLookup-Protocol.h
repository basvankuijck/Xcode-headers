//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DVTSourceExpression, DVTTextDocumentLocation, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@protocol DVTSourceLanguageServiceSymbolLookup
- (void)findIndexSymbolAtExpression:(DVTSourceExpression *)arg1 withIndexCompatibleLocation:(DVTTextDocumentLocation *)arg2 withCurrentFileContentDictionary:(NSDictionary *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(IDEIndexCollection *))arg5;
@end

