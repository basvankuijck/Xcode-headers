//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUMTLDisplayableStrategy-Protocol.h>

@class GPUMTLTraceTextureDisplayableItem, NSString;
@protocol DYPFenumUtils;

__attribute__((visibility("hidden")))
@interface GPUMTLBlitDisplayableStrategy : NSObject <GPUMTLDisplayableStrategy>
{
    id <DYPFenumUtils> _fenumUtils;
    GPUMTLTraceTextureDisplayableItem *_displayableItem;
}

@property(nonatomic) __weak GPUMTLTraceTextureDisplayableItem *displayableItem; // @synthesize displayableItem=_displayableItem;
- (void).cxx_destruct;
- (id)loadDisplaySet;
- (id)initWithTextureDisplayable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

