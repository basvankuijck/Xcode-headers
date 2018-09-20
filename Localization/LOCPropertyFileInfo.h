//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Localization/LOCProperty.h>

@class NSDictionary;

@interface LOCPropertyFileInfo : LOCProperty
{
    NSDictionary *posixAttributes;
    NSDictionary *moreAttributes;
}

@property(retain) NSDictionary *moreAttributes; // @synthesize moreAttributes;
@property(retain) NSDictionary *posixAttributes; // @synthesize posixAttributes;
- (void).cxx_destruct;
- (id)posixPermissionsStringFromIntValue:(id)arg1;
- (id)osTypeStringFromIntValue:(id)arg1;
- (id)allAttributeKeyValuePairsForDiff;
- (id)obtainMoreAttributes;
- (id)obtainPosixAttributes;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;

@end
