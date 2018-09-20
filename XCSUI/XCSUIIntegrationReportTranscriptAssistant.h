//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTBorderedView, DVTSourceTextView, NSButton, NSPopUpButton, NSString;

@interface XCSUIIntegrationReportTranscriptAssistant : IDEEditor
{
    DVTBorderedView *_borderedView;
    DVTSourceTextView *_textView;
    NSPopUpButton *_destinationPopUp;
    NSPopUpButton *_logsPopUp;
    NSButton *_filterToTest;
    NSString *_filteredLogText;
    NSString *_unfilteredLogText;
}

@property(copy) NSString *unfilteredLogText; // @synthesize unfilteredLogText=_unfilteredLogText;
@property(copy) NSString *filteredLogText; // @synthesize filteredLogText=_filteredLogText;
@property __weak NSButton *filterToTest; // @synthesize filterToTest=_filterToTest;
@property __weak NSPopUpButton *logsPopUp; // @synthesize logsPopUp=_logsPopUp;
@property __weak NSPopUpButton *destinationPopUp; // @synthesize destinationPopUp=_destinationPopUp;
@property DVTSourceTextView *textView; // @synthesize textView=_textView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)filterLogText;
- (void)filterToTestAction:(id)arg1;
- (void)updateLogText;
- (id)representedObjectForGeniusResultsPreviousDocumentLocation:(id)arg1;
- (id)assistantDocument;
- (void)showDiagnostic:(id)arg1;
- (void)loadDiagnosticFromURL:(id)arg1;
- (id)runDestinationMenuItemTitleFromActionRecord:(id)arg1;
- (void)restoreSelectedDeviceFromUserDefaults;
- (void)statshSelectedDeviceIdentifierFromRecord:(id)arg1;
- (void)selectDestination:(id)arg1;
- (void)updateLogsPopUpWithActionRecord:(id)arg1;
- (void)_themeFontsAndColorsUpdated;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)loadView;

@end

