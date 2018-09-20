//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTFilePathFieldCellDelegate-Protocol.h>
#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTFilePathField, DVTStackBacktrace, IDEWorkspace, NSButton, NSNumber, NSPopUpButton, NSString, NSTextField, NSWindow;
@protocol IDEBuildFolderLocationSheetControllerDelegate;

@interface IDEBuildFolderLocationSheetController : NSWindowController <DVTFilePathFieldCellDelegate, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    NSString *_indexStoreIntermediatesPath;
    id <IDEBuildFolderLocationSheetControllerDelegate> _delegate;
    NSButton *_buildStyleXcodeDefaultButton;
    NSButton *_buildStyleUniqueButton;
    NSButton *_buildStyleSharedButton;
    NSButton *_buildStyleCustomButton;
    NSButton *_buildStyleLegacyButton;
    NSPopUpButton *_customBuildLocationTypePopUp;
    NSTextField *_sharedBuildFolderNameField;
    DVTFilePathField *_buildProductsFolderPathField;
    DVTFilePathField *_buildIntermediatesFolderPathField;
    DVTFilePathField *_indexStoreFolderPathField;
    DVTFilePathField *_buildProductsFolderFilePathLabel;
    DVTFilePathField *_buildIntermediatesFolderFilePathLabel;
    DVTFilePathField *_indexStoreFolderFilePathLabel;
    NSTextField *_buildProductsFolderFilePathRelativeLabel;
    NSTextField *_buildIntermediatesFolderFilePathRelativeLabel;
    NSTextField *_indexStoreFolderFilePathRelativeLabel;
    NSWindow *_hostWindow;
    BOOL _enabledFullIndexStoreVisibility;
    NSString *_customIndexStorePath;
}

+ (id)keyPathsForValuesAffectingIndexStoreFolderPath;
+ (id)keyPathsForValuesAffectingBuildIntermediatesFolderPath;
+ (id)keyPathsForValuesAffectingBuildProductsFolderPath;
+ (id)keyPathsForValuesAffectingUseCustomBuildPaths;
+ (id)keyPathsForValuesAffectingUseSharedBuildFolder;
+ (BOOL)automaticallyNotifiesObserversOfCustomBuildLocationTypeIndex;
+ (id)keyPathsForValuesAffectingCustomBuildLocationTypeIndex;
+ (void)initialize;
@property BOOL enabledFullIndexStoreVisibility; // @synthesize enabledFullIndexStoreVisibility=_enabledFullIndexStoreVisibility;
@property(retain) id <IDEBuildFolderLocationSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *customIndexStorePath; // @synthesize customIndexStorePath=_customIndexStorePath;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property(nonatomic) int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property(nonatomic) int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (BOOL)validateCustomIndexStorePath:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomBuildIntermediatesPath:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomBuildProductsPath:(id *)arg1 error:(id *)arg2;
- (BOOL)_validateCustomBuildPath:(id *)arg1 pathDescription:(id)arg2 error:(id *)arg3;
- (BOOL)validateSharedBuildFolderName:(id *)arg1 error:(id *)arg2;
@property(readonly) NSString *defaultCustomIndexStorePath;
@property(readonly) NSString *defaultCustomBuildIntermediatesPath;
@property(readonly) NSString *defaultCustomBuildProductsPath;
@property(readonly) NSString *defaultSharedBuildFolderName;
@property(readonly) NSString *indexStoreFolderPath;
@property(readonly) NSString *buildIntermediatesFolderPath;
@property(readonly) NSString *buildProductsFolderPath;
- (id)_buildPathStringOfType:(int)arg1;
- (void)_updateCustomBuildPathsToDefaultIfNeeded;
@property(readonly) BOOL useCustomBuildPaths;
@property(readonly) BOOL useSharedBuildFolder;
@property(copy) NSNumber *customBuildLocationTypeIndex;
- (void)buildStyleButtonPressed:(id)arg1;
- (void)_updateControlsForCurrentLocationStyle;
- (void)_buildFolderLocationSheetDidEndWithReturnCode:(long long)arg1;
- (void)closeSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)windowDidLoad;
- (void)primitiveInvalidate;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

