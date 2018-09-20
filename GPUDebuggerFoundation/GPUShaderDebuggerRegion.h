//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DYPShaderDebuggerROI-Protocol.h>
#import <GPUDebuggerFoundation/DYPShaderDebuggerROILocation-Protocol.h>

@class NSString;

@interface GPUShaderDebuggerRegion : NSObject <DYPShaderDebuggerROI, DYPShaderDebuggerROILocation>
{
    unsigned long long _type;
}

+ (id)regionWithRegionOfInterest:(id)arg1 selectedThread:(id)arg2;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
