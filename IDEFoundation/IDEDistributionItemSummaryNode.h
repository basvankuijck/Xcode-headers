//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTProvisioningProfile, IDEArchivedInAppContent, IDEDistributionContext, IDEDistributionItem, NSArray, NSDictionary, NSString;

@interface IDEDistributionItemSummaryNode : NSObject
{
    IDEDistributionContext *_context;
    NSArray *_childNodes;
    NSDictionary *_summary;
    IDEDistributionItem *_item;
    IDEArchivedInAppContent *_inAppContent;
    DVTProvisioningProfile *_profile;
}

+ (id)summaryForNode:(id)arg1;
+ (id)childNodesForItems:(id)arg1 context:(id)arg2 logAspect:(id)arg3;
+ (id)rootNodeWithTopLevelItems:(id)arg1 context:(id)arg2 logAspect:(id)arg3;
+ (id)nodeWithInAppContent:(id)arg1 context:(id)arg2 logAspect:(id)arg3;
+ (id)nodeWithItem:(id)arg1 context:(id)arg2 logAspect:(id)arg3;
@property(readonly, nonatomic) DVTProvisioningProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) IDEArchivedInAppContent *inAppContent; // @synthesize inAppContent=_inAppContent;
@property(readonly, nonatomic) IDEDistributionItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) NSDictionary *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
@property(readonly) IDEDistributionContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL appStoreBound;
@property(readonly, nonatomic) NSString *name;

@end

