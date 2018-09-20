//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IDEMediaLibraryController, IDEMediaResourceVariantContext, IDEMediaResourceVariantSet, NSArray, NSDictionary, NSPasteboard;

@protocol IDEMediaLibraryDelegate <NSObject>

@optional
@property(readonly) NSDictionary *variantForResolvingMediaResources;
@property(readonly) IDEMediaResourceVariantContext *variantContextForMediaLibrary;
- (NSDictionary *)mediaLibraryController:(IDEMediaLibraryController *)arg1 dragImagesByStateIdentifierForMediaResourceVariantSet:(IDEMediaResourceVariantSet *)arg2;
- (void)mediaLibraryController:(IDEMediaLibraryController *)arg1 populatePasteboard:(NSPasteboard *)arg2 withMediaResourceVariantSets:(NSArray *)arg3;
- (BOOL)mediaLibraryController:(IDEMediaLibraryController *)arg1 variantSetIsSystemProvided:(IDEMediaResourceVariantSet *)arg2;
@end

