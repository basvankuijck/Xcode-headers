//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapConfig.h>

@class NSString;

@interface DTActivityTraceTapConfig : DTTapConfig
{
    CDUnknownBlockType _memoHandler;
}

@property(copy, nonatomic) CDUnknownBlockType memoHandler; // @synthesize memoHandler=_memoHandler;
- (void).cxx_destruct;
@property(nonatomic) BOOL onlySignposts;
@property(copy, nonatomic) NSString *predicateString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

