//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIntentBuilderCore/NSCopying-Protocol.h>

@class NSString;

@interface IDEIntentBuilderIntentCategory : NSObject <NSCopying>
{
    BOOL _isDefault;
    BOOL _hidden;
    BOOL _selectable;
    BOOL _userConfirmationRequired;
    BOOL _restrictedWhileLocked;
    long long _display;
    NSString *_name;
    NSString *_verb;
    IDEIntentBuilderIntentCategory *_parentCategory;
}

+ (id)categoryWithName:(id)arg1 verb:(id)arg2;
+ (id)supportedCategories;
+ (id)defaultCategory;
+ (id)_separatorCategory;
@property(nonatomic, setter=_setParentCategory:) __weak IDEIntentBuilderIntentCategory *parentCategory; // @synthesize parentCategory=_parentCategory;
@property(nonatomic, getter=isRestrictedWhileLocked, setter=_setRestrictedWhileLocked:) BOOL restrictedWhileLocked; // @synthesize restrictedWhileLocked=_restrictedWhileLocked;
@property(nonatomic, getter=isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(nonatomic, getter=isSelectable, setter=_setSelectable:) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic, getter=isHidden, setter=_setHidden:) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic, setter=_setDefault:) BOOL isDefault; // @synthesize isDefault=_isDefault;
@property(copy, nonatomic, setter=_setVerb:) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic, setter=_setName:) NSString *name; // @synthesize name=_name;
@property(nonatomic, setter=_setDisplay:) long long _display; // @synthesize _display;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithName:(id)arg1;

@end

