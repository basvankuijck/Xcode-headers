//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTCapacityView.h>

@interface DVTCircularCapacityView : DVTCapacityView
{
    struct CGPoint _center;
    double _radius;
    BOOL _useDonutStyle;
    BOOL _leaveRemainderEmpty;
}

@property BOOL leaveRemainderEmpty; // @synthesize leaveRemainderEmpty=_leaveRemainderEmpty;
@property BOOL useDonutStyle; // @synthesize useDonutStyle=_useDonutStyle;
- (void)drawRect:(struct CGRect)arg1;
- (double)_drawSegmentValue:(double)arg1 color:(id)arg2 startAngle:(double)arg3;

@end

