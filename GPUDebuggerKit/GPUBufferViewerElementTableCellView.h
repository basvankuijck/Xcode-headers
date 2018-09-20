//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GPUBufferViewerElementTableColumn, GPUBufferViewerErrorView;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerElementTableCellView : NSTableCellView
{
    GPUBufferViewerElementTableColumn *_tableColumn;
    GPUBufferViewerErrorView *_errorView;
}

+ (id)identifierForTableColumn:(id)arg1;
@property(retain, nonatomic) GPUBufferViewerErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak GPUBufferViewerElementTableColumn *tableColumn; // @synthesize tableColumn=_tableColumn;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setError:(id)arg1;
- (void)setValue:(id)arg1 forComponent:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithTableColumn:(id)arg1;
- (id)identifierForTableColumn:(id)arg1;

@end

