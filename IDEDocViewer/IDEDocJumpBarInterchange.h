//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEDocViewer/DVTInvalidation-Protocol.h>
#import <IDEDocViewer/NSPathControlDelegate-Protocol.h>

@class DVTStackBacktrace, IDEPathControl, NSString;
@protocol IDEDocJumpBarInterchangeDelegate;

@interface IDEDocJumpBarInterchange : NSObject <DVTInvalidation, NSPathControlDelegate>
{
    IDEPathControl *_pathControl;
    id <IDEDocJumpBarInterchangeDelegate> _delegate;
}

+ (void)initialize;
+ (id)makeInterchangeWithDelegate:(id)arg1;
@property(readonly, nonatomic) id <IDEDocJumpBarInterchangeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showDocumentItemsMenu:(id)arg1;
- (BOOL)hasSelection;
- (void)updateWithURLString:(id)arg1;
- (void)takeoverPathControl:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

