//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEExtensionManager : NSObject
{
}

+ (id)permanentlyEnabledExtensionIdentifiers;
+ (id)sharedExtensionManager;
+ (void)initialize;
- (BOOL)checkWhetherExtension:(id)arg1 matchesCodeSigningRequirements:(struct __SecRequirement *)arg2 error:(id *)arg3;
- (id)startSearchingForExtensionsOfExtensionPoint:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)endMatchingExtensions:(id)arg1;
- (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_minimumVersionForExtension:(id)arg1;
- (id)_attributesForMatchingWithExtensionPointIdentifier:(id)arg1;

@end

