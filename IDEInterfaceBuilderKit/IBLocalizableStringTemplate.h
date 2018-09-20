//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface IBLocalizableStringTemplate : NSString
{
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

@property(readonly, copy) NSString *developmentLanguageString; // @synthesize developmentLanguageString=_developmentLanguageString;
@property(readonly, copy) NSString *stringsFileKey; // @synthesize stringsFileKey=_stringsFileKey;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;

@end

