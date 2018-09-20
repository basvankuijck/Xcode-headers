//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class GPUTraceDisplayableItem;
@protocol DYPShaderDebuggerROI, DYPShaderDebuggerThread;

@interface GPUTraceShaderDebuggerThreadPickerItem : GPUTraceOutlineItem
{
    id <DYPShaderDebuggerROI> _regionOfInterest;
    id <DYPShaderDebuggerThread> _selectedThread;
    GPUTraceDisplayableItem *_associatedDisplaybleItem;
}

@property(readonly, nonatomic) GPUTraceDisplayableItem *associatedDisplaybleItem; // @synthesize associatedDisplaybleItem=_associatedDisplaybleItem;
@property(readonly, nonatomic) id <DYPShaderDebuggerThread> selectedThread; // @synthesize selectedThread=_selectedThread;
@property(readonly, nonatomic) id <DYPShaderDebuggerROI> regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
- (void).cxx_destruct;
- (id)filterItems;
- (id)label;
- (id)initWithController:(id)arg1 parent:(id)arg2 regionOfInterest:(id)arg3 selectedThread:(id)arg4 associatedDisplaybleItem:(id)arg5;

@end
