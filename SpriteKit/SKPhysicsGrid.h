//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKPhysicsGrid : NSObject
{
    float _width;
    float _height;
}

+ (id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2;
+ (id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3;
+ (id)gridFromOccupancyArray:(const char *)arg1 width:(int)arg2 height:(int)arg3;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
- (void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(double)arg3 spriteSize:(struct CGSize)arg4 texture:(id)arg5 physicsBody:(id)arg6;
- (void)spritesFromGrid:(id)arg1 gridSize:(struct CGSize)arg2 zPosition:(double)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(struct CGSize)arg6 physicsBody:(id)arg7;

@end

