//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableSet, NSOperationQueue;

@interface IDEProductImageStore : NSObject
{
    NSCache *_productIdentifierToProductImage;
    NSMutableSet *_currentImageProcessingSet;
    NSOperationQueue *_productImageQueue;
}

+ (id)defaultStore;
@property(retain) NSOperationQueue *productImageQueue; // @synthesize productImageQueue=_productImageQueue;
@property(retain) NSMutableSet *currentImageProcessingSet; // @synthesize currentImageProcessingSet=_currentImageProcessingSet;
@property(retain) NSCache *productIdentifierToProductImage; // @synthesize productIdentifierToProductImage=_productIdentifierToProductImage;
- (void).cxx_destruct;
- (void)addProductImage:(id)arg1;
- (BOOL)containsImageURL:(id)arg1 productIdentifier:(id)arg2;
- (void)stoppedProcessingImageForProductIdentifier:(id)arg1;
- (void)startedProcessingImageForProductIdentifier:(id)arg1;

@end

