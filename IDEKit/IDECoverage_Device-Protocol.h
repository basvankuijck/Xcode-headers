//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDECoverage_Base-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class NSString;

@protocol IDECoverage_Device <NSObject, IDECoverage_Base>
@property(readonly, nonatomic) BOOL ide_coverage_isSimulator;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_name;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_osVersion;
@property(readonly, copy, nonatomic) NSString *ide_coverage_device_modelName;
@property(readonly, copy, nonatomic) NSString *ide_coverage_deviceID;
@property(readonly, copy, nonatomic) NSString *ide_coverage_UTI;
@end

