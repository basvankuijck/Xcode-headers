//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebuggerMTLSupport/GPUStateValueQuicklookProvider-Protocol.h>
#import <GPUDebuggerMTLSupport/IDEVariablesViewQuickLookProvider-Protocol.h>

@class GPUMTLQuicklookProvider, GPUQuicklookSamplerItem, GPUSharedTabUIState, GPUStateValueQuicklookProvider, GPUTraceSubEditor, NSObject, NSString, NSURL, NSView;
@protocol DYPResourceManager, DYSampler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUMTLSamplerQuicklookProvider : NSViewController <IDEVariablesViewQuickLookProvider, GPUStateValueQuicklookProvider>
{
    id <DYSampler> _texture;
    BOOL _isGPUStateValue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    GPUMTLQuicklookProvider *_provider;
    GPUStateValueQuicklookProvider *_stateValueProvider;
    NSString *_selector;
    BOOL _wasCancelled;
    GPUTraceSubEditor *_samplerSubEditor;
    GPUQuicklookSamplerItem *_samplerItem;
    int _loadedState;
    id <DYPResourceManager> _resourceManager;
    GPUSharedTabUIState *_sharedUIStateObj;
}

@property(readonly, nonatomic) __weak GPUSharedTabUIState *sharedUIStateObj; // @synthesize sharedUIStateObj=_sharedUIStateObj;
@property int loadedState; // @synthesize loadedState=_loadedState;
@property(nonatomic) __weak id <DYPResourceManager> resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)viewDidLoad;
- (void)_updateSampler:(id)arg1;
- (void)_retriveFromStateValue;
- (void)_retriveFromSampler;
- (void)_startRetrieval;
- (void)_setLoadedState:(int)arg1;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) NSString *extensionForTemporaryFile;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

