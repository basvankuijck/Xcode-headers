//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/NSObject-Protocol.h>

@class NSMenu, NSString, NSView;

@protocol IDEFilterControlBarTarget <NSObject>
@property(readonly, nonatomic) NSView *view;
- (NSString *)filterButtonAccessibilityDescription;
- (NSString *)filterButtonToolTip;
- (NSMenu *)filterButtonMenu;
- (NSString *)filterDefinitionIdentifier;
@end

