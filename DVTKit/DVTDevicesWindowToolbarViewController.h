//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTToolbarViewController.h>

@class DVTSegmentedControl;

@interface DVTDevicesWindowToolbarViewController : DVTToolbarViewController
{
    DVTSegmentedControl *_segmentedControl;
}

@property(retain) DVTSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_setStateForTag:(unsigned long long)arg1;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;

@end

