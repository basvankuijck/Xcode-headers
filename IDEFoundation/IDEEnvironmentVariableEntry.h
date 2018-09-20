//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEEnvironmentVariableEntry : NSObject
{
    BOOL _enabled;
    BOOL _defaultEnabled;
    BOOL _isArchivedVersion;
    NSString *_key;
    NSString *_value;
}

@property BOOL isArchivedVersion; // @synthesize isArchivedVersion=_isArchivedVersion;
@property BOOL defaultEnabled; // @synthesize defaultEnabled=_defaultEnabled;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy) NSString *value; // @synthesize value=_value;
@property(copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setValueFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setKeyFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithKey:(id)arg1 value:(id)arg2 enabled:(BOOL)arg3;

@end

