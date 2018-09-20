//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInstrumentsService/IDEAnalysisToolServiceExecutable-Protocol.h>

@class DVTFilePath, NSString;

@interface XRXcodeAnalysisToolServiceExecutable : NSObject <IDEAnalysisToolServiceExecutable>
{
    BOOL _allowForDebugging;
    NSString *_name;
    DVTFilePath *_path;
    CDUnknownBlockType _commandLineArgEntriesConfiguration;
}

@property(copy, nonatomic) CDUnknownBlockType commandLineArgEntriesConfiguration; // @synthesize commandLineArgEntriesConfiguration=_commandLineArgEntriesConfiguration;
@property BOOL allowForDebugging; // @synthesize allowForDebugging=_allowForDebugging;
@property(retain, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithExecutableName:(id)arg1 executablePath:(id)arg2 allowForDebugging:(BOOL)arg3 argEntriesConfiguration:(CDUnknownBlockType)arg4;

@end

