//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSStoryboardAbstractTriggeredSegue.h>

@interface IBNSStoryboardPopoverSegue : IBNSStoryboardAbstractTriggeredSegue
{
    id _anchorView;
    long long _popoverBehavior;
    unsigned long long _preferredEdge;
}

+ (BOOL)isObjectValidDestination:(id)arg1;
+ (BOOL)isObjectValidSource:(id)arg1;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)classIdentifier;
@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(nonatomic) long long popoverBehavior; // @synthesize popoverBehavior=_popoverBehavior;
@property(retain, nonatomic) id anchorView; // @synthesize anchorView=_anchorView;
- (void).cxx_destruct;
- (id)ibInspectedAnchorViewCandidateFilterPredicate;
- (id)instantiateSegueTemplate;
- (void)copyInstanceStateToClone:(id)arg1 withContext:(id)arg2;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)badgeImage;
- (id)initWithSource:(id)arg1 label:(id)arg2 destination:(id)arg3;

@end

