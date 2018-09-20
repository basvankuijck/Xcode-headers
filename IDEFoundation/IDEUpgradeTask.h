//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEUpgradeContext, NSString;

@interface IDEUpgradeTask : NSObject
{
    BOOL _selected;
    NSString *_title;
    NSString *_subtitle;
    NSString *_category;
    IDEUpgradeContext *_context;
}

+ (id)analyzeInContext:(id)arg1;
+ (id)metricLogAspect;
@property BOOL selected; // @synthesize selected=_selected;
@property(readonly) IDEUpgradeContext *context; // @synthesize context=_context;
@property(copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)upgrade;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 context:(id)arg3;

@end

