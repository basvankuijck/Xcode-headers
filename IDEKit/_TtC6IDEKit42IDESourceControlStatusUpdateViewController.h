//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSArray, NSString;
@protocol IDEOperationViewDelegate;

@interface _TtC6IDEKit42IDESourceControlStatusUpdateViewController : DVTViewController
{
    // Error parsing type: , name: workspace
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workingCopies
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tearDownAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) BOOL showIcon;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, copy) id context;
@property(nonatomic, copy) NSArray *workingCopies; // @synthesize workingCopies;
@property(nonatomic) __weak id <IDEOperationViewDelegate> delegate; // @synthesize delegate;

@end

