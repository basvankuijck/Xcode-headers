//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSString;

@interface IDETemplateOptionsTextField : NSTextField
{
    NSString *_prefix;
    NSString *_suffix;
}

+ (Class)cellClass;
@property(copy) NSString *suffix; // @synthesize suffix=_suffix;
@property(copy) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (void)validateSelectionStart:(long long *)arg1 length:(long long *)arg2 string:(id)arg3;

@end

