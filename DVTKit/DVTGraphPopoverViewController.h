//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DVTKit/NSPopoverDelegate-Protocol.h>

@class NSPopover, NSString, NSTextField;

@interface DVTGraphPopoverViewController : NSViewController <NSPopoverDelegate>
{
    NSPopover *_popover;
    NSTextField *_detailsTextField;
}

@property __weak NSTextField *detailsTextField; // @synthesize detailsTextField=_detailsTextField;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)hidePopover;
- (void)showPopoverWithString:(id)arg1 atScreenPoint:(struct CGPoint)arg2 relativeToView:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

