//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTDotSeparatedVersion : NSObject <NSCopying, NSCoding>
{
    long long _components[8];
    NSString *_description;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareMajorMinorVersion:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)_compare:(id)arg1 withPrecision:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) unsigned long long componentCount;
- (long long)componentAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;

@end

