//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBOSVersion.h>

@interface IBCocoaTouchOSVersion : IBOSVersion
{
}

+ (id)osVersionWithArchiveIdentifier:(id)arg1;
+ (id)iOS6AndEarlierVersion;
+ (id)iOS7XVersion;
+ (id)iOS8AndLaterVersion;
+ (id)iOS9_1AndLaterVersion;
+ (id)iOS11AndLaterVersion;
+ (Class)instanceScopingClass;
+ (id)designatedVersionForUserInterfaceEra:(long long)arg1;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (id)displayNameForUserInterfaceStyle;
- (long long)userInterfaceEra;
- (void)didRegisterSharedInstance;

@end

