//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTHUDPopUpController.h>

@class NSButton;

@interface IBSourceCodeConnectionPopUpController : DVTHUDPopUpController
{
    NSButton *_cancelButton;
    CDUnknownBlockType _cancelButtonClickHandlerBlock;
}

@property(copy) CDUnknownBlockType cancelButtonClickHandlerBlock; // @synthesize cancelButtonClickHandlerBlock=_cancelButtonClickHandlerBlock;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)closeForCancelling;
- (void)close:(id)arg1;
- (BOOL)spaceBarClosesPopUp;
- (void)addSubviews;
- (id)cancelButton;
- (void)loadWindow;

@end

