//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameToolsFoundation/NSObject-Protocol.h>

@class GTFActionNodeOverviewView, GTFActionNodeTrackView;

@protocol GTFActionNodeOverviewDelegate <NSObject>

@optional
- (BOOL)isActionFileEditor;
- (void)nodeOverview:(GTFActionNodeOverviewView *)arg1 duplicateNodeTrack:(GTFActionNodeTrackView *)arg2;
- (void)nodeOverview:(GTFActionNodeOverviewView *)arg1 removeNodeTrack:(GTFActionNodeTrackView *)arg2;
@end

