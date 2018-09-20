//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView;
@protocol IDEProductsInspectable;

@interface IDEProductsUtilityPane : IDEViewController
{
    BOOL _hidden;
    BOOL _hideBottomBorder;
    DVTBorderedView *_borderedView;
    id <IDEProductsInspectable> _inspectable;
}

@property BOOL hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(readonly) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly) id <IDEProductsInspectable> inspectable; // @synthesize inspectable=_inspectable;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithInspectable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initUsingDefaultNib;

@end

