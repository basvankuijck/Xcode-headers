//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@class DVTFilePath, NSString;

@interface IDEDistributionUploadStep : IDEDistributionStep
{
    CDUnknownBlockType _uploadWillBeginCallback;
    CDUnknownBlockType _updateUploadPercentageCallback;
    CDUnknownBlockType _updateUploadMessageCallback;
    double _progress;
    NSString *_message;
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
@property(copy) NSString *message; // @synthesize message=_message;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateUploadMessageCallback; // @synthesize updateUploadMessageCallback=_updateUploadMessageCallback;
@property(copy, nonatomic) CDUnknownBlockType updateUploadPercentageCallback; // @synthesize updateUploadPercentageCallback=_updateUploadPercentageCallback;
@property(copy, nonatomic) CDUnknownBlockType uploadWillBeginCallback; // @synthesize uploadWillBeginCallback=_uploadWillBeginCallback;
- (void).cxx_destruct;
- (id)archiveSubmissionInfoWithIdentifier:(id)arg1 issues:(id)arg2;
- (long long)destination;
- (void)uploadWithDeviceToken:(id)arg1;
@property(readonly, nonatomic) DVTFilePath *uploadFilePath;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end

