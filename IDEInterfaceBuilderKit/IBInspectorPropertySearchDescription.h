//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IBInspectorPropertySearchDescription : NSObject
{
    BOOL _editable;
    NSString *_categoryIdentifier;
    NSString *_sliceIdentifier;
    NSString *_title;
    NSString *_keyPath;
    NSString *_enabledKeyPath;
    NSArray *_visibilityConditions;
}

+ (id)propertyDescriptionWithPlistRepresentation:(id)arg1;
@property(readonly, nonatomic) BOOL editable; // @synthesize editable=_editable;
@property(readonly, copy, nonatomic) NSArray *visibilityConditions; // @synthesize visibilityConditions=_visibilityConditions;
@property(readonly, copy, nonatomic) NSString *enabledKeyPath; // @synthesize enabledKeyPath=_enabledKeyPath;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *sliceIdentifier; // @synthesize sliceIdentifier=_sliceIdentifier;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (void).cxx_destruct;
- (BOOL)isEditableForInspectedObject:(id)arg1;
- (BOOL)isVisibleForInspectedObject:(id)arg1;
- (id)plistRepresentation;
- (id)initWithCategoryIdentifier:(id)arg1 sliceIdentifier:(id)arg2 title:(id)arg3 keyPath:(id)arg4 editable:(BOOL)arg5 enabledKeyPath:(id)arg6 visibilityConditions:(id)arg7;

@end

