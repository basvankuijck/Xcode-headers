//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBStoryboardDocument.h>

@class NSColor;

@interface IBStoryboardDocument (IBDocumentCocoaTouchIntegration)
+ (id)keyPathsForValuesAffectingGlobalTintColor;
+ (id)keyPathsForValuesAffectingCocoaTouchPlatformAdapter;
+ (int)libraryInclusionStatusForWindow;
+ (int)libraryInclusionStatusForProxyObject;
- (void)unarchiveCocoaTouchDataWithDocumentUnarchiver:(id)arg1;
- (void)archiveCocoaTouchDataWithDocumentArchiver:(id)arg1;
@property(copy, nonatomic) NSColor *globalTintColor;
- (id)cocoaTouchPlatformAdapter;
- (id)viewControllerRepresentativeForObject:(id)arg1;
- (void)giveGlobalTintColorToInheritingViews;
- (BOOL)isNonExistentAtRuntimePlaceholder:(id)arg1;
@end

