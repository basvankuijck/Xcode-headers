//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class NSTabViewItem;

@interface IBNSTabViewControllerInspectorTabViewItem : NSObject <NSCoding>
{
    NSTabViewItem *_tabViewItem;
}

@property(readonly) NSTabViewItem *tabViewItem; // @synthesize tabViewItem=_tabViewItem;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTabViewItem:(id)arg1;

@end

