//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/DVTInvalidation-Protocol.h>

@class DVTSourceExpression, DVTStackBacktrace, NSString;

@interface IDESourceCodeHelpNavigationRequest : NSObject <DVTInvalidation>
{
    DVTSourceExpression *_sourceExpression;
    unsigned long long _clickCount;
}

+ (void)initialize;
@property(readonly) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(readonly) DVTSourceExpression *sourceExpression; // @synthesize sourceExpression=_sourceExpression;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithSourceExpression:(id)arg1 clickCount:(unsigned long long)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

