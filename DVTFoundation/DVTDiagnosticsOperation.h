//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

@class DVTDiagnosticsCollector, DVTFilePath, NSString;

@interface DVTDiagnosticsOperation : DVTOperation
{
    BOOL _forceSaveToSharedDirectory;
    DVTDiagnosticsCollector *_collector;
    DVTFilePath *_path;
    DVTFilePath *_outputFilePath;
    NSString *_outputFilename;
}

@property(copy, nonatomic) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property(copy, nonatomic) DVTFilePath *outputFilePath; // @synthesize outputFilePath=_outputFilePath;
@property(nonatomic) BOOL forceSaveToSharedDirectory; // @synthesize forceSaveToSharedDirectory=_forceSaveToSharedDirectory;
@property(copy, nonatomic) DVTFilePath *path; // @synthesize path=_path;
@property(retain, nonatomic) DVTDiagnosticsCollector *collector; // @synthesize collector=_collector;
- (void).cxx_destruct;
- (void)start;
- (id)initWithCollector:(id)arg1;

@end

