//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTFilePathFieldCellDelegate-Protocol.h>
#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>
#import <XCSUI/QLPreviewPanelDataSource-Protocol.h>
#import <XCSUI/QLPreviewPanelDelegate-Protocol.h>
#import <XCSUI/_TtP6IDEKit40IDELocalizationApplicationRegionDelegate_-Protocol.h>
#import <XCSUI/_TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_-Protocol.h>

@class DVTFilePathField, DVTObservingToken, NSArray, NSButton, NSError, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSStackView, NSString, NSTextField, NSView, XCSUIBotDefinitionContext, _TtC6IDEKit42IDELocalizationApplicationRegionController, _TtC6IDEKit44IDELocalizationApplicationLanguageController;

@interface XCSUIBotDefinition_BuildConfigurationEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, _TtP6IDEKit42IDELocalizationApplicationLanguageDelegate_, _TtP6IDEKit40IDELocalizationApplicationRegionDelegate_, DVTFilePathFieldCellDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource>
{
    DVTObservingToken *_runContextsObservingToken;
    _TtC6IDEKit44IDELocalizationApplicationLanguageController *_applicationLanguageController;
    _TtC6IDEKit42IDELocalizationApplicationRegionController *_applicationRegionController;
    NSString *_selectedTestLanguage;
    NSString *_selectedTestRegion;
    DVTFilePathField *_customExportFilePathField;
    NSView *_quickLookPanelOriginView;
    NSArray *_quickLookURLs;
    BOOL _viewIsInstalled;
    NSError *_schemeError;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableDictionary *_environmentVariables;
    NSMutableArray *_environmentVariableKeys;
    NSView *_xcodeChooserView;
    NSPopUpButton *_schemesPopup;
    NSView *_schemeChooserView;
    NSButton *_fixSchemeProblemCheckbox;
    NSView *_schemeProblemView;
    NSArray *_availableOverrideToolchains;
    NSStackView *_buildConfigurationStackView;
    NSView *_analyzeActionContainer;
    NSView *_testActionContainer;
    NSView *_archiveActionContainer;
    NSButton *_analyzeActionCheckbox;
    NSButton *_testActionCheckbox;
    NSTextField *_codeCoverageLabel;
    NSPopUpButton *_codeCoveragePreferencePopUp;
    NSButton *_archiveActionCheckbox;
    NSPopUpButton *_exportArchivePopUp;
    NSTextField *_testLanguageLabel;
    NSTextField *_testRegionLabel;
    NSView *_applicationLanguageContainer;
    NSView *_applicationRegionContainer;
    NSView *_testLocalizationContainer;
    NSView *_exportOptionsPlistContainer;
    NSView *_exportOptionsQuicklookButtonContainer;
    NSButton *_addExportOptionsPlistButton;
    NSButton *_exportOptionsPlistNameButton;
    NSButton *_exportOptionsPlistQuicklookButton;
    NSTextField *_exportOptionPlistNameLabel;
    NSTextField *_exportOptionsPlistLabel;
    NSTextField *_exportLabel;
    NSPopUpButton *_buildConfigurationPopUp;
    NSTextField *_overrideToolchainLabel;
    NSPopUpButton *_overrideToolchainPopUp;
}

@property __weak NSPopUpButton *overrideToolchainPopUp; // @synthesize overrideToolchainPopUp=_overrideToolchainPopUp;
@property __weak NSTextField *overrideToolchainLabel; // @synthesize overrideToolchainLabel=_overrideToolchainLabel;
@property __weak NSPopUpButton *buildConfigurationPopUp; // @synthesize buildConfigurationPopUp=_buildConfigurationPopUp;
@property __weak NSTextField *exportLabel; // @synthesize exportLabel=_exportLabel;
@property __weak NSTextField *exportOptionsPlistLabel; // @synthesize exportOptionsPlistLabel=_exportOptionsPlistLabel;
@property __weak NSTextField *exportOptionPlistNameLabel; // @synthesize exportOptionPlistNameLabel=_exportOptionPlistNameLabel;
@property __weak NSButton *exportOptionsPlistQuicklookButton; // @synthesize exportOptionsPlistQuicklookButton=_exportOptionsPlistQuicklookButton;
@property __weak NSButton *exportOptionsPlistNameButton; // @synthesize exportOptionsPlistNameButton=_exportOptionsPlistNameButton;
@property __weak NSButton *addExportOptionsPlistButton; // @synthesize addExportOptionsPlistButton=_addExportOptionsPlistButton;
@property __weak NSView *exportOptionsQuicklookButtonContainer; // @synthesize exportOptionsQuicklookButtonContainer=_exportOptionsQuicklookButtonContainer;
@property __weak NSView *exportOptionsPlistContainer; // @synthesize exportOptionsPlistContainer=_exportOptionsPlistContainer;
@property __weak NSView *testLocalizationContainer; // @synthesize testLocalizationContainer=_testLocalizationContainer;
@property __weak NSView *applicationRegionContainer; // @synthesize applicationRegionContainer=_applicationRegionContainer;
@property __weak NSView *applicationLanguageContainer; // @synthesize applicationLanguageContainer=_applicationLanguageContainer;
@property __weak NSTextField *testRegionLabel; // @synthesize testRegionLabel=_testRegionLabel;
@property __weak NSTextField *testLanguageLabel; // @synthesize testLanguageLabel=_testLanguageLabel;
@property __weak NSPopUpButton *exportArchivePopUp; // @synthesize exportArchivePopUp=_exportArchivePopUp;
@property __weak NSButton *archiveActionCheckbox; // @synthesize archiveActionCheckbox=_archiveActionCheckbox;
@property __weak NSPopUpButton *codeCoveragePreferencePopUp; // @synthesize codeCoveragePreferencePopUp=_codeCoveragePreferencePopUp;
@property __weak NSTextField *codeCoverageLabel; // @synthesize codeCoverageLabel=_codeCoverageLabel;
@property __weak NSButton *testActionCheckbox; // @synthesize testActionCheckbox=_testActionCheckbox;
@property __weak NSButton *analyzeActionCheckbox; // @synthesize analyzeActionCheckbox=_analyzeActionCheckbox;
@property __weak NSView *archiveActionContainer; // @synthesize archiveActionContainer=_archiveActionContainer;
@property __weak NSView *testActionContainer; // @synthesize testActionContainer=_testActionContainer;
@property __weak NSView *analyzeActionContainer; // @synthesize analyzeActionContainer=_analyzeActionContainer;
@property __weak NSStackView *buildConfigurationStackView; // @synthesize buildConfigurationStackView=_buildConfigurationStackView;
@property(retain) NSArray *availableOverrideToolchains; // @synthesize availableOverrideToolchains=_availableOverrideToolchains;
@property(retain) NSView *schemeProblemView; // @synthesize schemeProblemView=_schemeProblemView;
@property(retain) NSButton *fixSchemeProblemCheckbox; // @synthesize fixSchemeProblemCheckbox=_fixSchemeProblemCheckbox;
@property(retain) NSView *schemeChooserView; // @synthesize schemeChooserView=_schemeChooserView;
@property(retain) NSPopUpButton *schemesPopup; // @synthesize schemesPopup=_schemesPopup;
@property __weak NSView *xcodeChooserView; // @synthesize xcodeChooserView=_xcodeChooserView;
@property(retain, nonatomic) NSMutableArray *environmentVariableKeys; // @synthesize environmentVariableKeys=_environmentVariableKeys;
@property(retain, nonatomic) NSMutableDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
@property(retain, nonatomic) NSError *schemeError; // @synthesize schemeError=_schemeError;
- (void).cxx_destruct;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)regionPopUpHasChanged:(id)arg1;
- (void)languagePopUpHasChanged:(id)arg1;
- (void)saveTestLocalization;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)_showQuickLook:(id)arg1 relativeToView:(id)arg2;
- (void)exportOptionsButtonHasBeenPressed:(id)arg1;
- (void)folderButtonHasBeenPressed:(id)arg1;
- (void)verifyIfSCMIsTrackingCurrentSelectedScheme;
- (void)fixSchemeButton:(id)arg1;
- (void)schemePopUpAction:(id)arg1;
- (void)_fixupStackView;
- (void)_selectAssistantContextSchemeInPopUp;
- (void)primitiveInvalidate;
- (void)archiveExportOptionHasChanged:(id)arg1;
- (void)listenForToolchainChanges;
- (void)updateToolchainsPopup;
- (void)overrideToolchainAction:(id)arg1;
- (void)buildConfigurationAction:(id)arg1;
- (void)performsArchiveActionAction:(id)arg1;
- (void)codeCoveragePreferenceAction:(id)arg1;
- (void)performsTestActionAction:(id)arg1;
- (void)performsAnalyzeActionAction:(id)arg1;
- (void)_setExportOptionsPlistNameLabelText:(id)arg1 withColor:(id)arg2;
- (void)refreshExportOptionsPlistContainer;
- (void)refreshArchivingOptionsUI;
- (void)setupLayers;
- (id)service;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (BOOL)supportsCustomArchiveExport;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

