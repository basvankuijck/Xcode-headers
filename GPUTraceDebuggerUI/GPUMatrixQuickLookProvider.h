//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUTraceDebuggerUI/IDEVariablesViewQuickLookProvider-Protocol.h>

@class GPUUniformStateValue, NSArray, NSCollectionView, NSMutableArray, NSScrollView, NSString, NSURL, NSView;

__attribute__((visibility("hidden")))
@interface GPUMatrixQuickLookProvider : NSViewController <IDEVariablesViewQuickLookProvider>
{
    int _loadedState;
    GPUUniformStateValue *_dataValue;
    int _columns;
    int _rows;
    NSArray *_data;
    NSMutableArray *_rowMajorMatrixData;
    NSScrollView *_matrixScrollView;
    NSCollectionView *_matrixCollectionView;
}

@property(nonatomic) __weak NSCollectionView *matrixCollectionView; // @synthesize matrixCollectionView=_matrixCollectionView;
@property(nonatomic) __weak NSScrollView *matrixScrollView; // @synthesize matrixScrollView=_matrixScrollView;
@property(retain, nonatomic) NSMutableArray *rowMajorMatrixData; // @synthesize rowMajorMatrixData=_rowMajorMatrixData;
@property int loadedState; // @synthesize loadedState=_loadedState;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)_setupCollectionView;
- (void)_setupData;
- (void)_parseData;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

