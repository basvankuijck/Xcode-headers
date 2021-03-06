//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTStateToken, IDEDMEditorController, NSMutableArray, NSString;

@interface IDEDMSubViewControllerStateManager : NSObject <DVTInvalidation>
{
    NSMutableArray *_stateIdentifiers;
    IDEDMEditorController *_parent;
    DVTStateToken *_token;
}

+ (void)initialize;
@property(retain) DVTStateToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initWithToken:(id)arg1 parent:(id)arg2;
- (void)_setupStateToken;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

