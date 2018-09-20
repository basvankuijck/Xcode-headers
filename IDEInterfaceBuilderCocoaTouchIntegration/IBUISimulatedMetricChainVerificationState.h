//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBUISimulatedDeviceContextMetricChain, IBUISimulatedModalPresentationMetricChain, IBUISimulatedNavigationControllerMetricChain, IBUISimulatedPopoverPresentationMetricChain, IBUISimulatedSplitViewMetricChain, IBUISimulatedStatusBarMetricChain, IBUISimulatedTabBarControllerMetricChain, IBUISimulatedWindowSizeMetricChain;

@interface IBUISimulatedMetricChainVerificationState : NSObject
{
    IBUISimulatedDeviceContextMetricChain *_deviceContextMetric;
    IBUISimulatedStatusBarMetricChain *_statusBarMetric;
    IBUISimulatedWindowSizeMetricChain *_windowSizeMetric;
    IBUISimulatedNavigationControllerMetricChain *_navigationControllerMetric;
    IBUISimulatedTabBarControllerMetricChain *_tabBarControllerMetric;
    IBUISimulatedSplitViewMetricChain *_splitViewControllerMetric;
    IBUISimulatedModalPresentationMetricChain *_modalPresentationMetric;
    IBUISimulatedPopoverPresentationMetricChain *_popoverPresentationMetric;
}

@property(retain, nonatomic) IBUISimulatedPopoverPresentationMetricChain *popoverPresentationMetric; // @synthesize popoverPresentationMetric=_popoverPresentationMetric;
@property(retain, nonatomic) IBUISimulatedModalPresentationMetricChain *modalPresentationMetric; // @synthesize modalPresentationMetric=_modalPresentationMetric;
@property(retain, nonatomic) IBUISimulatedSplitViewMetricChain *splitViewControllerMetric; // @synthesize splitViewControllerMetric=_splitViewControllerMetric;
@property(retain, nonatomic) IBUISimulatedTabBarControllerMetricChain *tabBarControllerMetric; // @synthesize tabBarControllerMetric=_tabBarControllerMetric;
@property(retain, nonatomic) IBUISimulatedNavigationControllerMetricChain *navigationControllerMetric; // @synthesize navigationControllerMetric=_navigationControllerMetric;
@property(retain, nonatomic) IBUISimulatedWindowSizeMetricChain *windowSizeMetric; // @synthesize windowSizeMetric=_windowSizeMetric;
@property(retain, nonatomic) IBUISimulatedStatusBarMetricChain *statusBarMetric; // @synthesize statusBarMetric=_statusBarMetric;
@property(retain, nonatomic) IBUISimulatedDeviceContextMetricChain *deviceContextMetric; // @synthesize deviceContextMetric=_deviceContextMetric;
- (void).cxx_destruct;
- (id)rebuildSimplifiedChain;
- (void)clearViewControllerMetrics;

@end

