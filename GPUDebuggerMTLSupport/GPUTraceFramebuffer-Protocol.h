//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSArray, NSMutableDictionary;
@protocol DYFramebuffer, DYResource;

@protocol GPUTraceFramebuffer <NSObject>
@property(readonly) id <DYResource> solidImage;
@property(readonly) id <DYResource> outlineImage;
@property(readonly) id <DYResource> wireframeImage;
@property(retain) id <DYResource> stencilResourceObject;
@property(retain) id <DYResource> depthResourceObject;
@property(readonly) NSMutableDictionary *colorResourceObjects;
@property(readonly) id <DYFramebuffer> frameBufferObject;
- (NSArray *)attachments;
- (id)attachmentForAttachmentID:(unsigned long long)arg1;
- (id)initWithFBO:(id <DYFramebuffer>)arg1;
@end

