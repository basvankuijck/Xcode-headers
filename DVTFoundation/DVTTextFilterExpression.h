//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTFilterExpression.h>

#import <DVTFoundation/NSCopying-Protocol.h>
#import <DVTFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface DVTTextFilterExpression : DVTFilterExpression <NSCopying, NSSecureCoding>
{
    unsigned long long _comparison;
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) unsigned long long comparison; // @synthesize comparison=_comparison;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 comparison:(unsigned long long)arg2 value:(id)arg3 isNegation:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 comparison:(unsigned long long)arg2 value:(id)arg3;

@end

