//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface DVTCommandLineTool : NSObject
{
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    BOOL _shouldExit;
    int _exitStatus;
}

@property int exitStatus; // @synthesize exitStatus=_exitStatus;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)main;
- (void)parseOptions;
- (void)start;
- (void)_ignoreSignals;
- (void)_installUncaughtExceptionHandler;
- (id)init;

@end

