//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDocumentLocation.h>

@interface XCSUIIntegrationReportDocumentLocation : DVTDocumentLocation
{
    unsigned long long _selectTab;
}

@property unsigned long long selectTab; // @synthesize selectTab=_selectTab;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDocumentURL:(id)arg1 selectTab:(unsigned long long)arg2;

@end

