//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <IDEIODebugGaugesUI/DTTimelineGraphDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h>
#import <IDEIODebugGaugesUI/IDEGaugeCollectedDataListeners-Protocol.h>

@class DTTimelineDecoratedPlane, DTTimelineGraph, DVTCircularCapacityViewController, DVTMeterView, DVTObservingToken, DVTStackView_AppKitAutolayout, IDEEnergyGaugeDebuggingAddition, IDEEnergyLogScoreFormatter, IDEGaugeStackedBarDetailsPopoverController, IDETimelineGraphStackedBarDecorator, IDETimelineStatesDecorator, NSArray, NSButton, NSMutableArray, NSString, NSTextField, NSView;

@interface IDEEnergyGaugeEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate, IDEGaugeCollectedDataListeners, DTTimelineGraphDelegate>
{
    DVTStackView_AppKitAutolayout *_reportStackView;
    DVTCircularCapacityViewController *_componentUtilization;
    NSArray *_componentSegments;
    IDEEnergyLogScoreFormatter *_scoreFormatter;
    float _observedLogScoreMin;
    float _observedLogScoreMax;
    double _totalAverageForEnergyMeter;
    double _totalAverage;
    double _overheadAverage;
    double _backgroundAverage;
    double _CPUAverage;
    double _networkAverage;
    double _locationAverage;
    double _GPUAverage;
    double _displayAverage;
    BOOL _isActive;
    BOOL _detectDisplayDone;
    BOOL _hasDisplayComponent;
    BOOL _interactionEnabled;
    DTTimelineDecoratedPlane *_rulerPlane;
    IDETimelineGraphStackedBarDecorator *_componentDecorator;
    IDETimelineStatesDecorator *_lifeCycleDecorator;
    unsigned long long _lastDuration;
    double _sampleTimeStartOffset;
    double _lastSampleTimeOffset;
    IDEGaugeStackedBarDetailsPopoverController *_detailsPopoverController;
    NSMutableArray *_componentLabels;
    DVTObservingToken *_debugSessionStateObservingToken;
    DVTObservingToken *_appearanceObserver;
    IDEEnergyGaugeDebuggingAddition *_debuggingAddition;
    DVTMeterView *_energyMeterView;
    NSView *_costOverheadExplanationView;
    NSView *_highCPUGuidanceView;
    NSView *_networkGuidanceView;
    NSView *_locationGuidanceView;
    NSView *_highGPUGuidanceView;
    NSView *_displayGuidanceView;
    NSView *_backgroundStateGuidanceView;
    NSView *_foregroundStateGuidanceView;
    NSView *_suspendedStateGuidanceView;
    NSView *_meterArea;
    NSTextField *_energyLogScoreField;
    NSView *_timelineGraphContainer;
    DTTimelineGraph *_timelineView;
    NSView *_labelView;
    NSButton *_timeProfileButton;
    NSButton *_networkProfileButton;
    NSButton *_locationProfileButton;
}

@property(nonatomic) __weak NSButton *locationProfileButton; // @synthesize locationProfileButton=_locationProfileButton;
@property(nonatomic) __weak NSButton *networkProfileButton; // @synthesize networkProfileButton=_networkProfileButton;
@property(nonatomic) __weak NSButton *timeProfileButton; // @synthesize timeProfileButton=_timeProfileButton;
@property(nonatomic) __weak NSView *labelView; // @synthesize labelView=_labelView;
@property(nonatomic) __weak DTTimelineGraph *timelineView; // @synthesize timelineView=_timelineView;
@property(retain, nonatomic) NSView *timelineGraphContainer; // @synthesize timelineGraphContainer=_timelineGraphContainer;
@property(nonatomic) __weak NSTextField *energyLogScoreField; // @synthesize energyLogScoreField=_energyLogScoreField;
@property(retain, nonatomic) NSView *meterArea; // @synthesize meterArea=_meterArea;
@property(retain, nonatomic) NSView *suspendedStateGuidanceView; // @synthesize suspendedStateGuidanceView=_suspendedStateGuidanceView;
@property(retain, nonatomic) NSView *foregroundStateGuidanceView; // @synthesize foregroundStateGuidanceView=_foregroundStateGuidanceView;
@property(retain, nonatomic) NSView *backgroundStateGuidanceView; // @synthesize backgroundStateGuidanceView=_backgroundStateGuidanceView;
@property(retain, nonatomic) NSView *displayGuidanceView; // @synthesize displayGuidanceView=_displayGuidanceView;
@property(retain, nonatomic) NSView *highGPUGuidanceView; // @synthesize highGPUGuidanceView=_highGPUGuidanceView;
@property(retain, nonatomic) NSView *locationGuidanceView; // @synthesize locationGuidanceView=_locationGuidanceView;
@property(retain, nonatomic) NSView *networkGuidanceView; // @synthesize networkGuidanceView=_networkGuidanceView;
@property(retain, nonatomic) NSView *highCPUGuidanceView; // @synthesize highCPUGuidanceView=_highCPUGuidanceView;
@property(retain, nonatomic) NSView *costOverheadExplanationView; // @synthesize costOverheadExplanationView=_costOverheadExplanationView;
@property __weak DVTMeterView *energyMeterView; // @synthesize energyMeterView=_energyMeterView;
@property(retain, nonatomic) IDEEnergyGaugeDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsRangeIndicatorState:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)_calculateBreakdownStateAveragesFromResults:(id)arg1 startIndex:(unsigned long long)arg2;
- (void)_calculateBreakdown:(id *)arg1 state:(unsigned long long *)arg2 total:(double *)arg3 overhead:(double *)arg4 cpu:(double *)arg5 network:(double *)arg6 location:(double *)arg7 gpu:(double *)arg8 display:(double *)arg9 background:(double *)arg10 fromResult:(id)arg11;
- (void)debuggingAdditionDidUpdateCollectedQueryResults:(id)arg1;
- (void)profileInInstruments:(id)arg1;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (void)primitiveInvalidate;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)_updateViewsWithAverages;
- (void)addSectionsToView:(id)arg1;
- (id)_createSwatchLabelForTitle:(id)arg1 color:(id)arg2;
- (void)_createKeysFromComponentTitles:(id)arg1 colors:(id)arg2;
- (void)_addTimelineGraph:(id)arg1;
- (void)_scrollToEndOfTimeline;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)_detectDisplay:(id)arg1;
- (void)viewDidInstall;
- (void)_setupPopover;
- (void)_addStack:(id)arg1 state:(id)arg2 atTime:(unsigned long long)arg3;
- (id)_stateColors;
- (id)_stateTitleColors;
- (id)_stateTitles;
- (id)_componentColorsWithoutDisplay;
- (id)_componentTitlesWithoutDisplay;
- (id)_componentColors;
- (id)_componentTitles;
- (BOOL)hasDefaultTopSection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

