//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface IDEEnergyLogScoreFormatter : NSFormatter
{
    long long _zeroThreshold;
    long long _lowThreshold;
    long long _highThreshold;
}

@property long long highThreshold; // @synthesize highThreshold=_highThreshold;
@property long long lowThreshold; // @synthesize lowThreshold=_lowThreshold;
@property long long zeroThreshold; // @synthesize zeroThreshold=_zeroThreshold;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;

@end

