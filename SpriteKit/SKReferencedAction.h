//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@class NSString;

@interface SKReferencedAction : SKAction
{
    struct SKCReferencedAction *_mycaction;
    SKAction *_referencedAction;
    NSString *_referencedActionName;
}

+ (id)referenceActionWithName:(id)arg1 duration:(double)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_ensureReferencedAction;
- (id)reversedAction;
- (void)setTimingMode:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimingFunction:(CDUnknownBlockType)arg1;
- (id)subactions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

