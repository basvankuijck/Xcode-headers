//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBLayoutGuide.h>

@class NSObject;
@protocol IBAutolayoutItem;

@interface IBLiveGuide : IBLayoutGuide
{
    struct CGPoint _start;
    struct CGPoint _end;
    NSObject<IBAutolayoutItem> *_view;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isVertical;
- (struct CGPoint)endInView:(id)arg1;
- (struct CGPoint)startInView:(id)arg1;
- (id)initWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 inView:(id)arg3;

@end

