//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTCapacityViewController.h>

@interface DVTCircularCapacityViewController : DVTCapacityViewController
{
    BOOL _useDonutStyle;
    BOOL _leaveRemainderEmpty;
}

@property(nonatomic) BOOL leaveRemainderEmpty; // @synthesize leaveRemainderEmpty=_leaveRemainderEmpty;
@property(nonatomic) BOOL useDonutStyle; // @synthesize useDonutStyle=_useDonutStyle;
- (void)loadView;
- (id)initWithTwoLabelRows;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

