//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@protocol IDEFlightChecking;

@interface Xcode3HotspotConfigurationItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _linkedFrameworksFlightCheck;
    id <IDEFlightChecking> _entitlementsFlightCheck;
}

@property(retain, nonatomic) id <IDEFlightChecking> entitlementsFlightCheck; // @synthesize entitlementsFlightCheck=_entitlementsFlightCheck;
@property(retain, nonatomic) id <IDEFlightChecking> linkedFrameworksFlightCheck; // @synthesize linkedFrameworksFlightCheck=_linkedFrameworksFlightCheck;
- (void).cxx_destruct;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;

@end

