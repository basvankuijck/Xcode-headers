//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/NSRuleEditorDelegate-Protocol.h>

@class NSString;

@interface IBPredicateEditorDesignDelegate : NSObject <NSRuleEditorDelegate>
{
}

+ (id)sharedInstance;
- (void)createInitialRowsForPredicateEditor:(id)arg1;
- (void)ruleEditorRowsDidChange:(id)arg1;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
- (void)syncRowTemplatesUpToPredicateEditor:(id)arg1;
- (void)respondToEditorChanges:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
