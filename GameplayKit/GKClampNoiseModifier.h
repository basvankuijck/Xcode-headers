//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@interface GKClampNoiseModifier : GKNoiseModifier
{
    double _lowerBound;
    double _upperBound;
}

- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

