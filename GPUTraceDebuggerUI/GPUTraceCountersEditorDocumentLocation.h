//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@class GPUDebuggerController, GPUTimelineGraphDataSource, GPUTraceAPIItem;

@interface GPUTraceCountersEditorDocumentLocation : DVTDocumentLocation
{
    BOOL _apiItemSelected;
    BOOL _isEmptyEncoder;
    unsigned long long _dataIndex;
    GPUTraceAPIItem *_apiItem;
    GPUTimelineGraphDataSource *_graphDataSource;
    GPUDebuggerController *_debuggerController;
    struct _NSRange _selectionRange;
}

@property(nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(nonatomic) struct _NSRange selectionRange; // @synthesize selectionRange=_selectionRange;
@property(nonatomic) __weak GPUTimelineGraphDataSource *graphDataSource; // @synthesize graphDataSource=_graphDataSource;
@property(nonatomic) __weak GPUTraceAPIItem *apiItem; // @synthesize apiItem=_apiItem;
@property(nonatomic) unsigned long long dataIndex; // @synthesize dataIndex=_dataIndex;
@property(nonatomic) BOOL isEmptyEncoder; // @synthesize isEmptyEncoder=_isEmptyEncoder;
@property(nonatomic) BOOL apiItemSelected; // @synthesize apiItemSelected=_apiItemSelected;
- (void).cxx_destruct;

@end

