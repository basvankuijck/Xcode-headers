//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, IDEControlGroup, NSButton, NSString, NSTextField;

@interface _TtC18IDESourceControlUI38SourceControlPrefsSystemPaneController : IDEViewController
{
    // Error parsing type: , name: authorNameField
    // Error parsing type: , name: authorEmailField
    // Error parsing type: , name: authorNameLabel
    // Error parsing type: , name: authorEmailLabel
    // Error parsing type: , name: ignoredFilesBorderedView
    // Error parsing type: , name: ignoredFilesTable
    // Error parsing type: , name: ignoredFilesControlGroup
    // Error parsing type: , name: ignoredFilesControlGroupBorderedView
    // Error parsing type: , name: ignoredFilesAddButton
    // Error parsing type: , name: ignoredFilesRemoveButton
    // Error parsing type: , name: optionsLabel
    // Error parsing type: , name: rebaseOptionButton
    // Error parsing type: , name: displayMergeOptionButton
    // Error parsing type: , name: doneLoadingAuthor
    // Error parsing type: , name: doneLoadingIgnoredFiles
    // Error parsing type: , name: doneLoadingRebaseState
    // Error parsing type: , name: system
    // Error parsing type: , name: ignoredFiles
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) BOOL showMergeCommits;
- (void)updateRebaseState:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)updateObjectValue:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removeFile:(id)arg1;
- (void)addFile:(id)arg1;
- (void)updateAuthor:(id)arg1;
- (void)loadView;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSButton *displayMergeOptionButton; // @synthesize displayMergeOptionButton;
@property(nonatomic) __weak NSButton *rebaseOptionButton; // @synthesize rebaseOptionButton;
@property(nonatomic) __weak NSTextField *optionsLabel; // @synthesize optionsLabel;
@property(nonatomic) __weak DVTGradientImageButton *ignoredFilesRemoveButton; // @synthesize ignoredFilesRemoveButton;
@property(nonatomic) __weak DVTGradientImageButton *ignoredFilesAddButton; // @synthesize ignoredFilesAddButton;
@property(nonatomic) __weak DVTBorderedView *ignoredFilesControlGroupBorderedView; // @synthesize ignoredFilesControlGroupBorderedView;
@property(nonatomic) __weak IDEControlGroup *ignoredFilesControlGroup; // @synthesize ignoredFilesControlGroup;
@property(nonatomic) __weak DVTTableView *ignoredFilesTable; // @synthesize ignoredFilesTable;
@property(nonatomic) __weak DVTBorderedView *ignoredFilesBorderedView; // @synthesize ignoredFilesBorderedView;
@property(nonatomic) __weak NSTextField *authorEmailLabel; // @synthesize authorEmailLabel;
@property(nonatomic) __weak NSTextField *authorNameLabel; // @synthesize authorNameLabel;
@property(nonatomic) __weak NSTextField *authorEmailField; // @synthesize authorEmailField;
@property(nonatomic) __weak NSTextField *authorNameField; // @synthesize authorNameField;

@end

