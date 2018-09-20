//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEAttributedStringControl, IDEInspectorKeyPath, NSString;

@interface IDEInspectorAttributedStringProperty : IDEInspectorProperty
{
    IDEAttributedStringControl *_attributedStringControl;
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_fontDataSourceKeyPath;
    IDEInspectorKeyPath *_appearanceKeyPath;
    IDEInspectorKeyPath *_backgroundColorKeyPath;
    IDEInspectorKeyPath *_defaultTypingAttributesKeyPath;
}

- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)awakeFromNib;
- (void)userDidUpdateAttributedStringValue:(id)arg1;
- (void)refresh;
- (double)accessoryCenterAnchor;
- (void)primitiveInvalidate;

@end

