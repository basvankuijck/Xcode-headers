//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface DVTMacroNameString : NSString
{
    NSString *_contents;
    unsigned long long _hashValue;
    unsigned long long _regNumber;
}

+ (void)initialize;
+ (id)macroNameStringForString:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)macroRegistrationNumber;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (id)initWithContents:(id)arg1 registrationNumber:(unsigned long long)arg2;

@end

