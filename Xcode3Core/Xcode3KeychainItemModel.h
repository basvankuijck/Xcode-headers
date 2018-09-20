//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSArray;

@interface Xcode3KeychainItemModel : IDEProjectItemModel
{
    NSArray *_keychainAccessGroups;
}

@property(copy, nonatomic) NSArray *keychainAccessGroups; // @synthesize keychainAccessGroups=_keychainAccessGroups;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (id)defaultKeychainAccessGroups;
- (id)defaultKeychainAccessGroup;
- (void)_setKeychainAccessGroups:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)targetCoordinatorsChanged:(id)arg1;
- (void)readValuesFromEntitlements;
- (void)primitiveInvalidate;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end
