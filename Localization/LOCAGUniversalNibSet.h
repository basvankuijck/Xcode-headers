//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localization/LOCAGLocSet.h>

@class NSString;

@interface LOCAGUniversalNibSet : LOCAGLocSet
{
    NSString *_sourceLprojPathInNewBase;
    NSString *_targetLprojPathInNewLoc;
    NSString *_sourceLprojPathInOldBase;
    NSString *_targetLprojPathInOldLoc;
    NSString *_baseLprojPathInNewBase;
    NSString *_baseLprojPathInNewLoc;
    NSString *_baseLprojPathInOldBase;
    NSString *_baseLprojPathInOldLoc;
}

@property(retain) NSString *baseLprojPathInOldLoc; // @synthesize baseLprojPathInOldLoc=_baseLprojPathInOldLoc;
@property(retain) NSString *baseLprojPathInOldBase; // @synthesize baseLprojPathInOldBase=_baseLprojPathInOldBase;
@property(retain) NSString *baseLprojPathInNewLoc; // @synthesize baseLprojPathInNewLoc=_baseLprojPathInNewLoc;
@property(retain) NSString *baseLprojPathInNewBase; // @synthesize baseLprojPathInNewBase=_baseLprojPathInNewBase;
@property(retain) NSString *targetLprojPathInOldLoc; // @synthesize targetLprojPathInOldLoc=_targetLprojPathInOldLoc;
@property(retain) NSString *sourceLprojPathInOldBase; // @synthesize sourceLprojPathInOldBase=_sourceLprojPathInOldBase;
@property(retain) NSString *targetLprojPathInNewLoc; // @synthesize targetLprojPathInNewLoc=_targetLprojPathInNewLoc;
@property(retain) NSString *sourceLprojPathInNewBase; // @synthesize sourceLprojPathInNewBase=_sourceLprojPathInNewBase;
- (void).cxx_destruct;
- (id)description;
- (void)copyNibAtPath:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (void)createUniversalNibStringsAtPath:(id)arg1 fromNibPath:(id)arg2 object:(id)arg3;
- (void)preprocessUniversalNibWithObject:(id)arg1;

@end

