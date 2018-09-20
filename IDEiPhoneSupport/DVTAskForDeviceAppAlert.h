//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAlert.h>

@class DVTiOSDevice, NSPopUpButton, NSString, NSView;

@interface DVTAskForDeviceAppAlert : NSAlert
{
    NSString *_selectedApp;
    DVTiOSDevice *_device;
    NSPopUpButton *_popup;
}

+ (id)alertForDevice:(id)arg1;
@property(retain) NSPopUpButton *popup; // @synthesize popup=_popup;
@property(retain) DVTiOSDevice *device; // @synthesize device=_device;
@property(copy) NSString *selectedApp; // @synthesize selectedApp=_selectedApp;
- (void).cxx_destruct;
- (void)_menuAction:(id)arg1;
- (void)layout;

// Remaining properties
@property(retain) NSView *accessoryView; // @dynamic accessoryView;

@end

