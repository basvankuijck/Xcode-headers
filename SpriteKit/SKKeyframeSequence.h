//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    long long _interpolationMode;
    long long _repeatMode;
    struct SKCKeyframeSequence *_cKeyframeSequence;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)getKeyframeTimeForIndex:(unsigned long long)arg1;
- (id)sampleAtTime:(double)arg1;
- (void)_dirtySKCKeyframeSequence;
- (struct SKCKeyframeSequence *)_createSKCKeyframeSequence;
- (Class)_valueClass;
- (id)getKeyframeValueForIndex:(unsigned long long)arg1;
- (void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3;
- (void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)removeKeyframeAtIndex:(unsigned long long)arg1;
- (void)removeAllKeyframes;
- (void)removeLastKeyframe;
- (void)addKeyframeValue:(id)arg1 time:(double)arg2;
@property(nonatomic) long long repeatMode;
@property(nonatomic) long long interpolationMode;
- (unsigned long long)count;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (BOOL)isEqualToSequence:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;

@end

