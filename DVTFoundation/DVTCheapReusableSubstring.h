//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface DVTCheapReusableSubstring : NSString
{
    NSString *_realString;
    unsigned long long _realStringLength;
    struct _NSRange _subrange;
    unsigned long long _hashValue;
    BOOL _hashValueValid;
}

- (void).cxx_destruct;
- (struct _NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)hash;
- (void)setRealString:(id)arg1 subrange:(struct _NSRange)arg2;
- (id)initWithRealString:(id)arg1 subrange:(struct _NSRange)arg2;

@end

