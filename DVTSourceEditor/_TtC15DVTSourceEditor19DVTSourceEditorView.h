//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$S12SourceEditor0aB4ViewCN.h"

#import <DVTSourceEditor/DVTFindPatternManager-Protocol.h>

@interface _TtC15DVTSourceEditor19DVTSourceEditorView : _$S12SourceEditor0aB4ViewCN <DVTFindPatternManager>
{
    // Error parsing type: , name: textPreferences
    // Error parsing type: , name: featureControllers
    // Error parsing type: , name: defaultFeatureControllerClasses
    // Error parsing type: , name: themeChangeNotificationToken
    // Error parsing type: , name: lineNumberPreferenceObservingToken
    // Error parsing type: , name: activeLineHighlightPreferenceObservingToken
    // Error parsing type: , name: activeLineHighlightOverrideProvider
    // Error parsing type: , name: pageGuidePreferenceObservingToken
    // Error parsing type: , name: pageGuideLocationPreferenceObservingToken
    // Error parsing type: , name: pageGuideLayoutVisualization
    // Error parsing type: , name: symbolHighlightPreferenceObservingToken
    // Error parsing type: , name: symbolHighlightDelayPreferenceObservingToken
    // Error parsing type: , name: autoInsertClosingBracePreferenceObservingToken
    // Error parsing type: , name: autoInsertOpenBracketPreferenceObservingToken
    // Error parsing type: , name: encloseSelectionInDelimitersPreferenceObservingToken
    // Error parsing type: , name: typeOverCompletionsPreferenceObservingToken
    // Error parsing type: , name: syntaxAwareIndentingPreferenceObservingToken
    // Error parsing type: , name: tabKeyIndentingPreferenceObservingToken
    // Error parsing type: , name: shouldWrapLines
    // Error parsing type: , name: wrappedLinesIndentWidthPreferenceObservingToken
    // Error parsing type: , name: invisibleCharactersPreferenceObservingToken
    // Error parsing type: , name: overscrollRegionPreferenceObservingToken
}

- (CDUnknownBlockType).cxx_destruct;
- (void)dealloc;
- (void)selectFindMatchesInSelection:(id)arg1;
- (void)selectAllFindMatches:(id)arg1;
- (void)selectPreviousOccurrence:(id)arg1;
- (void)selectNextOccurrence:(id)arg1;
- (void)useSelectionForReplace:(id)arg1;
- (void)useSelectionForFind:(id)arg1;
- (void)hideFindBar:(id)arg1;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)replace:(id)arg1;
- (void)findAndSelectPrevious:(id)arg1;
- (void)findAndSelectNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)find:(id)arg1;
- (BOOL)supportsPatterns;
- (id)replaceFieldForField:(id)arg1;
- (id)findFieldForField:(id)arg1;

@end
