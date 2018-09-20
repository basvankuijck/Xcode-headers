//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSAttributedString, NSError, NSString;

@interface IBSourceCodeConnectionErrorView : DVTLayoutView_ML
{
    NSAttributedString *_cachedAttributedDisplayMessage;
    NSError *_displayedError;
    NSString *_prefixText;
    NSString *_suffixText;
}

@property(copy) NSString *suffixText; // @synthesize suffixText=_suffixText;
@property(copy) NSString *prefixText; // @synthesize prefixText=_prefixText;
@property(retain, nonatomic) NSError *displayedError; // @synthesize displayedError=_displayedError;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)errorIconRect;
- (struct CGRect)displayMessageRect;
- (double)displayMessageHeightForWidth:(double)arg1;
- (id)cachedAttributedDisplayMessage;
- (id)messageText;
- (id)messageSuffixTextAttributes;
- (id)messagePrefixTextAttributes;
- (id)messageTextAttributes;

@end

