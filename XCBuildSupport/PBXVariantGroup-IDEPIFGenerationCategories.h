//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXVariantGroup.h>

#import <XCBuildSupport/IDEPIFGenerating-Protocol.h>

@class IDEPIFGUID, NSString;

@interface PBXVariantGroup (IDEPIFGenerationCategories) <IDEPIFGenerating>
- (id)pifRepresentation:(id)arg1;
- (id)typeForPIFRepresentation;

// Remaining properties
@property(readonly) IDEPIFGUID *PIFGUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

