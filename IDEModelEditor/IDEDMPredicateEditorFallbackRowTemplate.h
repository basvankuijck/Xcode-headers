//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class DVTPredicateTextField, NSPopUpButton;

@interface IDEDMPredicateEditorFallbackRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_popUpButton;
    DVTPredicateTextField *_predicateTextField;
}

+ (id)rowTemplate;
- (void).cxx_destruct;
- (void)setPredicate:(id)arg1;
- (id)templateViews;
- (id)predicateTextField;
- (id)popUpButton;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;

@end

