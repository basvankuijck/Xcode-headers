//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlRevision, NSArray, NSString;

@interface DVTSourceControlLogItemFile : NSObject <NSSecureCoding>
{
    NSString *_filePath;
    DVTSourceControlRevision *_revision;
    NSString *_previousFilePath;
    NSArray *_parents;
    unsigned long long _status;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray *parents; // @synthesize parents=_parents;
@property(retain, nonatomic) NSString *previousFilePath; // @synthesize previousFilePath=_previousFilePath;
@property(retain, nonatomic) DVTSourceControlRevision *revision; // @synthesize revision=_revision;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *fileName;
@property(readonly, nonatomic) NSString *previousFileName;
- (id)initWithFilePath:(id)arg1 previousFilePath:(id)arg2 revision:(id)arg3 status:(unsigned long long)arg4;
- (id)initWithFilePath:(id)arg1 revision:(id)arg2 status:(unsigned long long)arg3;

@end

