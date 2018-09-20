//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEPlaygroundEditor/NSObject-Protocol.h>

@class DVTFileDataType, DVTFilePath;

@protocol DVTDiffTextFilter <NSObject>
+ (DVTFileDataType *)textFileDataTypeForInputFilePath:(DVTFilePath *)arg1;
+ (BOOL)pathRequiresFilter:(DVTFilePath *)arg1;

@optional
+ (DVTFilePath *)pathToKeyConflictResolutionFromInputFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
+ (DVTFilePath *)pathToTextFileFromInputFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
+ (BOOL)filterInputFilePath:(DVTFilePath *)arg1 toOutputFilePath:(DVTFilePath *)arg2 error:(id *)arg3;
@end

