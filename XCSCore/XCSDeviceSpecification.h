//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

#import <XCSCore/NSCopying-Protocol.h>

@class NSArray, NSPredicate;

@interface XCSDeviceSpecification : XCSObject <NSCopying>
{
}

@property(readonly) NSPredicate *predicate;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_validateFilters:(id)arg1 deviceIdentifiers:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithFilters:(id)arg1 deviceIdentifiers:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) NSArray *deviceIdentifiers; // @dynamic deviceIdentifiers;
@property(retain, nonatomic) NSArray *filters; // @dynamic filters;

@end

