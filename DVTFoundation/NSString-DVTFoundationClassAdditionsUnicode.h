//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DVTFoundationClassAdditionsUnicode)
+ (BOOL)dvt_isDataUTF8WithBOM:(id)arg1;
+ (BOOL)dvt_isDataUnicodeEncoded:(id)arg1 isBigEndian:(char *)arg2;
+ (id)dvt_stringWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)dvt_stringWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2 stopAtTrailingIncompleteUTF8Sequence:(BOOL)arg3 getUsedLength:(unsigned long long *)arg4 getNumberOfMalformedSequences:(unsigned long long *)arg5;
@end

