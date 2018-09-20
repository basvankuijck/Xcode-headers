//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBLayoutConstant;
@protocol IBAutolayoutItem;

@interface IBLayoutGuideMatch : NSObject
{
    unsigned long long _attribute;
    NSObject<IBAutolayoutItem> *_relativeTo;
    unsigned long long _relativeAttribute;
    IBLayoutConstant *_constant;
    id _feedbackToken;
}

@property(readonly) id feedbackToken; // @synthesize feedbackToken=_feedbackToken;
@property(readonly) IBLayoutConstant *constant; // @synthesize constant=_constant;
@property(readonly) unsigned long long relativeAttribute; // @synthesize relativeAttribute=_relativeAttribute;
@property(readonly) NSObject<IBAutolayoutItem> *relativeTo; // @synthesize relativeTo=_relativeTo;
@property(readonly) unsigned long long attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)layoutGuideMatchByConvertingToCoordinateSpaceOfView:(id)arg1 fromCoordinateSpaceOfView:(id)arg2;
- (BOOL)exactlyMatchesView:(id)arg1 withConstantInCoordinateSpaceOfView:(id)arg2 userInterfaceLayoutDirection:(long long)arg3;
- (id)constantInCoordinateSpaceOfView:(id)arg1 fromCoordinateSpaceOfView:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToLayoutGuideMatch:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, getter=isAbsolute) BOOL absolute;
- (id)initWithAttribute:(unsigned long long)arg1 constant:(id)arg2 feedbackToken:(id)arg3;
- (id)initWithAttribute:(unsigned long long)arg1 relativeTo:(id)arg2 relativeAttribute:(unsigned long long)arg3 constant:(id)arg4 feedbackToken:(id)arg5;

@end

