//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <GPUTraceDebuggerUI/GPUReportSectionNavigationDelegate-Protocol.h>
#import <GPUTraceDebuggerUI/IDEDebugGaugeReportContentDelegate-Protocol.h>
#import <GPUTraceDebuggerUI/IDEDebugGaugeReportTopSectionContentDelegate-Protocol.h>

@class DVTGauge, DVTMeterValue, DVTMeterView, DVTObservingToken, DVTStackView_AppKitAutolayout, GPUDebuggerController, GPUNumericBubbleView, GPUReportBarChartView, GPUReportBuilder, GPUReportResults, GPUSharedTabUIState, IDEDebugGaugeReportSection, IDEGFXGaugeDebuggingAdditionUIController, NSArray, NSButton, NSMutableArray, NSString, NSView;
@protocol DVTInvalidation, GPUInvestigatorReportProvider, GPUPerformanceDataProvider, GPUProgramPerformanceReportProvider;

@interface GPUReportEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate, IDEDebugGaugeReportTopSectionContentDelegate, GPUReportSectionNavigationDelegate>
{
    GPUDebuggerController *_debuggerController;
    GPUSharedTabUIState *_sharedTabState;
    id <GPUInvestigatorReportProvider> _investigatorReportProvider;
    id <GPUProgramPerformanceReportProvider> _programPerformanceReportProvider;
    id <GPUPerformanceDataProvider> _performanceDataProvider;
    DVTMeterValue *_fpsMeterData;
    DVTObservingToken *_investigatorCaseObservingToken;
    DVTObservingToken *_investigatorReadyObservingToken;
    DVTObservingToken *_debuggerControllerStateObservingToken;
    DVTObservingToken *_overviewSamplesObservingToken;
    DVTObservingToken *_investigatorCaseConfigDataObservingToken;
    DVTObservingToken *_currentTraceSessionUpdatedCompactTextModeObservingToken;
    DVTObservingToken *_shaderProfilerResultsObserver;
    id _investigatorCaseEventObservingToken;
    NSArray *_topLevelNibButtonObjects;
    NSView *_loadedButtonView;
    DVTStackView_AppKitAutolayout *_mainStackView;
    GPUReportBuilder *_reportBuilder;
    IDEDebugGaugeReportSection *_programPerformanceCapsule;
    IDEDebugGaugeReportSection *_noticeMessageCapsule;
    IDEDebugGaugeReportSection *_reportCapsule;
    IDEDebugGaugeReportSection *_frameBreakdownCapsule;
    IDEGFXGaugeDebuggingAdditionUIController *_gfxGaugeDebuggingAdditionUIController;
    id <DVTInvalidation> _gfxGaugeObservingToken;
    NSMutableArray *_reportRootNodeArray;
    GPUReportResults *_reportResults;
    NSView *_topSectionButtonsView;
    NSView *_topSectionShortDescription;
    NSView *_topSectionprogressBarView;
    NSView *_meterContainerView;
    DVTMeterView *_fpsMeterView;
    GPUNumericBubbleView *_fpsTitleAccessoryView;
    GPUReportBarChartView *_utilizationGraphView;
    GPUReportBarChartView *_cpuGPUActiveTimeGraphView;
    NSButton *_analyzePerformanceButton;
    DVTGauge *_analysisProgressGauge;
    NSButton *_stopAnalyzePerformanceButton;
}

+ (id)currentTime;
@property(retain, nonatomic) NSButton *stopAnalyzePerformanceButton; // @synthesize stopAnalyzePerformanceButton=_stopAnalyzePerformanceButton;
@property(retain, nonatomic) DVTGauge *analysisProgressGauge; // @synthesize analysisProgressGauge=_analysisProgressGauge;
@property(retain, nonatomic) NSButton *analyzePerformanceButton; // @synthesize analyzePerformanceButton=_analyzePerformanceButton;
@property(retain, nonatomic) GPUReportBarChartView *cpuGPUActiveTimeGraphView; // @synthesize cpuGPUActiveTimeGraphView=_cpuGPUActiveTimeGraphView;
@property(retain, nonatomic) GPUReportBarChartView *utilizationGraphView; // @synthesize utilizationGraphView=_utilizationGraphView;
@property(retain, nonatomic) GPUNumericBubbleView *fpsTitleAccessoryView; // @synthesize fpsTitleAccessoryView=_fpsTitleAccessoryView;
@property(retain, nonatomic) DVTMeterView *fpsMeterView; // @synthesize fpsMeterView=_fpsMeterView;
@property(retain, nonatomic) NSView *meterContainerView; // @synthesize meterContainerView=_meterContainerView;
@property(retain, nonatomic) NSView *topSectionprogressBarView; // @synthesize topSectionprogressBarView=_topSectionprogressBarView;
@property(retain, nonatomic) NSView *topSectionShortDescription; // @synthesize topSectionShortDescription=_topSectionShortDescription;
@property(retain, nonatomic) NSView *topSectionButtonsView; // @synthesize topSectionButtonsView=_topSectionButtonsView;
@property(retain, nonatomic) GPUReportResults *reportResults; // @synthesize reportResults=_reportResults;
- (void).cxx_destruct;
- (void)reportSectionRowClicked:(unsigned long long)arg1 node:(id)arg2;
@property(readonly, nonatomic) id <GPUProgramPerformanceReportProvider> programPerformanceReportProvider;
@property(readonly, nonatomic) id <GPUInvestigatorReportProvider> investigatorReportProvider;
- (void)_enumerateFindingStatisticsAndResourceTypesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)resourceTypeForFindingStatisticsKey:(id)arg1;
- (id)_findingStatisticsKeyToResourceTypeMap;
- (void)updateReportWithCaseData:(int)arg1;
- (id)localizedStringWithKey:(id)arg1 andComment:(id)arg2;
- (void)showOutlineItemInAssistantEditor:(id)arg1;
- (void)showReportResourceAsTraceItem:(id)arg1;
- (void)showResourceInAssistantEditor:(id)arg1;
- (id)investigatorReportResourceWithResourceType:(unsigned int)arg1 objectID:(unsigned int)arg2 analyzerFinding:(id)arg3 investigatorFinding:(id)arg4;
- (id)generateProgramPerformanceTree;
- (id)_programPerformanceTotalItem;
- (void)updateDisplayedFindingsWithMCSInfo:(id)arg1;
- (void)updateReportWithAdditionalInfo;
- (void)addAnalyzerFindings:(id)arg1 toSection:(id)arg2 forFinding:(id)arg3 areRedFlags:(BOOL)arg4;
- (id)_createProgramCentricTreeForGroupedFindings:(id)arg1 investigatorFinding:(id)arg2;
- (id)_createResourceCentricTreeForGroupedFindings:(id)arg1 investigatorFinding:(id)arg2;
- (void)addDetailsToSection:(id)arg1 fromDetailDictionary:(id)arg2 forFinding:(id)arg3;
- (void)addDetailsToSection:(id)arg1 forRecommendationSection:(id)arg2 fromFinding:(id)arg3;
- (void)addFindingToReport:(id)arg1;
- (void)updateReportWithResultMessage;
- (void)updateReportWithResultAndFindingsInfo;
- (void)updateInvalidView;
- (void)constructProgramPerformanceSection;
- (void)updateOverview;
- (void)updateReportWithCPUAndGPUActiveTimes;
- (void)updateReportWithTargetFrameRate;
- (id)_setupCPUGPUActiveTimeGraphView;
- (id)cpuGPUActiveTimeGraphData;
- (id)_setupUtilizationGraphView;
- (id)utilizationGraphData;
- (void)_setupFPSMeterView;
- (void)resetFrameBreakdown;
- (void)updateFrameBreakdownState;
- (void)_setupFrameBreakdownSection:(id)arg1;
- (void)_setupFrameBreakdownObserver;
- (id)topSectionComponentEntries;
- (id)topSectionShortDescriptionTitle;
- (id)topSectionImage;
- (id)progressBarView;
- (id)topSectionTitleAccessoryView;
- (BOOL)_loadButtonsNib;
- (id)topSectionTitle;
- (id)addTopSectionTreeNodeForObject:(id)arg1 first:(BOOL)arg2;
- (id)addTreeNodeForObject:(id)arg1 withChildren:(id)arg2 toParent:(id)arg3;
- (id)addTreeNodeForObject:(id)arg1 withChildren:(id)arg2 toParent:(id)arg3 asFirstChild:(BOOL)arg4;
- (void)addSectionsToView:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (void)stopAnalyzePerformance:(id)arg1;
- (void)analyzePerformance:(id)arg1;
- (void)updateProgress;
- (void)_hideProgressControls;
- (void)_loadButtonView:(id)arg1;
- (void)updateAnalyzePerformanceActionAvailability;
- (void)resetReportEditorStateThatDependsOnTheInvestigatorCase;
- (void)cancelObservers;
- (void)observeInvestigatorCaseEvents;
- (void)redisplayReport;
- (void)setupReportSection;
- (void)setupObservers;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)resetReportEditor;
- (void)_setup;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

