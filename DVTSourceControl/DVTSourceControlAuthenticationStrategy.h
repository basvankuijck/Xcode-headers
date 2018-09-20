//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@interface DVTSourceControlAuthenticationStrategy : NSObject <NSSecureCoding, NSCopying>
{
}

+ (id)sharedAnonymousStrategy;
+ (BOOL)supportsSecureCoding;
+ (Class)classForSerializationName:(id)arg1;
+ (BOOL)strategyIsValidForURL:(id)arg1;
+ (id)name;
- (unsigned long long)type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serializationName;

@end

