//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString;

@interface XCSChangedString : XCSObject
{
}

- (BOOL)_validateBefore:(id)arg1 after:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithBefore:(id)arg1 after:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *after; // @dynamic after;
@property(copy, nonatomic) NSString *before; // @dynamic before;

@end

