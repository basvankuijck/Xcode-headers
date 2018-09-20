//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEGroup, NSDictionary, NSString;
@protocol IDELocalizedGroup;

@interface IDENotifyingLocalizedGroup : NSObject <DVTInvalidation>
{
    IDEGroup<IDELocalizedGroup> *_group;
    NSDictionary *_variantFileReferences;
    DVTObservingToken *_subitemsObservationToken;
    DVTObservingToken *_resolvedFilePathObservationToken;
}

+ (id)keyPathsForValuesAffectingAvailableLanguages;
+ (id)keyPathsForValuesAffectingDevelopmentFileReference;
+ (id)keyPathsForValuesAffectingBaseFileReference;
+ (void)initialize;
- (void).cxx_destruct;
- (id)availableLanguagesForFileReferencesConformingToType:(id)arg1;
- (id)availableLanguages;
- (id)targetLanguages;
- (id)developmentLanguage;
- (id)fileReferenceForLanguage:(id)arg1;
- (id)developmentFileReference;
- (id)baseFileReference;
- (id)group;
- (void)primitiveInvalidate;
- (void)_update;
- (id)initWithLocalizedGroup:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

