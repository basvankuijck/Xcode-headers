//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <IDEKit/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <IDEKit/IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h>
#import <IDEKit/IDEEnergyAnnotatedBarGraphDelegate-Protocol.h>

@class DVTMeterView, DVTObservingToken, IDEAppEnergyGraph, IDEEnergyAddition, IDEEnergyAdditionGuidance, IDEEnergyLogScoreFormatter, NSImageView, NSString, NSTextField, NSView;

@interface IDEEnergyAdditionEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate, IDEEnergyAnnotatedBarGraphDelegate>
{
    IDEEnergyLogScoreFormatter *_scoreFormatter;
    float _observedLogScoreMin;
    float _observedLogScoreMax;
    DVTObservingToken *_energyMeasurementsObserverToken;
    IDEEnergyAddition *_addition;
    unsigned long long _lastMetricsDeltaCount;
    IDEAppEnergyGraph *_cpuWasteGraph;
    IDEEnergyAdditionGuidance *_highCPUIssue;
    IDEEnergyAdditionGuidance *_wakingIssue;
    IDEEnergyAdditionGuidance *_wasteIssue;
    IDEEnergyAdditionGuidance *_throttlesApplied;
    DVTMeterView *_energyMeterView;
    NSView *_highCPUGuidance;
    NSView *_throttledGuidance;
    NSView *_wakeStatArea;
    NSView *_meterArea;
    NSView *_idlePreventionGuidance;
    NSView *_wastedCPUGuidance;
    NSTextField *_lastSecondWakeCountField;
    NSTextField *_lastSecondWakeCountLabel;
    NSTextField *_averageWakeCountField;
    NSTextField *_energyLogScoreField;
    NSTextField *_throttleStatusField;
    NSImageView *_throttleStatusImageView;
}

@property __weak NSImageView *throttleStatusImageView; // @synthesize throttleStatusImageView=_throttleStatusImageView;
@property __weak NSTextField *throttleStatusField; // @synthesize throttleStatusField=_throttleStatusField;
@property(nonatomic) __weak NSTextField *energyLogScoreField; // @synthesize energyLogScoreField=_energyLogScoreField;
@property(nonatomic) __weak NSTextField *averageWakeCountField; // @synthesize averageWakeCountField=_averageWakeCountField;
@property(nonatomic) __weak NSTextField *lastSecondWakeCountLabel; // @synthesize lastSecondWakeCountLabel=_lastSecondWakeCountLabel;
@property(nonatomic) __weak NSTextField *lastSecondWakeCountField; // @synthesize lastSecondWakeCountField=_lastSecondWakeCountField;
@property(retain, nonatomic) NSView *wastedCPUGuidance; // @synthesize wastedCPUGuidance=_wastedCPUGuidance;
@property(retain, nonatomic) NSView *idlePreventionGuidance; // @synthesize idlePreventionGuidance=_idlePreventionGuidance;
@property(retain, nonatomic) NSView *meterArea; // @synthesize meterArea=_meterArea;
@property(retain, nonatomic) NSView *wakeStatArea; // @synthesize wakeStatArea=_wakeStatArea;
@property(retain, nonatomic) NSView *throttledGuidance; // @synthesize throttledGuidance=_throttledGuidance;
@property(retain, nonatomic) NSView *highCPUGuidance; // @synthesize highCPUGuidance=_highCPUGuidance;
@property __weak DVTMeterView *energyMeterView; // @synthesize energyMeterView=_energyMeterView;
@property(retain, nonatomic) IDEEnergyAdditionGuidance *throttlesApplied; // @synthesize throttlesApplied=_throttlesApplied;
@property(retain, nonatomic) IDEEnergyAdditionGuidance *wasteIssue; // @synthesize wasteIssue=_wasteIssue;
@property(retain, nonatomic) IDEEnergyAdditionGuidance *wakingIssue; // @synthesize wakingIssue=_wakingIssue;
@property(retain, nonatomic) IDEEnergyAdditionGuidance *highCPUIssue; // @synthesize highCPUIssue=_highCPUIssue;
@property(retain, nonatomic) IDEAppEnergyGraph *cpuWasteGraph; // @synthesize cpuWasteGraph=_cpuWasteGraph;
@property(nonatomic) unsigned long long lastMetricsDeltaCount; // @synthesize lastMetricsDeltaCount=_lastMetricsDeltaCount;
@property(retain, nonatomic) IDEEnergyAddition *addition; // @synthesize addition=_addition;
- (void).cxx_destruct;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)gradientForColor:(id)arg1;
- (id)colorForChartNamed:(id)arg1;
- (id)categoryTitles;
- (void)primitiveInvalidate;
- (void)timeProfileTemplate:(id)arg1;
- (void)microProfileTemplate:(id)arg1;
- (void)findPollingTemplate:(id)arg1;
- (void)findTimersTemplate:(id)arg1;
- (void)_launchWithTemplate:(id)arg1;
- (void)_handleMetricsUpdate:(id)arg1;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)addSectionsToView:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

