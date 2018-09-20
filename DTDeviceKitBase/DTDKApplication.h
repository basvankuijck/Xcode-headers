//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKApplicationItemBase.h>

@class NSDictionary, NSString;
@protocol DTDKRemoteDeviceToken;

@interface DTDKApplication : DTDKApplicationItemBase
{
    struct __AFCConnection *_connection;
    unsigned int _useAggregateItem:1;
    unsigned long long _connection_rc;
    NSDictionary *_plist;
    id <DTDKRemoteDeviceToken> deviceData;
}

+ (id)keyPathsForValuesAffectingInstalledPath;
+ (id)keyPathsForValuesAffectingIsFairPlayEncrypted;
+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)keyPathsForValuesAffectingDevicePath;
+ (id)keyPathsForValuesAffectingName;
+ (id)applicationWithPropertiesFromApplication:(id)arg1;
+ (id)applicationWithDeviceData:(id)arg1 andPlist:(id)arg2;
+ (id)keyPathsForValuesAffectingPropertyListRepresentation;
@property(readonly) struct __AFCConnection *connection; // @synthesize connection=_connection;
@property __weak id <DTDKRemoteDeviceToken> deviceData; // @synthesize deviceData;
@property(copy) NSDictionary *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)processAFCOperation:(struct __AFCOperation *)arg1 error:(id *)arg2;
- (void)_notifyApplicationDataDidChange;
- (_Bool)uploadFile:(id)arg1 syncRecords:(id)arg2 resultingSyncRecords:(id)arg3 error:(id *)arg4;
- (_Bool)uploadFile:(id)arg1 error:(id *)arg2;
- (void)refresh;
@property _Bool useAggregateItem;
@property(readonly, copy) NSString *installedPath;
- (_Bool)isLeaf;
- (_Bool)isFairPlayEncrypted;
- (id)identifier;
@property(readonly) NSString *executableName;
- (id)devicePath;
- (id)name;
- (id)deviceIdentifier;
- (id)application;
- (id)_withConnection:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL isHidden;
- (id)bundlePath;
- (id)minimumOSVersion;
- (id)executableVersion;
- (id)bundleIdentifier;
@property(readonly, copy) NSDictionary *propertyListRepresentation;
- (id)description;

@end

