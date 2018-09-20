//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

#import <DVTKit/DVTFilteringMenuSearchViewDelegate-Protocol.h>
#import <DVTKit/NSMenuDelegate-Protocol.h>
#import <DVTKit/NSTextFieldDelegate-Protocol.h>

@class DVTFilteringMenuSearchView, NSString;

@interface DVTFilteringMenu : NSMenu <DVTFilteringMenuSearchViewDelegate, NSMenuDelegate, NSTextFieldDelegate>
{
    id _dvtDelegate;
    DVTFilteringMenuSearchView *_newSearchView;
    BOOL _initiallyShowsSearch;
    struct OpaqueMenuRef *_carbonMenu;
    struct {
        unsigned int _delegateRespondsToFilterItemsInMenuForSearchString:1;
        unsigned int _delegateRespondsToMenuHasKeyEquivalentForEventTargetAction:1;
        unsigned int _delegateRespondsToMenuUpdateItemAtIndexShouldCancel:1;
        unsigned int _delegateRespondsToConfinementRectForMenuOnScreen:1;
        unsigned int _delegateRespondsToMenuWillHighlightItem:1;
        unsigned int _delegateRespondsToMenuWillOpen:1;
        unsigned int _delegateRespondsToMenuDidClose:1;
        unsigned int _delegateRespondsToNumberOfItemsInMenu:1;
        unsigned int _delegateRespondsToMenuNeedsUpdate:1;
    } _dvtFilteringMenuFlags;
}

@property(readonly) BOOL initiallyShowsSearch; // @synthesize initiallyShowsSearch=_initiallyShowsSearch;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (id)_singleEnabledMenuItem;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)menuNeedsUpdate:(id)arg1;
- (long long)numberOfItemsInMenu:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)filteringSearchView:(id)arg1 makeSearchFieldKey:(id)arg2;
- (void)performSearchWithString:(id)arg1 inMenu:(id)arg2;
- (BOOL)searchFieldShouldTakeFocus:(id)arg1;
- (void)setUpSearchFieldInMenu:(id)arg1 withString:(id)arg2;
- (BOOL)_isSearchScrolledOutOfView:(id)arg1;
- (void)_selectSearchItem:(id)arg1;
- (id)_newSearchMenuItem;
- (struct OpaqueMenuRef *)dvt_menuRef;
- (id)dvt_delegate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithTitle:(id)arg1 initiallyShowsSearch:(BOOL)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

