//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DYOpenGLView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC21GPURenderTargetEditor48GPUShaderDebuggerVariableSnapshotTextureCellView : NSTableCellView
{
    // Error parsing type: , name: textureView
    // Error parsing type: , name: pixelFormatView
    // Error parsing type: , name: widthView
    // Error parsing type: , name: heightView
    // Error parsing type: , name: depthView
    // Error parsing type: , name: constraintTextureW
    // Error parsing type: , name: constraintTextureH
    // Error parsing type: , name: session
    // Error parsing type: , name: variableSnapshotNode
    // Error parsing type: , name: variableSnapshot
}

+ (double)heightForRegionOfInterestHeight;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setWithSession:(id)arg1 variableSnapshotNode:(id)arg2;
@property(nonatomic, retain) NSLayoutConstraint *constraintTextureH; // @synthesize constraintTextureH;
@property(nonatomic, retain) NSLayoutConstraint *constraintTextureW; // @synthesize constraintTextureW;
@property(nonatomic, retain) NSTextField *depthView; // @synthesize depthView;
@property(nonatomic, retain) NSTextField *heightView; // @synthesize heightView;
@property(nonatomic, retain) NSTextField *widthView; // @synthesize widthView;
@property(nonatomic, retain) NSTextField *pixelFormatView; // @synthesize pixelFormatView;
@property(nonatomic, retain) DYOpenGLView *textureView; // @synthesize textureView;

@end

