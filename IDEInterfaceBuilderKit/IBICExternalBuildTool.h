//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICExternalBuildTool : NSObject
{
    NSString *_executablePath;
    BOOL _attemptedToFindExecutable;
    NSString *_platformIdentifier;
}

@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (void).cxx_destruct;
- (BOOL)processContentAtPath:(id)arg1 outputPath:(id)arg2 error:(id *)arg3;
- (id)errorForInputFile:(id)arg1 codeType:(id)arg2 code:(long long)arg3 standardError:(id)arg4 standardOutput:(id)arg5;
- (id)taskForProcessingContentAtPath:(id)arg1 withOutputPath:(id)arg2 error:(id *)arg3;
- (id)pathForPlatformToolReturningDiagnostics:(id *)arg1;
- (id)toolName;
- (id)initWithPlatformIdentifier:(id)arg1;

@end

