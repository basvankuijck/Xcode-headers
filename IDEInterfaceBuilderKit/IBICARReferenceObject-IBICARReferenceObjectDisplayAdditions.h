//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICARReferenceObject.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionChild-Protocol.h>

@class NSString;

@interface IBICARReferenceObject (IBICARReferenceObjectDisplayAdditions) <IBICAbstractCollectionChild>
+ (id)itemsFromOverlayOrnament:(id)arg1;
+ (id)arReferenceObjectPaths:(id)arg1;
+ (id)synthesizeItemsFromLoosePaths:(id)arg1 claimingPaths:(id *)arg2;
+ (id)referenceObjectsFromPaths:(id)arg1;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (id)synthesizeAncestorsIfNeededToAllowHostingInContainer:(id)arg1;
- (BOOL)validateAndImportAR3DObjectFileAtPath:(id)arg1;
- (id)overviewCapsuleSpecification;
- (id)icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

