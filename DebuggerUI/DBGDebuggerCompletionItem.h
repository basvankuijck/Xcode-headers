//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStringTextCompletionItem.h>

@class NSString;

@interface DBGDebuggerCompletionItem : DVTStringTextCompletionItem
{
    NSString *_completionText;
}

- (void).cxx_destruct;
- (void)setCompletionText:(id)arg1;
- (id)completionText;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)leadingCharactersToReplaceFromString:(id)arg1 location:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 completionText:(id)arg2;

@end
