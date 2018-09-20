//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

#import <GPURenderTargetEditor/NSCollectionViewDataSource-Protocol.h>
#import <GPURenderTargetEditor/NSCollectionViewDelegate-Protocol.h>
#import <GPURenderTargetEditor/NSMenuDelegate-Protocol.h>
#import <GPURenderTargetEditor/NSOutlineViewDelegate-Protocol.h>

@class GPUTraceAPIItem, GPUTraceNoDataViewController, GPUTracePipelineStatisticsDrawcallsTableDataSource, GPUTracePipelineStatisticsOverviewTableDataSource, GPUTracePipelineStatisticsRemarksTableDataSource, NSCollectionView, NSOutlineView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsSubEditor : GPUTraceSubEditor <NSCollectionViewDataSource, NSCollectionViewDelegate, NSOutlineViewDelegate, NSMenuDelegate>
{
    GPUTracePipelineStatisticsRemarksTableDataSource *_remarksDataSource;
    GPUTracePipelineStatisticsOverviewTableDataSource *_overviewDataSource;
    GPUTracePipelineStatisticsDrawcallsTableDataSource *_drawcallDataSource;
    GPUTraceNoDataViewController *_noDataViewController;
    NSCollectionView *_collectionView;
    NSView *_remarksView;
    NSView *_overviewView;
    NSView *_drawcallView;
    NSOutlineView *_remarksOutline;
    NSOutlineView *_overviewOutline;
    NSOutlineView *_drawcallOutline;
}

@property __weak NSOutlineView *drawcallOutline; // @synthesize drawcallOutline=_drawcallOutline;
@property __weak NSOutlineView *overviewOutline; // @synthesize overviewOutline=_overviewOutline;
@property __weak NSOutlineView *remarksOutline; // @synthesize remarksOutline=_remarksOutline;
@property __weak NSView *drawcallView; // @synthesize drawcallView=_drawcallView;
@property __weak NSView *overviewView; // @synthesize overviewView=_overviewView;
@property __weak NSView *remarksView; // @synthesize remarksView=_remarksView;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)gotoButtonClicked:(id)arg1;
- (void)setFilterString:(id)arg1;
- (id)arrangedItems;
- (id)originalItems;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)_beginEditor;
- (void)GPUDebugger_exportMetrics:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)handleNotification:(id)arg1;
@property(retain) GPUTraceAPIItem *representedObject; // @dynamic representedObject;
- (void)boundsDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

