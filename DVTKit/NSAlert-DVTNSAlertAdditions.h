//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAlert.h>

@interface NSAlert (DVTNSAlertAdditions)
+ (id)dvt_alertWithMessageText:(id)arg1 buttonTitles:(id)arg2 informativeTextWithFormat:(id)arg3;
+ (id)dvt_alertWithMessageText:(id)arg1 buttonTitles:(id)arg2 informativeText:(id)arg3;
+ (id)dvt_alertWithMessageText:(id)arg1;
- (void)_dvt_beginAlertModalForWindow:(id)arg1 allowSheetOverSheet:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dvt_beginAlertModalForWindow:(id)arg1 allowSheetOverSheet:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dvt_beginAlertModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@end

