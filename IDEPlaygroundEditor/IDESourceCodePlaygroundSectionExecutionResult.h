//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTTextDocumentLocation, NSString;

@interface IDESourceCodePlaygroundSectionExecutionResult : NSObject
{
    DVTTextDocumentLocation *_location;
    NSString *_toolTip;
}

@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(readonly) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)initWithLocation:(id)arg1;

@end

