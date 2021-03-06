//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTStackView_ML.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEToy, IDEToybox, NSDate, NSMutableArray, NSString;
@protocol IDEToyboxStackViewDelegate;

@interface IDEToyboxStackView : DVTStackView_ML <DVTInvalidation>
{
    DVTObservingToken *_toysObservingToken;
    NSMutableArray *_toyHostingViewControllers;
    struct {
        unsigned int shouldChangeResultDisplayDate:1;
    } _delegateRespondsTo;
    IDEToybox *_toybox;
    id <IDEToyboxStackViewDelegate> _delegate;
    NSDate *_resultDisplayDate;
    IDEToy *_selectedToy;
}

+ (void)initialize;
@property(readonly) IDEToy *selectedToy; // @synthesize selectedToy=_selectedToy;
@property(copy, nonatomic) NSDate *resultDisplayDate; // @synthesize resultDisplayDate=_resultDisplayDate;
@property(retain, nonatomic) id <IDEToyboxStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEToybox *toybox; // @synthesize toybox=_toybox;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)selectToy:(id)arg1;
- (void)scrollToyToVisible:(id)arg1;
- (void)updateResultDisplayDate:(id)arg1;
- (void)reloadData;
- (void)preflightDelegateRespondsToSelectorChecks;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

