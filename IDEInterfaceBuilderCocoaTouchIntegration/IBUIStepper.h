//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUIStepper : IBUIControl <IBDocumentArchiving>
{
    BOOL _continuous;
    BOOL _autorepeat;
    BOOL _wraps;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _stepValue;
}

+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIbInspectedStepValue;
+ (id)keyPathsForValuesAffectingIbInspectedMaximumValue;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumValue;
+ (id)keyPathsForValuesAffectingIbInspectedValue;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) BOOL wraps; // @synthesize wraps=_wraps;
@property BOOL autorepeat; // @synthesize autorepeat=_autorepeat;
@property BOOL continuous; // @synthesize continuous=_continuous;
- (void)willChangeTargetRuntimeInDocument:(id)arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (void)setIbInspectedStepValue:(double)arg1;
- (double)ibInspectedStepValue;
- (void)setIbInspectedMaximumValue:(double)arg1;
- (double)ibInspectedMaximumValue;
- (void)setIbInspectedMinimumValue:(double)arg1;
- (double)ibInspectedMinimumValue;
- (void)setIbInspectedValue:(double)arg1;
- (double)ibInspectedValue;
- (unsigned long long)ibPreferredActionEventType;
- (id)ibWidgetType;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

