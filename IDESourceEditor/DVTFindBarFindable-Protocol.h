//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceEditor/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFindBar, DVTFindResult, NSArray;

@protocol DVTFindBarFindable <NSObject>

@optional
- (struct _NSRange)selectedRangeForFindBar:(DVTFindBar *)arg1;
- (DVTDocumentLocation *)startingLocationForFindBar:(DVTFindBar *)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateCurrentResult:(DVTFindResult *)arg2;
- (void)dvtFindBar:(DVTFindBar *)arg1 didUpdateResults:(NSArray *)arg2;
@end

