//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface _IDEAccountPrefAccountType : NSObject
{
    BOOL _enabled;
    NSString *_displayName;
    NSImage *_icon;
    long long _accountType;
    NSString *_identifier;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end

