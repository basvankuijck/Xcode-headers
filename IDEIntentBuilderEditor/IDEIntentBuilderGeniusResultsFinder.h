//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEIndexGeniusResultsFinder.h>

@class DVTNotificationToken;

@interface IDEIntentBuilderGeniusResultsFinder : IDEIndexGeniusResultsFinder
{
    DVTNotificationToken *_notificationObserver;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setGeniusResultsForGeneratedSources:(id)arg1;
- (void)_updateGeniusResults;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;

@end

