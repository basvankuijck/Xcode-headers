//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBPlatformToolRequestProcessor-Protocol.h>

@class NSString;

@interface IBAutolayoutStatusRequestProcessor : NSObject <IBPlatformToolRequestProcessor>
{
}

- (id)toolDescriptionForProcessingRequestsWithTargetRuntime:(id)arg1 role:(long long)arg2 deviceTypeDescription:(id)arg3;
- (id)resultsAfterFailingToLaunchPlatformToolWithResult:(id)arg1 forRequests:(id)arg2;
- (id)performRequestOnBackgroundThreadWithData:(id)arg1 diagnosticsBlock:(CDUnknownBlockType)arg2 platformTool:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

