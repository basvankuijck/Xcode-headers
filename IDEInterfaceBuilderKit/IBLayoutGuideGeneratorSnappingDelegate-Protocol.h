//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBLayoutGuideGenerator;

@protocol IBLayoutGuideGeneratorSnappingDelegate <NSObject>
- (id)feedbackTokenForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 ifShouldSnapDefaultY:(double)arg2 toAlignedY:(double)arg3 forCenter:(BOOL)arg4;
- (id)feedbackTokenForLayoutGuideGenerator:(IBLayoutGuideGenerator *)arg1 ifShouldSnapDefaultX:(double)arg2 toAlignedX:(double)arg3 forCenter:(BOOL)arg4;
@end

