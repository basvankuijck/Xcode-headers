//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/GPUMTLTraceDisplayableItem.h>

@protocol DYPEnumUtils, DYPFenumUtils;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceDrawItem : GPUMTLTraceDisplayableItem
{
    BOOL _dummyDrawItem;
    unsigned long long _commandBufferIndex;
    unsigned long long _commandEncoderIndex;
    unsigned long long _drawCallIndex;
    id <DYPEnumUtils> _enumUtils;
    id <DYPFenumUtils> _fenumUtils;
    int _subCommandIndex;
    shared_ptr_2d3f6817 _parentFunction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)showAsAPIItem;
- (id)createRenderJobsForDisplaySet;
- (id)imageToExportToFile;
- (void)_connectSolidImageToDisplaySet:(id)arg1;
- (void)_connectOutlineImageToDisplaySet:(id)arg1;
- (void)_connectWireframeImageToDisplaySet:(id)arg1;
- (void)_connectElementResourceToDisplaySet:(unsigned long long)arg1 resourceObject:(id)arg2;
- (id)_startLoadingSolidImage;
- (id)_startLoadingOutlineImage;
- (id)_startLoadingWireframeImage;
- (id)_startLoadingDisplaySetElement:(unsigned long long)arg1;
- (void)_displaySetLoadIsComplete:(id)arg1;
- (id)_startLoadingDisplaySet;
- (void)setDecodedFunctionPointer:(shared_ptr_2d3f6817)arg1;
- (id)generateFenumInfo;
- (id)generateLabel;
- (struct Function *)parentFunction;
- (int)subCommandIndex;
- (id)initWithController:(id)arg1 parent:(id)arg2 deviceID:(unsigned long long)arg3 functionIndex:(int)arg4 displayIndex:(int)arg5 commandBufferIndex:(unsigned long long)arg6 commandEncoderIndex:(unsigned long long)arg7 drawCallIndex:(unsigned long long)arg8 subCommandIndex:(int)arg9 parentFunction:(const shared_ptr_2d3f6817 *)arg10;
- (id)initWithController:(id)arg1 parent:(id)arg2 deviceID:(unsigned long long)arg3 functionIndex:(int)arg4 displayIndex:(int)arg5 commandBufferIndex:(unsigned long long)arg6 commandEncoderIndex:(unsigned long long)arg7 drawCallIndex:(unsigned long long)arg8;

@end

