//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStackView_ML.h>

@class IDESourceCodePlaygroundSectionViewController, NSMapTable;

@interface IDEPlaygroundEditorStackView_ML : DVTStackView_ML
{
    IDESourceCodePlaygroundSectionViewController *_sourceCodePlaygroundSectionViewController;
    NSMapTable *_playgroundTextViewPreparedRectObservers;
}

- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (id)findSubviewOfClass:(Class)arg1 inViewHierarchy:(id)arg2;
- (void)recursivelyPrepareContentInRect:(struct CGRect)arg1 view:(id)arg2;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

