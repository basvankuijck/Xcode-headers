//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface XCSUIDirectoryServicesUser : NSObject
{
    BOOL _administrator;
    BOOL _group;
    NSString *_fullName;
    NSString *_accountName;
    NSString *_externalID;
    NSImage *_image;
}

+ (id)temporaryUser;
@property(nonatomic, getter=isGroup) BOOL group; // @synthesize group=_group;
@property(nonatomic, getter=isAdministrator) BOOL administrator; // @synthesize administrator=_administrator;
@property(copy, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
