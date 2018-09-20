//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPopUpButtonCell, IDESwiftMigrationOptionChooserAssistant, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IDESwiftMigrationOptionChooserOptionItem : NSObject
{
    NSMutableArray *_childOptionItems;
    NSString *_selectedValue;
    DVTPopUpButtonCell *_valuePopUpButtonCell;
    BOOL _enabled;
    IDESwiftMigrationOptionChooserAssistant *_optionChooserAssistant;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
    long long _state;
    IDESwiftMigrationOptionChooserOptionItem *_parentOptionItem;
    NSArray *_localizedAllowedValues;
}

+ (id)keyPathsForValuesAffectingModernizerOptions;
+ (id)keyPathsForValuesAffectingArrangedChildOptionItems;
@property(copy) NSString *selectedValue; // @synthesize selectedValue=_selectedValue;
@property(copy) NSArray *localizedAllowedValues; // @synthesize localizedAllowedValues=_localizedAllowedValues;
@property __weak IDESwiftMigrationOptionChooserOptionItem *parentOptionItem; // @synthesize parentOptionItem=_parentOptionItem;
@property long long state; // @synthesize state=_state;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *name; // @synthesize name=_name;
@property __weak IDESwiftMigrationOptionChooserAssistant *optionChooserAssistant; // @synthesize optionChooserAssistant=_optionChooserAssistant;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *buildOptions;
- (void)_valuePopUpButtonCellMenuItemAction:(id)arg1;
@property(readonly, copy) DVTPopUpButtonCell *valuePopUpButtonCell;
- (void)removeObjectFromChildOptionItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildOptionItemsAtIndex:(unsigned long long)arg2;
@property(readonly, copy) NSMutableArray *mutableChildOptionItems;
- (id)arrangedChildOptionItems;
@property(readonly, copy) NSArray *childOptionItems;
@property(readonly) double rowHeight;
- (id)init;

@end
