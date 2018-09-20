//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICRole : IBICSlotComponent
{
    unsigned long long _roleType;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 type:(unsigned long long)arg4 displayOrder:(double)arg5;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly, nonatomic) unsigned long long roleType; // @synthesize roleType=_roleType;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 type:(unsigned long long)arg4 displayOrder:(double)arg5;
- (long long)componentID;

@end

