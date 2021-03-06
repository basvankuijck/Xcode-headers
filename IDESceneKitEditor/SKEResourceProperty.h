//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSComboBox, NSDictionary, NSString;

@interface SKEResourceProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    IDEInspectorKeyPath *_valueKeyPath;
    unsigned long long _resourceType;
    NSString *_placeholder;
    NSDictionary *_resources;
}

+ (unsigned long long)resourceTypeFromString:(id)arg1;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (id)suggestedSceneNames;
- (double)baseline;

@end

