//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugArea.h>

@class IDEConsoleTextView, NSString;

@interface _TtC26IDEPegasusPlaygroundEditor19PlaygroundDebugArea : IDEDebugArea
{
    // Error parsing type: , name: consoleTextView
    // Error parsing type: , name: primaryEditorDocumentObserver
    // Error parsing type: , name: consoleItemsObserver
    // Error parsing type: , name: playgroundDocumentCloseObserver
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)canActivateConsole;
- (void)reloadConsole;
- (void)clearConsole;
- (BOOL)canClearConsole;
@property(nonatomic, readonly) NSString *stateSavingIdentifier;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(nonatomic, retain) IDEConsoleTextView *consoleTextView; // @synthesize consoleTextView;

@end

