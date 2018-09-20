//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBConnectionDisplayGroup : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_deprecatedTitle;
    double _positionPriority;
}

+ (id)sortedArrayFromConnectionDisplayGroups:(id)arg1;
+ (id)connectionDisplayGroupForIdentifier:(id)arg1;
@property(readonly) double positionPriority; // @synthesize positionPriority=_positionPriority;
@property(readonly) NSString *deprecatedTitle; // @synthesize deprecatedTitle=_deprecatedTitle;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConnectionDisplayGroup:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareToDisplayGroup:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end
