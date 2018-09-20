//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSComboBox, NSString;

@interface IDEInspectorListProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_listContentKeyPath;
    IDEInspectorKeyPath *_correspondingObjectsKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    BOOL _allowsNilValues;
    NSComboBox *_comboBox;
}

@property(retain, nonatomic) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)userDidChangeValue:(id)arg1;
- (double)baseline;

@end

