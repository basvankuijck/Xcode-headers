//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class DVTReplacementView, NSButton, NSProgressIndicator, NSSearchField, NSString;

@interface _TtC6IDEKit44IDESourceControlRepositoriesWindowController : NSWindowController
{
    // Error parsing type: , name: cloneButton
    // Error parsing type: , name: searchField
    // Error parsing type: , name: replacementView
    // Error parsing type: , name: repoDetailToggleButton
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: cloneWindowController
    // Error parsing type: , name: fieldEditor
    // Error parsing type: , name: accountsObservingToken
}

+ (id)shared;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
@property(nonatomic, readonly) NSString *windowNibName;
- (void)cloneFrom:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillLoad;
- (void)beginSearch:(id)arg1;
- (void)searchFieldDidEndSearching:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)cloneClickWithSender:(id)arg1;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) NSButton *repoDetailToggleButton; // @synthesize repoDetailToggleButton;
@property(nonatomic, retain) DVTReplacementView *replacementView; // @synthesize replacementView;
@property(nonatomic, retain) NSSearchField *searchField; // @synthesize searchField;
@property(nonatomic, retain) NSButton *cloneButton; // @synthesize cloneButton;

@end

