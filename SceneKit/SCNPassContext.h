//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface SCNPassContext : NSObject
{
    CDStruct_b9d91b93 *_context;
}

- (id)outputTextureWithName:(id)arg1;
- (id)inputTextureWithName:(id)arg1;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) double time;

@end

