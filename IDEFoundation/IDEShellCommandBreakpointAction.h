//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEShellCommandBreakpointAction : IDEBreakpointAction
{
    BOOL _waitUntilDone;
    NSString *_command;
    NSString *_arguments;
}

+ (id)propertiesAffectingPersistenceState;
@property BOOL waitUntilDone; // @synthesize waitUntilDone=_waitUntilDone;
@property(copy, nonatomic) NSString *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)setWaitUntilDoneFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setArgumentsFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCommandFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)_stringForFileHandleData:(id)arg1;
- (id)_taskWithLaunchPath:(id)arg1 arguments:(id)arg2 consoleAdaptor:(id)arg3;
- (id)_errorMessageForShellCommandValidity:(int)arg1 shellCommand:(id)arg2;
- (int)_commandValidity:(id)arg1;
- (id)_fullPathOfCommand:(int *)arg1;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (id)_argumentsArrayForBreakpoint:(id)arg1;
- (void)_extractExpressionsAndMacrosFromCommandAndArguments;
- (void)_shellCommandActionCommonInit;
- (id)init;

@end

