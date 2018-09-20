//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTCrashLogParsedStackFrame, NSMutableArray;

@interface DVTCrashLogBacktraceTextFieldCell : NSTextFieldCell
{
    NSMutableArray *_rangeValues;
    DVTCrashLogParsedStackFrame *_parsedStackFrame;
    struct _NSRange _emphasizedRange;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
@property(retain, nonatomic) DVTCrashLogParsedStackFrame *parsedStackFrame; // @synthesize parsedStackFrame=_parsedStackFrame;
@property(nonatomic) struct _NSRange emphasizedRange; // @synthesize emphasizedRange=_emphasizedRange;
- (void).cxx_destruct;
- (id)attributedStringValue;

@end

