//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, NSNumber, NSProgressIndicator, NSString, NSTextField;

@interface IDEProvisioningProfileDownloaderEmptyContentViewController : IDEViewController
{
    BOOL _busy;
    BOOL _showResolutionButton;
    NSString *_emptyContentTitle;
    NSString *_emptyContentSubtitle;
    NSNumber *_borderSides;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_titleField;
    NSTextField *_subtitleField;
    DVTBorderedView *_borderedContentView;
    CDUnknownBlockType _resolutionBlock;
    NSString *_resolutionButtonTitle;
}

+ (id)keyPathsForValuesAffectingShowSubtitleField;
+ (id)keyPathsForValuesAffectingShowTitleField;
@property(retain, nonatomic) NSString *resolutionButtonTitle; // @synthesize resolutionButtonTitle=_resolutionButtonTitle;
@property(nonatomic) BOOL showResolutionButton; // @synthesize showResolutionButton=_showResolutionButton;
@property(copy, nonatomic) CDUnknownBlockType resolutionBlock; // @synthesize resolutionBlock=_resolutionBlock;
@property __weak DVTBorderedView *borderedContentView; // @synthesize borderedContentView=_borderedContentView;
@property __weak NSTextField *subtitleField; // @synthesize subtitleField=_subtitleField;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSNumber *borderSides; // @synthesize borderSides=_borderSides;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(retain, nonatomic) NSString *emptyContentSubtitle; // @synthesize emptyContentSubtitle=_emptyContentSubtitle;
@property(retain, nonatomic) NSString *emptyContentTitle; // @synthesize emptyContentTitle=_emptyContentTitle;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)clickedResolutionButton:(id)arg1;
- (void)disableResolutionButton;
- (void)enableResolutionButtonWithTitle:(id)arg1 resolutionBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL showSubtitleField;
@property(readonly) BOOL showTitleField;
- (void)viewDidLoad;

@end

