//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUserDataTypeDescription : NSObject
{
    id _defaultValue;
    NSString *_name;
    unsigned long long _type;
}

+ (id)customUserDataType:(unsigned long long)arg1 name:(id)arg2 defaultValue:(id)arg3;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 defaultValue:(id)arg3;

@end

