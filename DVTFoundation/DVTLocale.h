//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>
#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTLocale : NSObject <NSCopying, NSCoding>
{
    NSString *_displayName;
    NSString *_localeIdentifier;
}

+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)systemLanguages;
+ (id)availableLocalesbyIdentifier;
+ (id)globalLocale;
+ (id)baseLocale;
+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
+ (id)_xcodeLocale;
+ (id)systemLocale;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)rootLanguage;
- (id)localeComponents;
@property(readonly, copy) NSString *localeIdentifier;
- (id)description;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1 displayName:(id)arg2;
- (id)initWithLocaleIdentifier:(id)arg1 canonicalLocaleIdentifier:(id)arg2 displayName:(id)arg3;
- (id)init;

@end

