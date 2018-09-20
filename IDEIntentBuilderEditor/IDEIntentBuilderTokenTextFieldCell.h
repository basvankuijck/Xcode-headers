//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderTokenTextViewDataSource-Protocol.h>

@class IDEIntentBuilderTokenTextView, NSString;
@protocol IDEIntentBuilderTokenTextFieldCellDataSource;

@interface IDEIntentBuilderTokenTextFieldCell : NSTextFieldCell <IDEIntentBuilderTokenTextViewDataSource>
{
    IDEIntentBuilderTokenTextView *_textView;
    id <IDEIntentBuilderTokenTextFieldCellDataSource> _dataSource;
}

@property __weak id <IDEIntentBuilderTokenTextFieldCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)availableTokensForTextView:(id)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (id)fieldEditorForView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

