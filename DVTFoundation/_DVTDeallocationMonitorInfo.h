//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSString;

@interface _DVTDeallocationMonitorInfo : NSObject
{
    DVTWeakInterposer *_uncollectedObject_dvtWeakInterposer;
    NSString *_hierarchyIdentifier;
    NSString *_hierarchyClassNameIdentifier;
    unsigned long long _hierarchyTag;
    NSString *_name;
    unsigned long long _invalidationDepth;
    unsigned long long _survivedCount;
}

+ (void)initialize;
@property unsigned long long survivedCount; // @synthesize survivedCount=_survivedCount;
@property(readonly) unsigned long long invalidationDepth; // @synthesize invalidationDepth=_invalidationDepth;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *hierarchyIdentifier;
- (id)initWithUncollectedObject:(id)arg1;
- (void)setUncollectedObject:(id)arg1;
@property(readonly) __weak id uncollectedObject;

@end

