//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionItem, IDEDistributionMethod, IDEEntitlementsDictionary;

@interface IDEEntitlementsProcessor : NSObject
{
    IDEDistributionMethod *_distributionMethod;
    IDEDistributionItem *_distributionItem;
    IDEEntitlementsDictionary *_itemEntitlements;
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
@property(readonly, nonatomic) IDEEntitlementsDictionary *itemEntitlements; // @synthesize itemEntitlements=_itemEntitlements;
@property(readonly, nonatomic) IDEDistributionItem *distributionItem; // @synthesize distributionItem=_distributionItem;
@property(readonly, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
- (void).cxx_destruct;
- (BOOL)runWithError:(id *)arg1;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL needsInteraction;
- (id)initWithDistributionMethod:(id)arg1 distributionItem:(id)arg2 itemEntitlements:(id)arg3;
- (id)init;

@end

