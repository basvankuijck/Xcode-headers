//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/NSObject-Protocol.h>
#import <IDEKit/_TtP6IDEKit41IDESourceControlRepositoriesCloneDelegate_-Protocol.h>

@class DVTReplacementView, NSStackView;

__attribute__((visibility("hidden")))
@interface _TtC6IDEKit42IDESourceControlRepositoriesViewController : DVTViewController <NSObject, _TtP6IDEKit41IDESourceControlRepositoriesCloneDelegate_>
{
    // Error parsing type: , name: stackView
    // Error parsing type: , name: blankSlateReplacementView
    // Error parsing type: , name: repositoriesTableReplacementView
    // Error parsing type: , name: repositoryDetailReplacementView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: addAccountWindow
    // Error parsing type: , name: accountsObservingToken
    // Error parsing type: , name: tableColumnObservationTokens
    // Error parsing type: , name: previousSelectedRow
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: headerTableRowView
    // Error parsing type: , name: loadingStatus
    // Error parsing type: , name: movedToSearchThroughKeyPress
}

- (CDUnknownBlockType).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewWillDisappear;
- (BOOL)handleMoveUpInTableView;
- (void)cloneAction:(id)arg1;
- (void)readmeClickWithSender:(id)arg1;
- (void)repoTitleClickWithSender:(id)arg1;
- (void)favoriteClickWithSender:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(nonatomic) __weak DVTReplacementView *repositoryDetailReplacementView; // @synthesize repositoryDetailReplacementView;
@property(nonatomic) __weak DVTReplacementView *repositoriesTableReplacementView; // @synthesize repositoriesTableReplacementView;
@property(nonatomic) __weak DVTReplacementView *blankSlateReplacementView; // @synthesize blankSlateReplacementView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView;

@end
