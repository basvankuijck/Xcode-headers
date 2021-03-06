//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTGradientImageButton;
@protocol IDEEditorSplittingControllerDelegate;

@interface IDEEditorSplittingController : NSObject
{
    DVTGradientImageButton *_addSplitButton;
    DVTGradientImageButton *_removeSplitButton;
    id <IDEEditorSplittingControllerDelegate> _delegate;
}

@property(retain) id <IDEEditorSplittingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeSplitAction:(id)arg1;
- (void)addSplitAction:(id)arg1;
- (id)removeSplitButton;
- (id)addSplitButton;
- (id)init;

@end

