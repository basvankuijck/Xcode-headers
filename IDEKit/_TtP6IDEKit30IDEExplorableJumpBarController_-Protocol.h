//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/DVTInvalidation-Protocol.h>

@class IDEPathControl, NSArray;
@protocol _TtP6DVTKit23DVTExplorableIdentifier_, _TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_;

@protocol _TtP6IDEKit30IDEExplorableJumpBarController_ <DVTInvalidation>
@property(nonatomic, readonly) BOOL hasSelection;
- (NSArray *)takeoverPathControl:(IDEPathControl *)arg1;
- (void)userDidSelectIdentifier:(id <_TtP6DVTKit23DVTExplorableIdentifier_>)arg1;
@property(nonatomic, retain) id <_TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_> delegate;
@end
