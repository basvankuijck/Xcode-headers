//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@protocol SCNBoxJSExport <JSExport>
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
@property(nonatomic) long long chamferSegmentCount;
@property(nonatomic) long long lengthSegmentCount;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) long long widthSegmentCount;
@property(nonatomic) double chamferRadius;
@property(nonatomic) double length;
@property(nonatomic) double height;
@property(nonatomic) double width;
@end

