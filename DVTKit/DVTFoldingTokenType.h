//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTFoldingTokenType : NSObject
{
}

+ (void)unregisterFoldingTokenType:(id)arg1;
+ (void)registerFoldingTokenType:(id)arg1;
+ (id)registeredFoldingTokenTypeForClass:(Class)arg1;
+ (id)registeredFoldingTokenTypes;
+ (void)initialize;
- (id)stringByStrippingTokens:(id)arg1;
- (struct _NSRange)rangeOfTokenMatchingInString:(id)arg1 range:(struct _NSRange)arg2;

@end

