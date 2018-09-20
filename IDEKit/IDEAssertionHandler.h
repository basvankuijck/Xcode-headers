//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTAssertionHandling-Protocol.h>

@class NSString;

@interface IDEAssertionHandler : NSObject <DVTAssertionHandling>
{
}

+ (void)_handleAssertionWithLogString:(id)arg1 assertionSignature:(id)arg2 assertionReason:(id)arg3 extraBacktrace:(id)arg4;
+ (void)_multipleAssertionsEncountered_WaitingForeverForAssertionAbort;
+ (id)defaultHandler;
+ (BOOL)_showPanelOnAssertions;
+ (BOOL)_quietAssertions;
+ (void)setupAssertionHandler;
- (void)handleUncaughtException:(id)arg1;
- (id)_kvoAssertionSignatureFromException:(id)arg1;
- (void)handleWarningInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 messageFormat:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleWarningInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 assertionSignature:(id)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 assertionSignature:(id)arg5 messageFormat:(id)arg6 arguments:(struct __va_list_tag [1])arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

