//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportDocument.h>

@class DVTObservingToken, GPUReportEditor, GPUReportResults, GPUSharedTabUIState;

@interface GPUReportDocument : IDEDebugGaugeReportDocument
{
    DVTObservingToken *_activeDebuggerControllerObserverToken;
    GPUSharedTabUIState *_sharedTabUIState;
    GPUReportResults *_reportResults;
    GPUReportEditor *_editor;
}

+ (BOOL)autosavesInPlace;
@property(nonatomic) __weak GPUReportEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) GPUReportResults *reportResults; // @synthesize reportResults=_reportResults;
@property(nonatomic) __weak GPUSharedTabUIState *sharedTabUIState; // @synthesize sharedTabUIState=_sharedTabUIState;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)canExportDocument;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_teardown;
- (void)_setup;

@end

