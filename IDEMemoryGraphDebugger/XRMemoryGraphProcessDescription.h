//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface XRMemoryGraphProcessDescription : NSObject
{
    BOOL _hasHardwareModel;
    BOOL _hasAnalysisTool;
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    NSString *_processName;
    NSString *_processIdentifier;
    NSString *_processVersion;
    NSString *_processArchitecture;
    NSString *_processUptime;
    NSString *_hardwareModel;
    NSString *_osVersion;
    NSString *_analysisTool;
    NSString *_captureDateDescription;
    NSString *_footprint;
    NSString *_peakFootprint;
    NSDate *_captureDate;
}

@property(retain, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) BOOL hasAnalysisTool; // @synthesize hasAnalysisTool=_hasAnalysisTool;
@property(nonatomic) BOOL hasHardwareModel; // @synthesize hasHardwareModel=_hasHardwareModel;
@property(retain, nonatomic) NSString *peakFootprint; // @synthesize peakFootprint=_peakFootprint;
@property(retain, nonatomic) NSString *footprint; // @synthesize footprint=_footprint;
@property(nonatomic) unsigned int edgeCount; // @synthesize edgeCount=_edgeCount;
@property(nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
@property(retain, nonatomic) NSString *captureDateDescription; // @synthesize captureDateDescription=_captureDateDescription;
@property(retain, nonatomic) NSString *analysisTool; // @synthesize analysisTool=_analysisTool;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(retain, nonatomic) NSString *processUptime; // @synthesize processUptime=_processUptime;
@property(retain, nonatomic) NSString *processArchitecture; // @synthesize processArchitecture=_processArchitecture;
@property(retain, nonatomic) NSString *processVersion; // @synthesize processVersion=_processVersion;
@property(retain, nonatomic) NSString *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;
- (id)leaksDateFormatter;
- (void)parseProcessDescriptionString:(id)arg1;
- (id)initFromProcessDescriptionString:(id)arg1 nodeCount:(unsigned int)arg2 edgeCount:(unsigned int)arg3;

@end

