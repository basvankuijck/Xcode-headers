//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBDocumentCapability : NSObject
{
    NSString *_name;
    NSString *_minToolsVersion;
    NSString *_minSystemVersion;
    NSString *_requiredIntegratedClassName;
    NSString *_message;
}

+ (id)capabilityWithName:(id)arg1 minToolsVersion:(id)arg2 minSystemVersion:(id)arg3 requiredIntegratedClassName:(id)arg4 message:(id)arg5;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *requiredIntegratedClassName; // @synthesize requiredIntegratedClassName=_requiredIntegratedClassName;
@property(readonly, copy, nonatomic) NSString *minSystemVersion; // @synthesize minSystemVersion=_minSystemVersion;
@property(readonly, copy, nonatomic) NSString *minToolsVersion; // @synthesize minToolsVersion=_minToolsVersion;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 minToolsVersion:(id)arg2 minSystemVersion:(id)arg3 requiredIntegratedClassName:(id)arg4 message:(id)arg5;

@end

