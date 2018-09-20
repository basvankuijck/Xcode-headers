//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsCore/NSObject-Protocol.h>

@class DYCaptureDescriptor, DYCaptureState;

@protocol DYCaptureManager <NSObject>
@property(readonly, nonatomic) DYCaptureState *activeCaptureState;
@property(readonly, nonatomic) DYCaptureDescriptor *activeCaptureDescriptor;
@property(readonly) unsigned long long state;
- (void)stopCapture;
- (BOOL)startCaptureWithDescriptor:(DYCaptureDescriptor *)arg1;
- (BOOL)triggerArmedCapture;
- (BOOL)armCaptureWithDescriptor:(DYCaptureDescriptor *)arg1;
@end

