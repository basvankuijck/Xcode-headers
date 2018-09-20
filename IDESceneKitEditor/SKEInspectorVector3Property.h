//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField, SKEStepperTextField;

@interface SKEInspectorVector3Property : IDEInspectorProperty
{
    SKEStepperTextField *_xScrubber;
    SKEStepperTextField *_yScrubber;
    SKEStepperTextField *_zScrubber;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    NSTextField *_zLabel;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_nilPlaceholder;
}

- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (CDUnknownBlockType)vectorComponentSetter:(long long)arg1 componentValue:(double)arg2;
- (CDUnknownBlockType)vectorComponentExtractor:(long long)arg1;
- (double)baseline;

@end

