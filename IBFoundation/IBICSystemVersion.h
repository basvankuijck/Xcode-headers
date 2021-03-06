//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import <IBFoundation/NSCoding-Protocol.h>

@class NSString;

@interface IBICSystemVersion : IBICSlotComponent <NSCoding>
{
    NSString *_platform;
    NSString *_marketingVersion;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly) NSString *marketingVersion; // @synthesize marketingVersion=_marketingVersion;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 platform:(id)arg4 marketingVersion:(id)arg5 displayOrder:(double)arg6;
- (long long)componentID;

@end

