//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Xcode3HardenedRuntimeAllowance : NSObject
{
    BOOL _enabled;
    NSString *_key;
    NSString *_entitlement;
}

@property BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) NSString *entitlement; // @synthesize entitlement=_entitlement;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 entitlement:(id)arg2;

@end
