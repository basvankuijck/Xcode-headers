//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLObject.h>

#import <ModelIO/MDLJointAnimation-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation>
{
    NSArray *_jointPaths;
    MDLAnimatedVector3Array *_translations;
    MDLAnimatedQuaternionArray *_rotations;
    MDLAnimatedVector3Array *_scales;
}

@property(readonly, nonatomic) MDLAnimatedVector3Array *scales; // @synthesize scales=_scales;
@property(readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // @synthesize rotations=_rotations;
@property(readonly, nonatomic) MDLAnimatedVector3Array *translations; // @synthesize translations=_translations;
@property(readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

