//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIODebugGaugesCore/IDEGaugeDebuggingAddition.h>

@interface IDEEnergyGaugeDebuggingAddition : IDEGaugeDebuggingAddition
{
    double _totalAverage;
}

+ (id)requiredDataQueryAttribute;
+ (id)basicDataQueryAttributes;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
- (void)processQueryResultDict:(id)arg1;

@end
