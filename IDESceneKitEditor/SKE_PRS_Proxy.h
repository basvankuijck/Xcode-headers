//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKE_PRS_Proxy : NSObject
{
    double _rotation;
    struct CGPoint _position;
    struct CGPoint _scale;
}

@property struct CGPoint scale; // @synthesize scale=_scale;
@property double rotation; // @synthesize rotation=_rotation;
@property struct CGPoint position; // @synthesize position=_position;
- (void)setMatrix:(struct CATransform3D)arg1;
- (struct CATransform3D)matrix;

@end

